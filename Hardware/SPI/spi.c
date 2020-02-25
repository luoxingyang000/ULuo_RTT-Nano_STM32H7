
/************************************************

  - ULuo SWJTU Terminator v0.9
  - ȫ������ ���ι콻
  - 2020/2 Nanjing

  SPI�ײ����� on RTT-Nano

************************************************/

 #include "spi.h"
 #include <rtthread.h>

SPI_HandleTypeDef SPI1_Handler;


// SPI��ʼ�� - �ײ�GPIOӲ�� //
void HAL_SPI_MspInit(SPI_HandleTypeDef *hspi)
{
	GPIO_InitTypeDef  GPIO_InitStruct = {0};
    
    __HAL_RCC_GPIOA_CLK_ENABLE();       //ʹ��GPIOAʱ��
    __HAL_RCC_SPI1_CLK_ENABLE();        //ʹ��SPI1ʱ��
 
    //SCK - PA5 , MISO - PA6 , MOSI - PA7
    GPIO_InitStruct.Pin         = GPIO_PIN_5 | GPIO_PIN_6 | GPIO_PIN_7;
    GPIO_InitStruct.Mode        = GPIO_MODE_AF_PP;              //�����������
    GPIO_InitStruct.Pull        = GPIO_NOPULL;                  //������
    GPIO_InitStruct.Speed       = GPIO_SPEED_FREQ_VERY_HIGH;   //IO���Ƶ��           
    GPIO_InitStruct.Alternate   = GPIO_AF5_SPI1;           //PA5.6.7����ΪSPI1
    HAL_GPIO_Init(GPIOA,&GPIO_InitStruct);
}

// HAL��SPI��ʼ�� - ����� //
void SPI_Init(void)
{
	SPI1_Handler.Instance=SPI1;                         //SPI1
    SPI1_Handler.Init.Mode=SPI_MODE_MASTER;             //����SPI����ģʽ
    SPI1_Handler.Init.Direction=SPI_DIRECTION_2LINES;   //����SPI�������˫�������ģʽ
    SPI1_Handler.Init.DataSize=SPI_DATASIZE_8BIT;       //����SPI�����ݴ�С
    SPI1_Handler.Init.CLKPolarity=SPI_POLARITY_HIGH;    //����ͬ��ʱ��CPOL
    SPI1_Handler.Init.CLKPhase=SPI_PHASE_2EDGE;         //����ͬ��ʱ��CPHA
    SPI1_Handler.Init.NSS=SPI_NSS_SOFT;                 //NSS�ź���Ӳ����NSS�ܽţ����������ʹ��SSIλ������
    SPI1_Handler.Init.BaudRatePrescaler=SPI_BAUDRATEPRESCALER_4;//���岨����Ԥ��Ƶ��ֵ
    SPI1_Handler.Init.FirstBit=SPI_FIRSTBIT_MSB;        //ָ�����ݴ����MSBλ����LSBλ��ʼ
    SPI1_Handler.Init.TIMode=SPI_TIMODE_DISABLE;        //�ر�TIģʽ
    SPI1_Handler.Init.CRCCalculation=SPI_CRCCALCULATION_DISABLE;//�ر�Ӳ��CRCУ��
    SPI1_Handler.Init.CRCPolynomial=7;                  //CRCֵ����Ķ���ʽ
    HAL_SPI_Init(&SPI1_Handler);//��ʼ��SPI1
    
    __HAL_SPI_ENABLE(&SPI1_Handler);                    //ʹ��SPI1
}

// SPI��дһ���ֽ� //
uint8_t SPI1_ReadWriteByte(uint8_t TxData)
{
    uint8_t Rxdata;
    HAL_SPI_TransmitReceive(&SPI1_Handler,&TxData,&Rxdata,1, 1000);       
 	return Rxdata;          		    //�����յ�������		
}

// SPIдһ���ֽ� //
uint8_t SPI1_WriteByte(uint8_t *TxData,uint16_t size)
{
	return HAL_SPI_Transmit(&SPI1_Handler,TxData,size,1000);
}
