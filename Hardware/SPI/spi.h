
/************************************************

  - ULuo SWJTU Terminator v0.9
  - ȫ������ ���ι콻
  - 2020/2

  SPI�ײ�����.h on RTT-Nano

************************************************/

#ifndef __SPI_H
#define __SPI_H

#include "stm32h7xx.h"
#include <stdio.h>

void SPI_Init(void);
uint8_t SPI1_ReadWriteByte(uint8_t TxData);
uint8_t SPI1_WriteByte(uint8_t *TxData,uint16_t size);

#endif
