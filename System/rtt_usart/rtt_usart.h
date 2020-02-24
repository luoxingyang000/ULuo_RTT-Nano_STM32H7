#ifndef _RTT_USART_H
#define _RTT_USART_H
#include "sys.h"
#include "stdio.h"

/***********************************************************************

	ULuo RT-Thread Nano移植试验
	RTT FinSH USART调试串口初始化.H
	2020/1/25

************************************************************************/

#define USART_REC_LEN  			200  	//定义最大接收字节数 200
#define EN_USART1_RX 			1		//使能（1）/禁止（0）串口1接收

extern u8  USART_RX_BUF[USART_REC_LEN]; //接收缓冲,最大USART_REC_LEN个字节.末字节为换行符
extern u16 USART_RX_STA;         		//接收状态标记
extern UART_HandleTypeDef UART1_Handler; //UART句柄

#define RXBUFFERSIZE   1 //缓存大小
extern u8 aRxBuffer[RXBUFFERSIZE];//HAL库USART接收Buffer

void uart_init(u32 bound);

#endif
