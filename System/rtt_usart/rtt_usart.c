#include "rtt_usart.h"
#include "delay.h"

/***********************************************************************

	ULuo RT-Thread Nano移植试验
	RTT FinSH USART调试串口初始化
	2020/1/25

************************************************************************/

#if 1
#pragma import(__use_no_semihosting)
//标准库需要的支持函数
struct __FILE
{
    int handle;
};

FILE __stdout;
/**
 * @brief	定义_sys_exit()以避免使用半主机模式
 *
 * @param	void
 *
 * @return  void
 */
void _sys_exit(int x)
{
    x = x;
}
/**
 * @brief	重定义fputc函数
 *
 * @param	ch		输出字符量
 * @param	f		文件指针
 *
 * @return  void
 */
int fputc(int ch, FILE *f)
{
    while((USART1->ISR & 0X40) == 0); //循环发送,直到发送完毕

    USART1->TDR = (u8) ch;
    return ch;
}
#endif


#if EN_USART1_RX   //如果使能了接收
//串口1中断服务程序
//注意,读取USARTx->SR能避免莫名其妙的错误
u8 USART_RX_BUF[USART_REC_LEN];     //接收缓冲,最大USART_REC_LEN个字节.
//接收状态
//bit15，	接收完成标志
//bit14，	接收到0x0d
//bit13~0，	接收到的有效字节数目
u16 USART_RX_STA = 0;     //接收状态标记

UART_HandleTypeDef UART1_Handler; //UART句柄


/**
 * @brief	初始化串口1函数
 *
 * @param	bound	串口波特率
 *
 * @return  void
 */
void uart_init(u32 bound)
{
    //UART 初始化设置
    UART1_Handler.Instance = USART1;					  //USART1
    UART1_Handler.Init.BaudRate = bound;				  //波特率
    UART1_Handler.Init.WordLength = UART_WORDLENGTH_8B; //字长为8位数据格式
    UART1_Handler.Init.StopBits = UART_STOPBITS_1;	  //一个停止位
    UART1_Handler.Init.Parity = UART_PARITY_NONE;		  //无奇偶校验位
    UART1_Handler.Init.HwFlowCtl = UART_HWCONTROL_NONE; //无硬件流控
    UART1_Handler.Init.Mode = UART_MODE_TX_RX;		  //收发模式
    HAL_UART_Init(&UART1_Handler);					    //HAL_UART_Init()会使能UART1
	
		//无使能USART1中断!
}


/**
 * @brief	HAL库串口底层初始化，时钟使能，引脚配置，中断配置
 *
 * @param	huart	串口句柄
 *
 * @return  void
 */
void HAL_UART_MspInit(UART_HandleTypeDef *huart)
{
    //GPIO端口设置
    GPIO_InitTypeDef GPIO_Initure;

    if(huart->Instance == USART1) //如果是串口1，进行串口1 MSP初始化
    {
        __HAL_RCC_GPIOA_CLK_ENABLE();				//使能GPIOA时钟
        __HAL_RCC_USART1_CLK_ENABLE();				//使能USART1时钟

        GPIO_Initure.Pin = GPIO_PIN_9;				//PA9
        GPIO_Initure.Mode = GPIO_MODE_AF_PP;		//复用推挽输出
        GPIO_Initure.Pull = GPIO_PULLUP;			//上拉
        GPIO_Initure.Speed = GPIO_SPEED_FREQ_HIGH;		//高速
        GPIO_Initure.Alternate = GPIO_AF7_USART1;	//复用为USART1
        HAL_GPIO_Init(GPIOA, &GPIO_Initure);	   	//初始化PA9

        GPIO_Initure.Pin = GPIO_PIN_10;				//PA10
        HAL_GPIO_Init(GPIOA, &GPIO_Initure);	   	//初始化PA10
    }

}

#endif






