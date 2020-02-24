#include "rtt_init.h"

/************************************************
 * ULuo RTT-Nano on STM32H743
 * BSP init
 * 2020/2/24
************************************************/

void rtt_init(void)
{
	Cache_Enable();                 //��L1-Cache
	HAL_Init();				        //��ʼ��HAL��
	Stm32_Clock_Init(160,5,2,4);    //����ʱ��,400Mhz 
	delay_init(400);				//��ʱ��ʼ��,400Mhz 
	
	uart_init(115200);				//���ڳ�ʼ��
	LED_Init();						//��ʼ��LED
}
