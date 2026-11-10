/*****************************************************************************
* | File      	:   EPD_2in2b_V3.h
* | Author      :   Waveshare team
* | Function    :   2.2inch e-paper b V3
* | Info        :
*----------------
* |	This version:   V1.0
* | Date        :   2025-10-05
* | Info        :
* -----------------------------------------------------------------------------
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#
******************************************************************************/
#ifndef __EPD_2IN2B_V3_H_
#define __EPD_2IN2B_V3_H_
/*��Ļ����оƬΪUC8179C*/
#include "DEV_Config.h"
#define PANEL_SETTING               0x00    /*0X0F*/
#define POWER_SETTING               0x01    /*0X07,0X17,0X3A,0X3A,0X03*/
#define POWER_OFF                   0x02   
#define POWER_OFF_SEQUENCE_SETTING  0x03    /*0X00*/
#define POWER_ON                    0x04
#define POWER_ON_MEASURE            0x05
#define BOOSTER_SOFT_START          0x06    /*0x17,0X17,0X17,0X17*/
#define DEEP_SLEEP                  0x07    /*0XA5*/
#define DATA_START_TRANSMISSION_1   0x10
#define DATA_STOP                   0x11    /*0X00*/
#define DISPLAY_REFRESH             0x12
#define DATA_START_TRANSMISSION_2   0x13
#define DUAL_SPI                    0x15    /*0X00*/
#define VCOM_LUT                    0x20
#define W2W_LUT                     0x21
#define B2W_LUT                     0x22
#define W2B_LUT                     0x23
#define B2B_LUT                     0x24
#define BORDER_LUT                  0x25
#define LUT_OPTION                  0x2A    /*0X00,0X00*/
#define GATE_DRIVING_VOLTAGE        0x2B    /*0X00,0X00,0X00*/
#define PLL_CONTROL                 0x30    /*0X06*/
#define TEMPERATURE_SENSOR_CONTROL  0x40    /*0X00,0X00*/
#define TEMPERATURE_CALIBRATION     0x41    /*0X00*/
#define TEMPERATURE_SENSOR_WRITE    0x42    /*0X00,0X00,0X00*/  
#define TEMPERATURE_SENSOR_READ     0x43    /*0X00,0X00*/
#define PANEL_BREAK_CHECK           0x44    /*0X00*/
#define VCOM_AND_DATA_INTERVAL_SETTING       0x50    /*0X31,0X07*/
#define LOW_POWER_DETECTION         0x51    /*0X01*/
#define END_VOLTAGE_SETTING         0x52    /*0X02*/
#define TCON_SETTING                0x60    /*0X22*/
#define TCON_RESOLUTION             0x61    /*0X03,0X20,0X02,0X58*/
#define GS_SETTING                  0x65    /*0X00,0X00,0X00,0X00*/
#define REVISION                    0x70    /*0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X0C*/
#define GET_STATUS                  0x71    /*0X13*/
#define AUTO_MEASURE_VCOM           0x80    /*0X10*/
#define VCOM_VALUE                  0x81    /*0X00*/
#define VCM_DC_SETTING_REGISTER     0x82    /*0X00*/
#define PARTIAL_WINDOW              0x90    /*0X00,0X00,0X03,0X1F,0X00,0X00,0X02,0X57,0X01*/
#define PARTIAL_IN                  0x91    /**/
#define PARTIAL_OUT                 0x92    /**/
#define PROGRAM_MODE                0xA0    /**/
#define ACTIVE_PROGRAM              0xA1    /**/
#define READ_OTP_DATA               0xA2    /*DATA ADDR*/
#define CASCADE_SETTING             0xE0    /*0X00*/
#define POWER_SAVING                0xE3    /*0X00*/
#define LVD_VOLTAGE_SELECT          0xE4    /*0X03*/
#define FORCE_TEMPERATURE           0xE5    /*0X00*/
#define TEMPERATURE_SENSOR_CONTROL2 0xE7    /*0X00*/

// Display resolution

#define CMD_BLACK       DATA_START_TRANSMISSION_1
#define CMD_RED         DATA_START_TRANSMISSION_2
#define EPD_WIDTH       152
#define EPD_HEIGHT      296	//152/8=19
#define Picture1_WIDTH       152
#define Picture1_HEIGHT      296

void EPD_Init(void);
void EPD_Clear(void);
void EPD_Full(void);
void EPD_Display(const UBYTE *blackimage, const UBYTE *redimage);
void EPD_Sleep(void);
void EPD_SHOW(void);
#endif
