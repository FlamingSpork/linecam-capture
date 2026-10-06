// Include files to use the pylon API.
#include <pylon/PylonIncludes.h>

#include <iostream>
#include <fstream>
#include <cstdint>
#include <sys/stat.h>
#include <signal.h>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>
#include <thread>
#include <chrono>
#include <getopt.h>

#include "imgui/imgui.h"
#include "imgui/backends/imgui_impl_glfw.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include <GLFW/glfw3.h> // apt-get install libglfw3-dev libopengl-dev

#include "wiringPi.h" // https://github.com/WiringPi/WiringPi
#include "wiringPiI2C.h"
#include "SensorConstants.h"

// Settings to use any camera type.
#include "BaslerCamera.h"
#include "BaslerCameraArray.h"

using namespace Pylon;
using namespace Pylon::BaslerCameraCameraParams_Params;

bool capFlag = true;

using namespace std;

void handleSigint(int s) {
    capFlag = false;
}

struct accelData{
    float x;
    float y;
    float z;
}; // 3*4 bytes (float) = 12 bytes
// this depends on little endian, like on x64 and the samd21 chip

struct accelData latestAccel;

void getNextBytes(int fd, char* buf, size_t count) {
    for(size_t i = 0; i<count; i++) {
        read(fd, (void*)&buf[i], 1);
    }
}

bool sliceWrite(int fd, uint8_t addr, uint8_t bits, uint8_t shift, uint32_t data) {
    // ripped from Adafruit_BusIO_Register.cpp
    uint8_t val = wiringPiI2CReadReg8(fd, addr);
    uint32_t mask = (1 << (bits)) - 1;
    data &= mask;

    mask <<= shift;
    val &= ~mask;          // remove the current data at that spot
    val |= data << shift; // and add in the new data
    return wiringPiI2CWriteReg8(fd, addr, val);
}

int beginI2CAccel() {
    wiringPiSetupGpio();
    // /dev/i2c-i is board pins 3 (SDA) and 5 (SCL)
    // to work best, it needs to be set to maximum speed
    // echo "dtparam=i2c_arm=on,i2c_arm_baudrate=1000000" >> /boot/firmware/config.txt
    int fd = wiringPiI2CSetupInterface("/dev/i2c-1", 0x6a);

    // Adafruit_LSM6DSO32::_init
    uint8_t chipId = wiringPiI2CReadReg8(fd, LSM6DS_WHOAMI);
    if(chipId != LSM6DSO32_CHIP_ID) {
        cerr<< "chip id is: "<< chipId << " instead of "<< LSM6DSO32_CHIP_ID<<endl;
    }
    // soft reset
    sliceWrite(fd, LSM6DS_CTRL3_C, 1, 0, 1);
    // set block data update
    sliceWrite(fd, LSM6DSOX_CTRL3_C, 1, 6, 1);
    // disable i3c
    sliceWrite(fd, LSM6DSOX_CTRL9_XL, 1, 1, 1);

    // Adafruit_LSM6DS::_init
    // set accel data rate
    sliceWrite(fd, LSM6DS_CTRL1_XL, 4, 4, LSM6DS_RATE_6_66K_HZ);
    // set accel range
    sliceWrite(fd, LSM6DS_CTRL1_XL, 2, 2, LSM6DSO32_ACCEL_RANGE_4_G);
    // set gyro data rate
    sliceWrite(fd, LSM6DS_CTRL2_G, 4, 4, LSM6DS_RATE_104_HZ);
    // set gyro range
    sliceWrite(fd, LSM6DS_CTRL2_G, 4, 0, LSM6DS_GYRO_RANGE_125_DPS);

    return fd;
}

void handleI2CAccel(int fd, const string& outFileName) {
    ofstream outFile(outFileName);
    auto startTime = chrono::high_resolution_clock::now();
    auto lastTime = startTime;
    auto currentTime = chrono::high_resolution_clock::now();
    long micros = chrono::duration_cast<chrono::microseconds >(currentTime - startTime).count();
    int16_t data[3];
    float x, y, z;
    struct accelData d;
    while(capFlag) {
        wiringPiI2CReadBlockData(fd, LSM6DS_OUTX_L_A, reinterpret_cast<uint8_t *>(data), 6);
        x = data[0] * 4.0 / 32768.0;
        y = data[1] * 4.0 / 32768.0;
        z = data[2] * 4.0 / 32768.0;
        currentTime = chrono::high_resolution_clock::now();
        micros = chrono::duration_cast<chrono::microseconds >(currentTime - startTime).count();
        outFile<<"A"<<micros<<","<<x<<","<<y<<","<<z<<endl;
        //cout << "time: " << micros << " dt: " << chrono::duration_cast<chrono::microseconds >(currentTime - lastTime).count() << " x: " << x << " y: " << y << " z: " << z << endl;
        d.x = x;
        d.y = y;
        d.z = z;
        memcpy((void*)&latestAccel, (void*)&d, 12); // copy it to the shared variable to avoid potential weirdness with threads
        // despite this being the wire format for the old serial protocol, it's still reasonable for this purpose
        lastTime = currentTime;
    }
    outFile.close();
}

