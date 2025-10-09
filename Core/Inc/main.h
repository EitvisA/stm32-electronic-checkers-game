/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define p60_Pin GPIO_PIN_0
#define p60_GPIO_Port GPIOC
#define p58_Pin GPIO_PIN_1
#define p58_GPIO_Port GPIOC
#define p64_Pin GPIO_PIN_2
#define p64_GPIO_Port GPIOC
#define p62_Pin GPIO_PIN_3
#define p62_GPIO_Port GPIOC
#define p51_Pin GPIO_PIN_1
#define p51_GPIO_Port GPIOA
#define p53_Pin GPIO_PIN_4
#define p53_GPIO_Port GPIOA
#define p21_Pin GPIO_PIN_5
#define p21_GPIO_Port GPIOA
#define p19_Pin GPIO_PIN_6
#define p19_GPIO_Port GPIOA
#define p17_Pin GPIO_PIN_7
#define p17_GPIO_Port GPIOA
#define p49_Pin GPIO_PIN_4
#define p49_GPIO_Port GPIOC
#define p55_Pin GPIO_PIN_0
#define p55_GPIO_Port GPIOB
#define p42_Pin GPIO_PIN_1
#define p42_GPIO_Port GPIOB
#define p39_Pin GPIO_PIN_2
#define p39_GPIO_Port GPIOB
#define p37_Pin GPIO_PIN_12
#define p37_GPIO_Port GPIOB
#define p48_Pin GPIO_PIN_13
#define p48_GPIO_Port GPIOB
#define p46_Pin GPIO_PIN_14
#define p46_GPIO_Port GPIOB
#define p44_Pin GPIO_PIN_15
#define p44_GPIO_Port GPIOB
#define p32_Pin GPIO_PIN_6
#define p32_GPIO_Port GPIOC
#define p14_Pin GPIO_PIN_7
#define p14_GPIO_Port GPIOC
#define p30_Pin GPIO_PIN_8
#define p30_GPIO_Port GPIOC
#define p28_Pin GPIO_PIN_9
#define p28_GPIO_Port GPIOC
#define p10_Pin GPIO_PIN_8
#define p10_GPIO_Port GPIOA
#define p35_Pin GPIO_PIN_11
#define p35_GPIO_Port GPIOA
#define p33_Pin GPIO_PIN_12
#define p33_GPIO_Port GPIOA
#define p1_Pin GPIO_PIN_10
#define p1_GPIO_Port GPIOC
#define p12_Pin GPIO_PIN_12
#define p12_GPIO_Port GPIOC
#define p3_Pin GPIO_PIN_3
#define p3_GPIO_Port GPIOB
#define p7_Pin GPIO_PIN_4
#define p7_GPIO_Port GPIOB
#define p5_Pin GPIO_PIN_5
#define p5_GPIO_Port GPIOB
#define p16_Pin GPIO_PIN_6
#define p16_GPIO_Port GPIOB
#define p26_Pin GPIO_PIN_8
#define p26_GPIO_Port GPIOB
#define p23_Pin GPIO_PIN_9
#define p23_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
