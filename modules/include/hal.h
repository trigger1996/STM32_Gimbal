#ifndef __HAL_H
#define __HAL_H

#include <stm32f10x.h>
#include <timer.h>

#define MOTOR_ROLL_MID  1500
#define MOTOR_PITCH_MID 1500

void HAL_set_Motor_Output(float roll_in, float pitch_in);


#endif  // __HAL_H
