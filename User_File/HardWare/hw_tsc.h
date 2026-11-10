#ifndef _HW_TSC_H_
#define _HW_TSC_H_
#include "main.h"
void hw_tsc_init(void);
void hw_tsc_test(void);
void hw_tsc_scan(void);
extern uint32_t g_tsc_value[16];
#endif
