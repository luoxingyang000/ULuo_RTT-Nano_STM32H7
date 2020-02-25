
/************************************************
 * ULuo RTT-Nano on STM32H743
 * SYS RTT-Nano �̹߳���
 * 2020/2/25 Nanjing
************************************************/

#include "rtt_init.h"
#include "rtconfig.h"
#include <rtthread.h>

#define THREAD_PRIORITY         RT_THREAD_PRIORITY_MAX - 1	//�߳�������ȼ��� (��0��ʼ)
#define THREAD_STACK_SIZE       512						//Ĭ���߳�ջ��С
#define THREAD_TIMESLICE        5						//Ĭ���߳�ʱ��Ƭ��С

static rt_thread_t tid1 = RT_NULL;


// �߳�1��� - ������ӡ�������������ȼ� //
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


//RTT-Nano ϵͳ�����󴴽����̣߳����������̶߳���֮��
int rtt_createThreads(void)
{
	/* ��̬��ʽ �����߳�1��������thread1�������tid1_service*/
    tid1 = rt_thread_create("tid1_count",
                            tid1_service, (void*)0,
                            256,
                            THREAD_PRIORITY, THREAD_TIMESLICE);
	/* �������߳̿��ƿ飬��������߳� */
    if (tid1 != RT_NULL)	rt_thread_startup(tid1);
	else rt_kprintf("WARNING : tid1 start failed!\n");

	return 0;
}
