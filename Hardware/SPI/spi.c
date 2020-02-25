
/************************************************

  - ULuo SWJTU Terminator v0.9
  - 全速向西 逐梦轨交
  - 2020/2 Nanjing

  SPI底层驱动 on RTT-Nano

************************************************/

 #include "spi.h"
 #include <rtthread.h>

SPI_HandleTypeDef SPI1_Handler;


// SPI初始化 - 底层GPIO硬件 //
void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi)
{
	GPIO_InitTypeDef  GPIO_InitStruct = {0};
    
    __HAL_RCC_GPIOA_CLK_ENABLE();       //使能GPIOA时钟
    __HAL_RCC_SPI1_CLK_ENABLE();        //使能SPI1时钟
 
    //SCK - PA5 , MISO - PA6 , MOSI - PA7
    GPIO_InitStruct.Pin         = GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;
    GPIO_InitStruct.Mode        = GPIO_MODE_AF_PP;              //复用推挽输出
    GPIO_InitStruct.Pull        = GPIO_NOPULL;                  //无上拉
    GPIO_InitStruct.Speed       = GPIO_SPEED_FREQ_VERY_HIGH;   //IO最高频率           
    GPIO_InitStruct.Alternate   = GPIO_AF5_SPI1;           //PA5.6.7复用为SPI1
    HAL_GPIO_Init(GPIOA,&GPIO_InitStruct);
}

// HAL库SPI初始化 - 外设层 //
void SPI_Init(void)
{
	SPI1_Handler.Instance=SPI1;                         //SPI1
    SPI1_Handler.Init.Mode=SPI_MODE_MASTER;             //设置SPI工作模式
    SPI1_Handler.Init.Direction=SPI_DIRECTION_2LINES;   //设置SPI单向或者双向的数据模式
    SPI1_Handler.Init.DataSize=SPI_DATASIZE_8BIT;       //设置SPI的数据大小
    SPI1_Handler.Init.CLKPolarity=SPI_POLARITY_HIGH;    //串行同步时钟CPOL
    SPI1_Handler.Init.CLKPhase=SPI_PHASE_2EDGE;         //串行同步时钟CPHA
    SPI1_Handler.Init.NSS=SPI_NSS_SOFT;                 //NSS信号由硬件（NSS管脚）还是软件（使用SSI位）管理
    SPI1_Handler.Init.BaudRatePrescaler=SPI_BAUDRATEPRESCALER_4;//定义波特率预分频的值
    SPI1_Handler.Init.FirstBit=SPI_FIRSTBIT_MSB;        //指定数据传输从MSB位还是LSB位开始
    SPI1_Handler.Init.TIMode=SPI_TIMODE_DISABLE;        //关闭TI模式
    SPI1_Handler.Init.CRCCalculation=SPI_CRCCALCULATION_DISABLE;//关闭硬件CRC校验
    SPI1_Handler.Init.CRCPolynomial=7;                  //CRC值计算的多项式
    HAL_SPI_Init(&SPI1_Handler);//初始化SPI1
    
    __HAL_SPI_ENABLE(&SPI1_Handler);                    //使能SPI1
}

// SPI读写一个字节 //
uint8_t SPI1_ReadWriteByte(uint8_t TxData)
{
    uint8_t Rxdata;
    HAL_SPI_TransmitReceive(&SPI1_Handler,&TxData,&Rxdata,1, 1000);       
 	return Rxdata;          		    //返回收到的数据		
}

// SPI写一个字节 //
uint8_t SPI1_WriteByte(uint8_t *TxData,uint16_t size)
{
	return HAL_SPI_Transmit(&SPI1_Handler,TxData,size,1000);
}
