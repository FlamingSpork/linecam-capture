#include <iostream>
#include <termios.h>
#include <fcntl.h>
#include <cstring>
#include <unistd.h>
#include <fstream>
#include <iomanip>

using namespace std;

// https://www.geeksforgeeks.org/cpp/serial-port-connection-in-cpp/
// https://stackoverflow.com/questions/6947413/how-to-open-read-and-write-from-serial-port-in-c

bool runFlag = true;

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
};

void getNextBytes(int fd, char* buf, size_t count) {
    for(size_t i = 0; i<count; i++) {
        read(fd, (void*)&buf[i], 1);
    }
}

int main(int argc, char* argv[]) {
    int fd = open("/dev/ttyACM0", O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0){
        cerr << "failed to open!" << endl;
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
    struct accelData* d;
    int j = 0;
    uint32_t lastTime = 0;

    sleep(1); // to mimic time to start the gui and camera capture
    //tcflush(fd,TCIOFLUSH); // mandatory to make it not freak out

    while(runFlag) {
        flag = false;
        read(fd, temp, sizeof(temp));
        //printf("got value: 0x%x\n", temp[0]);
        //continue;
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
                //cout<<"got data init seq"<< endl;
                getNextBytes(fd, parseBuf, 16);
                d = (struct accelData*)parseBuf;
//                if(d->millis > 1000000) {
//                    cout<<"oh no!"<<endl;
//                    outFile<<"help!"<<endl;
//                }
                cout<<"time: "<<d->millis<<" dt: "<<d->millis-lastTime<<" x: "<<d->x<<" y: "<<d->y<<" z: "<<d->z<<endl;
                outFile<<"A"<<d->millis<<","<<d->x<<","<<d->y<<","<<d->z<<endl;
                lastTime = d->millis;
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
                cout<<"got string init seq"<<endl;
                /*
                read(fd, temp, sizeof(temp)); // get the byte for the size
                cout<<"got string init seq for length: "<<(int)temp[0]<< endl;
                getNextBytes(fd, strBuf, temp[0]);
                cout<<strBuf<<endl;
                 */
                // now we have to read into strBuf until we see a null or newline or whatever
                j = 0;
                while(((char)temp[0] != '\n') && j < 256) {
                    read(fd, temp, sizeof(temp));
                    strBuf[j] = (char)temp[0];
                    j++;
                }
                cout<<strBuf<<endl;
                outFile<<strBuf<<endl;
                memset(strBuf, 0, sizeof(strBuf));
            }
        }else{
            printf("got value: 0x%x\n", temp[0]);
            continue;
        }
        /*
        char buf[1024];
        int n = read(fd, buf, sizeof(buf));
        outFile.write(buf, n);
//        cout << "Read and wrote "<< n<<" bytes."<<endl;
         */
    }
    outFile.close();
}