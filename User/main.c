#include "rtt_init.h"
#include <rtthread.h>

/************************************************
	RTT-Nano ULuo on STM32H743
	main.c
	2020/2/24
************************************************/


int main(void)
{
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_RESET); //PB1??0
	while(1)
	{
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_RESET);	//PB0??0
		rt_thread_mdelay(500);
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET);	//PB1??1
		rt_thread_mdelay(500);
	}
}
