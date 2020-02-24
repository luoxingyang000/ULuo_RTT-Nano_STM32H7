#include "rtt_usart.h"
#include "delay.h"

/***********************************************************************

	ULuo RT-Thread Nano��ֲ����
	RTT FinSH USART���Դ��ڳ�ʼ��
	2020/1/25

************************************************************************/

#if 1
#pragma import(__use_no_semihosting)
//��׼����Ҫ��֧�ֺ���
struct __FILE
{
    int handle;
};

FILE __stdout;
/**
 * @brief	����_sys_exit()�Ա���ʹ�ð�����ģʽ
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
 * @brief	�ض���fputc����
 *
 * @param	ch		����ַ���
 * @param	f		�ļ�ָ��
 *
 * @return  void
 */
int fputc(int ch, FILE *f)
{
    while((USART1->ISR & 0X40) == 0); //ѭ������,ֱ���������

    USART1->TDR = (u8) ch;
    return ch;
}
#endif


#if EN_USART1_RX   //���ʹ���˽���
//����1�жϷ������
//ע��,��ȡUSARTx->SR�ܱ���Ī������Ĵ���
u8 USART_RX_BUF[USART_REC_LEN];     //���ջ���,���USART_REC_LEN���ֽ�.
//����״̬
//bit15��	������ɱ�־
//bit14��	���յ�0x0d
//bit13~0��	���յ�����Ч�ֽ���Ŀ
u16 USART_RX_STA = 0;     //����״̬���

UART_HandleTypeDef UART1_Handler; //UART���


/**
 * @brief	��ʼ������1����
 *
 * @param	bound	���ڲ�����
 *
 * @return  void
 */
void uart_init(u32 bound)
{
    //UART ��ʼ������
    UART1_Handler.Instance = USART1;					  //USART1
    UART1_Handler.Init.BaudRate = bound;				  //������
    UART1_Handler.Init.WordLength = UART_WORDLENGTH_8B; //�ֳ�Ϊ8λ���ݸ�ʽ
    UART1_Handler.Init.StopBits = UART_STOPBITS_1;	  //һ��ֹͣλ
    UART1_Handler.Init.Parity = UART_PARITY_NONE;		  //����żУ��λ
    UART1_Handler.Init.HwFlowCtl = UART_HWCONTROL_NONE; //��Ӳ������
    UART1_Handler.Init.Mode = UART_MODE_TX_RX;		  //�շ�ģʽ
    HAL_UART_Init(&UART1_Handler);					    //HAL_UART_Init()��ʹ��UART1
	
		//��ʹ��USART1�ж�!
}


/**
 * @brief	HAL�⴮�ڵײ��ʼ����ʱ��ʹ�ܣ��������ã��ж�����
 *
 * @param	huart	���ھ��
 *
 * @return  void
 */
void HAL_UART_MspInit(UART_HandleTypeDef *huart)
{
    //GPIO�˿�����
    GPIO_InitTypeDef GPIO_Initure;

    if(huart->Instance == USART1) //����Ǵ���1�����д���1 MSP��ʼ��
    {
        __HAL_RCC_GPIOA_CLK_ENABLE();				//ʹ��GPIOAʱ��
        __HAL_RCC_USART1_CLK_ENABLE();				//ʹ��USART1ʱ��

        GPIO_Initure.Pin = GPIO_PIN_9;				//PA9
        GPIO_Initure.Mode = GPIO_MODE_AF_PP;		//�����������
        GPIO_Initure.Pull = GPIO_PULLUP;			//����
        GPIO_Initure.Speed = GPIO_SPEED_FREQ_HIGH;		//����
        GPIO_Initure.Alternate = GPIO_AF7_USART1;	//����ΪUSART1
        HAL_GPIO_Init(GPIOA, &GPIO_Initure);	   	//��ʼ��PA9

        GPIO_Initure.Pin = GPIO_PIN_10;				//PA10
        HAL_GPIO_Init(GPIOA, &GPIO_Initure);	   	//��ʼ��PA10
    }

}

#endif






