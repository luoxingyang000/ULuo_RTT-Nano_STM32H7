
/**************************************************
 * 
 * ULuo SWJTU Terminator v0.9
 * 2020/2 Nanjing
 * 
 * TM1640 LED数码管驱动 .h
 * 
**************************************************/

#ifndef __TM1640_H
#define __TM1640_H

#include "stm32h7xx.h"
#include "sys.h"

// TM1640 : SCL - PB10 , SDA - PB11
#define TM1640_SCL_SET HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_SET)
#define TM1640_SCL_RESET HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, GPIO_PIN_RESET)
#define TM1640_SDA_SET HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_SET)
#define TM1640_SDA_RESET HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, GPIO_PIN_RESET)

#define TM1640_WIREDELAY 1  //TM1640总线位跳变延时/us

#endif
