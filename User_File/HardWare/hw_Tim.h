#ifndef	_HW_TIM_H_
#define	_HW_TIM_H_
#include "stdint.h"

uint32_t hw_TimerGetTickCount(void);
void delay_us(uint32_t nus);
void delay_ms(uint32_t nus);
void delay_s(uint32_t nus);
uint8_t hw_TimerAfter(uint32_t aim,uint32_t now);
#endif	//_HW_TIM_H_
