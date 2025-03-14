/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_RED_2_Pin GPIO_PIN_3
#define LED_RED_2_GPIO_Port GPIOA
#define LED_YELLOW_2_Pin GPIO_PIN_4
#define LED_YELLOW_2_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_YELLOW_Pin GPIO_PIN_6
#define LED_YELLOW_GPIO_Port GPIOA
#define LED_GREEN_2_Pin GPIO_PIN_7
#define LED_GREEN_2_GPIO_Port GPIOA
#define LED_RED_31_Pin GPIO_PIN_0
#define LED_RED_31_GPIO_Port GPIOB
#define LED_YELLOW_31_Pin GPIO_PIN_1
#define LED_YELLOW_31_GPIO_Port GPIOB
#define LED_GREEN_31_Pin GPIO_PIN_2
#define LED_GREEN_31_GPIO_Port GPIOB
#define LED_YELLOW_34_Pin GPIO_PIN_10
#define LED_YELLOW_34_GPIO_Port GPIOB
#define LED_GREEN_34_Pin GPIO_PIN_11
#define LED_GREEN_34_GPIO_Port GPIOB
#define SEG_A_Pin GPIO_PIN_8
#define SEG_A_GPIO_Port GPIOA
#define SEG_B_Pin GPIO_PIN_9
#define SEG_B_GPIO_Port GPIOA
#define SEG_C_Pin GPIO_PIN_10
#define SEG_C_GPIO_Port GPIOA
#define SEG_D_Pin GPIO_PIN_11
#define SEG_D_GPIO_Port GPIOA
#define SEG_E_Pin GPIO_PIN_12
#define SEG_E_GPIO_Port GPIOA
#define SEG_F_Pin GPIO_PIN_13
#define SEG_F_GPIO_Port GPIOA
#define SEG_G_Pin GPIO_PIN_14
#define SEG_G_GPIO_Port GPIOA
#define LED_RED_32_Pin GPIO_PIN_3
#define LED_RED_32_GPIO_Port GPIOB
#define LED_YELLOW_32_Pin GPIO_PIN_4
#define LED_YELLOW_32_GPIO_Port GPIOB
#define LED_GREEN_32_Pin GPIO_PIN_5
#define LED_GREEN_32_GPIO_Port GPIOB
#define LED_RED_33_Pin GPIO_PIN_6
#define LED_RED_33_GPIO_Port GPIOB
#define LED_YELLOW_33_Pin GPIO_PIN_7
#define LED_YELLOW_33_GPIO_Port GPIOB
#define LED_GREEN_33_Pin GPIO_PIN_8
#define LED_GREEN_33_GPIO_Port GPIOB
#define LED_RED_34_Pin GPIO_PIN_9
#define LED_RED_34_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
