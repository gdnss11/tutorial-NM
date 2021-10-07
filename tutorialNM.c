#include "ecRCC.h"



void RCC_GPIOA_enable()
{
		// HSI is used as system clock         
		RCC_HSI_init();	
	
		// RCC Peripheral Clock for GPIO_A Enable 
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
}

void RCC_GPIOB_enable()
{
		// HSI is used as system clock         
		RCC_HSI_init();	
	
		// RCC Peripheral Clock for GPIO_A Enable 
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN;
}


void RCC_GPIOC_enable()
{
		// HSI is used as system clock         
		RCC_HSI_init();	
	
		// RCC Peripheral Clock for GPIO_A Enable 
		RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN;
}


void RCC_HSI_init() {
	// Enable High Speed Internal Clock (HSI = 16 MHz)
  RCC->CR |= ((uint32_t)RCC_CR_HSION);

  // wait until HSI is ready
  while ( (RCC->CR & (uint32_t) RCC_CR_HSIRDY) == 0 ) {;}
	
  // Select HSI as system clock source 
  RCC->CFGR &= (uint32_t)(~RCC_CFGR_SW); 									
  RCC->CFGR |= (uint32_t)RCC_CFGR_SW_HSI; 				
			
	// Wait till HSI is used as system clock source
  while ((RCC->CFGR & (uint32_t)RCC_CFGR_SWS) != 0 ); 
}