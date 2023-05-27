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

#include "stdio.h"      //������Ҫ��ͷ�ļ�
#include "stdarg.h"	    //������Ҫ��ͷ�ļ� 
#include "string.h"     //������Ҫ��ͷ�ļ�
#include "usart.h"

#define USART1_TXBUFF_SIZE   256    //���崮��1 ���ͻ�������С 256�ֽ�

void u1_printf(char*,...) ;         //����1 printf����

#ifdef __cplusplus
}
#endif

#endif /* __MCU_LOG_H */
