#include "include\data.h"

float pitch,  roll,   yaw; 		    // 欧拉角
float acc_x,  acc_y,  acc_z;        // 加速度
float gx,     gy,     gz;           // 角速度

short ax_raw, ay_raw, az_raw;       // 加速度传感器原始数据
short gx_raw, gy_raw, gz_raw;	    // 陀螺仪原始数据

float motor_roll_out, motor_pitch_out;

void GYRO_normalize_Data(short gx_in, short gy_in, short gz_in,
                         float *gx,   float *gy,   float *gz) {
    
    const int max   = MPU_RAWVAL_MAX;
    const int range = MPU_GYRO_RANGE;
    
    *gx = (float)gx_in / max * range;
    *gy = (float)gy_in / max * range;    
    *gz = (float)gz_in / max * range;    

}// GYRO_normalize_Data

