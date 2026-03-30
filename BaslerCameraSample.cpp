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
    uint32_t millis; // was unsigned long over on the arduino, but that can't be guaranteed
    float x;
    float y;
    float z;
}; // 4 bytes (unsigned long) + 3*4 bytes (float) = 16 bytes
// this depends on little endian, like on x64 and the samd21 chip

struct accelData latestAccel;

void getNextBytes(int fd, char* buf, size_t count) {
    for(size_t i = 0; i<count; i++) {
        read(fd, (void*)&buf[i], 1);
    }
}

void handleSerial(int fd, string outFileName) {
    ofstream outFile(outFileName);
    char parseBuf[16];
    char strBuf[1024];
    uint8_t temp[1];
    bool flag = false;
    struct accelData* d;
    int j = 0;
    while(capFlag) {
        flag = false;
        read(fd, temp, sizeof(temp));
        if(temp[0] == 0x11) {
            // this could be the start of a valid sequence
            for(int i = 0; i<3; i++){ // this has to run exactly this many times or else it'll wait forever for another 0x11 that isn't coming its way
                read(fd, temp, sizeof(temp));
                if(temp[0] != 0x11) {
                    flag = true;
                    break;
                }
            }
            if(flag) {
                // invalid sequence, reset
                continue;
            }else {
                getNextBytes(fd, parseBuf, 16);
                d = (struct accelData*)parseBuf;
                outFile<<"A"<<d->millis<<","<<d->x<<","<<d->y<<","<<d->z<<endl;
                memcpy((void*)&latestAccel, d, 16);
            }
        }else if(temp[0] == (uint8_t)0x22) {
            // this could also be the start of a valid sequence
            for(int i = 0; i<3; i++){ // this has to run exactly this many times or else it'll wait forever for another 0x22 that isn't coming its way
                read(fd, temp, sizeof(temp));
                if(temp[0] != 0x22) {
                    flag = true;
                    break;
                }
            }
            if(flag) {
                // invalid sequence, reset
                continue;
            }else {
                // now we have to read into strBuf until we see a null or newline or whatever
                j = 0;
                while(((char)temp[0] != '\n') && j < 256) {
                    read(fd, temp, sizeof(temp));
                    strBuf[j] = (char)temp[0];
                    j++;
                }
                outFile<<strBuf<<endl;
                memset(strBuf, 0, sizeof(strBuf));
            }
        }else{
            continue;
        }
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

    const char *serialPort = "/dev/ttyACM0";

    int fd = open(serialPort, O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0){
        cerr << "failed to open serial device!" << endl;
        return 1;
    }

    struct termios tty;
    if(tcgetattr(fd, &tty) != 0) {
        cerr << "Error from tcgetattr: " << strerror(errno) << endl;
        return 1;
    }

    // arduino wants 2 megabaud, 8 data bits, no parity, one stop bit, no xon/xoff
    // time for some ancient C runes that I need to commune with the spirit of Bell Labs to understand
    cfsetospeed(&tty, B2000000); // 2 megabaud goes brrrrr
    cfsetispeed(&tty, B2000000);

    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8; // 8 bit chars
    tty.c_iflag &= ~IGNBRK; // no break processing
    tty.c_lflag = 0; // no signaling chars, no echo, no canonical processing
    tty.c_oflag = 0; // no remapping or delays
    tty.c_cc[VMIN] = 0; // don't block on read
    tty.c_cc[VTIME] = 5; // 0.5s read timeout
    tty.c_iflag &= ~(IXON | IXOFF | IXANY); // no xon/xoff control
    tty.c_cflag |= (CLOCAL | CREAD); // ignore modem controls
    tty.c_cflag &= ~(PARENB | PARODD); // no parity
    tty.c_cflag &= ~CSTOPB; // one stop bit?????
    tty.c_cflag &= ~CRTSCTS;
    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        cerr << "Error from tcsetattr: "<< strerror(errno)<< endl;
        return 1;
    }
    cout <<"Flushing serial port, please wait..."<<endl;
    sleep(2); //required to make flush work, for some reason
    tcflush(fd,TCIOFLUSH);
    cout << "Serial port " << serialPort << " opened" << endl;

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
//    io.ConfigFlags |= ImGuiConfigFlags_NavEnableGamepad;      // Enable Gamepad Controls

    // Setup Dear ImGui style
    ImGui::StyleColorsDark();
    //ImGui::StyleColorsLight();

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
//        camera.OffsetX.TrySetToMinimum();
//        camera.OffsetY.TrySetToMinimum();
        camera.Width.TrySetToMaximum(); // get all the pixels!

        int shutterSpeed = 1.0 / ((float)expTime / 1000000);

        // I hate how the least bad way to get and format a date and time is this mess
        time_t t = time(nullptr);
        auto tm = *localtime(&t);
        ostringstream oss;
        oss << put_time(&tm, "%m-%d_%H-%M");
        string outDir = "/tmp/" + oss.str();
        mkdir(outDir.c_str(), 0770);
        cout << "Created output dir " << outDir << endl;

        ofstream metaFile(outDir + "/meta.csv");
        metaFile << "key,value" << endl;
        metaFile << "camera.Width," << camera.Width.ToStringOrDefault("err!") << endl;
        metaFile << "camera.Height," << camera.Height.ToStringOrDefault("err!") << endl;
        metaFile << "camera.ExposureTimeRaw," << camera.ExposureTimeRaw.ToStringOrDefault("err!") << endl;
        metaFile << "camera.ExposureTimeAbs," << camera.ExposureTimeAbs.ToStringOrDefault("err!") << endl;
        metaFile << "camera.GainRaw," << camera.GainRaw.ToStringOrDefault("err!") << endl;
        metaFile << "serial.Protocol,binary"<<endl;
        metaFile << "serial.OutputFormat,text"<<endl;
        metaFile << "serial.FloatSize,32"<<endl; // it's 8 if not specified

        fstream camFile;
        camFile.open(outDir+"/cam.data", ios::app | ios::binary); // GNU IMP will import raw images from .data files

        auto startTime = chrono::high_resolution_clock::now(); // microseconds counter; perhaps overkill
        thread serialThread(handleSerial, fd, outDir+"/serial.txt");

        // Start the grabbing of c_countOfImagesToGrab images.
        // The camera device is parameterized with a default configuration which
        // sets up free-running continuous acquisition.
//        camera.StartGrabbing( c_countOfImagesToGrab);
        camera.StartGrabbing();

        // This smart pointer will receive the grab result data.
        CGrabResultPtr ptrGrabResult;
        long lineCount = 0;
        int lastGain = gain;
        int directionSelection = 0;

        int rows = camera.Height.GetValue(); // 256
        int cols = camera.Width.GetValue(); // 2048
        float histogram[256]; // assumes 8 bit mono pixels!

        char *rgbaFrame = (char*)malloc(rows*cols*4);

        while (capFlag)
        {
            // Wait for an image and then retrieve it. A timeout of 5000 ms is used.
            camera.RetrieveResult( 5000, ptrGrabResult, TimeoutHandling_ThrowException);
            GLuint my_image_texture = 0;

            // Image grabbed successfully?
            if (ptrGrabResult->GrabSucceeded())
            {
                lineCount += ptrGrabResult->GetHeight();
                // Access the image data.
//                cout << "SizeX: " << ptrGrabResult->GetWidth() << endl;
//                cout << "SizeY: " << ptrGrabResult->GetHeight() << endl;
//                const uint8_t *pImageBuffer = (uint8_t *) ptrGrabResult->GetBuffer();
                char *buf = (char*) ptrGrabResult->GetBuffer();
//                cout << "Gray value of first pixel: " << (uint32_t) pImageBuffer[0] << endl << endl;
                camFile.write(buf, ptrGrabResult->GetBufferSize());
                cout << "Captured and wrote " << ptrGrabResult->GetBufferSize() << " bytes" << endl;
                zeroHistogram(histogram);

                int k = 0;
                for(int i = cols; i > 0; i--) {
                    for(int j = 0; j < rows; j++) {
                        uint8_t pixel = buf[(j*cols) + i]; // this has to be unsigned or else the histogram indexing gets very upset
                        // a char is signed in order to represent evil Inverse ASCII (we're scared of it)

                        // time for the world's jankiest mono->rgba conversion
                        // doing it in here saves time and memory over doing it as a second loop
                        rgbaFrame[k*4 + 0] = pixel;
                        rgbaFrame[k*4 + 1] = pixel;
                        rgbaFrame[k*4 + 2] = pixel;
                        rgbaFrame[k*4 + 3] = 0xff; // alpha channel

                        histogram[ (int)pixel ] += 1.0f; // yes, I'm using the value of the pixel as the index for the histogram
                        // since it's just one byte, it can't be greater than 255, and since it's uint, it can't be less than 0

                        k++;
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
                ImGui::SliderInt("Gain", &gain, 0, 800);
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
        serialThread.join();

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