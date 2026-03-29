#include <iostream>
#include <termios.h>
#include <fcntl.h>
#include <cstring>
#include <unistd.h>
#include <fstream>

using namespace std;

// https://www.geeksforgeeks.org/cpp/serial-port-connection-in-cpp/
// https://stackoverflow.com/questions/6947413/how-to-open-read-and-write-from-serial-port-in-c

bool runFlag = true;

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

    cout << "Port open???" << endl;
    ofstream outFile("out.txt");

    while(runFlag) {
        char buf[1024];
        int n = read(fd, buf, sizeof(buf));
        outFile.write(buf, n);
//        cout << "Read and wrote "<< n<<" bytes."<<endl;
    }
    outFile.close();
}