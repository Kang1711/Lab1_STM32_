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
#define LED_61_Pin GPIO_PIN_4
#define LED_61_GPIO_Port GPIOA
#define LED_62_Pin GPIO_PIN_5
#define LED_62_GPIO_Port GPIOA
#define LED_63_Pin GPIO_PIN_6
#define LED_63_GPIO_Port GPIOA
#define LED_64_Pin GPIO_PIN_7
#define LED_64_GPIO_Port GPIOA
#define LED10_1_Pin GPIO_PIN_0
#define LED10_1_GPIO_Port GPIOB
#define LED10_2_Pin GPIO_PIN_1
#define LED10_2_GPIO_Port GPIOB
#define LED10_3_Pin GPIO_PIN_2
#define LED10_3_GPIO_Port GPIOB
#define LED10_11_Pin GPIO_PIN_10
#define LED10_11_GPIO_Port GPIOB
#define LED10_12_Pin GPIO_PIN_11
#define LED10_12_GPIO_Port GPIOB
#define LED_65_Pin GPIO_PIN_8
#define LED_65_GPIO_Port GPIOA
#define LED_66_Pin GPIO_PIN_9
#define LED_66_GPIO_Port GPIOA
#define LED_67_Pin GPIO_PIN_10
#define LED_67_GPIO_Port GPIOA
#define LED_68_Pin GPIO_PIN_11
#define LED_68_GPIO_Port GPIOA
#define LED_69_Pin GPIO_PIN_12
#define LED_69_GPIO_Port GPIOA
#define LED_610_Pin GPIO_PIN_13
#define LED_610_GPIO_Port GPIOA
#define LED_611_Pin GPIO_PIN_14
#define LED_611_GPIO_Port GPIOA
#define LED_612_Pin GPIO_PIN_15
#define LED_612_GPIO_Port GPIOA
#define LED10_4_Pin GPIO_PIN_3
#define LED10_4_GPIO_Port GPIOB
#define LED10_5_Pin GPIO_PIN_4
#define LED10_5_GPIO_Port GPIOB
#define LED10_6_Pin GPIO_PIN_5
#define LED10_6_GPIO_Port GPIOB
#define LED10_7_Pin GPIO_PIN_6
#define LED10_7_GPIO_Port GPIOB
#define LED10_8_Pin GPIO_PIN_7
#define LED10_8_GPIO_Port GPIOB
#define LED10_9_Pin GPIO_PIN_8
#define LED10_9_GPIO_Port GPIOB
#define LED10_10_Pin GPIO_PIN_9
#define LED10_10_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
