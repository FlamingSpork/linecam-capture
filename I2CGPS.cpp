#include <wiringPi.h>
#include <iostream>
#include <wiringPiI2C.h>
#include <chrono>

#define PMTK_SET_NMEA_OUTPUT_RMCONLY                                           \
  "$PMTK314,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0*29" ///< turn on only the GPRMC sentence
#define PMTK_SET_NMEA_UPDATE_1HZ "$PMTK220,1000*1F" ///<  1 Hz
#define PMTK_SET_NMEA_UPDATE_2HZ "$PMTK220,500*2B"  ///<  2 Hz
#define PMTK_SET_NMEA_UPDATE_5HZ "$PMTK220,200*2C"  ///<  5 Hz
#define PMTK_SET_NMEA_UPDATE_10HZ "$PMTK220,100*2F" ///< 10 Hz
#define PMTK_API_SET_FIX_CTL_1HZ "$PMTK300,1000,0,0,0,0*1C" ///< 1 Hz
#define PMTK_API_SET_FIX_CTL_5HZ "$PMTK300,200,0,0,0,0*2F"  ///< 5 Hz
// Can't fix position faster than 5 times a second!
#define PGCMD_NOANTENNA "$PGCMD,33,0*6D" ///< don't show antenna status messages

#define GPS_MAX_I2C_TRANSFER 32 // we'll do blocking reads and wait for 32 bytes at a time


using namespace std;

int writeString(int fd, const string& str) {
    size_t len = str.length();
    return wiringPiI2CRawWrite(fd, reinterpret_cast<const uint8_t *>(str.c_str()), len);
}

// turns out the GPS can't do full I2C bus speed :(

int main(int argc, char* argv[]) {
    wiringPiSetupGpio();
    int fd = wiringPiI2CSetupInterface("/dev/i2c-1", 0x10);

    // AdafruitGPS::begin
    // transmit nothing just to make sure the GPS exists (?)
    wiringPiI2CRawWrite(fd, NULL, 0);

    // and now we configure the GPS unit
    writeString(fd, PMTK_SET_NMEA_OUTPUT_RMCONLY);
    writeString(fd, PMTK_SET_NMEA_UPDATE_5HZ);
    writeString(fd, PMTK_API_SET_FIX_CTL_5HZ);
    writeString(fd, PGCMD_NOANTENNA);

    uint8_t buf[GPS_MAX_I2C_TRANSFER];
    while(true) {
        int v = wiringPiI2CRead(fd);
        cout<<v<<endl;
        /*int readSz = wiringPiI2CRawRead(fd, buf, 1); // should be blocking
        if(readSz < 0) {
            continue;
        }
        cout<<"size: "<<readSz<<" "<<(char*)buf<<endl;*/
    }
}