int writeString(int fd, string str) {
    return write(fd, str.c_str(), str.length());
}

int beginSerialGPS(const char* serialPort) {
    int fd = open(serialPort, O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0){
        cerr << "failed to open!" << endl;
        return -1;
    }

    struct termios tty;
    if(tcgetattr(fd, &tty) != 0) {
        cerr << "Error from tcgetattr: " << strerror(errno) << endl;
        return -1;
    }

    // gps wants 9600 baud, 8 data bits, no parity, one stop bit, no xon/xoff
    // time for some ancient C runes that I need to commune with the spirit of Bell Labs to understand
    cfsetospeed(&tty, B9600);
    cfsetispeed(&tty, B9600);

    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8; // 8 bit chars
    tty.c_iflag &= ~IGNBRK; // no break processing
    tty.c_lflag = 0; // no signaling chars, no echo, no canonical processing
    tty.c_oflag = 0; // no remapping or delays
    tty.c_cc[VMIN] = 0; // do not block on read
    tty.c_cc[VTIME] = 5; // 0.5s read timeout
    tty.c_iflag &= ~(IXON | IXOFF | IXANY); // no xon/xoff control
    tty.c_cflag |= (CLOCAL | CREAD); // ignore modem controls
    tty.c_cflag &= ~(PARENB | PARODD); // no parity
    tty.c_cflag &= ~CSTOPB; // one stop bit?????
    tty.c_cflag &= ~CRTSCTS;
    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        cerr << "Error from tcsetattr: "<< strerror(errno)<< endl;
        return -1;
    }
    cout <<"Flushing serial port, please wait..."<<endl;
    sleep(2); //required to make flush work, for some reason
    tcflush(fd,TCIOFLUSH);

    cout << "Port open???" << endl;
    writeString(fd, PMTK_SET_NMEA_OUTPUT_RMCONLY);
    writeString(fd, PMTK_SET_NMEA_UPDATE_5HZ);
    writeString(fd, PMTK_API_SET_FIX_CTL_5HZ);
    writeString(fd, PGCMD_NOANTENNA);
    return fd;
}

void handleSerialGPS(int fd, string outFileName) {
    ofstream outFile(outFileName);
    uint8_t temp[1];
    char strBuf[1024];
    int j = 0;

    tcflush(fd,TCIOFLUSH);

    while(capFlag) {
        read(fd, temp, sizeof(temp));
        strBuf[0] = (char)temp[0];
        j = 1;
        while(((char)temp[0] != '\n') && j < 256) {
            read(fd, temp, sizeof(temp));
            strBuf[j] = (char)temp[0];
            j++;
        }
        if(strBuf[0] == '$') {
            //cout << strBuf;
            outFile << strBuf << endl; // TODO: check if this litters the file with extraneous newlines
        }
        memset(strBuf, 0, sizeof(strBuf));
    }
    outFile.close();
}

void printHelp() {
    cout << "Usage: ./BaslerCameraSample [-g 200] [-e 250]"<<endl;
    cout << "\t-g: gain [200~800]"<<endl;
    cout << "\t-e: exposure [microseconds]"<<endl;
}

static void glfw_error_callback(int error, const char* description)
{
    fprintf(stderr, "GLFW Error %d: %s\n", error, description);
}

void zeroHistogram(float histogram[]) {
    for(int i=0; i<256; i++) {
        histogram[i] = 0.0f;
    }
}

/**
 * feed me a rgba texture
 */
bool LoadTextureFromMemory(const void* image_data, GLuint* out_texture, int width, int height)
{
    // Create a OpenGL texture identifier
    GLuint image_texture;
    glGenTextures(1, &image_texture);
    glBindTexture(GL_TEXTURE_2D, image_texture);

    // Setup filtering parameters for display
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_GENERATE_MIPMAP, GL_FALSE);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);

    // Upload pixels into texture
    glPixelStorei(GL_UNPACK_ROW_LENGTH, 0);
    // for some reason, this only works correctly with GL_RGBA
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, image_data);
    *out_texture = image_texture;

    return true;
}


