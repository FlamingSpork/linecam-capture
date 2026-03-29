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

// Namespace for using pylon objects.
using namespace Pylon;

// Settings to use any camera type.
#include "BaslerCamera.h"
#include "BaslerCameraArray.h"

using namespace Pylon;
using namespace Pylon::BaslerCameraCameraParams_Params;

// Number of images to be grabbed.
static const uint32_t c_countOfImagesToGrab = 10;
bool capFlag = true;

// Namespace for using cout.
using namespace std;

void handleSigint(int s) {
    capFlag = false;
}

void handleSerial(int fd, string outFileName) {
    ofstream outFile(outFileName);
    while(capFlag) {
        char buf[1024];
        int n = read(fd, buf, sizeof(buf));
        outFile.write(buf, n);
    }
    outFile.close();
}

void printHelp() {
    cout << "Usage: ./BaslerCameraSample [-g 200] [-e 250]"<<endl;
    cout << "\t-g: gain [200~800]"<<endl;
    cout << "\t-e: exposure [microseconds]"<<endl;
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
    sleep(2); //required to make flush work, for some reason
    tcflush(fd,TCIOFLUSH);
    cout << "Serial port " << serialPort << " opened" << endl;

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

        while (capFlag)
        {
            // Wait for an image and then retrieve it. A timeout of 5000 ms is used.
            camera.RetrieveResult( 5000, ptrGrabResult, TimeoutHandling_ThrowException);

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
                cout << "Catpured and wrote " << ptrGrabResult->GetBufferSize() << " bytes" << endl;
            }
            else
            {
                cout << "Error: " << ptrGrabResult->GetErrorCode() << " " << ptrGrabResult->GetErrorDescription() << endl;
            }
        }

        auto endTime = chrono::high_resolution_clock::now();
        long long duration = chrono::duration_cast<chrono::microseconds>(endTime - startTime).count();
        
        // Close the camera.
        camera.Close();
        camFile.close();
        serialThread.join();

        metaFile << "capture.LineCount," << lineCount << endl;
        metaFile << "capture.DurationMicroSec," << duration << endl;
        metaFile.close();

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