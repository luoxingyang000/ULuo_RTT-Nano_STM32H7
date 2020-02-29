#include "rtt_init.h"
#include <rtthread.h>

/************************************************
 * ULuo RTT-Nano on STM32H743
 * BSP init
 * 2020/2/24
************************************************/

void rtt_init(void)
{
	Cache_Enable();                 //打开L1-Cache
	HAL_Init();				        //初始化HAL库
	Stm32_Clock_Init(207,5,2,2);    //设置时钟,400Mhz 
	delay_init(400);				//延时初始化,400Mhz 
	
	uart_init(115200);				//串口初始化
	LED_Init();						//初始化LED
	KEY_Init();						//初始化按键
}

/**
 * This function will delay for some us.
 *
 * @param us the delay time of us
 */
void rt_hw_us_delay(rt_uint32_t us)
{
    rt_uint32_t start, now, delta, reload, us_tick;
    start = SysTick->VAL;
    reload = SysTick->LOAD;
    us_tick = SystemCoreClock / 1000000UL;//比如系统时钟频率是80M 那么1us 需要80个周期
		//us_tick = 64;	//@400MHz
		rt_kprintf("us_tick: %d\n",us_tick);
    do {
        now = SysTick->VAL;
        delta = start > now ? start - now : reload + start - now;//是倒数 还是正数
    } while(delta < us_tick * us);
}
