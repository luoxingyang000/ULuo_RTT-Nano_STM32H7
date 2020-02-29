
/**************************************************
 * 
 * ULuo SWJTU Terminator v0.9
 * 2020/2 Nanjing
 * 
 * TM1640 LED数码管驱动
 * 
**************************************************/

#include "tm1640.h"
#include <rtthread.h>

#define  I2C_DATA_Size	1
uint8_t I2C_TXBuf[I2C_DATA_Size],I2C_RXBuf[I2C_DATA_Size];

I2C_HandleTypeDef I2C1_Handler;


// TM1640 GPIO硬件层初始化 //
void TM1640_GPIO_Init(void)
{
    GPIO_InitTypeDef GPIO_Initure;

	__HAL_RCC_GPIOB_CLK_ENABLE();           //开启GPIOB时钟

    // SCL - PB10 , SDA - PB11
    GPIO_Initure.Pin=GPIO_PIN_10 | GPIO_PIN_11;            //SCL
    GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP;      //输出
    GPIO_Initure.Pull=GPIO_NOPULL;        //无上下拉，硬件已有上拉
    GPIO_Initure.Speed=GPIO_SPEED_FREQ_HIGH;     //高速
    
    HAL_GPIO_Init(GPIOB,&GPIO_Initure);
}
