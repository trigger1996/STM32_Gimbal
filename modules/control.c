#include "include\control.h"

PidObject c_roll,  c_pitch;
PidObject cr_roll, cr_pitch;

// 角度pid
const PidConfig pid_roll  = { 10.0f, 0.0f, 0.0f };
const PidConfig pid_pitch = { 10.0f, 0.0f, 0.0f };
const float c_roll_imax  = 50;                      // 角度积分上限
const float c_pitch_imax = 50;


// 角速度pid
const PidConfig pid_rollrate  = { 1.0f, 0.0f, 0.0f };
const PidConfig pit_pitchrate = { 1.0f, 0.0f, 0.0f };
const float c_r_rate_imax = 50;                      // 角速度积分上限
const float c_p_rate_imax = 50;

const float ctrl_dt = 40.0f / 1000.0f;

void CTRL_init(void) {

    // 角度PID
    InitPidObject(&c_roll,  pid_roll,  c_roll_imax,  -c_roll_imax,  ctrl_dt);
    InitPidObject(&c_pitch, pid_pitch, c_pitch_imax, -c_pitch_imax, ctrl_dt);
    
    // 角速度PID
    InitPidObject(&cr_roll,  pid_rollrate,  c_r_rate_imax, -c_r_rate_imax, ctrl_dt);
    InitPidObject(&cr_pitch, pit_pitchrate, c_p_rate_imax, -c_p_rate_imax, ctrl_dt);
}

void CTRL_update(void) {
    
    float rollrate_exp, pitchrate_exp;
    
    calcPid(&c_roll,  0, roll);
    calcPid(&c_pitch, 0, pitch);

    rollrate_exp  = c_roll.output;
    pitchrate_exp = c_pitch.output;    
    
    calcPid(&cr_roll,  0, gx);
    calcPid(&cr_pitch, 0, gy);
    
    motor_roll_out  = c_roll.output;           // cr_roll.output
    motor_pitch_out = c_pitch.output;          // cr_pitch.output
    
}
