#include "rtt_init.h"

/************************************************
 * ULuo RTT-Nano on STM32H743
 * BSP init
 * 2020/2/24
************************************************/

void rtt_init(void)
{
	Cache_Enable();                 //打开L1-Cache
	HAL_Init();				        //初始化HAL库
	Stm32_Clock_Init(160,5,2,4);    //设置时钟,400Mhz 
	delay_init(400);				//延时初始化,400Mhz 
	
	uart_init(115200);				//串口初始化
	LED_Init();						//初始化LED
}
