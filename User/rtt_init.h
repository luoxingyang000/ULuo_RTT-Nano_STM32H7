#include "sys.h"
#include "delay.h"
#include "rtt_usart.h" 
#include "led.h"
#include "key.h"

#include <rtthread.h>

/************************************************
 * ULuo RTT-Nano on STM32H743
 * BSP init.h
 * 2020/2/24
************************************************/

void rtt_init(void);
void rt_hw_us_delay(rt_uint32_t us);	//RT-Thread—” ±
