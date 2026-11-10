
#include "main.h"
#include "stm32l4xx_hal_tim.h"
#include"stm32l431xx.h"
#include "hw_Tim.h"

#define SYSTEM_CLOCK_FREQ 64000000UL
#define TICKS_PER_US      (SYSTEM_CLOCK_FREQ / 1000000UL)
#define TICKS_MECHAIN	  (TICKS_PER_US/4UL)

uint32_t TimTicks_ms;

uint32_t hw_TimerGetTickCount(void)
{
    return TimTicks_ms;
}
void delay_us(uint32_t nus)
{
	uint32_t cnt = nus * TICKS_MECHAIN;
	uint32_t i = 0;
	for(i = 0; i < cnt; i++){
		__NOP();
		__NOP();
		__NOP();
		__NOP();
		__NOP();
		__NOP();
		__NOP();
		__NOP();
		__NOP();
	}
}

void delay_ms(uint32_t nms){
	while (nms--)
	{
		delay_us(100);
	}
}
void delay_s(uint32_t ns){
	while (ns--)
	{
		delay_ms(1000); 
	}
}
uint8_t hw_TimerAfter(uint32_t aim,uint32_t now){
	if( (int32_t) ( (int32_t)now-(int32_t)aim )  >0){
		return 0; 
	}else{
		return 1; 
	}
}