int main(int argc, char* argv[])
{
    // The exit code of the sample application.
    int exitCode = 0;
    int c;
    int gain = 200;
    int expTime = 250;
    while((c=getopt(argc, argv, "?hg:e:")) != -1) {
        switch(c) {
            case '?':
            case 'h':
                printHelp();
                return 1;
            case 'g':
                gain = atoi(optarg);
                break;
            case 'e':
                expTime = atoi(optarg);
                break;
            default:
                cerr << "Failed to parse args!" << endl;
                return 1;
        }
    }

    // Before using any pylon methods, the pylon runtime must be initialized. 
    PylonInitialize();
    signal(SIGINT, handleSigint);

    int i2cFd = beginI2CAccel();
    int serialGPSfd = beginSerialGPS("/dev/ttyAMA0"); // UART0; board pins 8 (RXD), 10 (TXD)

    // we don't want to start the window until the serial port is ready so that it isn't sitting around blank

    glfwSetErrorCallback(glfw_error_callback);
    if (!glfwInit())
        return 1;

    // GL 3.0 + GLSL 130
    const char* glsl_version = "#version 130";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    //glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);  // 3.2+ only
    //glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);            // 3.0+ only

    // Create window with graphics context
    float main_scale = ImGui_ImplGlfw_GetContentScaleForMonitor(glfwGetPrimaryMonitor()); // Valid on GLFW 3.3+ only
    GLFWwindow* window = glfwCreateWindow((int)(1280 * main_scale), (int)(800 * main_scale), "Line Camera Capture", nullptr, nullptr);
    if (window == nullptr) {
        cerr<<"glfwCreateWindow() returned null!" << endl;
        return 1;
    }
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1); // Enable vsync
    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;     // Enable Keyboard Controls

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();

    // Setup scaling
    ImGuiStyle& style = ImGui::GetStyle();
    style.ScaleAllSizes(main_scale);        // Bake a fixed style scale. (until we have a solution for dynamic style scaling, changing this requires resetting Style + calling this again)
    style.FontScaleDpi = main_scale;        // Set initial font scale. (using io.ConfigDpiScaleFonts=true makes this unnecessary. We leave both here for documentation purpose)

    ImGui_ImplGlfw_InitForOpenGL(window, true);
    ImGui_ImplOpenGL3_Init(glsl_version);

    try
    {
        // Create an instant camera object with the first found camera device.
        BaslerCamera camera( CTlFactory::GetInstance().CreateFirstDevice());

        // Print the model name of the camera.
        cout << "Using device " << camera.GetDeviceInfo().GetModelName() << endl;
        
        // Open the camera for accessing the parameters.
        camera.Open();

        camera.ExposureTimeRaw.SetValue(expTime);
        camera.GainRaw.SetValue(gain);
        camera.Height.SetValue(256);
        camera.Width.TrySetToMaximum(); // get all the pixels!
        camera.TestImageSelector.SetValue(TestImageSelector_Off);

        bool color = false;

        if(camera.GetDeviceInfo().GetModelName() == "ruL2098-10gc") {
            camera.PixelFormat.SetValue(PixelFormat_RGB8Packed); // the other option is RGB8Planar, which makes processing much more annoying
            color = true;
        } else {
            camera.PixelFormat.SetValue(PixelFormat_Mono8);
        }

        int shutterSpeed = 1.0 / ((float)expTime / 1000000);

        // I hate how the least bad way to get and format a date and time is this mess
        time_t t = time(nullptr);
        auto tm = *localtime(&t);
        ostringstream oss;
        oss << put_time(&tm, "%m-%d_%H-%M");
        string outDir = "/home/pi/cap/" + oss.str();
        mkdir(outDir.c_str(), 0770);
        cout << "Created output dir " << outDir << endl;

        ofstream metaFile(outDir + "/meta.csv");
        metaFile << "key,value" << endl;
        metaFile << "camera.ModelName," << camera.GetDeviceInfo().GetModelName() << endl;
        metaFile << "camera.PixelFormat," << camera.PixelFormat.ToStringOrDefault("err!") << endl;
        metaFile << "camera.Width," << camera.Width.ToStringOrDefault("err!") << endl;
        metaFile << "camera.Height," << camera.Height.ToStringOrDefault("err!") << endl;
        metaFile << "camera.ExposureTimeRaw," << camera.ExposureTimeRaw.ToStringOrDefault("err!") << endl;
        metaFile << "camera.ExposureTimeAbs," << camera.ExposureTimeAbs.ToStringOrDefault("err!") << endl;
        metaFile << "camera.GainRaw," << camera.GainRaw.ToStringOrDefault("err!") << endl;
        metaFile << "serial.Protocol,i2c"<<endl;
        metaFile << "serial.OutputFormat,text"<<endl;
        metaFile << "serial.FloatSize,32"<<endl; // it's 8 if not specified
        metaFile << "serial.TimeUnit,microsecond"<<endl;

        fstream camFile;
        camFile.open(outDir+"/cam.data", ios::app | ios::binary); // GNU IMP will import raw images from .data files

        auto startTime = chrono::high_resolution_clock::now(); // microseconds counter; perhaps overkill
        thread accelThread(handleI2CAccel, i2cFd, outDir+"/serial.txt"); // to make the changes less breaking, keep the serial.txt name
        thread gpsThread(handleSerialGPS, serialGPSfd, outDir+"/gps.txt");

        camera.StartGrabbing();

        // This smart pointer will receive the grab result data.
        CGrabResultPtr ptrGrabResult;
        long lineCount = 0;
        int lastGain = gain;
        int maxGain = camera.GainRaw.GetMax(); // grayscale: 800 max, color: 500 max; gets rather upset if exceeded
        int directionSelection = 0;

        int rows = camera.Height.GetValue(); // 256
        int cols = camera.Width.GetValue(); // 2048
        float histogram[256]; // assumes 8 bit mono pixels!
        zeroHistogram(histogram);

        char *rgbaFrame = (char*)malloc(rows*cols*4);
        GLuint my_image_texture = 0;

        while (capFlag)
        {
            // Wait for an image and then retrieve it. A timeout of 5000 ms is used.
            camera.RetrieveResult( 5000, ptrGrabResult, TimeoutHandling_ThrowException);

            // Image grabbed successfully?
            if (ptrGrabResult->GrabSucceeded())
            {
                lineCount += ptrGrabResult->GetHeight();
                char *buf = (char*) ptrGrabResult->GetBuffer();
                camFile.write(buf, ptrGrabResult->GetBufferSize());
                cout << "Captured and wrote " << ptrGrabResult->GetBufferSize() << " bytes" << endl;
                zeroHistogram(histogram);

                if(color) {
                    // we need to rotate it and add an alpha channel of 0xff
                    int k = 0;
                    for (int i = cols; i > 0; i--) {
                        for (int j = 0; j < rows; j++) {
                            uint8_t r = buf[ (j * cols * 3) + (i * 3) + 0];
                            uint8_t g = buf[ (j * cols * 3) + (i * 3) + 1];
                            uint8_t b = buf[ (j * cols * 3) + (i * 3) + 2];

                            rgbaFrame[k * 4 + 0] = r;
                            rgbaFrame[k * 4 + 1] = g;
                            rgbaFrame[k * 4 + 2] = b;
                            rgbaFrame[k * 4 + 3] = 0xff;
                            k++;
                        }
                    }
                }else {

                    int k = 0;
                    for (int i = cols; i > 0; i--) {
                        for (int j = 0; j < rows; j++) {
                            uint8_t pixel = buf[(j * cols) +
                                                i]; // this has to be unsigned or else the histogram indexing gets very upset
                            // a char is signed in order to represent evil Inverse ASCII (we're scared of it)

                            // time for the world's jankiest mono->rgba conversion
                            // doing it in here saves time and memory over doing it as a second loop
                            rgbaFrame[k * 4 + 0] = pixel;
                            rgbaFrame[k * 4 + 1] = pixel;
                            rgbaFrame[k * 4 + 2] = pixel;
                            rgbaFrame[k * 4 + 3] = 0xff; // alpha channel

                            // TODO: either make one histogram with values cooked down from RGB or make three histograms
                            histogram[(int) pixel] += 1.0f; // yes, I'm using the value of the pixel as the index for the histogram
                            // since it's just one byte, it can't be greater than 255, and since it's uint, it can't be less than 0

                            k++;
                        }
                    }
                }

                LoadTextureFromMemory(rgbaFrame, &my_image_texture, ptrGrabResult->GetHeight(), ptrGrabResult->GetWidth());
            }
            else
            {
                cout << "Error: " << ptrGrabResult->GetErrorCode() << " " << ptrGrabResult->GetErrorDescription() << endl;
            }

            glfwPollEvents();

            // Start the Dear ImGui frame
            ImGui_ImplOpenGL3_NewFrame();
            ImGui_ImplGlfw_NewFrame();
            ImGui::NewFrame();

            {
                ImGui::Begin("Preview");
                ImGui::Text("size = %d x %d", rows, cols);
                ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / io.Framerate, io.Framerate);
                ImGui::SliderInt("Gain", &gain, 0, maxGain);
                // size provided here is the display size that the texture will be scaled to as needed
                ImGui::Image((ImTextureID)(intptr_t)my_image_texture, ImVec2(rows, cols));
                ImGui::End();
            }

            {
                ImGui::Begin("Exposure");
                // https://github.com/ocornut/imgui/issues/4866 this implies that \u is correct
                ImGui::Text("exposure time = %d \u00B5s", expTime);
                ImGui::Text("shutter speed = 1/%d s", shutterSpeed);
                // TODO: measure ISO equivalent for gain and put that here
                // TODO: can I calculate an "EV" value here? maybe an average pixel value?
                ImGui::PlotHistogram("Histogram", histogram, 256);
                ImGui::End();
            }

            auto currentTime = chrono::high_resolution_clock::now();
            long long elapsed = chrono::duration_cast<chrono::microseconds>(currentTime - startTime).count();

            {
                ImGui::Begin("Capture Control");
                ImGui::Text("elapsed time = %lld s (%lld \u00B5s)", (elapsed / 1000000), elapsed);
                ImGui::Text("line count = %ld", lineCount);
                ImGui::Text( color ? "RGB8 Packed Color" : "Mono8" );
                if(ImGui::Button("Stop Capture")) {
                    capFlag = false;
                }
                ImGui::End();
            }

            {
                ImGui::Begin("Accelerometer");
                ImGui::Text("x: %.2f, y: %.2f, z: %.2f", latestAccel.x, latestAccel.y, latestAccel.z);
                ImGui::Text("Motion direction:");
                ImGui::RadioButton("Unspecified", &directionSelection, 0);
                ImGui::RadioButton("+X", &directionSelection, 1);
                ImGui::SameLine();
                ImGui::RadioButton("+Y", &directionSelection, 2);
                ImGui::SameLine();
                ImGui::RadioButton("+Z", &directionSelection, 3);

                ImGui::RadioButton("-X", &directionSelection, 4);
                ImGui::SameLine();
                ImGui::RadioButton("-Y", &directionSelection, 5);
                ImGui::SameLine();
                ImGui::RadioButton("-Z", &directionSelection, 6);
                ImGui::Text("typically +/- Z");

                ImGui::End();
            }

            if(gain != lastGain) {
                camera.GainRaw.TrySetValue(gain);
                lastGain = gain;
            }

            // Rendering
            ImGui::Render();
            int display_w, display_h;
            glfwGetFramebufferSize(window, &display_w, &display_h);
            glViewport(0, 0, display_w, display_h);
            glClear(GL_COLOR_BUFFER_BIT);
            ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

            glfwSwapBuffers(window);

        }

        auto endTime = chrono::high_resolution_clock::now();
        long long duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
        
        // Close the camera.
        camera.Close();
        camFile.close();
        accelThread.join();

        metaFile << "capture.LineCount," << lineCount << endl;
        metaFile << "capture.DurationMicroSec," << duration << endl;
        switch(directionSelection) {
            case 1:
                metaFile<<"accelerometer.Direction,PX"<<endl;
                break;
            case 2:
                metaFile<<"accelerometer.Direction,PY"<<endl;
                break;
            case 3:
                metaFile<<"accelerometer.Direction,PZ"<<endl;
                break;
            case 4:
                metaFile<<"accelerometer.Direction,NX"<<endl;
                break;
            case 5:
                metaFile<<"accelerometer.Direction,NY"<<endl;
                break;
            case 6:
                metaFile<<"accelerometer.Direction,NZ"<<endl;
                break;
            default:
                metaFile<<"accelerometer.Direction,unspecified"<<endl;
                break;
            case 0:
                metaFile<<"accelerometer.Direction,unspecified"<<endl;
                break;
        }

        metaFile.close();

        ImGui_ImplOpenGL3_Shutdown();
        ImGui_ImplGlfw_Shutdown();
        ImGui::DestroyContext();

        glfwDestroyWindow(window);
        glfwTerminate();

        free(rgbaFrame);

        cout << endl;
        cout << "Final stats:" << endl;
        cout << "Line count: " << lineCount << endl;
        cout << "Capture duration: " << duration / 1000000 << " seconds (" << duration << " µs)" << endl;
    }
    catch (const GenericException &e)
    {
        // Error handling.
        cerr << "An exception occurred." << endl
        << e.GetDescription() << endl;
        exitCode = 1;
    }

    // Releases all pylon resources. 
    PylonTerminate(); 

    return exitCode;
}