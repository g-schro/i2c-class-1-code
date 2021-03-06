#ifndef _CONFIG_H_
#define _CONFIG_H_

// Module i2c
#define CONFIG_I2C_HAVE_INSTANCE_1 0
#define CONFIG_I2C_HAVE_INSTANCE_2 0
#define CONFIG_I2C_HAVE_INSTANCE_3 1
#define CONFIG_I2C_DFLT_TRANS_GUARD_TIME_MS 100

// Module tmphm
#define CONFIG_TMPHM_1_DFLT_I2C_INSTANCE 3
#define CONFIG_TMPHM_1_DFLT_I2C_ADDR 0x44
#define CONFIG_TMPHM_DFLT_SAMPLE_TIME_MS 1000
#define CONFIG_TMPHM_DFLT_MEAS_TIME_MS 17

// Module console
#define CONFIG_CONSOLE_PRINT_BUF_SIZE 240
#define CONFIG_CONSOLE_DFLT_TTYS_INSTANCE 2

#endif // _CONFIG_H_
