#include "rtt_init.h"
#include <rtthread.h>

/************************************************
 * ULuo RTT-Nano on STM32H743
 * BSP init
 * 2020/2/24
************************************************/

void rtt_init(void)
{
	Cache_Enable();                 //��L1-Cache
	HAL_Init();				        //��ʼ��HAL��
	Stm32_Clock_Init(207,5,2,2);    //����ʱ��,400Mhz 
	delay_init(400);				//��ʱ��ʼ��,400Mhz 
	
	uart_init(115200);				//���ڳ�ʼ��
	LED_Init();						//��ʼ��LED
	KEY_Init();						//��ʼ������
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
    us_tick = SystemCoreClock / 1000000UL;//����ϵͳʱ��Ƶ����80M ��ô1us ��Ҫ80������
		//us_tick = 64;	//@400MHz
		rt_kprintf("us_tick: %d\n",us_tick);
    do {
        now = SysTick->VAL;
        delta = start > now ? start - now : reload + start - now;//�ǵ��� ��������
    } while(delta < us_tick * us);
}
