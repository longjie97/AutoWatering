/*
 * hw_Rtc.c
 *
 *  Created on: Nov 25, 2025
 *      Author: AMD5700X
 */
#include "hw_Rtc.h"
#include "rtc.h"
#include "hw_Uart.h"
uint8_t g_hw_Rtc_Inited = 0;
    RTC_TimeTypeDef g_RtcTimeStruct;
    RTC_DateTypeDef g_RtcDateStruct;
    RTC_AlarmTypeDef g_RtcAlarmStruct;
    
    
   
void hw_RtcTest(void)
{


    if(1 == g_hw_Rtc_Inited)
    {
        g_hw_Rtc_Inited = 1;
        HAL_RTC_GetDate(&hrtc, &g_RtcDateStruct, RTC_FORMAT_BCD);
        HAL_RTC_GetTime(&hrtc, &g_RtcTimeStruct, RTC_FORMAT_BCD);
        HAL_RTC_GetAlarm(&hrtc, &g_RtcAlarmStruct, RTC_ALARM_A, RTC_FORMAT_BCD);
        g_RtcTimeStruct.Hours = 0x0b;
        g_RtcTimeStruct.Minutes = 0x0b;
        g_RtcTimeStruct.Seconds = 0x28;
        g_RtcAlarmStruct.AlarmTime.Hours = 0x0b;
        g_RtcAlarmStruct.AlarmTime.Minutes = 0x0c;
        HAL_RTC_SetTime(&hrtc, &g_RtcTimeStruct, RTC_FORMAT_BCD);
        HAL_RTC_SetAlarm_IT(&hrtc, &g_RtcAlarmStruct, RTC_FORMAT_BCD);
    }
    //RTC_AlarmTypeDef sAlarm = {0};

    HAL_RTC_GetTime(&hrtc, &g_RtcTimeStruct, RTC_FORMAT_BCD);
    HAL_RTC_GetDate(&hrtc, &g_RtcDateStruct, RTC_FORMAT_BCD);
    HAL_RTC_GetAlarm(&hrtc, &g_RtcAlarmStruct, RTC_ALARM_A, RTC_FORMAT_BCD);
    //printf("RTC Date: %02d-%02d-20%02d\r\n",g_RtcDateStruct.Date,g_RtcDateStruct.Month,g_RtcDateStruct.Year);
    printf("RTC Time: %02x:%02x:%02x\r\n",g_RtcTimeStruct.Hours,g_RtcTimeStruct.Minutes,g_RtcTimeStruct.Seconds);
    printf("RTC Alarm: %02x:%02x:%02x\r\n",g_RtcAlarmStruct.AlarmTime.Hours,g_RtcAlarmStruct.AlarmTime.Minutes,g_RtcAlarmStruct.AlarmTime.Seconds);
}
