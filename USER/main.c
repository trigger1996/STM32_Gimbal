#include "include\main.h"
	
 int main(void)
 {	 
	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	 //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	 	//串口初始化为500000
	delay_init();	//延时初始化 
	LED_Init();		  			//初始化与LED连接的硬件接口
	KEY_Init();					//初始化按键
	LCD_Init();			   		//初始化LCD
	MPU_Init();					//初始化MPU6050
	TIM3_PWM_Init(72 - 1, 20000 - 1);			// 单位时间1us, 周期20ms
	TIM5_Int_Init(72 - 1, 40000 - 1);			// 单位时间1us, 周期40ms
     
    CTRL_init();
	 
	while(mpu_dmp_init())
 	{
 		delay_ms(200);
	}  
	
 	while(1)
	{

	} 	
}
 


