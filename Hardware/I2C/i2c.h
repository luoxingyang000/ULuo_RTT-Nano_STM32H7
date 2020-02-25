
/**************************************************
 * 
 * ULuo SWJTU Terminator v0.9
 * 2020/2 Nanjing
 * 
 * Ó²¼şI2C .h on RTT-Nano
 * 
**************************************************/

#ifndef __I2C_H
#define __I2C_H

#include "stm32h7xx.h"
#include <stdio.h>

void I2C_Init(void);
uint8_t I2C_Read_Byte(uint8_t addr, uint8_t reg);
uint8_t I2C_Write_Byte(uint8_t addr, uint8_t reg, uint8_t data);
void I2C_Read_Buffer(uint8_t addr, uint8_t reg, uint8_t *buffer, uint8_t length);
void I2C_Wirte_Buffer(uint8_t addr, uint8_t reg, uint8_t *buffer, uint8_t length);

#endif
