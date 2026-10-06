#ifndef SENSORCONSTANTS_H
#define SENSORCONSTANTS_H

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

#endif //SENSORCONSTANTS_H
