
/************************************************
 * ULuo RTT-Nano on STM32H743
 * SYS RTT-Nano 线程管理
 * 2020/2/25 Nanjing
************************************************/

#include "rtt_init.h"
#include "rtconfig.h"
#include <rtthread.h>

#define THREAD_PRIORITY         RT_THREAD_PRIORITY_MAX - 1	//线程最高优先级数 (从0开始)
#define THREAD_STACK_SIZE       512						//默认线程栈大小
#define THREAD_TIMESLICE        5						//默认线程时间片大小

static rt_thread_t tid1 = RT_NULL;


// 线程1入口 - 开机打印秒计数，最低优先级 //
static void tid1_service(void *parameter)
{
    rt_uint32_t count = (rt_uint32_t) parameter;
	rt_uint32_t hh,mm,ss;

    while(1)
    {
		hh = count / 3600;
		mm = (count % 3600) / 60;
		ss = count % 3600 % 60;
		count++;
        rt_kprintf("Time elapsed since power on: %d h %d m %d s\n", hh, mm, ss);
        rt_thread_mdelay(1000);
    }
}


//RTT-Nano 系统启动后创建的线程，放在所有线程定义之后
int rtt_createThreads(void)
{
	/* 动态方式 创建线程1，名称是thread1，入口是tid1_service*/
    tid1 = rt_thread_create("tid1_count",
                            tid1_service, (void*)0,
                            256,
                            THREAD_PRIORITY, THREAD_TIMESLICE);
	/* 如果获得线程控制块，启动这个线程 */
    if (tid1 != RT_NULL)	rt_thread_startup(tid1);
	else rt_kprintf("WARNING : tid1 start failed!\n");

	return 0;
}
