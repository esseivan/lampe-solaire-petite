/**
 * Author Wojciech Domski <Wojciech.Domski@gmail.com>
 * www: www.Domski.pl
 *
 * Hardware layer for SX1278 LoRa module
 */

#include "SX1278_hw.h"
#include "../mcc_generated_files/pin_manager.h"
#include "../mcc_generated_files/spi1.h"
#include "../mcc_generated_files/device_config.h"
#include "../mcc_generated_files/mcc.h"

void SX1278_hw_init(void) {
	SX1278_hw_SetNSS(1);
    REST_LAT = HIGH;
}

void SX1278_hw_SetNSS(int value) {
    NSS_LAT = (value == 1) ? HIGH : LOW;
}
void SX1278_hw_SetReset(int value) {
    REST_LAT = (value == 1) ? HIGH : LOW;
}

void SX1278_hw_Reset(void) {
	SX1278_hw_SetNSS(1);
    REST_LAT = LOW;

	HAL_DELAY(1);

    REST_LAT = HIGH;

	HAL_DELAY(20);
}

int SX1278_WaitRXPacket(uint16_t timeout) {
    while(1) {
        if(SX1278_hw_GetDIO0())
            return 1;
        if(--timeout == 0) {
            return 0;
        }
        HAL_DELAY(1);
    }
}

void SX1278_hw_SPICommand(uint8_t cmd) {
	SX1278_hw_SetNSS(0);
    SPI1_ExchangeByte(cmd);
}

uint8_t SX1278_hw_SPIReadByte(void) {
	uint8_t rxByte;

	SX1278_hw_SetNSS(0);
    rxByte = SPI1_ExchangeByte(0x00);
	return rxByte;
}

int SX1278_hw_GetDIO0(void) {
    return DIO0_PORT;
}

int SX1278_hw_GetDIO1(void) {
    return DIO1_PORT;
}

