#include <iostream>
#include <termios.h>
#include <fcntl.h>
#include <cstring>
#include <unistd.h>
#include <fstream>
#include <iomanip>
#include <chrono>

using namespace std;

// https://www.geeksforgeeks.org/cpp/serial-port-connection-in-cpp/
// https://stackoverflow.com/questions/6947413/how-to-open-read-and-write-from-serial-port-in-c

bool runFlag = true;

#define PMTK_SET_NMEA_OUTPUT_RMCONLY                                           \
  "$PMTK314,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*29\r\n" ///< turn on only the GPRMC sentence
#define PMTK_SET_NMEA_UPDATE_200_MILLIHERTZ                                    \
  "$PMTK220,5000*1B\r\n" ///< Once every 5 seconds, 200 millihertz.
#define PMTK_SET_NMEA_UPDATE_1HZ "$PMTK220,1000*1F\r\n" ///<  1 Hz
#define PMTK_SET_NMEA_UPDATE_2HZ "$PMTK220,500*2B\r\n"  ///<  2 Hz
#define PMTK_SET_NMEA_UPDATE_5HZ "$PMTK220,200*2C\r\n"  ///<  5 Hz
#define PMTK_SET_NMEA_UPDATE_10HZ "$PMTK220,100*2F\r\n" ///< 10 Hz
#define PMTK_API_SET_FIX_CTL_1HZ "$PMTK300,1000,0,0,0,0*1C\r\n" ///< 1 Hz
#define PMTK_API_SET_FIX_CTL_5HZ "$PMTK300,200,0,0,0,0*2F\r\n"  ///< 5 Hz
// Can't fix position faster than 5 times a second!
#define PGCMD_NOANTENNA "$PGCMD,33,0*6D\r\n" ///< don't show antenna status messages

struct accelData{
    uint32_t millis; // was unsigned long over on the arduino, but that can't be guaranteed
    float x;
    float y;
    float z;
}; // 4 bytes (unsigned long) + 3*4 bytes (float) = 16 bytes
// this depends on little endian, like on x64 and the samd21 chip

struct accelData2 {
    float x;
    float y;
    float z;
}; // 12

void getNextBytes(int fd, char* buf, size_t count) {
    for(size_t i = 0; i<count; i++) {
        read(fd, (void*)&buf[i], 1);
    }
}

int writeString(int fd, string str) {
    return write(fd, str.c_str(), str.length());
}

int main(int argc, char* argv[]) {
    int fd = open("/dev/ttyAMA0", O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0){
        cerr << "failed to open!" << endl;
        return 1;
    }

    struct termios tty;
    if(tcgetattr(fd, &tty) != 0) {
        cerr << "Error from tcgetattr: " << strerror(errno) << endl;
        return 1;
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
        return 1;
    }
    cout <<"Flushing serial port, please wait..."<<endl;
    sleep(2); //required to make flush work, for some reason
    tcflush(fd,TCIOFLUSH);

    cout << "Port open???" << endl;
    ofstream outFile("out.txt");

    // to synchronize, we wait for 4*0x11 and then we put the next 16 bytes into the parse buffer
    // if we see 4*0x22, the next byte is size and then that many bytes of text
    //
    // our read sizes are random, but guaranteed to be at least one byte
    // we need a way to run until we've gotten the desired number of bytes

    char parseBuf[16];
    char strBuf[1024];
    uint8_t temp[1];
    bool flag = false;
    struct accelData2* d;
    int j = 0;
    //uint32_t lastTime = 0;

    sleep(1); // to mimic time to start the gui and camera capture
    tcflush(fd,TCIOFLUSH); // mandatory to make it not freak out

    writeString(fd, PMTK_SET_NMEA_OUTPUT_RMCONLY);
    writeString(fd, PMTK_SET_NMEA_UPDATE_5HZ);
    writeString(fd, PMTK_API_SET_FIX_CTL_5HZ);
    writeString(fd, PGCMD_NOANTENNA);

    auto startTime = chrono::high_resolution_clock::now();
    auto lastTime = startTime;

    while(runFlag) {/*
        read(fd, temp, sizeof(temp)); // get the byte for the size
        cout<<"got string init seq for length: "<<(int)temp[0]<< endl;
        getNextBytes(fd, strBuf, temp[0]);
        cout<<strBuf<<endl;
        */
        // now we have to read into strBuf until we see a null or newline or whatever
        read(fd, temp, sizeof(temp));
        strBuf[0] = (char)temp[0];
        j = 1;
        while(((char)temp[0] != '\n') && j < 256) {
            read(fd, temp, sizeof(temp));
            strBuf[j] = (char)temp[0];
            j++;
        }
        if(strBuf[0] == '$') {
            cout << strBuf;
            outFile << strBuf;
        }
        memset(strBuf, 0, sizeof(strBuf));
        /*
       int n = read(fd, strBuf,sizeof(strBuf));
       if(n>0) {
           cout<<strBuf<<endl;
       }
       memset(strBuf, 0, sizeof(strBuf));
         */
    }
    outFile.close();
}