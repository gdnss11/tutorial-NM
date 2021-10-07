#ifndef __EC_RCC_H
#define __EC_RCC_H


#include "stm32f4xx.h"
#define LED_PIN    5		//LD2
#define BUTTON_PIN 13


void RCC_HSI_init(void);   							//defined in ecRcc.h
void RCC_GPIOA_enable(void);
void RCC_GPIOB_enable(void);
void RCC_GPIOC_enable(void);
#endif