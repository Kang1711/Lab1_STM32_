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
#define sa1_Pin GPIO_PIN_3
#define sa1_GPIO_Port GPIOA
#define sa2_Pin GPIO_PIN_4
#define sa2_GPIO_Port GPIOA
#define sa3_Pin GPIO_PIN_5
#define sa3_GPIO_Port GPIOA
#define sa4_Pin GPIO_PIN_6
#define sa4_GPIO_Port GPIOA
#define sa5_Pin GPIO_PIN_7
#define sa5_GPIO_Port GPIOA
#define b1_Pin GPIO_PIN_0
#define b1_GPIO_Port GPIOB
#define b2_Pin GPIO_PIN_1
#define b2_GPIO_Port GPIOB
#define b3_Pin GPIO_PIN_2
#define b3_GPIO_Port GPIOB
#define sb2_Pin GPIO_PIN_10
#define sb2_GPIO_Port GPIOB
#define sb3_Pin GPIO_PIN_11
#define sb3_GPIO_Port GPIOB
#define sb4_Pin GPIO_PIN_12
#define sb4_GPIO_Port GPIOB
#define sb5_Pin GPIO_PIN_13
#define sb5_GPIO_Port GPIOB
#define sb6_Pin GPIO_PIN_14
#define sb6_GPIO_Port GPIOB
#define sb7_Pin GPIO_PIN_15
#define sb7_GPIO_Port GPIOB
#define sa6_Pin GPIO_PIN_8
#define sa6_GPIO_Port GPIOA
#define sa7_Pin GPIO_PIN_9
#define sa7_GPIO_Port GPIOA
#define e0_Pin GPIO_PIN_10
#define e0_GPIO_Port GPIOA
#define e1_Pin GPIO_PIN_11
#define e1_GPIO_Port GPIOA
#define e2_Pin GPIO_PIN_12
#define e2_GPIO_Port GPIOA
#define e3_Pin GPIO_PIN_13
#define e3_GPIO_Port GPIOA
#define ra_Pin GPIO_PIN_3
#define ra_GPIO_Port GPIOB
#define ya_Pin GPIO_PIN_4
#define ya_GPIO_Port GPIOB
#define ga_Pin GPIO_PIN_5
#define ga_GPIO_Port GPIOB
#define rb_Pin GPIO_PIN_6
#define rb_GPIO_Port GPIOB
#define yb_Pin GPIO_PIN_7
#define yb_GPIO_Port GPIOB
#define gb_Pin GPIO_PIN_8
#define gb_GPIO_Port GPIOB
#define sb1_Pin GPIO_PIN_9
#define sb1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
