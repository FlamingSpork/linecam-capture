#include <wiringPi.h>
#include <iostream>
#include <wiringPiI2C.h>
#include <chrono>

using namespace std;

#define LSM6DS_FUNC_CFG_ACCESS 0x1 ///< Enable embedded functions register
#define LSM6DS_INT1_CTRL 0x0D      ///< Interrupt control for INT 1
#define LSM6DS_INT2_CTRL 0x0E      ///< Interrupt control for INT 2
#define LSM6DS_WHOAMI 0x0F         ///< Chip ID register
#define LSM6DS_CTRL1_XL 0x10       ///< Main accelerometer config register
#define LSM6DS_CTRL2_G 0x11        ///< Main gyro config register
#define LSM6DS_CTRL3_C 0x12        ///< Main configuration register
#define LSM6DS_CTRL8_XL 0x17       ///< High and low pass for accel
#define LSM6DS_CTRL10_C 0x19       ///< Main configuration register
#define LSM6DS_WAKEUP_SRC 0x1B     ///< Why we woke up
#define LSM6DS_STATUS_REG 0X1E     ///< Status register
#define LSM6DS_OUT_TEMP_L 0x20     ///< First data register (temperature low)
#define LSM6DS_OUTX_L_G 0x22       ///< First gyro data register
#define LSM6DS_OUTX_L_A 0x28       ///< First accel data register
#define LSM6DS_STEPCOUNTER 0x4B    ///< 16-bit step counter
#define LSM6DS_TAP_CFG 0x58        ///< Tap/pedometer configuration
#define LSM6DS_WAKEUP_THS                                                      \
  0x5B ///< Single and double-tap function threshold register
#define LSM6DS_WAKEUP_DUR                                                      \
  0x5C ///< Free-fall, wakeup, timestamp and sleep mode duration
#define LSM6DS_MD1_CFG 0x5E ///< Functions routing on INT1 register

#define LSM6DSO32_CHIP_ID 0x6C ///< LSM6DSO32 default device id from WHOAMI

#define LSM6DSOX_INT1_CTRL 0x0D ///< Interrupt enable for data ready
#define LSM6DSOX_CTRL1_XL 0x10  ///< Main accelerometer config register
#define LSM6DSOX_CTRL2_G 0x11   ///< Main gyro config register
#define LSM6DSOX_CTRL3_C 0x12   ///< Main configuration register
#define LSM6DSOX_CTRL9_XL 0x18  ///< Includes i3c disable bit


typedef enum data_rate {
    LSM6DS_RATE_SHUTDOWN,
    LSM6DS_RATE_12_5_HZ,
    LSM6DS_RATE_26_HZ,
    LSM6DS_RATE_52_HZ,
    LSM6DS_RATE_104_HZ,
    LSM6DS_RATE_208_HZ,
    LSM6DS_RATE_416_HZ,
    LSM6DS_RATE_833_HZ,
    LSM6DS_RATE_1_66K_HZ,
    LSM6DS_RATE_3_33K_HZ,
    LSM6DS_RATE_6_66K_HZ,
} lsm6ds_data_rate_t;

// this is specific to this particular accelerometer
typedef enum dso32_accel_range {
    LSM6DSO32_ACCEL_RANGE_4_G,
    LSM6DSO32_ACCEL_RANGE_32_G,
    LSM6DSO32_ACCEL_RANGE_8_G,
    LSM6DSO32_ACCEL_RANGE_16_G
} lsm6dso32_accel_range_t;

typedef enum gyro_range {
    LSM6DS_GYRO_RANGE_125_DPS = 0b0010,
    LSM6DS_GYRO_RANGE_250_DPS = 0b0000,
    LSM6DS_GYRO_RANGE_500_DPS = 0b0100,
    LSM6DS_GYRO_RANGE_1000_DPS = 0b1000,
    LSM6DS_GYRO_RANGE_2000_DPS = 0b1100,
    ISM330DHCX_GYRO_RANGE_4000_DPS = 0b0001
} lsm6ds_gyro_range_t;

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

// TODO: i2c gps support
// adafruit's library for the pa1010d uses a *different* i2c library than BusIO, which is fun

int main(int argc, char* argv[]) {
    // GPS is on 0x10, accelerometer (LSM6DSO32) is 0x6a

    wiringPiSetupGpio();
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

    auto startTime = chrono::high_resolution_clock::now();
    auto lastTime = startTime;
    auto currentTime = chrono::high_resolution_clock::now();
    long micros = chrono::duration_cast<chrono::microseconds >(currentTime - startTime).count();
    int16_t data[3];
    float x, y, z;

    // now we can actually try and read
    while(true) {
        wiringPiI2CReadBlockData(fd, LSM6DS_OUTX_L_A, reinterpret_cast<uint8_t *>(data), 6);
        x = data[0] * 4.0 / 32768.0;
        y = data[1] * 4.0 / 32768.0;
        z = data[2] * 4.0 / 32768.0;
        currentTime = chrono::high_resolution_clock::now();
        micros = chrono::duration_cast<chrono::microseconds >(currentTime - startTime).count();
        cout << "time: " << micros << " dt: " << chrono::duration_cast<chrono::microseconds >(currentTime - lastTime).count() << " x: " << x << " y: " << y << " z: " << z << endl;
        lastTime = currentTime;
    }
}