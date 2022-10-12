/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

/** #include <stdint.h>
#include <stm32f0xx.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN;
	GPIOA->MODER |= GPIO_MODER_MODER5_0;

	for(;;) {
		GPIOA->ODR ^= (1<<5); // toggle
		for (volatile uint32_t i = 0; i < 100000; i++) {}
	}
}

*/

#include "sct.h"


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif



int main(void)
{
	sct_init();
	sct_led(0x7A5C36DE);
	for (volatile uint32_t i =0; i < 300000; i++) {}

	for(;;) {
		for (uint16_t j = 0; j < 10; j++) {
			sct_value(j*111);
			for (volatile uint32_t i =0; i < 500000; i++) {}
		}


	}
}







