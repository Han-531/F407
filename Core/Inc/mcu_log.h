/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : mcu_log.h
  * @brief          : Header for mcu_log.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MCU_LOG_H
#define __MCU_LOG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stdio.h"      //包含需要的头文件
#include "stdarg.h"	    //包含需要的头文件 
#include "string.h"     //包含需要的头文件
#include "usart.h"

#define USART1_TXBUFF_SIZE   256    //定义串口1 发送缓冲区大小 256字节

void u1_printf(char*,...) ;         //串口1 printf函数

#ifdef __cplusplus
}
#endif

#endif /* __MCU_LOG_H */
