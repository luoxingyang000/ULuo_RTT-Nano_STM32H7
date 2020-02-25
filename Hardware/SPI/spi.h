
/************************************************

  - ULuo SWJTU Terminator v0.9
  - 全速向西 逐梦轨交
  - 2020/2

  SPI底层驱动.h on RTT-Nano

************************************************/

#ifndef __SPI_H
#define __SPI_H

#include "stm32h7xx.h"
#include <stdio.h>

void SPI_Init(void);
uint8_t SPI1_ReadWriteByte(uint8_t TxData);
uint8_t SPI1_WriteByte(uint8_t *TxData,uint16_t size);

#endif
