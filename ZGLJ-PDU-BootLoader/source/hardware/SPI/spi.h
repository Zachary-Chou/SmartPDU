#ifndef __SPI_H
#define __SPI_H
#include <stdint.h>
#include "stm32f10x.h"


										  
void SPI2_Init(void);			 //初始化SPI口
void SPI2_SetSpeed(uint8_t SpeedSet); //设置SPI速度   
uint8_t SPI2_ReadWriteByte(uint8_t TxData);//SPI总线读写一个字节
		 
#endif

