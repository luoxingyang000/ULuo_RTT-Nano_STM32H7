
/**************************************************
 * 
 * ULuo SWJTU Terminator v0.9
 * 2020/2 Nanjing
 * 
 * TM1640 LED���������
 * 
**************************************************/

#include "tm1640.h"
#include <rtthread.h>

#define  I2C_DATA_Size	1
uint8_t I2C_TXBuf[I2C_DATA_Size],I2C_RXBuf[I2C_DATA_Size];

I2C_HandleTypeDef I2C1_Handler;


// TM1640 GPIOӲ�����ʼ�� //
void TM1640_GPIO_Init(void)
{
    GPIO_InitTypeDef GPIO_Initure;

	__HAL_RCC_GPIOB_CLK_ENABLE();           //����GPIOBʱ��

    // SCL - PB10 , SDA - PB11
    GPIO_Initure.Pin=GPIO_PIN_10 | GPIO_PIN_11;            //SCL
    GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP;      //���
    GPIO_Initure.Pull=GPIO_NOPULL;        //����������Ӳ����������
    GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;     //����
    
    HAL_GPIO_Init(GPIOB,&GPIO_Initure);
}
