/*
 * scr.h
 *
 *  Created on: 12. 10. 2022
 *      Author: xdrapa09
 */

#ifndef SCT_H_
#define SCT_H_

#include "stm32f0xx.h"
#include "stdint.h"

void sct_led(uint32_t value);
void sct_init(void);
void sct_value(uint16_t value);


#endif /* SCT_H_ */
