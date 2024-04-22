ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 1


   1              		.cpu cortex-m7
   2              		.arch armv7e-m
   3              		.fpu fpv5-sp-d16
   4              		.eabi_attribute 27, 1
   5              		.eabi_attribute 28, 1
   6              		.eabi_attribute 20, 1
   7              		.eabi_attribute 21, 1
   8              		.eabi_attribute 23, 3
   9              		.eabi_attribute 24, 1
  10              		.eabi_attribute 25, 1
  11              		.eabi_attribute 26, 1
  12              		.eabi_attribute 30, 1
  13              		.eabi_attribute 34, 1
  14              		.eabi_attribute 18, 4
  15              		.file	"main.cc"
  16              		.text
  17              	.Ltext0:
  18              		.cfi_sections	.debug_frame
  19              		.file 1 "Core/Src/main.cc"
  20              		.section	.text.Error_Handler,"ax",%progbits
  21              		.align	1
  22              		.global	Error_Handler
  23              		.syntax unified
  24              		.thumb
  25              		.thumb_func
  27              	Error_Handler:
  28              		.fnstart
  29              	.LFB143:
   1:Core/Src/main.cc **** /* USER CODE BEGIN Header */
   2:Core/Src/main.cc **** /**
   3:Core/Src/main.cc ****   ******************************************************************************
   4:Core/Src/main.cc ****   * @file           : main.c
   5:Core/Src/main.cc ****   * @brief          : Main program body
   6:Core/Src/main.cc ****   ******************************************************************************
   7:Core/Src/main.cc ****   * @attention
   8:Core/Src/main.cc ****   *
   9:Core/Src/main.cc ****   * Copyright (c) 2024 STMicroelectronics.
  10:Core/Src/main.cc ****   * All rights reserved.
  11:Core/Src/main.cc ****   *
  12:Core/Src/main.cc ****   * This software is licensed under terms that can be found in the LICENSE file
  13:Core/Src/main.cc ****   * in the root directory of this software component.
  14:Core/Src/main.cc ****   * If no LICENSE file comes with this software, it is provided AS-IS.
  15:Core/Src/main.cc ****   *
  16:Core/Src/main.cc ****   ******************************************************************************
  17:Core/Src/main.cc ****   */
  18:Core/Src/main.cc **** /* USER CODE END Header */
  19:Core/Src/main.cc **** /* Includes ------------------------------------------------------------------*/
  20:Core/Src/main.cc **** // #include <arm_cmse.h>
  21:Core/Src/main.cc **** 
  22:Core/Src/main.cc **** #include "main.h"
  23:Core/Src/main.cc **** 
  24:Core/Src/main.cc **** 
  25:Core/Src/main.cc **** /* Private includes ----------------------------------------------------------*/
  26:Core/Src/main.cc **** /* USER CODE BEGIN Includes */
  27:Core/Src/main.cc **** 
  28:Core/Src/main.cc **** /* USER CODE END Includes */
  29:Core/Src/main.cc **** 
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 2


  30:Core/Src/main.cc **** /* Private typedef -----------------------------------------------------------*/
  31:Core/Src/main.cc **** /* USER CODE BEGIN PTD */
  32:Core/Src/main.cc **** 
  33:Core/Src/main.cc **** /* USER CODE END PTD */
  34:Core/Src/main.cc **** 
  35:Core/Src/main.cc **** /* Private define ------------------------------------------------------------*/
  36:Core/Src/main.cc **** /* USER CODE BEGIN PD */
  37:Core/Src/main.cc **** /* USER CODE END PD */
  38:Core/Src/main.cc **** 
  39:Core/Src/main.cc **** /* Private macro -------------------------------------------------------------*/
  40:Core/Src/main.cc **** /* USER CODE BEGIN PM */
  41:Core/Src/main.cc **** 
  42:Core/Src/main.cc **** /* USER CODE END PM */
  43:Core/Src/main.cc **** 
  44:Core/Src/main.cc **** /* Private variables ---------------------------------------------------------*/
  45:Core/Src/main.cc **** 
  46:Core/Src/main.cc **** /* USER CODE BEGIN PV */
  47:Core/Src/main.cc **** 
  48:Core/Src/main.cc **** /* USER CODE END PV */
  49:Core/Src/main.cc **** 
  50:Core/Src/main.cc **** /* Private function prototypes -----------------------------------------------*/
  51:Core/Src/main.cc **** void SystemClock_Config(void);
  52:Core/Src/main.cc **** /* USER CODE BEGIN PFP */
  53:Core/Src/main.cc **** 
  54:Core/Src/main.cc **** /* USER CODE END PFP */
  55:Core/Src/main.cc **** 
  56:Core/Src/main.cc **** /* Private user code ---------------------------------------------------------*/
  57:Core/Src/main.cc **** /* USER CODE BEGIN 0 */
  58:Core/Src/main.cc **** 
  59:Core/Src/main.cc **** /* USER CODE END 0 */
  60:Core/Src/main.cc **** 
  61:Core/Src/main.cc **** /**
  62:Core/Src/main.cc ****   * @brief  The application entry point.
  63:Core/Src/main.cc ****   * @retval int
  64:Core/Src/main.cc ****   */
  65:Core/Src/main.cc **** int main(void)
  66:Core/Src/main.cc **** {
  67:Core/Src/main.cc ****   /* USER CODE BEGIN 1 */
  68:Core/Src/main.cc **** 
  69:Core/Src/main.cc ****   /* USER CODE END 1 */
  70:Core/Src/main.cc **** 
  71:Core/Src/main.cc ****   /* MCU Configuration--------------------------------------------------------*/ 
  72:Core/Src/main.cc **** 
  73:Core/Src/main.cc ****   /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  74:Core/Src/main.cc ****   HAL_Init();
  75:Core/Src/main.cc **** 
  76:Core/Src/main.cc ****   /* USER CODE BEGIN Init */
  77:Core/Src/main.cc **** 
  78:Core/Src/main.cc ****   /* USER CODE END Init */
  79:Core/Src/main.cc **** 
  80:Core/Src/main.cc ****   /* Configure the system clock */
  81:Core/Src/main.cc ****   SystemClock_Config();
  82:Core/Src/main.cc **** 
  83:Core/Src/main.cc ****   /* USER CODE BEGIN SysInit */
  84:Core/Src/main.cc **** 
  85:Core/Src/main.cc ****   /* USER CODE END SysInit */
  86:Core/Src/main.cc **** 
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 3


  87:Core/Src/main.cc ****   /* Initialize all configured peripherals */
  88:Core/Src/main.cc ****   MX_GPIO_Init();
  89:Core/Src/main.cc ****   /* USER CODE BEGIN 2 */
  90:Core/Src/main.cc ****   MX_USART6_UART_Init();
  91:Core/Src/main.cc ****   /* USER CODE END 2 */
  92:Core/Src/main.cc **** 
  93:Core/Src/main.cc ****   /* Infinite loop */
  94:Core/Src/main.cc ****   /* USER CODE BEGIN WHILE */
  95:Core/Src/main.cc ****   while (1)
  96:Core/Src/main.cc ****   {
  97:Core/Src/main.cc ****     /* USER CODE END WHILE */
  98:Core/Src/main.cc **** 
  99:Core/Src/main.cc ****     /* USER CODE BEGIN 3 */
 100:Core/Src/main.cc ****     HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_4);
 101:Core/Src/main.cc ****     HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_3);
 102:Core/Src/main.cc ****     HAL_Delay(110);
 103:Core/Src/main.cc ****   }
 104:Core/Src/main.cc ****   /* USER CODE END 3 */
 105:Core/Src/main.cc **** }
 106:Core/Src/main.cc **** 
 107:Core/Src/main.cc **** /**
 108:Core/Src/main.cc ****   * @brief System Clock Configuration
 109:Core/Src/main.cc ****   * @retval None
 110:Core/Src/main.cc ****   */
 111:Core/Src/main.cc **** void SystemClock_Config(void)
 112:Core/Src/main.cc **** {
 113:Core/Src/main.cc ****   RCC_OscInitTypeDef RCC_OscInitStruct = {0};
 114:Core/Src/main.cc ****   RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
 115:Core/Src/main.cc **** 
 116:Core/Src/main.cc ****   /** Configure the main internal regulator output voltage
 117:Core/Src/main.cc ****   */
 118:Core/Src/main.cc ****   __HAL_RCC_PWR_CLK_ENABLE();
 119:Core/Src/main.cc ****   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
 120:Core/Src/main.cc **** 
 121:Core/Src/main.cc ****   /** Initializes the RCC Oscillators according to the specified parameters
 122:Core/Src/main.cc ****   * in the RCC_OscInitTypeDef structure.
 123:Core/Src/main.cc ****   */
 124:Core/Src/main.cc ****   RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
 125:Core/Src/main.cc ****   RCC_OscInitStruct.HSEState = RCC_HSE_ON;
 126:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
 127:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
 128:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLM = 25;
 129:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLN = 432;
 130:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
 131:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLQ = 2;
 132:Core/Src/main.cc ****   if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
 133:Core/Src/main.cc ****   {
 134:Core/Src/main.cc ****     Error_Handler();
 135:Core/Src/main.cc ****   }
 136:Core/Src/main.cc **** 
 137:Core/Src/main.cc ****   /** Activate the Over-Drive mode
 138:Core/Src/main.cc ****   */
 139:Core/Src/main.cc ****   if (HAL_PWREx_EnableOverDrive() != HAL_OK)
 140:Core/Src/main.cc ****   {
 141:Core/Src/main.cc ****     Error_Handler();
 142:Core/Src/main.cc ****   }
 143:Core/Src/main.cc **** 
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 4


 144:Core/Src/main.cc ****   /** Initializes the CPU, AHB and APB buses clocks
 145:Core/Src/main.cc ****   */
 146:Core/Src/main.cc ****   RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
 147:Core/Src/main.cc ****                               |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
 148:Core/Src/main.cc ****   RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
 149:Core/Src/main.cc ****   RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
 150:Core/Src/main.cc ****   RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
 151:Core/Src/main.cc ****   RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
 152:Core/Src/main.cc **** 
 153:Core/Src/main.cc ****   if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK)
 154:Core/Src/main.cc ****   {
 155:Core/Src/main.cc ****     Error_Handler();
 156:Core/Src/main.cc ****   }
 157:Core/Src/main.cc **** }
 158:Core/Src/main.cc **** 
 159:Core/Src/main.cc **** /* USER CODE BEGIN 4 */
 160:Core/Src/main.cc **** 
 161:Core/Src/main.cc **** /* USER CODE END 4 */
 162:Core/Src/main.cc **** 
 163:Core/Src/main.cc **** /**
 164:Core/Src/main.cc ****   * @brief  This function is executed in case of error occurrence.
 165:Core/Src/main.cc ****   * @retval None
 166:Core/Src/main.cc ****   */
 167:Core/Src/main.cc **** void Error_Handler(void)
 168:Core/Src/main.cc **** {
  30              		.loc 1 168 1 view -0
  31              		.cfi_startproc
  32              		@ Volatile: function does not return.
  33              		@ args = 0, pretend = 0, frame = 0
  34              		@ frame_needed = 0, uses_anonymous_args = 0
  35              		@ link register save eliminated.
 169:Core/Src/main.cc ****   /* USER CODE BEGIN Error_Handler_Debug */
 170:Core/Src/main.cc ****   /* User can add his own implementation to report the HAL error return state */
 171:Core/Src/main.cc ****   __disable_irq();
  36              		.loc 1 171 3 view .LVU1
  37              	.LBB4:
  38              	.LBI4:
  39              		.file 2 "Drivers/CMSIS/Include/cmsis_gcc.h"
   1:Drivers/CMSIS/Include/cmsis_gcc.h **** /**************************************************************************//**
   2:Drivers/CMSIS/Include/cmsis_gcc.h ****  * @file     cmsis_gcc.h
   3:Drivers/CMSIS/Include/cmsis_gcc.h ****  * @brief    CMSIS compiler GCC header file
   4:Drivers/CMSIS/Include/cmsis_gcc.h ****  * @version  V5.0.4
   5:Drivers/CMSIS/Include/cmsis_gcc.h ****  * @date     09. April 2018
   6:Drivers/CMSIS/Include/cmsis_gcc.h ****  ******************************************************************************/
   7:Drivers/CMSIS/Include/cmsis_gcc.h **** /*
   8:Drivers/CMSIS/Include/cmsis_gcc.h ****  * Copyright (c) 2009-2018 Arm Limited. All rights reserved.
   9:Drivers/CMSIS/Include/cmsis_gcc.h ****  *
  10:Drivers/CMSIS/Include/cmsis_gcc.h ****  * SPDX-License-Identifier: Apache-2.0
  11:Drivers/CMSIS/Include/cmsis_gcc.h ****  *
  12:Drivers/CMSIS/Include/cmsis_gcc.h ****  * Licensed under the Apache License, Version 2.0 (the License); you may
  13:Drivers/CMSIS/Include/cmsis_gcc.h ****  * not use this file except in compliance with the License.
  14:Drivers/CMSIS/Include/cmsis_gcc.h ****  * You may obtain a copy of the License at
  15:Drivers/CMSIS/Include/cmsis_gcc.h ****  *
  16:Drivers/CMSIS/Include/cmsis_gcc.h ****  * www.apache.org/licenses/LICENSE-2.0
  17:Drivers/CMSIS/Include/cmsis_gcc.h ****  *
  18:Drivers/CMSIS/Include/cmsis_gcc.h ****  * Unless required by applicable law or agreed to in writing, software
  19:Drivers/CMSIS/Include/cmsis_gcc.h ****  * distributed under the License is distributed on an AS IS BASIS, WITHOUT
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 5


  20:Drivers/CMSIS/Include/cmsis_gcc.h ****  * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  21:Drivers/CMSIS/Include/cmsis_gcc.h ****  * See the License for the specific language governing permissions and
  22:Drivers/CMSIS/Include/cmsis_gcc.h ****  * limitations under the License.
  23:Drivers/CMSIS/Include/cmsis_gcc.h ****  */
  24:Drivers/CMSIS/Include/cmsis_gcc.h **** 
  25:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef __CMSIS_GCC_H
  26:Drivers/CMSIS/Include/cmsis_gcc.h **** #define __CMSIS_GCC_H
  27:Drivers/CMSIS/Include/cmsis_gcc.h **** 
  28:Drivers/CMSIS/Include/cmsis_gcc.h **** /* ignore some GCC warnings */
  29:Drivers/CMSIS/Include/cmsis_gcc.h **** #pragma GCC diagnostic push
  30:Drivers/CMSIS/Include/cmsis_gcc.h **** #pragma GCC diagnostic ignored "-Wsign-conversion"
  31:Drivers/CMSIS/Include/cmsis_gcc.h **** #pragma GCC diagnostic ignored "-Wconversion"
  32:Drivers/CMSIS/Include/cmsis_gcc.h **** #pragma GCC diagnostic ignored "-Wunused-parameter"
  33:Drivers/CMSIS/Include/cmsis_gcc.h **** 
  34:Drivers/CMSIS/Include/cmsis_gcc.h **** /* Fallback for __has_builtin */
  35:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef __has_builtin
  36:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __has_builtin(x) (0)
  37:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  38:Drivers/CMSIS/Include/cmsis_gcc.h **** 
  39:Drivers/CMSIS/Include/cmsis_gcc.h **** /* CMSIS compiler specific defines */
  40:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __ASM
  41:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __ASM                                  __asm
  42:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  43:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __INLINE
  44:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __INLINE                               inline
  45:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  46:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __STATIC_INLINE
  47:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __STATIC_INLINE                        static inline
  48:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  49:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __STATIC_FORCEINLINE                 
  50:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __STATIC_FORCEINLINE                   __attribute__((always_inline)) static inline
  51:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif                                           
  52:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __NO_RETURN
  53:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __NO_RETURN                            __attribute__((__noreturn__))
  54:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  55:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __USED
  56:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __USED                                 __attribute__((used))
  57:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  58:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __WEAK
  59:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __WEAK                                 __attribute__((weak))
  60:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  61:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __PACKED
  62:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __PACKED                               __attribute__((packed, aligned(1)))
  63:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  64:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __PACKED_STRUCT
  65:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __PACKED_STRUCT                        struct __attribute__((packed, aligned(1)))
  66:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  67:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __PACKED_UNION
  68:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __PACKED_UNION                         union __attribute__((packed, aligned(1)))
  69:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  70:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __UNALIGNED_UINT32        /* deprecated */
  71:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic push
  72:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wpacked"
  73:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wattributes"
  74:Drivers/CMSIS/Include/cmsis_gcc.h ****   struct __attribute__((packed)) T_UINT32 { uint32_t v; };
  75:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic pop
  76:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __UNALIGNED_UINT32(x)                  (((struct T_UINT32 *)(x))->v)
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 6


  77:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  78:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __UNALIGNED_UINT16_WRITE
  79:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic push
  80:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wpacked"
  81:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wattributes"
  82:Drivers/CMSIS/Include/cmsis_gcc.h ****   __PACKED_STRUCT T_UINT16_WRITE { uint16_t v; };
  83:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic pop
  84:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __UNALIGNED_UINT16_WRITE(addr, val)    (void)((((struct T_UINT16_WRITE *)(void *)(addr))-
  85:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  86:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __UNALIGNED_UINT16_READ
  87:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic push
  88:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wpacked"
  89:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wattributes"
  90:Drivers/CMSIS/Include/cmsis_gcc.h ****   __PACKED_STRUCT T_UINT16_READ { uint16_t v; };
  91:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic pop
  92:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __UNALIGNED_UINT16_READ(addr)          (((const struct T_UINT16_READ *)(const void *)(add
  93:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
  94:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __UNALIGNED_UINT32_WRITE
  95:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic push
  96:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wpacked"
  97:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wattributes"
  98:Drivers/CMSIS/Include/cmsis_gcc.h ****   __PACKED_STRUCT T_UINT32_WRITE { uint32_t v; };
  99:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic pop
 100:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __UNALIGNED_UINT32_WRITE(addr, val)    (void)((((struct T_UINT32_WRITE *)(void *)(addr))-
 101:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
 102:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __UNALIGNED_UINT32_READ
 103:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic push
 104:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wpacked"
 105:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic ignored "-Wattributes"
 106:Drivers/CMSIS/Include/cmsis_gcc.h ****   __PACKED_STRUCT T_UINT32_READ { uint32_t v; };
 107:Drivers/CMSIS/Include/cmsis_gcc.h ****   #pragma GCC diagnostic pop
 108:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __UNALIGNED_UINT32_READ(addr)          (((const struct T_UINT32_READ *)(const void *)(add
 109:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
 110:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __ALIGNED
 111:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __ALIGNED(x)                           __attribute__((aligned(x)))
 112:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
 113:Drivers/CMSIS/Include/cmsis_gcc.h **** #ifndef   __RESTRICT
 114:Drivers/CMSIS/Include/cmsis_gcc.h ****   #define __RESTRICT                             __restrict
 115:Drivers/CMSIS/Include/cmsis_gcc.h **** #endif
 116:Drivers/CMSIS/Include/cmsis_gcc.h **** 
 117:Drivers/CMSIS/Include/cmsis_gcc.h **** 
 118:Drivers/CMSIS/Include/cmsis_gcc.h **** /* ###########################  Core Function Access  ########################### */
 119:Drivers/CMSIS/Include/cmsis_gcc.h **** /** \ingroup  CMSIS_Core_FunctionInterface
 120:Drivers/CMSIS/Include/cmsis_gcc.h ****     \defgroup CMSIS_Core_RegAccFunctions CMSIS Core Register Access Functions
 121:Drivers/CMSIS/Include/cmsis_gcc.h ****   @{
 122:Drivers/CMSIS/Include/cmsis_gcc.h ****  */
 123:Drivers/CMSIS/Include/cmsis_gcc.h **** 
 124:Drivers/CMSIS/Include/cmsis_gcc.h **** /**
 125:Drivers/CMSIS/Include/cmsis_gcc.h ****   \brief   Enable IRQ Interrupts
 126:Drivers/CMSIS/Include/cmsis_gcc.h ****   \details Enables IRQ interrupts by clearing the I-bit in the CPSR.
 127:Drivers/CMSIS/Include/cmsis_gcc.h ****            Can only be executed in Privileged modes.
 128:Drivers/CMSIS/Include/cmsis_gcc.h ****  */
 129:Drivers/CMSIS/Include/cmsis_gcc.h **** __STATIC_FORCEINLINE void __enable_irq(void)
 130:Drivers/CMSIS/Include/cmsis_gcc.h **** {
 131:Drivers/CMSIS/Include/cmsis_gcc.h ****   __ASM volatile ("cpsie i" : : : "memory");
 132:Drivers/CMSIS/Include/cmsis_gcc.h **** }
 133:Drivers/CMSIS/Include/cmsis_gcc.h **** 
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 7


 134:Drivers/CMSIS/Include/cmsis_gcc.h **** 
 135:Drivers/CMSIS/Include/cmsis_gcc.h **** /**
 136:Drivers/CMSIS/Include/cmsis_gcc.h ****   \brief   Disable IRQ Interrupts
 137:Drivers/CMSIS/Include/cmsis_gcc.h ****   \details Disables IRQ interrupts by setting the I-bit in the CPSR.
 138:Drivers/CMSIS/Include/cmsis_gcc.h ****            Can only be executed in Privileged modes.
 139:Drivers/CMSIS/Include/cmsis_gcc.h ****  */
 140:Drivers/CMSIS/Include/cmsis_gcc.h **** __STATIC_FORCEINLINE void __disable_irq(void)
  40              		.loc 2 140 27 view .LVU2
  41              	.LBB5:
 141:Drivers/CMSIS/Include/cmsis_gcc.h **** {
 142:Drivers/CMSIS/Include/cmsis_gcc.h ****   __ASM volatile ("cpsid i" : : : "memory");
  42              		.loc 2 142 3 view .LVU3
  43              		.syntax unified
  44              	@ 142 "Drivers/CMSIS/Include/cmsis_gcc.h" 1
  45 0000 72B6     		cpsid i
  46              	@ 0 "" 2
  47              		.thumb
  48              		.syntax unified
  49              	.L2:
  50              	.LBE5:
  51              	.LBE4:
 172:Core/Src/main.cc ****   while (1)
  52              		.loc 1 172 3 view .LVU4
  53              		.loc 1 172 3 view .LVU5
  54 0002 FEE7     		b	.L2
  55              		.cfi_endproc
  56              	.LFE143:
  57              		.cantunwind
  58              		.fnend
  60              		.section	.text._Z18SystemClock_Configv,"ax",%progbits
  61              		.align	1
  62              		.global	_Z18SystemClock_Configv
  63              		.syntax unified
  64              		.thumb
  65              		.thumb_func
  67              	_Z18SystemClock_Configv:
  68              		.fnstart
  69              	.LFB142:
 112:Core/Src/main.cc ****   RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  70              		.loc 1 112 1 view -0
  71              		.cfi_startproc
  72              		@ args = 0, pretend = 0, frame = 80
  73              		@ frame_needed = 0, uses_anonymous_args = 0
  74 0000 00B5     		push	{lr}
  75              		.save {lr}
  76              	.LCFI0:
  77              		.cfi_def_cfa_offset 4
  78              		.cfi_offset 14, -4
  79              		.pad #84
  80 0002 95B0     		sub	sp, sp, #84
  81              	.LCFI1:
  82              		.cfi_def_cfa_offset 88
 113:Core/Src/main.cc ****   RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  83              		.loc 1 113 3 view .LVU7
 113:Core/Src/main.cc ****   RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  84              		.loc 1 113 22 is_stmt 0 view .LVU8
  85 0004 3022     		movs	r2, #48
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 8


  86 0006 0021     		movs	r1, #0
  87 0008 08A8     		add	r0, sp, #32
  88 000a FFF7FEFF 		bl	memset
  89              	.LVL0:
 114:Core/Src/main.cc **** 
  90              		.loc 1 114 3 is_stmt 1 view .LVU9
 114:Core/Src/main.cc **** 
  91              		.loc 1 114 22 is_stmt 0 view .LVU10
  92 000e 0023     		movs	r3, #0
  93 0010 0393     		str	r3, [sp, #12]
  94 0012 0493     		str	r3, [sp, #16]
  95 0014 0593     		str	r3, [sp, #20]
  96 0016 0693     		str	r3, [sp, #24]
  97 0018 0793     		str	r3, [sp, #28]
 118:Core/Src/main.cc ****   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  98              		.loc 1 118 3 is_stmt 1 view .LVU11
  99              	.LBB6:
 118:Core/Src/main.cc ****   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
 100              		.loc 1 118 3 view .LVU12
 118:Core/Src/main.cc ****   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
 101              		.loc 1 118 3 view .LVU13
 102 001a 234B     		ldr	r3, .L11
 103 001c 1A6C     		ldr	r2, [r3, #64]
 104 001e 42F08052 		orr	r2, r2, #268435456
 105 0022 1A64     		str	r2, [r3, #64]
 118:Core/Src/main.cc ****   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
 106              		.loc 1 118 3 view .LVU14
 107 0024 1B6C     		ldr	r3, [r3, #64]
 108 0026 03F08053 		and	r3, r3, #268435456
 109 002a 0193     		str	r3, [sp, #4]
 118:Core/Src/main.cc ****   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
 110              		.loc 1 118 3 view .LVU15
 111 002c 019B     		ldr	r3, [sp, #4]
 112              	.LBE6:
 118:Core/Src/main.cc ****   __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
 113              		.loc 1 118 3 view .LVU16
 119:Core/Src/main.cc **** 
 114              		.loc 1 119 3 view .LVU17
 115              	.LBB7:
 119:Core/Src/main.cc **** 
 116              		.loc 1 119 3 view .LVU18
 119:Core/Src/main.cc **** 
 117              		.loc 1 119 3 view .LVU19
 118 002e 1F4B     		ldr	r3, .L11+4
 119 0030 1A68     		ldr	r2, [r3]
 120 0032 42F44042 		orr	r2, r2, #49152
 121 0036 1A60     		str	r2, [r3]
 119:Core/Src/main.cc **** 
 122              		.loc 1 119 3 view .LVU20
 123 0038 1B68     		ldr	r3, [r3]
 124 003a 03F44043 		and	r3, r3, #49152
 125 003e 0293     		str	r3, [sp, #8]
 119:Core/Src/main.cc **** 
 126              		.loc 1 119 3 view .LVU21
 127 0040 029B     		ldr	r3, [sp, #8]
 128              	.LBE7:
 119:Core/Src/main.cc **** 
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 9


 129              		.loc 1 119 3 view .LVU22
 124:Core/Src/main.cc ****   RCC_OscInitStruct.HSEState = RCC_HSE_ON;
 130              		.loc 1 124 3 view .LVU23
 124:Core/Src/main.cc ****   RCC_OscInitStruct.HSEState = RCC_HSE_ON;
 131              		.loc 1 124 36 is_stmt 0 view .LVU24
 132 0042 0123     		movs	r3, #1
 133 0044 0893     		str	r3, [sp, #32]
 125:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
 134              		.loc 1 125 3 is_stmt 1 view .LVU25
 125:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
 135              		.loc 1 125 30 is_stmt 0 view .LVU26
 136 0046 4FF48033 		mov	r3, #65536
 137 004a 0993     		str	r3, [sp, #36]
 126:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
 138              		.loc 1 126 3 is_stmt 1 view .LVU27
 126:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
 139              		.loc 1 126 34 is_stmt 0 view .LVU28
 140 004c 0223     		movs	r3, #2
 141 004e 0E93     		str	r3, [sp, #56]
 127:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLM = 25;
 142              		.loc 1 127 3 is_stmt 1 view .LVU29
 127:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLM = 25;
 143              		.loc 1 127 35 is_stmt 0 view .LVU30
 144 0050 4FF48002 		mov	r2, #4194304
 145 0054 0F92     		str	r2, [sp, #60]
 128:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLN = 432;
 146              		.loc 1 128 3 is_stmt 1 view .LVU31
 128:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLN = 432;
 147              		.loc 1 128 30 is_stmt 0 view .LVU32
 148 0056 1922     		movs	r2, #25
 149 0058 1092     		str	r2, [sp, #64]
 129:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
 150              		.loc 1 129 3 is_stmt 1 view .LVU33
 129:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
 151              		.loc 1 129 30 is_stmt 0 view .LVU34
 152 005a 4FF4D872 		mov	r2, #432
 153 005e 1192     		str	r2, [sp, #68]
 130:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLQ = 2;
 154              		.loc 1 130 3 is_stmt 1 view .LVU35
 130:Core/Src/main.cc ****   RCC_OscInitStruct.PLL.PLLQ = 2;
 155              		.loc 1 130 30 is_stmt 0 view .LVU36
 156 0060 1293     		str	r3, [sp, #72]
 131:Core/Src/main.cc ****   if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
 157              		.loc 1 131 3 is_stmt 1 view .LVU37
 131:Core/Src/main.cc ****   if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
 158              		.loc 1 131 30 is_stmt 0 view .LVU38
 159 0062 1393     		str	r3, [sp, #76]
 132:Core/Src/main.cc ****   {
 160              		.loc 1 132 3 is_stmt 1 view .LVU39
 132:Core/Src/main.cc ****   {
 161              		.loc 1 132 24 is_stmt 0 view .LVU40
 162 0064 08A8     		add	r0, sp, #32
 163 0066 FFF7FEFF 		bl	HAL_RCC_OscConfig
 164              	.LVL1:
 132:Core/Src/main.cc ****   {
 165              		.loc 1 132 3 discriminator 1 view .LVU41
 166 006a B0B9     		cbnz	r0, .L8
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 10


 139:Core/Src/main.cc ****   {
 167              		.loc 1 139 3 is_stmt 1 view .LVU42
 139:Core/Src/main.cc ****   {
 168              		.loc 1 139 32 is_stmt 0 view .LVU43
 169 006c FFF7FEFF 		bl	HAL_PWREx_EnableOverDrive
 170              	.LVL2:
 139:Core/Src/main.cc ****   {
 171              		.loc 1 139 3 discriminator 1 view .LVU44
 172 0070 A8B9     		cbnz	r0, .L9
 146:Core/Src/main.cc ****                               |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
 173              		.loc 1 146 3 is_stmt 1 view .LVU45
 146:Core/Src/main.cc ****                               |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
 174              		.loc 1 146 31 is_stmt 0 view .LVU46
 175 0072 0F23     		movs	r3, #15
 176 0074 0393     		str	r3, [sp, #12]
 148:Core/Src/main.cc ****   RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
 177              		.loc 1 148 3 is_stmt 1 view .LVU47
 148:Core/Src/main.cc ****   RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
 178              		.loc 1 148 34 is_stmt 0 view .LVU48
 179 0076 0223     		movs	r3, #2
 180 0078 0493     		str	r3, [sp, #16]
 149:Core/Src/main.cc ****   RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
 181              		.loc 1 149 3 is_stmt 1 view .LVU49
 149:Core/Src/main.cc ****   RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
 182              		.loc 1 149 35 is_stmt 0 view .LVU50
 183 007a 0023     		movs	r3, #0
 184 007c 0593     		str	r3, [sp, #20]
 150:Core/Src/main.cc ****   RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
 185              		.loc 1 150 3 is_stmt 1 view .LVU51
 150:Core/Src/main.cc ****   RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
 186              		.loc 1 150 36 is_stmt 0 view .LVU52
 187 007e 4FF4A053 		mov	r3, #5120
 188 0082 0693     		str	r3, [sp, #24]
 151:Core/Src/main.cc **** 
 189              		.loc 1 151 3 is_stmt 1 view .LVU53
 151:Core/Src/main.cc **** 
 190              		.loc 1 151 36 is_stmt 0 view .LVU54
 191 0084 4FF48053 		mov	r3, #4096
 192 0088 0793     		str	r3, [sp, #28]
 153:Core/Src/main.cc ****   {
 193              		.loc 1 153 3 is_stmt 1 view .LVU55
 153:Core/Src/main.cc ****   {
 194              		.loc 1 153 26 is_stmt 0 view .LVU56
 195 008a 0721     		movs	r1, #7
 196 008c 03A8     		add	r0, sp, #12
 197 008e FFF7FEFF 		bl	HAL_RCC_ClockConfig
 198              	.LVL3:
 153:Core/Src/main.cc ****   {
 199              		.loc 1 153 3 discriminator 1 view .LVU57
 200 0092 30B9     		cbnz	r0, .L10
 157:Core/Src/main.cc **** 
 201              		.loc 1 157 1 view .LVU58
 202 0094 15B0     		add	sp, sp, #84
 203              	.LCFI2:
 204              		.cfi_remember_state
 205              		.cfi_def_cfa_offset 4
 206              		@ sp needed
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 11


 207 0096 5DF804FB 		ldr	pc, [sp], #4
 208              	.L8:
 209              	.LCFI3:
 210              		.cfi_restore_state
 134:Core/Src/main.cc ****   }
 211              		.loc 1 134 5 is_stmt 1 view .LVU59
 134:Core/Src/main.cc ****   }
 212              		.loc 1 134 18 is_stmt 0 view .LVU60
 213 009a FFF7FEFF 		bl	Error_Handler
 214              	.LVL4:
 215              	.L9:
 141:Core/Src/main.cc ****   }
 216              		.loc 1 141 5 is_stmt 1 view .LVU61
 141:Core/Src/main.cc ****   }
 217              		.loc 1 141 18 is_stmt 0 view .LVU62
 218 009e FFF7FEFF 		bl	Error_Handler
 219              	.LVL5:
 220              	.L10:
 155:Core/Src/main.cc ****   }
 221              		.loc 1 155 5 is_stmt 1 view .LVU63
 155:Core/Src/main.cc ****   }
 222              		.loc 1 155 18 is_stmt 0 view .LVU64
 223 00a2 FFF7FEFF 		bl	Error_Handler
 224              	.LVL6:
 225              	.L12:
 226 00a6 00BF     		.align	2
 227              	.L11:
 228 00a8 00380240 		.word	1073887232
 229 00ac 00700040 		.word	1073770496
 230              		.cfi_endproc
 231              	.LFE142:
 232              		.fnend
 234              		.section	.text.main,"ax",%progbits
 235              		.align	1
 236              		.global	main
 237              		.syntax unified
 238              		.thumb
 239              		.thumb_func
 241              	main:
 242              		.fnstart
 243              	.LFB141:
  66:Core/Src/main.cc ****   /* USER CODE BEGIN 1 */
 244              		.loc 1 66 1 is_stmt 1 view -0
 245              		.cfi_startproc
 246              		@ args = 0, pretend = 0, frame = 0
 247              		@ frame_needed = 0, uses_anonymous_args = 0
 248 0000 08B5     		push	{r3, lr}
 249              		.save {r3, lr}
 250              	.LCFI4:
 251              		.cfi_def_cfa_offset 8
 252              		.cfi_offset 3, -8
 253              		.cfi_offset 14, -4
  74:Core/Src/main.cc **** 
 254              		.loc 1 74 3 view .LVU66
  74:Core/Src/main.cc **** 
 255              		.loc 1 74 11 is_stmt 0 view .LVU67
 256 0002 FFF7FEFF 		bl	HAL_Init
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 12


 257              	.LVL7:
  81:Core/Src/main.cc **** 
 258              		.loc 1 81 3 is_stmt 1 view .LVU68
  81:Core/Src/main.cc **** 
 259              		.loc 1 81 21 is_stmt 0 view .LVU69
 260 0006 FFF7FEFF 		bl	_Z18SystemClock_Configv
 261              	.LVL8:
  88:Core/Src/main.cc ****   /* USER CODE BEGIN 2 */
 262              		.loc 1 88 3 is_stmt 1 view .LVU70
  88:Core/Src/main.cc ****   /* USER CODE BEGIN 2 */
 263              		.loc 1 88 15 is_stmt 0 view .LVU71
 264 000a FFF7FEFF 		bl	MX_GPIO_Init
 265              	.LVL9:
  90:Core/Src/main.cc ****   /* USER CODE END 2 */
 266              		.loc 1 90 3 is_stmt 1 view .LVU72
  90:Core/Src/main.cc ****   /* USER CODE END 2 */
 267              		.loc 1 90 22 is_stmt 0 view .LVU73
 268 000e FFF7FEFF 		bl	MX_USART6_UART_Init
 269              	.LVL10:
 270              	.L14:
  95:Core/Src/main.cc ****   {
 271              		.loc 1 95 3 is_stmt 1 view .LVU74
 100:Core/Src/main.cc ****     HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_3);
 272              		.loc 1 100 5 view .LVU75
 100:Core/Src/main.cc ****     HAL_GPIO_TogglePin(GPIOE, GPIO_PIN_3);
 273              		.loc 1 100 23 is_stmt 0 view .LVU76
 274 0012 1021     		movs	r1, #16
 275 0014 0548     		ldr	r0, .L16
 276 0016 FFF7FEFF 		bl	HAL_GPIO_TogglePin
 277              	.LVL11:
 101:Core/Src/main.cc ****     HAL_Delay(110);
 278              		.loc 1 101 5 is_stmt 1 view .LVU77
 101:Core/Src/main.cc ****     HAL_Delay(110);
 279              		.loc 1 101 23 is_stmt 0 view .LVU78
 280 001a 0821     		movs	r1, #8
 281 001c 0448     		ldr	r0, .L16+4
 282 001e FFF7FEFF 		bl	HAL_GPIO_TogglePin
 283              	.LVL12:
 102:Core/Src/main.cc ****   }
 284              		.loc 1 102 5 is_stmt 1 discriminator 1 view .LVU79
 102:Core/Src/main.cc ****   }
 285              		.loc 1 102 14 is_stmt 0 discriminator 1 view .LVU80
 286 0022 6E20     		movs	r0, #110
 287 0024 FFF7FEFF 		bl	HAL_Delay
 288              	.LVL13:
  95:Core/Src/main.cc ****   {
 289              		.loc 1 95 3 is_stmt 1 view .LVU81
 290 0028 F3E7     		b	.L14
 291              	.L17:
 292 002a 00BF     		.align	2
 293              	.L16:
 294 002c 000C0240 		.word	1073875968
 295 0030 00100240 		.word	1073876992
 296              		.cfi_endproc
 297              	.LFE141:
 298              		.fnend
 300              		.text
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 13


 301              	.Letext0:
 302              		.file 3 "D:/arm-none-eabi-gcc/arm-gnu-toolchain-13.2.rel1-mingw-w64-i686-arm-none-eabi/arm-gnu-too
 303              		.file 4 "D:/arm-none-eabi-gcc/arm-gnu-toolchain-13.2.rel1-mingw-w64-i686-arm-none-eabi/arm-gnu-too
 304              		.file 5 "Drivers/CMSIS/Device/ST/STM32F7xx/Include/stm32f746xx.h"
 305              		.file 6 "Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_hal_def.h"
 306              		.file 7 "Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_hal_rcc_ex.h"
 307              		.file 8 "Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_hal_rcc.h"
 308              		.file 9 "Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_hal.h"
 309              		.file 10 "Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_hal_gpio.h"
 310              		.file 11 "Core/Inc/usart.h"
 311              		.file 12 "Core/Inc/gpio.h"
 312              		.file 13 "Drivers/STM32F7xx_HAL_Driver/Inc/stm32f7xx_hal_pwr_ex.h"
ARM GAS  D:\cygwin64\tmp\ccLG8Dcf.s 			page 14


DEFINED SYMBOLS
                            *ABS*:00000000 main.cc
D:\cygwin64\tmp\ccLG8Dcf.s:21     .text.Error_Handler:00000000 $t
D:\cygwin64\tmp\ccLG8Dcf.s:27     .text.Error_Handler:00000000 Error_Handler
    .ARM.exidx.text.Error_Handler:00000000 $d
D:\cygwin64\tmp\ccLG8Dcf.s:61     .text._Z18SystemClock_Configv:00000000 $t
D:\cygwin64\tmp\ccLG8Dcf.s:67     .text._Z18SystemClock_Configv:00000000 _Z18SystemClock_Configv
D:\cygwin64\tmp\ccLG8Dcf.s:228    .text._Z18SystemClock_Configv:000000a8 $d
.ARM.exidx.text._Z18SystemClock_Configv:00000000 $d
D:\cygwin64\tmp\ccLG8Dcf.s:235    .text.main:00000000 $t
D:\cygwin64\tmp\ccLG8Dcf.s:241    .text.main:00000000 main
D:\cygwin64\tmp\ccLG8Dcf.s:294    .text.main:0000002c $d
             .ARM.extab.text.main:00000000 $d
             .ARM.exidx.text.main:00000000 $d

UNDEFINED SYMBOLS
memset
HAL_RCC_OscConfig
HAL_PWREx_EnableOverDrive
HAL_RCC_ClockConfig
__aeabi_unwind_cpp_pr0
HAL_Init
MX_GPIO_Init
MX_USART6_UART_Init
HAL_GPIO_TogglePin
HAL_Delay
__aeabi_unwind_cpp_pr1
