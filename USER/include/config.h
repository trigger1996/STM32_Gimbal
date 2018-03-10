#ifndef __Cfg_H
#define __Cfg_H

#include "stm32f10x.h"


extern float pitch,  roll,   yaw; 		   // 欧拉角
extern float acc_x,  acc_y,  acc_z;        // 加速度
extern float gx,     gy,     gz;           // 角速度

extern short ax_raw, ay_raw, az_raw;       // 加速度传感器原始数据
extern short gx_raw, gy_raw, gz_raw;	   // 陀螺仪原始数据

extern float motor_roll_out, motor_pitch_out;


#endif	// __Cfg_H
