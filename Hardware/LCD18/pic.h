#ifndef __PIC_H
#define __PIC_H 

//Image2LCD取模选项设置：水平扫描，16位，40X40，不包含图像头数据，自左至右，自顶至底，低位在前

//NJLS9头像
const unsigned char uluo_njls9_4045[3600] = { /* 0X00,0X10,0X28,0X00,0X2D,0X00,0X01,0X1B, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X41,0X08,0X82,0X10,0XC3,0X18,
0X04,0X21,0X04,0X21,0X04,0X21,0X04,0X21,0X04,0X21,0X04,0X21,0X04,0X21,0X04,0X21,
0XC3,0X18,0X82,0X10,0X41,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0XC3,0X18,0X04,0X21,0X86,0X31,0XC7,0X39,0X08,0X42,0X49,0X4A,0X49,0X4A,
0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,
0X49,0X4A,0X49,0X4A,0X08,0X42,0XC7,0X39,0X86,0X31,0X04,0X21,0XC3,0X18,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC1,0X18,0X85,0X31,
0X08,0X42,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X08,0X42,0X08,0X42,0X08,0X42,
0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,
0X08,0X42,0X08,0X42,0X08,0X42,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X49,0X4A,0X08,0X42,
0X85,0X31,0XC1,0X18,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X22,0X94,0XE2,0XF6,0XC9,0X5A,
0XC9,0X39,0X08,0X42,0X08,0X42,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,
0XC7,0X39,0XC6,0X39,0XC7,0X39,0XC7,0X31,0XC7,0X31,0XC7,0X39,0XC6,0X39,0XC7,0X39,
0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0X08,0X42,0X08,0X42,0XC9,0X39,
0XC9,0X5A,0XE2,0XF6,0X22,0X94,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X62,0XBD,0XE0,0XFF,0XE0,0XEE,0X08,0X42,
0X88,0X31,0X08,0X42,0X08,0X42,0X86,0X31,0X86,0X31,0XC6,0X31,0X86,0X39,0X86,0X39,
0XC7,0X41,0X07,0X42,0XC7,0X41,0XC7,0X41,0XC7,0X41,0XC7,0X41,0X08,0X42,0XC7,0X39,
0X86,0X39,0X86,0X39,0XC6,0X31,0X86,0X31,0X86,0X31,0X08,0X42,0X08,0X42,0X88,0X31,
0X08,0X42,0XE0,0XEE,0XE0,0XFF,0X62,0XBD,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X61,0X94,0XE0,0XFF,0X60,0XFF,0X61,0XEE,0X08,0X42,
0X88,0X31,0X08,0X42,0X45,0X29,0XCF,0X63,0X0D,0XB3,0X82,0X60,0XC7,0X21,0X86,0X31,
0X8A,0X5A,0X0C,0X63,0X8B,0X6A,0X4A,0X7A,0X8A,0X72,0XCB,0X62,0X0C,0X63,0X8A,0X52,
0X86,0X31,0XC7,0X21,0XC3,0X58,0X8B,0XAA,0X30,0X6C,0X45,0X29,0X08,0X42,0X88,0X31,
0X08,0X42,0X61,0XEE,0X60,0XFF,0XE0,0XFF,0X61,0X94,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X86,0X10,0X29,0XEF,0X60,0XFF,0X20,0XFF,0XA1,0XF6,0X47,0X4A,
0X88,0X31,0X08,0X42,0XC6,0X39,0X49,0X42,0X08,0X5A,0X45,0X49,0XC7,0X31,0XC6,0X39,
0X07,0X42,0X08,0X42,0X08,0X42,0X07,0X42,0X07,0X42,0X08,0X42,0X08,0X42,0XC7,0X41,
0XC6,0X39,0XC7,0X31,0X45,0X41,0X08,0X5A,0X49,0X4A,0XC7,0X39,0X08,0X42,0X88,0X31,
0X47,0X4A,0XA1,0XF6,0X20,0XFF,0X60,0XFF,0X29,0XEF,0X86,0X10,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XCB,0X31,0XB8,0XF7,0X20,0XFF,0X20,0XFF,0XE0,0XF6,0X47,0X52,
0X89,0X31,0X08,0X42,0X08,0X42,0X86,0X31,0X86,0X29,0X08,0X32,0XC7,0X39,0XC7,0X39,
0XC7,0X39,0X86,0X31,0XC7,0X31,0XC7,0X39,0XC7,0X39,0X86,0X31,0X86,0X31,0XC7,0X39,
0XC7,0X39,0XC7,0X39,0X07,0X3A,0XC7,0X29,0X86,0X31,0X08,0X42,0X08,0X42,0X89,0X31,
0X47,0X52,0XE0,0XF6,0X20,0XFF,0X20,0XFF,0XB8,0XF7,0XCB,0X31,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X4A,0X4A,0XFF,0XF7,0XE6,0XF6,0X20,0XFF,0XE0,0XFE,0X87,0X5A,
0X89,0X29,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,
0X08,0X42,0X08,0X42,0X08,0X42,0X86,0X31,0X86,0X31,0X08,0X42,0X08,0X42,0X08,0X42,
0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X89,0X29,
0X87,0X5A,0XE0,0XFE,0X20,0XFF,0XE6,0XF6,0XFF,0XF7,0X4A,0X4A,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0E,0X63,0XFF,0XF7,0XEE,0XEE,0X20,0XFF,0X20,0XFF,0X06,0X63,
0X49,0X29,0X86,0X31,0X8E,0X73,0X34,0XA5,0XB2,0X94,0XB2,0X94,0XB2,0X94,0XB2,0X94,
0XB2,0X94,0XB2,0X94,0XB2,0X94,0X8A,0X52,0X0C,0X63,0XF3,0X9C,0XB2,0X94,0XB2,0X94,
0XB2,0X94,0XB2,0X94,0XB2,0X94,0XB2,0X94,0X34,0XA5,0X8E,0X73,0X86,0X31,0X49,0X29,
0X06,0X63,0X20,0XFF,0X20,0XFF,0XEE,0XEE,0XFF,0XF7,0X0D,0X63,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X48,0X73,0XFF,0XFF,0XFA,0XDE,0XE0,0XFE,0X60,0XFF,0X46,0X73,
0X49,0X21,0X86,0X31,0XCF,0X7B,0XF7,0XBD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,
0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,
0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0XF7,0XBD,0XCF,0X7B,0X86,0X31,0X49,0X21,
0X46,0X73,0X60,0XFF,0XE0,0XFE,0XFA,0XDE,0XFF,0XFF,0X48,0X73,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XC0,0X41,0X2A,0XF7,0X3F,0XE7,0XE8,0XF6,0XA0,0XFF,0XC5,0X83,
0X09,0X21,0X86,0X31,0X8E,0X73,0XB6,0XB5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X34,0XA5,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XB6,0XB5,0X8E,0X73,0X86,0X31,0X09,0X21,
0XC5,0X83,0XA0,0XFF,0XE8,0XF6,0X3F,0XE7,0X2A,0XF7,0XC0,0X41,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XC6,0X18,0XA2,0XC5,0XFA,0XFF,0XF3,0XE6,0XE0,0XFF,0XA4,0X9C,
0X09,0X21,0X86,0X31,0X4D,0X6B,0X75,0XAD,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X75,0XAD,0X4D,0X6B,0X86,0X31,0X09,0X21,
0XA4,0X9C,0XE0,0XFF,0XF3,0XE6,0XFA,0XFF,0XA2,0XC5,0XC6,0X18,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XC8,0X18,0X21,0X8C,0XB2,0XFF,0XFD,0XDE,0XA0,0XFF,0X22,0XB5,
0X49,0X21,0X86,0X31,0X0C,0X63,0X75,0XAD,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X34,0XA5,0X75,0XAD,0X0C,0X63,0X86,0X31,0X49,0X21,
0X22,0XB5,0XA0,0XFF,0XFD,0XDE,0XB2,0XFF,0X21,0X8C,0XC8,0X18,0X00,0X00,0X00,0X00,
0X00,0X00,0X41,0X08,0X49,0X29,0XC3,0X62,0X2A,0XF7,0X3F,0XDF,0XA6,0XFF,0XA0,0XCD,
0X89,0X29,0X86,0X29,0XCB,0X5A,0X75,0XAD,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X34,0XA5,0X75,0XAD,0XCB,0X5A,0X86,0X29,0X89,0X29,
0XA0,0XCD,0XA6,0XFF,0X3F,0XDF,0X2A,0XF7,0XC3,0X62,0X49,0X29,0X41,0X08,0X00,0X00,
0X00,0X00,0X82,0X10,0XC9,0X39,0X05,0X42,0X65,0XDE,0X7F,0XE7,0X6F,0XFF,0X20,0XE6,
0XC8,0X39,0X46,0X29,0X8A,0X52,0X75,0XA5,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X34,0XA5,0X75,0XAD,0X8A,0X52,0X46,0X29,0XC8,0X39,
0X20,0XE6,0X6F,0XFF,0X7F,0XE7,0X65,0XDE,0X05,0X42,0XC9,0X39,0X82,0X10,0X00,0X00,
0X00,0X00,0XC2,0X18,0X09,0X42,0X87,0X31,0XA2,0XCD,0XBA,0XF7,0X3A,0XEF,0XA0,0XF6,
0X46,0X4A,0X47,0X21,0X8A,0X52,0X34,0XA5,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X34,0XA5,0X34,0XA5,0X8A,0X52,0X47,0X21,0X46,0X4A,
0XA0,0XF6,0X3A,0XEF,0XBA,0XF7,0XA2,0XCD,0X87,0X31,0X09,0X42,0X82,0X10,0X00,0X00,
0X00,0X00,0XC3,0X18,0X49,0X4A,0X49,0X29,0X60,0XBD,0XB2,0XFF,0XFF,0XDE,0X25,0XFF,
0XC3,0X62,0X08,0X21,0X49,0X4A,0XF3,0X9C,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X34,0XA5,0XF3,0X9C,0X49,0X4A,0X08,0X21,0XC3,0X62,
0X25,0XFF,0XFF,0XDE,0XB2,0XFF,0X60,0XBD,0X49,0X29,0X49,0X4A,0XC3,0X18,0X00,0X00,
0X00,0X00,0X04,0X21,0X49,0X4A,0X49,0X21,0XE0,0XB4,0XAC,0XFF,0XFF,0XCE,0XED,0XFF,
0X20,0X94,0XC8,0X10,0X48,0X4A,0XF3,0X9C,0X34,0XA5,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X34,0XA5,0XF3,0X9C,0X48,0X4A,0XC8,0X10,0X20,0X94,
0XED,0XFF,0XFF,0XCE,0XAC,0XFF,0XE0,0XB4,0X49,0X21,0X49,0X4A,0X04,0X21,0X00,0X00,
0X00,0X00,0X04,0X21,0X49,0X52,0XC9,0X10,0X60,0XA4,0XE6,0XFF,0XFF,0XD6,0XB5,0XFF,
0XA0,0XC5,0X07,0X21,0XC8,0X39,0XB2,0X94,0X75,0XAD,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X75,0XAD,0XB2,0X94,0XC8,0X39,0X07,0X21,0XA0,0XC5,
0XB5,0XFF,0XFF,0XD6,0XE6,0XFF,0X60,0XA4,0XC9,0X10,0X49,0X52,0X44,0X29,0X00,0X00,
0X00,0X00,0X45,0X31,0XCA,0X39,0X88,0X31,0X20,0XE6,0X61,0XFF,0XFA,0XDE,0X3D,0XE7,
0X24,0XF7,0X44,0X4A,0X08,0X21,0X71,0X8C,0X75,0XAD,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,
0XF3,0X9C,0XF3,0X9C,0XF3,0X9C,0X75,0XAD,0X71,0X8C,0X48,0X21,0X44,0X4A,0X24,0XF7,
0X3D,0XE7,0XFA,0XDE,0X61,0XFF,0X20,0XE6,0X88,0X31,0XCA,0X39,0X45,0X31,0X00,0X00,
0X00,0X00,0X86,0X29,0X0B,0X21,0XE4,0XAC,0XE0,0XFF,0XE1,0XFE,0XF9,0XDE,0XFF,0XD6,
0XEA,0XFF,0X60,0X9C,0X88,0X08,0X71,0X8C,0XF7,0XBD,0X75,0XAD,0X75,0XAD,0X75,0XAD,
0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,0X75,0XAD,
0X75,0XAD,0X75,0XAD,0X75,0XAD,0XF7,0XBD,0XB1,0X94,0X88,0X08,0X60,0X9C,0XEA,0XFF,
0XFF,0XD6,0XF9,0XDE,0XE1,0XFE,0XE0,0XFF,0XE4,0XAC,0X0B,0X21,0X86,0X31,0X00,0X00,
0X00,0X00,0X88,0X08,0XC6,0X83,0XE0,0XFF,0X20,0XFF,0XF3,0XE6,0XFB,0XDE,0XFF,0XD6,
0X73,0XF7,0XE0,0XF6,0X86,0X31,0X8D,0X52,0XF3,0X9C,0XB2,0X94,0X71,0X8C,0X71,0X8C,
0X71,0X8C,0X71,0X8C,0X71,0X8C,0X71,0X8C,0XB1,0X8C,0XB1,0X8C,0XB1,0X8C,0XB1,0X8C,
0XB1,0X8C,0XB1,0X8C,0XB2,0X94,0XF3,0X9C,0X8D,0X52,0X86,0X31,0XE0,0XF6,0X73,0XF7,
0XFF,0XD6,0XFB,0XDE,0XF3,0XE6,0X20,0XFF,0XE0,0XFF,0XC6,0X83,0X88,0X08,0X00,0X00,
0X01,0X00,0X86,0X5A,0XA0,0XFF,0X60,0XFF,0XF7,0XDE,0XED,0XEE,0XE6,0XF6,0XFF,0XDE,
0X7E,0XEF,0XE3,0XFF,0XE0,0XA4,0X88,0X10,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,
0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,
0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0X88,0X10,0XE0,0XA4,0XE3,0XFF,0X7E,0XEF,
0XFF,0XDE,0XE7,0XF6,0XED,0XEE,0XF7,0XDE,0X60,0XFF,0XA0,0XFF,0X86,0X5A,0X01,0X00,
0X02,0X00,0X61,0XD6,0XE0,0XFF,0XB7,0XDE,0XF2,0XE6,0XE0,0XFE,0X22,0XFF,0X78,0XCE,
0XFD,0XB5,0XEF,0XE6,0XA0,0XFF,0X06,0X6B,0XC8,0X10,0X07,0X42,0XC7,0X39,0XC7,0X39,
0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,0XC7,0X39,
0XC7,0X39,0XC7,0X39,0X07,0X42,0XC8,0X10,0X06,0X6B,0XE0,0XFF,0XEF,0XE6,0XBD,0XB5,
0X77,0XCE,0X22,0XFF,0XE0,0XFE,0XF2,0XE6,0XB7,0XDE,0XE0,0XFF,0X61,0XD6,0X02,0X00,
0XC0,0X18,0XE0,0XF6,0X36,0XF7,0XF3,0XE6,0XE0,0XFE,0XE0,0XFE,0X6A,0XFF,0XF9,0XBD,
0X4B,0X4A,0X8D,0X52,0XCB,0X62,0XA7,0XB5,0X86,0X52,0X09,0X21,0X08,0X42,0X08,0X42,
0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,
0X08,0X42,0X08,0X42,0X09,0X21,0X86,0X52,0XA7,0XB5,0XCB,0X5A,0X8D,0X52,0X4B,0X4A,
0XF9,0XBD,0X6A,0XFF,0XE0,0XFE,0XE0,0XFE,0XF3,0XE6,0X76,0XF7,0XE0,0XF6,0XC0,0X18,
0X00,0X29,0X37,0XE7,0X34,0XEF,0XE0,0XFE,0XE0,0XFE,0XEC,0XEE,0X35,0XE7,0X32,0XF7,
0XCE,0X5A,0X04,0X21,0X09,0X21,0XC9,0X82,0XE4,0XF6,0X06,0X42,0XCA,0X10,0XC8,0X39,
0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,0X08,0X42,
0XC8,0X39,0XCA,0X10,0X06,0X42,0XE4,0XF6,0XC9,0X82,0X49,0X21,0X04,0X21,0XCE,0X5A,
0X32,0XF7,0X35,0XEF,0XEC,0XEE,0XE0,0XFE,0XE0,0XFE,0X34,0XEF,0X37,0XE7,0X00,0X29,
0X48,0X29,0X2E,0XF7,0X20,0XFF,0XE0,0XFE,0XEC,0XEE,0XF7,0XDE,0XE0,0XFE,0XA7,0XFF,
0X4F,0X6B,0X4E,0X6B,0XFF,0XFF,0X95,0XAB,0X66,0XCC,0XE0,0XFF,0X05,0X6B,0X09,0X19,
0X09,0X19,0X88,0X31,0XC8,0X39,0X08,0X42,0X08,0X42,0XC8,0X39,0X88,0X31,0X09,0X19,
0X09,0X19,0X05,0X6B,0XE0,0XFF,0X66,0XCC,0X95,0XAB,0XFF,0XFF,0X4E,0X6B,0X4F,0X6B,
0XA7,0XFF,0XE0,0XFE,0XF7,0XDE,0XEC,0XEE,0XE0,0XFE,0X20,0XFF,0X2E,0XF7,0X48,0X29,
0X45,0X29,0X2D,0XFF,0X26,0XFF,0XEF,0XEE,0XF9,0XDE,0XE3,0XFE,0XE0,0XFE,0XA2,0XFF,
0XAD,0X9C,0XB6,0X8C,0XFF,0XFF,0X76,0XA5,0X04,0X40,0XA6,0XEE,0XE0,0XFF,0X62,0XC5,
0X46,0X6B,0X08,0X42,0X88,0X31,0X49,0X29,0X49,0X29,0X88,0X31,0X08,0X42,0X46,0X6B,
0X63,0XC5,0XE0,0XFF,0XA6,0XEE,0X04,0X40,0X76,0XA5,0XFF,0XFF,0XB6,0X8C,0XAD,0X9C,
0XA2,0XFF,0XE0,0XFE,0XE3,0XFE,0XF9,0XDE,0XEF,0XEE,0X26,0XFF,0X2D,0XFF,0X45,0X29,
0X04,0X21,0X3F,0XDF,0X3F,0XDF,0XFF,0XD6,0XF9,0XDE,0XF6,0XE6,0XF7,0XDE,0X32,0XEF,
0XB6,0XD6,0XF5,0X9C,0XF8,0XBD,0XCE,0X63,0X85,0X30,0X8B,0X92,0X64,0XFF,0XE0,0XFF,
0XA0,0XFF,0XA1,0XF6,0XE2,0XD5,0X63,0XC5,0X63,0XC5,0XE2,0XD5,0XA1,0XF6,0XA0,0XFF,
0XE0,0XFF,0X64,0XFF,0X8B,0X92,0X85,0X30,0XCE,0X63,0XF8,0XBD,0XF5,0X9C,0XB6,0XD6,
0X32,0XEF,0XF6,0XDE,0XF6,0XE6,0XF9,0XDE,0XFF,0XD6,0X3F,0XDF,0X3F,0XDF,0X04,0X21,
0X82,0X10,0XBA,0XD6,0X7D,0XEF,0XFB,0XDE,0XFC,0XDE,0XFD,0XDE,0XFF,0XD6,0XFF,0XD6,
0X3D,0XE7,0X7C,0XEF,0X78,0XCE,0XBB,0XDE,0XFD,0XD6,0XAE,0XC5,0X60,0XF6,0XE0,0XFE,
0XE0,0XFE,0X60,0XFF,0XA0,0XFF,0XA0,0XFF,0XA0,0XFF,0XA0,0XFF,0X60,0XFF,0XE0,0XFE,
0XE0,0XFE,0XA0,0XF6,0XAE,0XC5,0XFD,0XD6,0XBB,0XDE,0X78,0XCE,0X7C,0XEF,0X3D,0XE7,
0XFF,0XD6,0XFF,0XD6,0XFD,0XDE,0XFC,0XDE,0XFB,0XDE,0X7D,0XEF,0XBA,0XD6,0X82,0X10,
0X00,0X00,0X38,0XC6,0XBE,0XF7,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,
0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0X3C,0XE7,0X3F,0XE7,0X7B,0XEF,0XE7,0XF6,0XE0,0XFE,
0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,
0XE0,0XFE,0XE7,0XF6,0X7B,0XEF,0X3F,0XE7,0X3C,0XE7,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,
0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XBE,0XF7,0X38,0XC6,0X00,0X00,
0X00,0X00,0XB6,0XB5,0XBE,0XF7,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,
0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFA,0XDE,0XFE,0XDE,0XFF,0XD6,0XEE,0XEE,
0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,0XE0,0XFE,
0XEE,0XEE,0XFF,0XD6,0XFE,0XD6,0XFA,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,
0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XBE,0XF7,0XB6,0XB5,0X00,0X00,
0X00,0X00,0X34,0XA5,0XFF,0XFF,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,
0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFA,0XDE,0XFC,0XDE,0XFF,0XD6,
0XFA,0XDE,0XED,0XEE,0XE7,0XF6,0XE4,0XFE,0XE4,0XFE,0XE7,0XF6,0XED,0XEE,0XFA,0XDE,
0XFF,0XD6,0XFC,0XDE,0XFA,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,
0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFF,0XFF,0X34,0XA5,0X00,0X00,
0X00,0X00,0XF3,0X9C,0XFF,0XFF,0XFB,0XDE,0XFB,0XDE,0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,
0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,0XFB,0XDE,0X3B,0XE7,0X3B,0XE7,
0X3E,0XDF,0X3F,0XDF,0X3E,0XDF,0X3C,0XDF,0X3C,0XDF,0X3E,0XDF,0X3F,0XDF,0X3E,0XDF,
0X3B,0XE7,0X3B,0XE7,0XFB,0XDE,0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,
0X3C,0XE7,0X3C,0XE7,0X3C,0XE7,0XFB,0XDE,0XFB,0XDE,0XFF,0XFF,0XF2,0X9C,0X00,0X00,
0X00,0X00,0X30,0X84,0XBE,0XF7,0X79,0XCE,0X79,0XCE,0XBA,0XD6,0XFB,0XDE,0XBA,0XD6,
0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0X79,0XCE,0XBA,0XD6,0XFB,0XDE,
0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,0XFC,0XD6,0XFC,0XD6,0XFB,0XDE,0XFB,0XDE,0XFB,0XDE,
0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,
0XBA,0XD6,0XFA,0XDE,0XBA,0XD6,0X79,0XCE,0X79,0XCE,0XBE,0XF7,0X30,0X84,0X00,0X00,
0X00,0X00,0X4D,0X6B,0XBA,0XD6,0XB6,0XB5,0XF7,0XBD,0XF3,0X9C,0XCF,0X7B,0X30,0X8C,
0X30,0X84,0X30,0X84,0X30,0X8C,0XCF,0X7B,0XB2,0X94,0X38,0XC6,0XF3,0X9C,0XCF,0X7B,
0X71,0X8C,0X71,0X8C,0X70,0X84,0X71,0X8C,0X71,0X8C,0X70,0X84,0X71,0X8C,0X71,0X8C,
0XCF,0X7B,0XF3,0X9C,0X38,0XC6,0XB2,0X94,0XCF,0X7B,0X30,0X8C,0X30,0X84,0X30,0X84,
0X30,0X8C,0XCF,0X7B,0XF3,0X9C,0XF7,0XBD,0XB6,0XB5,0XBA,0XD6,0X4D,0X6B,0X00,0X00,
0X00,0X00,0X4D,0X6B,0X7D,0XEF,0X79,0XCE,0XFB,0XDE,0XF3,0X9C,0XCB,0X5A,0X8E,0X73,
0X8E,0X73,0X8E,0X73,0X8E,0X73,0XCB,0X5A,0XB2,0X94,0X3C,0XE7,0X34,0XA5,0XCB,0X5A,
0X8E,0X73,0XCF,0X7B,0X49,0X4A,0X30,0X84,0XCF,0X7B,0X49,0X4A,0XCF,0X7B,0XCF,0X7B,
0XCB,0X5A,0X34,0XA5,0X3C,0XE7,0XB2,0X94,0XCB,0X5A,0X8E,0X73,0X8E,0X73,0X8E,0X73,
0X8E,0X73,0XCB,0X5A,0XF3,0X9C,0XFB,0XDE,0X79,0XCE,0X7D,0XEF,0X4D,0X6B,0X00,0X00,
0X00,0X00,0X0C,0X63,0X7D,0XEF,0X79,0XCE,0XFB,0XDE,0XB2,0X94,0X8A,0X52,0X4D,0X6B,
0X4D,0X6B,0X4D,0X6B,0X4D,0X6B,0X8A,0X52,0X71,0X8C,0X3C,0XE7,0X30,0X84,0X0B,0X63,
0X4D,0X6B,0X4D,0X6B,0X0C,0X5B,0X4C,0X63,0X4C,0X63,0X0C,0X63,0X4D,0X6B,0X4D,0X6B,
0X0B,0X63,0X30,0X84,0X3C,0XE7,0X71,0X8C,0X8A,0X52,0X4D,0X6B,0X4D,0X6B,0X4D,0X6B,
0X4D,0X6B,0X8A,0X52,0XB2,0X94,0XFB,0XDE,0X79,0XCE,0X7D,0XEF,0X0C,0X63,0X00,0X00,
0X00,0X00,0X8A,0X52,0X3C,0XE7,0X79,0XCE,0XBA,0XD6,0X75,0XAD,0XCF,0X7B,0X71,0X8C,
0X71,0X8C,0X71,0X8C,0X71,0X8C,0XCF,0X7B,0X34,0XA5,0X3C,0XDF,0X8A,0X52,0X03,0X21,
0X85,0X31,0X45,0X29,0X07,0X3A,0XC7,0X41,0X08,0X4A,0X49,0X52,0X85,0X31,0X85,0X29,
0X03,0X21,0X8A,0X52,0X3C,0XDF,0X34,0XA5,0XCF,0X7B,0X71,0X8C,0X71,0X8C,0X71,0X8C,
0X71,0X8C,0XCF,0X7B,0X75,0XAD,0XBA,0XD6,0X79,0XCE,0X3C,0XE7,0X8A,0X52,0X00,0X00,
0X00,0X00,0X49,0X4A,0X3C,0XE7,0X79,0XCE,0X38,0XC6,0X79,0XCE,0XBA,0XD6,0XBA,0XD6,
0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0X38,0XC6,0X08,0X42,0X04,0X21,
0X86,0X31,0X0D,0X8B,0X8E,0XAB,0X31,0XC4,0X8F,0X9B,0XCC,0X7A,0X0D,0X83,0X86,0X39,
0X04,0X21,0X08,0X42,0X38,0XC6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,0XBA,0XD6,
0XBA,0XD6,0XBA,0XD6,0X79,0XCE,0X38,0XC6,0X79,0XCE,0X3C,0XE7,0X49,0X4A,0X00,0X00,
0X00,0X00,0X08,0X42,0X3C,0XE7,0X79,0XCE,0X79,0XCE,0X79,0XCE,0X79,0XCE,0X79,0XCE,
0X79,0XCE,0X79,0XCE,0X79,0XCE,0X79,0XCE,0XFB,0XDE,0XF7,0XBD,0XC7,0X41,0X86,0X31,
0X49,0X4A,0X4E,0XAB,0X8A,0XAA,0XCC,0X9A,0X08,0X4A,0XC2,0X08,0X8B,0X6A,0X8A,0X5A,
0X86,0X31,0XC7,0X41,0XF7,0XBD,0XFB,0XDE,0X79,0XCE,0X79,0XCE,0X79,0XCE,0X79,0XCE,
0X79,0XCE,0X79,0XCE,0X79,0XCE,0X79,0XCE,0X79,0XCE,0X3C,0XE7,0X08,0X42,0X00,0X00,
0X00,0X00,0X86,0X31,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0XBA,0XD6,0XBA,0XD6,0XFB,0XDE,
0X3C,0XE7,0X3C,0XE7,0X7D,0XEF,0X7D,0XEF,0XBE,0XF7,0XB2,0X94,0X41,0X08,0XC3,0X18,
0X04,0X21,0X8F,0XAB,0X8F,0XCB,0XD0,0XBB,0X4E,0X8B,0X8A,0X5A,0X4D,0X8B,0X05,0X29,
0XC3,0X18,0X41,0X08,0XB2,0X94,0XBE,0XF7,0X7D,0XEF,0X7D,0XEF,0X3C,0XE7,0X3C,0XE7,
0XFB,0XDE,0XBA,0XD6,0XBA,0XD6,0X79,0XCE,0XBA,0XD6,0XFB,0XDE,0X86,0X31,0X00,0X00,
0X00,0X00,0X45,0X29,0X7D,0XEF,0X7D,0XEF,0XFB,0XDE,0XBA,0XD6,0X79,0XCE,0XF7,0XBD,
0X34,0XA5,0XB2,0X94,0XCF,0X7B,0XCB,0X5A,0XC7,0X39,0X41,0X08,0X00,0X00,0X00,0X00,
0X00,0X00,0X45,0X39,0X08,0X5A,0XC8,0X51,0XC8,0X51,0X08,0X5A,0X46,0X41,0X00,0X00,
0X00,0X00,0X00,0X00,0X41,0X08,0XC7,0X39,0XCB,0X5A,0XCF,0X7B,0XB2,0X94,0X34,0XA5,
0XF7,0XBD,0X78,0XCE,0XBA,0XD6,0XFB,0XDE,0X7D,0XEF,0X7D,0XEF,0X45,0X29,0X00,0X00,
0X00,0X00,0X82,0X10,0X49,0X4A,0X08,0X42,0X86,0X31,0X04,0X21,0XC3,0X18,0X41,0X08,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X41,0X08,0XC3,0X18,0X04,0X21,0X86,0X31,0X08,0X42,0X49,0X4A,0X82,0X10,0X00,0X00,
};

const unsigned char swjtu_logo_4045[3600] = { /* 0X00,0X10,0X28,0X00,0X2D,0X00,0X01,0X1B, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X40,0X08,0X09,0X01,
0X0A,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,
0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,
0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,0X09,0X01,
0X4A,0X01,0X41,0X08,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X45,0X00,0X7E,0X55,
0X3F,0XBF,0XFF,0XBE,0XFF,0XBE,0X3F,0XBF,0X3F,0XBF,0XBF,0XDF,0X7F,0XD7,0XFF,0XB6,
0XBF,0XAE,0XBF,0XAE,0XBF,0XAE,0XBF,0XAE,0X3F,0XC7,0XBF,0XD7,0X7F,0XD7,0X7F,0XD7,
0X7F,0XD7,0X7F,0XD7,0XBF,0XDF,0XBF,0XDF,0XBF,0XD7,0XBF,0XDF,0XBF,0XD7,0X3F,0XBF,
0X3F,0X76,0XC9,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X15,0X13,0XFF,0XEF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0X9D,0XBA,0X95,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFC,0XC6,0XBB,0X95,0XFB,0X95,0XFB,0X95,
0XFB,0X95,0XFB,0X95,0X3B,0X9E,0XFB,0X9D,0XFB,0X9D,0XBA,0X8D,0X7E,0XE7,0XFF,0XFF,
0XFF,0XFF,0XD8,0X2B,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X93,0X0A,0X7F,0XC7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0X15,0X0B,0X92,0X01,0XBC,0XC6,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XD7,0X3B,0X92,0X01,0XD4,0X02,0XD6,0X33,
0X36,0X44,0XD4,0X02,0X54,0X02,0X37,0X44,0X7A,0X85,0X96,0X2B,0X55,0X23,0XFF,0XFF,
0XFF,0XFF,0XBF,0XDF,0X16,0X13,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X15,0X1B,0X7F,0XCF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3D,0XDF,0XD5,0X1A,0XD5,0X02,
0X77,0X54,0X7E,0XEF,0XFF,0XFF,0XFF,0XFF,0XB8,0X54,0X14,0X02,0X78,0X54,0XBA,0X95,
0XBA,0X95,0XB8,0X5C,0XD4,0X0A,0X3B,0XA6,0XBE,0XFF,0XFA,0XA5,0X53,0X02,0X7A,0X85,
0XFF,0XFF,0XFF,0XFF,0X7F,0XD7,0X57,0X1B,0X88,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X83,0X08,0X8C,0X01,0XBA,0X4C,0XFF,0XE7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XD7,0X33,0X95,0X02,
0X13,0X02,0X3B,0XA6,0XFF,0XFF,0XFF,0XFF,0XB8,0X54,0X54,0X02,0X78,0X4C,0X79,0X7D,
0X79,0X7D,0XB8,0X5C,0X54,0X02,0XFB,0X9D,0XFE,0XFF,0X3B,0XAE,0X94,0X02,0X94,0X02,
0X7C,0XBE,0XFF,0XFF,0XFF,0XFF,0XBF,0XE7,0XBB,0X44,0XCE,0X01,0X83,0X08,0X00,0X00,
0X00,0X00,0X0A,0X01,0XFF,0X6D,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3B,0XAE,0X55,0X1B,0X54,0X02,0XD5,0X02,
0X94,0X02,0X7B,0XB6,0XFF,0XFF,0XFF,0XFF,0XB8,0X54,0X14,0X02,0XB8,0X54,0X7B,0XB6,
0XBC,0XBE,0XF9,0X64,0XD5,0X02,0X3B,0XB6,0X7C,0XEF,0X7B,0XB6,0X56,0X13,0XD5,0X02,
0XD4,0X02,0X7B,0XB6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3F,0X76,0X8D,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0X7E,0X96,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X39,0X75,0X52,0X01,0X54,0X02,0XFA,0X95,0XBC,0XBE,
0X54,0X02,0X37,0X44,0XFF,0XFF,0XFF,0XFF,0XB8,0X54,0X54,0X02,0XD6,0X2B,0XFA,0X95,
0XFA,0XA5,0X96,0X23,0XD5,0X02,0X77,0X54,0X15,0X1B,0X36,0X44,0X15,0X0B,0X94,0X02,
0X14,0X02,0XD3,0X01,0X77,0X54,0X3D,0XDF,0XFF,0XFF,0X3F,0XBF,0X4B,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0XFE,0X85,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X3D,0XDF,0X37,0X4C,0X13,0X02,0X37,0X4C,0XFD,0XD6,0XFF,0XFF,0XFF,0XFF,
0X39,0X6D,0XD2,0X01,0XFD,0XCE,0XFF,0XFF,0XB8,0X54,0X54,0X02,0XD7,0X33,0XFB,0X9D,
0XFB,0X9D,0X7A,0X85,0XBA,0X95,0X7A,0X7D,0XF9,0X64,0X7A,0X85,0XBA,0X8D,0X7A,0X85,
0XBA,0X8D,0X7A,0X7D,0XF8,0X64,0X7B,0XBE,0XFF,0XFF,0XFF,0XB6,0X4B,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0XFE,0X85,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,
0XF9,0X6C,0X13,0X02,0X94,0X02,0X3B,0XA6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XBE,0XF7,0X53,0X02,0XF9,0X6C,0XFF,0XFF,0XB8,0X5C,0XD3,0X01,0X39,0X6D,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XF7,0X7E,0X9E,0X4B,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0XFD,0X85,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBA,0X8D,0X54,0X02,
0X13,0X02,0XF9,0X74,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XD7,0X33,0X78,0X4C,0XFF,0XFF,0XB8,0X5C,0XD5,0X02,0X56,0X1B,0X15,0X0B,
0X15,0X0B,0X54,0X02,0X7A,0X85,0X7D,0XE7,0X79,0X85,0XBA,0X95,0X7B,0XB6,0XBA,0X95,
0XBC,0XCE,0X7B,0XB6,0XD5,0X02,0X15,0X03,0X15,0X0B,0XD9,0X1B,0X0D,0X12,0X00,0X00,
0X00,0X00,0XC9,0X00,0X3E,0X8E,0XFF,0XFF,0X3B,0XAE,0X15,0X1B,0X13,0X02,0X77,0X54,
0X3D,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XF8,0X64,0X39,0X75,0XFF,0XFF,0XB8,0X54,0X95,0X02,0X96,0X23,0XD7,0X33,
0XD7,0X33,0X16,0X23,0XFB,0X9D,0X3D,0XDF,0XFA,0X9D,0X3B,0XAE,0X7B,0XBE,0XFA,0XA5,
0XFC,0XC6,0XBC,0XBE,0XD6,0X2B,0XD7,0X33,0XD7,0X3B,0X3A,0X2C,0XCD,0X11,0X00,0X00,
0X00,0X00,0XC9,0X00,0XFF,0XAE,0XFF,0XFF,0X94,0X02,0X37,0X44,0X7E,0XE7,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X7D,0XE7,0XFF,0XFF,0XFF,0XFF,0XB8,0X5C,0XD3,0X01,0X39,0X6D,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XAE,0X0B,0X01,0X00,0X00,
0X00,0X00,0X09,0X01,0XBD,0X7D,0X3D,0XDF,0XB9,0X9D,0X7D,0XEF,0XBE,0XFF,0X3D,0XDF,
0X3D,0XDF,0X3D,0XD7,0XFD,0XC6,0X3D,0XDF,0X3D,0XDF,0X3D,0XDF,0XFD,0XD6,0X3D,0XD7,
0X3D,0XDF,0XBE,0XEF,0X3D,0XD7,0XFD,0XCE,0X78,0X54,0X54,0X0A,0X78,0X4C,0X3E,0XDF,
0XBE,0XEF,0X7D,0XE7,0X3D,0XDF,0X3D,0XD7,0X7E,0XE7,0X3D,0XDF,0XFD,0XCE,0XFD,0XC6,
0X3D,0XD7,0X7D,0XE7,0X7D,0XE7,0X7D,0XE7,0X7D,0XE7,0X7E,0X96,0X4C,0X01,0X00,0X00,
0X00,0X00,0XCB,0X11,0XD9,0X1B,0X55,0X1B,0XD6,0X3B,0X55,0X23,0X55,0X1B,0X55,0X1B,
0XD4,0X02,0X15,0X0B,0XD6,0X3B,0X15,0X13,0X55,0X1B,0X15,0X13,0X15,0X13,0X15,0X13,
0X55,0X1B,0X15,0X0B,0X96,0X33,0XD6,0X3B,0X56,0X1B,0X16,0X13,0XD7,0X3B,0X78,0X54,
0X55,0X13,0X15,0X13,0X15,0X13,0X55,0X1B,0X55,0X13,0XD5,0X02,0X37,0X44,0XBA,0X8D,
0X96,0X2B,0X14,0X0B,0X55,0X1B,0X55,0X1B,0X55,0X1B,0XD9,0X1B,0X0D,0X12,0X00,0X00,
0X00,0X00,0XCB,0X11,0XDA,0X1B,0X16,0X13,0X16,0X13,0X16,0X13,0X16,0X13,0XD5,0X02,
0X56,0X23,0XFA,0X9D,0XB9,0X8D,0X15,0X13,0X16,0X0B,0X95,0X02,0XBA,0X8D,0X79,0X7D,
0X95,0X02,0X15,0X0B,0XFA,0X9D,0X39,0X75,0XD5,0X02,0X15,0X13,0XFA,0X9D,0X79,0X85,
0X95,0X02,0X94,0X02,0XF8,0X64,0X79,0X7D,0X13,0X02,0X96,0X23,0X3C,0XD7,0XBE,0XF7,
0XD7,0X33,0X95,0X02,0X16,0X13,0X16,0X13,0X16,0X13,0XDA,0X1B,0X0D,0X12,0X00,0X00,
0X00,0X00,0XCB,0X11,0XDA,0X23,0X56,0X1B,0X56,0X1B,0X56,0X1B,0X56,0X1B,0X54,0X02,
0X39,0X7D,0X7D,0XE7,0X7B,0XB6,0XD6,0X33,0X94,0X02,0XB8,0X64,0X7D,0XE7,0XBA,0X8D,
0X95,0X02,0XD6,0X33,0X3B,0XAE,0X96,0X2B,0XD5,0X02,0XD6,0X33,0XFC,0XCE,0XF9,0X6C,
0X54,0X02,0XD6,0X33,0XFC,0XCE,0X37,0X44,0XD5,0X02,0X77,0X54,0XFC,0XCE,0X7B,0XBE,
0X96,0X23,0X16,0X13,0X56,0X1B,0X56,0X1B,0X56,0X1B,0XDA,0X23,0X0D,0X12,0X00,0X00,
0X00,0X00,0XCB,0X11,0XDA,0X23,0X56,0X1B,0X56,0X1B,0X56,0X13,0X15,0X0B,0XB8,0X5C,
0X3B,0XAE,0XFD,0XD6,0XBA,0X95,0X54,0X02,0X16,0X13,0X7B,0XBE,0X7D,0XE7,0X37,0X4C,
0X94,0X02,0XD7,0X3B,0XFC,0XD6,0XB8,0X5C,0X94,0X02,0X39,0X7D,0X7D,0XF7,0X37,0X44,
0X95,0X0A,0X7A,0X85,0X3B,0XA6,0X37,0X3C,0X15,0X0B,0X77,0X54,0X7B,0XB6,0XB8,0X5C,
0X95,0X02,0X56,0X1B,0X56,0X1B,0X56,0X1B,0X56,0X1B,0XDA,0X1B,0X0D,0X12,0X00,0X00,
0X00,0X00,0XCB,0X11,0XD9,0X13,0XD5,0X02,0XD5,0X02,0XD5,0X02,0XD4,0X02,0X77,0X4C,
0XD6,0X3B,0XB7,0X5C,0X55,0X23,0X54,0X02,0X55,0X13,0X77,0X54,0X37,0X44,0X15,0X0B,
0XD4,0X0A,0X37,0X44,0XB8,0X5C,0X39,0X75,0X55,0X1B,0XD7,0X3B,0X39,0X7D,0XD6,0X43,
0X95,0X23,0XD6,0X33,0XD5,0X0A,0X36,0X44,0X94,0X02,0XD4,0X0A,0X38,0X7D,0X96,0X23,
0X94,0X02,0XD5,0X02,0XD5,0X02,0XD5,0X02,0XD5,0X02,0X99,0X13,0X0D,0X12,0X00,0X00,
0X00,0X00,0X09,0X01,0X7C,0X6D,0XBC,0XC6,0XBC,0XC6,0XBC,0XC6,0XBC,0XC6,0XBC,0XBE,
0XBC,0XBE,0X3B,0XA6,0XFC,0XC6,0XFD,0XCE,0XBC,0XC6,0X3B,0XAE,0X3B,0XA6,0XBC,0XBE,
0XFC,0XCE,0XBA,0X8D,0X54,0X02,0X15,0X0B,0X96,0X23,0X54,0X02,0X37,0X44,0XFD,0XCE,
0XBC,0XBE,0X7C,0XB6,0X7C,0XB6,0X7C,0XAE,0XFC,0XC6,0XBC,0XBE,0XFC,0XCE,0XBC,0XC6,
0XBC,0XC6,0XBC,0XC6,0XBC,0XC6,0XBC,0XC6,0XBC,0XC6,0XFD,0X7D,0X8C,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0X7E,0X96,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFC,0XCE,0XB9,0X9D,0XBC,0XC6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X3D,0XDF,0XD5,0X02,0X16,0X0B,0X16,0X13,0X94,0X02,0XF9,0X6C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XB6,0X0B,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0XFE,0X85,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0X9D,
0XBC,0XBE,0X3D,0XDF,0XBC,0XBE,0X3B,0XAE,0X3D,0XDF,0XFD,0XC6,0X3B,0XAE,0XFF,0XFF,
0XFF,0XFF,0XBC,0XBE,0XD5,0X02,0X56,0X13,0X56,0X1B,0X54,0X02,0X39,0X6D,0XFF,0XFF,
0XBA,0X8D,0X7A,0X7D,0XBB,0X8D,0X39,0X75,0X3A,0X75,0X3A,0X75,0X3A,0X75,0X3A,0X75,
0X7A,0X85,0XFB,0X95,0XF9,0X6C,0X3D,0XDF,0XFF,0XFF,0XBF,0XA6,0X4B,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0XFE,0X85,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBE,0XEF,0X7B,0XBE,
0XFF,0XFF,0XFD,0XCE,0X7A,0X85,0XFB,0X9D,0XB8,0X64,0XFA,0X9D,0X79,0X85,0X3D,0XDF,
0XFF,0XFF,0XFC,0XC6,0X13,0X02,0XB8,0X5C,0X3B,0XA6,0X54,0X02,0XB8,0X5C,0XFF,0XFF,
0XBA,0X95,0X15,0X13,0XD6,0X33,0XFB,0X9D,0XFB,0X9D,0XFB,0X9D,0XFB,0X9D,0XFB,0X9D,
0XF9,0X6C,0X94,0X02,0XF8,0X64,0X3D,0XDF,0XFF,0XFF,0XBF,0XA6,0X4B,0X01,0X00,0X00,
0X00,0X00,0XC9,0X00,0XFD,0X85,0XFF,0XFF,0XFF,0XFF,0X7E,0XE7,0XB9,0X95,0X7D,0XE7,
0X3D,0XDF,0X39,0X75,0XBC,0XBE,0X3B,0XAE,0X37,0X44,0XFE,0XFF,0XFF,0XFF,0XFA,0X95,
0X3B,0XA6,0XFC,0XC6,0X37,0X4C,0XFC,0XD6,0XFD,0XD6,0XF8,0X6C,0XF9,0X64,0XFF,0XFF,
0XFF,0XFF,0XBA,0X95,0X96,0X33,0XBC,0XC6,0X3D,0XDF,0XBC,0XBE,0X3D,0XD7,0X3D,0XDF,
0X39,0X75,0X55,0X23,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XA6,0X4B,0X01,0X00,0X00,
0X00,0X00,0XC8,0X00,0XBD,0X7D,0XFF,0XFF,0XFF,0XFF,0X3B,0XAE,0X38,0X75,0X3D,0XDF,
0XFC,0XC6,0XF8,0X6C,0X7A,0X8D,0X3D,0XDF,0XFF,0XFF,0XFF,0XFF,0XFA,0X9D,0X7C,0XB6,
0X3B,0XAE,0XFD,0XCE,0XF8,0X5C,0XFB,0X95,0X79,0X7D,0XB9,0X85,0XBA,0X85,0XFF,0XFF,
0XFF,0XFF,0X7E,0XE7,0X39,0X7D,0XF8,0X64,0X55,0X23,0XFB,0X9D,0X77,0X4C,0X96,0X2B,
0XF9,0X6C,0X7B,0XAE,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XA6,0X4B,0X01,0X00,0X00,
0X00,0X00,0X46,0X00,0X7C,0X6D,0XFF,0XFF,0XFF,0XFF,0XFD,0XD6,0XB8,0X64,0X7B,0XB6,
0XFF,0XFF,0XBA,0X8D,0X39,0X75,0XFF,0XFF,0XFF,0XFF,0X3B,0XAE,0XD7,0X3B,0XFA,0X9D,
0X7E,0XEF,0XBE,0XE7,0X13,0X02,0X79,0X85,0X3D,0XDF,0X94,0X02,0XB8,0X54,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X37,0X44,0X3D,0XCF,0XB8,0X64,0XBA,0X8D,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XBF,0XA6,0X0A,0X01,0X00,0X00,
0X00,0X00,0X02,0X00,0X37,0X3C,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X37,0X4C,0XD4,0X0A,
0XBE,0XF7,0XFA,0X9D,0X39,0X75,0XFC,0XD6,0X7D,0XE7,0XBC,0XC6,0X78,0X54,0XB9,0X8D,
0XFC,0XCE,0XBC,0XC6,0X15,0X13,0X39,0X75,0XFB,0X9D,0X96,0X2B,0X78,0X4C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X39,0X75,0X51,0X01,0X56,0X23,0XBE,0XEF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3E,0X96,0X87,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X10,0X02,0XBF,0XDF,0XFF,0XFF,0X3D,0XDF,0X3A,0XAE,0XFA,0X9D,
0XFF,0XFF,0XBE,0XEF,0X77,0X4C,0X7C,0XAE,0XBF,0XF7,0XBC,0XBE,0XBA,0X95,0XBE,0XEF,
0XB7,0X5C,0X77,0X54,0XF9,0X6C,0XF9,0X6C,0X78,0X4C,0X39,0X75,0X37,0X44,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFA,0X9D,0XD4,0X12,0X36,0X3C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3A,0X65,0X02,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X88,0X00,0X7F,0X96,0XFF,0XFF,0X7D,0XE7,0XBC,0XC6,0XBA,0X8D,
0X7B,0XB6,0X7B,0XB6,0XF8,0X6C,0X7E,0XDF,0X7E,0XEF,0XFF,0XFF,0XBC,0XC6,0XBC,0XBE,
0XBC,0XBE,0X3B,0XA6,0X77,0X4C,0XB8,0X54,0XD7,0X2B,0XB7,0X54,0X78,0X4C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3D,0XDF,0XFB,0X9D,0XFA,0X8D,0XD6,0X33,0XFD,0XCE,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XF7,0XD2,0X1A,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0X00,0X96,0X2B,0XBF,0XE7,0XBC,0XBE,0XF8,0X64,0X7A,0X85,
0XFC,0XD6,0X7E,0XE7,0X78,0X4C,0XB8,0X5C,0XFA,0X9D,0XFC,0XCE,0XBA,0X95,0X79,0X7D,
0XFF,0XFF,0X3D,0XD7,0XD4,0X02,0X56,0X1B,0X56,0X1B,0X94,0X02,0XF9,0X64,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFB,0X9D,0XFD,0XCE,0X7C,0XB6,0XB8,0X5C,0XFD,0XCE,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XAE,0XC9,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X0A,0X01,0XFF,0XAE,0X3B,0XB6,0XF8,0X64,0XFF,0XFF,
0XFD,0XD6,0XBC,0XC6,0X37,0X4C,0XB8,0X6C,0XFF,0XFF,0XF8,0X64,0X55,0X1B,0X79,0X85,
0XFC,0XC6,0X3D,0XDF,0X54,0X02,0XD6,0X33,0XB8,0X5C,0XD3,0X01,0XF9,0X6C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFA,0X95,0XFF,0XFF,0XFB,0X9D,0X7A,0X85,0X7D,0XE7,
0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XD7,0X33,0X01,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0X56,0X23,0X7F,0XDF,0XF8,0X64,0XFA,0X95,
0X79,0X85,0XF8,0X6C,0X37,0X3C,0X56,0X23,0X3B,0XAE,0X79,0X85,0X15,0X13,0X7A,0X85,
0XFD,0XCE,0XFD,0XCE,0X94,0X02,0XBA,0X95,0XBC,0XC6,0XD5,0X1A,0X78,0X4C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0X3D,0XD7,0X3B,0XAE,0XFF,0XFF,0X3B,0XAE,0X3C,0XAE,0X7D,0XE7,
0X3D,0XDF,0XFF,0XFF,0XFF,0XFF,0XBF,0X9E,0XC9,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X46,0X00,0X3C,0X55,0XFF,0XFF,0XFC,0XC6,
0X7E,0XEF,0XFD,0XCE,0X56,0X23,0XF9,0X64,0X7B,0XB6,0XFA,0X9D,0X37,0X4C,0XBE,0XEF,
0XFF,0XFF,0X3B,0X9E,0X77,0X4C,0X7B,0XBE,0X7A,0X85,0X78,0X4C,0XF9,0X6C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XBC,0XC6,0XFD,0XD6,0XFF,0XFF,0XBC,0XC6,0X7C,0XB6,0XBE,0XF7,
0XFC,0XD6,0XFF,0XFF,0XFF,0XEF,0XD4,0X12,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X4D,0X01,0X3E,0X86,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XB8,0X54,0X7C,0XB6,0XFF,0XFF,0XFD,0XC6,0XBA,0X95,0XFF,0XFF,
0XFF,0XFF,0X7C,0XB6,0X77,0X54,0X39,0X75,0XB8,0X5C,0XD6,0X33,0X7B,0XB6,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF7,0XFC,0XD6,0XFF,0XFF,0XFF,0XFF,0XFD,0XD6,0X7B,0XAE,0XFF,0XFF,
0XBE,0XF7,0XFF,0XFF,0XBB,0X44,0X04,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X12,0X02,0X7F,0X9E,
0XFF,0XFF,0X3B,0XAE,0XD4,0X02,0X96,0X23,0X3B,0XA6,0XFB,0X95,0X15,0X13,0X7E,0XDF,
0XFF,0XFF,0XFD,0XC6,0X54,0X02,0XF8,0X6C,0XFC,0XCE,0X15,0X0B,0X39,0X75,0XFF,0XFF,
0XFF,0XFF,0XBE,0XF7,0XBE,0XF7,0XFF,0XFF,0XFF,0XFF,0X7E,0XE7,0XFC,0XC6,0XFF,0XFF,
0XFF,0XFF,0X7D,0X5D,0X88,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0X00,0XD5,0X02,
0XBD,0X7D,0X3B,0XAE,0XF8,0X64,0XF8,0X6C,0X3B,0XAE,0X7B,0XB6,0X37,0X4C,0XBA,0X95,
0XFF,0XFF,0XBC,0XB6,0X56,0X23,0X39,0X75,0X79,0X8D,0X78,0X54,0X37,0X3C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFE,0XF7,0XFE,0XFF,0XFF,0XFF,
0XBE,0X6D,0X0B,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0X00,
0X93,0X02,0XBF,0XA6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0X7C,0XAE,0X77,0X54,0X77,0X4C,0X15,0X0B,0X77,0X54,0XF9,0X64,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3C,0X5D,
0X0C,0X01,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X01,0X00,0X11,0X02,0X7D,0X5D,0XFF,0XF7,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFC,0XC6,0XD4,0X02,0X15,0X0B,0X56,0X13,0X54,0X02,0XF9,0X6C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X7F,0XD7,0X3A,0X34,0XC9,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X4C,0X01,0X39,0X2C,0XFF,0XB6,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XBC,0XC6,0XD5,0X02,0X56,0X13,0X56,0X1B,0X95,0X02,0XF9,0X64,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X3E,0X8E,0X93,0X0A,0X45,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X85,0X00,0X52,0X02,0X3C,0X5D,0X3F,0XCF,0XFF,0XFF,
0XFF,0XFF,0X3D,0XD7,0XD5,0X02,0X56,0X13,0X56,0X1B,0X94,0X02,0XF9,0X6C,0XFF,0XFF,
0XFF,0XFF,0XFF,0XF7,0XBF,0X9E,0XD7,0X2B,0X0B,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XC9,0X00,0X92,0X02,0XFB,0X54,
0X3F,0XBF,0XBD,0XB6,0X15,0X0B,0X56,0X1B,0X56,0X1B,0XD5,0X02,0X3A,0X65,0X7F,0XD7,
0XFE,0X85,0X96,0X2B,0X4C,0X01,0X03,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X87,0X00,
0XCE,0X01,0X55,0X1B,0XD9,0X23,0X3A,0X24,0X3A,0X24,0XD9,0X23,0X96,0X23,0X50,0X0A,
0XC9,0X00,0X02,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X42,0X00,0X07,0X11,0XCC,0X11,0X0D,0X12,0X48,0X11,0X83,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};

//电池图标
const unsigned char battery_2012[480] = { /* 0X00,0X10,0X14,0X00,0X0C,0X00,0X01,0X1B, */
0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X41,0X90,0X00,0XF8,0XC3,0XF8,0X00,0X00,0XB0,0X85,0XEA,0X56,0XEA,0X56,
0XAD,0X6E,0XAF,0X7E,0XEA,0X56,0XEA,0X56,0XB2,0X96,0XEA,0X56,0XEA,0X56,0XEA,0X56,
0X78,0XC6,0X79,0XCE,0X79,0XCE,0X79,0XCE,0X86,0X31,0X00,0X78,0X00,0XF8,0X82,0XF8,
0X00,0X00,0XAC,0X66,0X20,0X0F,0X20,0X0F,0X22,0X1F,0X24,0X2F,0X20,0X0F,0X20,0X0F,
0X2A,0X57,0X20,0X0F,0X20,0X0F,0X20,0X0F,0XFB,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X08,0X42,0X00,0X78,0X00,0XF8,0X82,0XF8,0X00,0X00,0XAC,0X66,0X20,0X0F,0X20,0X0F,
0X22,0X1F,0X24,0X2F,0X20,0X0F,0X20,0X0F,0X2A,0X57,0X20,0X0F,0X20,0X0F,0X20,0X0F,
0XFB,0XDF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X86,0X31,0X00,0X18,0X45,0X51,0XC3,0X48,
0X00,0X00,0XB0,0X86,0XA0,0X0E,0XA0,0X0E,0XE6,0X3E,0XEA,0X56,0XA0,0X0E,0XA0,0X0E,
0X2F,0X87,0XA0,0X0E,0XA0,0X0E,0XA0,0X0E,0XFD,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X45,0X29,0X00,0X00,0X7D,0XEF,0X8E,0X73,0X00,0X00,0X71,0X96,0X60,0X06,0X60,0X06,
0XE8,0X46,0XEC,0X66,0X60,0X06,0X60,0X06,0X31,0X97,0X60,0X06,0X60,0X06,0X60,0X06,
0XFD,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X45,0X29,0X00,0X00,0XFB,0XDE,0X4D,0X6B,
0X00,0X00,0X71,0X96,0X60,0X06,0X60,0X06,0XE8,0X46,0XEC,0X66,0X60,0X06,0X60,0X06,
0X31,0X97,0X60,0X06,0X60,0X06,0X60,0X06,0XFD,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X45,0X29,0X00,0X00,0X82,0X10,0X08,0X42,0X00,0X00,0X71,0X96,0X60,0X06,0X60,0X06,
0XE8,0X46,0XEC,0X66,0X60,0X06,0X60,0X06,0X31,0X97,0X60,0X06,0X60,0X06,0X60,0X06,
0XFD,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X45,0X29,0X00,0X00,0X82,0X10,0X08,0X42,
0X00,0X00,0X71,0X96,0X60,0X06,0X60,0X06,0XE8,0X46,0XEC,0X66,0X60,0X06,0X60,0X06,
0X31,0X97,0X60,0X06,0X60,0X06,0X60,0X06,0XFD,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X86,0X31,0X00,0X28,0XC3,0X58,0X82,0X58,0X00,0X00,0X71,0X96,0X60,0X06,0X60,0X06,
0XE8,0X46,0XEC,0X66,0X60,0X06,0X60,0X06,0X31,0X97,0X60,0X06,0X60,0X06,0X60,0X06,
0XFD,0XEF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X08,0X42,0X00,0X78,0X00,0XF8,0X82,0XF8,
0X00,0X00,0X72,0X95,0X70,0X86,0X70,0X86,0X72,0X96,0X73,0X9E,0X70,0X86,0XAE,0X75,
0XF0,0X84,0XEC,0X64,0XEC,0X6C,0XEC,0X64,0XF2,0X94,0XF3,0X9C,0XF3,0XA4,0XB6,0XB5,
0X86,0X31,0X00,0X78,0X00,0XF8,0X82,0XF8,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X41,0X90,0X00,0XF8,0XC3,0XF8,
};


#endif
