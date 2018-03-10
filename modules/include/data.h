#ifndef __Data_H
#define __Data_H

#include <config.h>

#include <mpu6050.h>

void GYRO_normalize_Data(short gx_in, short gy_in, short gz_in,
                         float *gx,   float *gy,   float *gz);

#endif  // __Data_H
