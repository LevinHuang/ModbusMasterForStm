#ifndef _LED_H
#define _LED_H

#include "stm32f1xx_hal.h"

#define LED3_Pin GPIO_PIN_5
#define LED3_GPIO_Port GPIOB

#define LED2_Pin GPIO_PIN_5
#define LED2_GPIO_Port GPIOE


/* LED�Ƴ�ʼ������ */
void Led_Init(void);

#endif
