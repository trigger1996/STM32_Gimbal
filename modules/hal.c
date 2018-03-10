#include "include\hal.h"

void HAL_set_Motor_Output(float roll_in, float pitch_in) {
     
    TIM3->CCR1 = (int)roll_in  + MOTOR_ROLL_MID;
    TIM3->CCR2 = (int)pitch_in + MOTOR_PITCH_MID; 
    
}
