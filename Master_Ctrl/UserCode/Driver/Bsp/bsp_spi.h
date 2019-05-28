/*
*********************************************************************************************************
*
*
*                                       SPI Driver Package
*                                         SPI驱动程序包
* File : bsp_spi.h
* By   : 
* Date : 
* version : 
* NOTE(s) : 
* History : 
*
*
*********************************************************************************************************
*/
#ifndef __BSP_SPI_H
#define __BSP_SPI_H


/*
*********************************************************************************************************
*                                       INCLUDES            头文件
*********************************************************************************************************
*/
#include "bsp_sys.h"


/*
*********************************************************************************************************
*                                       CONSTANTS           常量
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                       DATA TYPE           数据类型
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                       VARIABLE STATEMENT  变量声明
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                       FUNCTION STATEMENT  函数声明
*********************************************************************************************************
*/
void    SPI1_Config(void);
void    SPI1_SetSpeed(uint8_t SpeedSet);
void    SPI1_WriteByte(uint8_t TxData);
uint8_t SPI1_ReadByte(void);

void    SPI3_Config(void);
void    SPI3_SetSpeed(uint8_t SpeedSet);
void    SPI3_WriteByte(uint8_t TxData);
uint8_t SPI3_ReadByte(void);

void    SPI_CrisEnter(void);
void    SPI_CrisExit(void);

void    SPI2_Init(void);
void    SPI2_SetSpeed(u8 SPI_BaudRatePrescaler);
u8      SPI2_ReadWriteByte(u8 TxData);
void    SPI2_WriteByte(uint8_t TxData);
uint8_t SPI2_ReadByte(void);

#endif


