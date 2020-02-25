# 基于STM32H743-Apollo的RT-Thread Nano移植
**2020/2/25 Revision 0.2**

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

基于正点原子ALIENTEK阿波罗Apollo开发板STM32H743II移植，修改USART1作为FinSH组件调试串口，LED0红灯常亮，LED1绿灯1Hz闪烁


####2020/2/25更新：
- 移植修改 ATK -  SPI1和硬件I2C1驱动
- 移植修改 全动 1.8"TFT LCD驱动 (ST7735S)
- 添加RTT-Nano测试线程tid1 ： 打印开机时间
- 更换为J-Link调试


*by luoxingyang000, Nanjing*