/**
  ******************************************************************************
  * @file    usart.h
  * @brief   This file contains all the function prototypes for
  *          the usart.c file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

extern UART_HandleTypeDef huart6;

/* USER CODE BEGIN Private defines */
#define USART6_READ_MAX 256
typedef struct {
    uint8_t readData;
    uint8_t readBuf[USART6_READ_MAX];
    uint8_t readLen;
    uint8_t readFlag;
}USART6_DEF;
extern USART6_DEF usart6_def;
/* USER CODE END Private defines */

void MX_USART6_UART_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __USART_H__ */

