
/**************************************************
 * 
 * ULuo SWJTU Terminator v0.9
 * 2020/2 Nanjing
 * 
 * Ӳ��I2C on RTT-Nano
 * 
**************************************************/

#include "i2c.h"
#include <rtthread.h>

#define  I2C_DATA_Size	1
uint8_t I2C_TXBuf[I2C_DATA_Size],I2C_RXBuf[I2C_DATA_Size];

I2C_HandleTypeDef I2C1_Handler;


// Ӳ��I2C��ʼ�� - �ײ�GPIOӲ�� //
void HAL_I2C_MspInit(I2C_HandleTypeDef* i2cHandle)
{
	GPIO_InitTypeDef  GPIO_InitStruct = {0};
    
    __HAL_RCC_I2C1_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE(); //��ʹ��I2Cʱ��
 
    // SCL - PB6 , SDA - PB7
    GPIO_InitStruct.Pin         = GPIO_PIN_6 | GPIO_PIN_7;
    GPIO_InitStruct.Mode        = GPIO_MODE_AF_OD;
    GPIO_InitStruct.Pull        = GPIO_NOPULL;	//ע��Ҫ���ó�NPPģʽ����Ȼ���׳����ź���æ����ⲻ���ӻ������
    GPIO_InitStruct.Speed       = GPIO_SPEED_FREQ_HIGH;
    GPIO_InitStruct.Alternate   = GPIO_AF4_I2C1;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
}

// HAL��Ӳ��I2C��ʼ�� - ����� //
void I2C_Init(void)
{
    I2C1_Handler.Instance = I2C1;
    I2C1_Handler.Init.Timing = 0x00201D2B;	//����SYSCLK��CubeMX������
    I2C1_Handler.Init.OwnAddress1 = 0;
    I2C1_Handler.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
    I2C1_Handler.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
    I2C1_Handler.Init.OwnAddress2 = 0;
    I2C1_Handler.Init.OwnAddress2Masks = I2C_OA2_NOMASK;
    I2C1_Handler.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
    I2C1_Handler.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;

    HAL_I2C_Init(&I2C1_Handler);
    HAL_I2CEx_ConfigAnalogFilter(&I2C1_Handler, I2C_ANALOGFILTER_ENABLE);
    HAL_I2CEx_ConfigDigitalFilter(&I2C1_Handler, 0);
}

//Ӳ��I2C - �ӼĴ�����ȡһ���ֽ� (7λ��ַ)
uint8_t I2C_Read_Byte(uint8_t addr, uint8_t reg)
{
	HAL_I2C_Mem_Read(&I2C1_Handler, addr << 1, reg, I2C_MEMADD_SIZE_8BIT, I2C_RXBuf, 1, 1000);
	return I2C_RXBuf[0];
}

//Ӳ��I2C - �ӼĴ���д��һ���ֽ� (7λ��ַ)
uint8_t I2C_Write_Byte(uint8_t addr, uint8_t reg, uint8_t data)
{
	I2C_TXBuf[0] = data;
	HAL_I2C_Mem_Write(&I2C1_Handler, addr << 1 | 0x01, reg, I2C_MEMADD_SIZE_8BIT, I2C_TXBuf, 1, 1000);
	return 0;
}

//Ӳ��I2C - ������ȡlength���ֽ� (7λ��ַ)
void I2C_Read_Buffer(uint8_t addr, uint8_t reg, uint8_t *buffer, uint8_t length)
{
	HAL_I2C_Mem_Read(&I2C1_Handler, addr << 1, reg, I2C_MEMADD_SIZE_8BIT, (uint8_t*)buffer, length, 1000);
}

//Ӳ��I2C - ����д��length���ֽ� (7λ��ַ)
void I2C_Wirte_Buffer(uint8_t addr, uint8_t reg, uint8_t *buffer, uint8_t length)
{
	HAL_I2C_Mem_Write(&I2C1_Handler, addr << 1 | 0x01, reg, I2C_MEMADD_SIZE_8BIT, (uint8_t*)buffer, length, 1000);
}
