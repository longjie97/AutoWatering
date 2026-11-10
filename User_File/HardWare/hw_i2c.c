/*
 * hw_i2c.c
 *
 *  Created on: 2025��8��3��
 *      Author: DELL
 */
//#include "Mcal.h"
//#include "Clock_Ip.h"
//
//#include "Lpi2c_Ip.h"
//#include "Siul2_Port_Ip.h"
//
//#include "Siul2_Port_Ip_Cfg.h"
//#include "Emios_Pwm_Ip.h"
//#include "Siul2_Port_Ip_Cfg.h"
//
//#include "Common.h"
//
//
//#include "Emios_Mcl_Ip.h"
//
//#include "Siul2_Dio_Ip.h"
//#include "Lpi2c_Ip_HwAccess.h"
//#include "Lpi2c_Ip_Features.h"
//#include "OsIf.h"
//
#if 0
#include "hw_i2c.h"
#define TX_BUFF_SIZE	16U
#define RX_BUFF_SIZE	16U
#define NSI8100NQ_ADDRESS  0x50 // Example I2C device address
uint8_t g_TxBuffer[TX_BUFF_SIZE] = {0x01 , 0x02 , 0x03,};
uint8_t g_RxBuffer[RX_BUFF_SIZE] = {0};
uint8_t status;
uint8_t hw_I2cInit(void){

    // Initialize I2C hardware
    // This function should set up the necessary registers and configurations for I2C communication
    // Return 0 on success, or an error code on failure
  //  Lpi2c_Ip_MasterInit(LPI2C_CHANNEL_0.&I2c_Lpi2cMasterChannel0);
    Lpi2c_Ip_MasterInit(LPI2C_CHANNEL_0, &I2c_Lpi2cMasterChannel0);
    Lpi2c_Ip_MasterSetSlaveAddr(LPI2C_CHANNEL_0, NSI8100NQ_ADDRESS, LPI2C_7BIT_ADD);

    return SUCCESS;
}
uint8_t hw_I2cWrite(uint8 Instance,   
                    uint8 * TxBuff,
                    uint32 TxSize,
                    boolean SendStop) {
    // Write data to the specified I2C device
    // device_address: The address of the I2C device to write to
    // data: Pointer to the data buffer to be written
    // length: Number of bytes to write
    // Return 0 on success, or an error code on failure
    if(LPI2C_CHANNEL_0 == Instance) {
        Lpi2c_Ip_MasterSendData(LPI2C_CHANNEL_0, TxBuff, TxSize,  SendStop);
    }
    return SUCCESS;
}
void hw_i2c_test(void){
   // hw_I2cWrite(LPI2C_CHANNEL_0, buffer, 3, TRUE);
	status = Lpi2c_Ip_MasterSendDataBlocking(LPI2C_CHANNEL_0,g_TxBuffer,3,FALSE,10);
	status = Lpi2c_Ip_MasterSendDataBlocking(LPI2C_CHANNEL_0,g_RxBuffer,3,TRUE,10);
}

#endif

