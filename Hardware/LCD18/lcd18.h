
/************************************************

  - ULuo SWJTU Terminator v0.9
  - ȫ������ ���ι콻
  - 2020/2

  1.8��TFT LCD HAL��SPI���� on RTT-Nano - ST7735S

************************************************/

#ifndef __LCD18_H
#define __LCD18_H

#include "stm32h7xx.h"
#include <stdio.h>  

//SET and RESET
// CS - PA3 , RES - PB12 , DC - PB14
#define SPILCD_RES_SET  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_SET)
#define SPILCD_RES_RESET HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, GPIO_PIN_RESET) 

#define SPILCD_DC_SET  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_SET)
#define SPILCD_DC_RESET  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, GPIO_PIN_RESET) 

#define SPILCD_CS_SET HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_SET) 
#define SPILCD_CS_RESET  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, GPIO_PIN_RESET)

//LCD��Ҫ������
typedef struct  
{										    
	uint16_t width;			//LCD ���
	uint16_t height;			//LCD �߶�
	uint16_t id;				//LCD ID
	uint8_t  dir;			//���������������ƣ�0��������1��������	
	uint16_t wramcmd;		//��ʼдgramָ��
	uint16_t setxcmd;		//����x����ָ��
	uint16_t setycmd;		//����y����ָ��	
	uint8_t  xoffset;    
	uint8_t	 yoffset;
}_lcd_dev; 	

//LCD����
extern _lcd_dev lcddev;	//����LCD��Ҫ����
#define USE_HORIZONTAL	3 //����Һ����˳ʱ����ת����0-0����ת��1-90����ת��2-180����ת��3-270����ת

//����LCD�ĳߴ�
#define LCD_W 80
#define LCD_H 160

//TFTLCD������Ҫ���õĺ���		   
extern uint16_t  POINT_COLOR;//Ĭ�Ϻ�ɫ    
extern uint16_t  BACK_COLOR; //������ɫ.Ĭ��Ϊ��ɫ

//������ɫ
#define WHITE       0xFFFF
#define BLACK      	0x0000	  
#define BLUE       	0x001F  
#define BRED        0XF81F
#define GRED 		0XFFE0
#define GBLUE		0X07FF
#define RED         0xF800
#define MAGENTA     0xF81F
#define GREEN       0x07E0
#define CYAN        0x7FFF
#define YELLOW      0xFFE0
#define BROWN 		0XBC40 //��ɫ
#define BRRED 		0XFC07 //�غ�ɫ
#define GRAY  		0X8430 //��ɫ
#define GRAY0       0xEF7D 
#define GRAY1       0x8410 //��ɫ1��00000 000000 00000
#define GRAY2       0x4208 
//GUI��ɫ

#define DARKBLUE      	 0X01CF	//����ɫ
#define LIGHTBLUE      	 0X7D7C	//ǳ��ɫ  
#define GRAYBLUE       	 0X5458 //����ɫ
//������ɫΪPANEL����ɫ 
 
#define LIGHTGREEN     	0X841F //ǳ��ɫ
#define LIGHTGRAY     	0XEF5B //ǳ��ɫ(PANNEL)
#define LGRAY 			0XC618 //ǳ��ɫ(PANNEL),���屳��ɫ

#define LGRAYBLUE      	0XA651 //ǳ����ɫ(�м����ɫ)
#define LBBLUE          0X2B12 //ǳ����ɫ(ѡ����Ŀ�ķ�ɫ)

void LCD18_GPIOInit(void);

void LCD_WR_REG(uint8_t data);
void LCD_WR_DATA(uint8_t data);
void LCD_WriteReg(uint8_t LCD_Reg, uint16_t LCD_RegValue);
void LCD_WriteRAM_Prepare(void);
void Lcd_WriteData_16Bit(uint16_t Data);
void LCD_DrawPoint(uint16_t x,uint16_t y);
void LCD_Clear(uint16_t Color);
void LCD_RESET(void);
void LCD_DisplayOn(void);
void LCD_DisplayOff(void);

void LCD18_Init(void);	//LCD18-ST7735S��ʼ��
void LCD_SetWindows(uint16_t xStart, uint16_t yStart,uint16_t xEnd,uint16_t yEnd);
void LCD_SetCursor(uint16_t Xpos, uint16_t Ypos);
void LCD_direction(uint8_t direction);

void GUI_DrawPoint(uint16_t x,uint16_t y,uint16_t color);
void LCD_Fill(uint16_t sx,uint16_t sy,uint16_t ex,uint16_t ey,uint16_t color);
void LCD_DrawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void LCD_DrawRectangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void LCD_DrawFillRectangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);
void _draw_circle_8(int xc, int yc, int x, int y, uint16_t c);
void gui_circle(int xc, int yc,uint16_t c,int r, int fill);
//void Draw_Circle(uint16_t x0,uint16_t y0,uint16_t fc,uint8_t r);
void Draw_Triangel(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2);
void Fill_Triangel(uint16_t x0,uint16_t y0,uint16_t x1,uint16_t y1,uint16_t x2,uint16_t y2);

void LCD_ShowChar(uint16_t x,uint16_t y,uint16_t fc, uint16_t bc, uint8_t num,uint8_t size,uint8_t mode);
void LCD_ShowString(uint16_t x,uint16_t y,uint8_t size,uint8_t *p,uint8_t mode);
uint32_t mypow(uint8_t m,uint8_t n);
void LCD_ShowNum(uint16_t x,uint16_t y,uint32_t num,uint8_t len,uint8_t size);
//void LCD_Show2Num(uint16_t x,uint16_t y,uint16_t num,uint8_t len,uint8_t size,uint8_t mode);
void GUI_DrawFont16(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *s,uint8_t mode);
void GUI_DrawFont24(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *s,uint8_t mode);
void GUI_DrawFont32(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *s,uint8_t mode);
void Show_Str(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *str,uint8_t size,uint8_t mode);

void Gui_StrCenter(uint16_t x, uint16_t y, uint16_t fc, uint16_t bc, uint8_t *str,uint8_t size,uint8_t mode);
void Gui_Drawbmp16(uint16_t x,uint16_t y,const unsigned char *p); //��ʾ40*40 QQͼƬ

#endif
