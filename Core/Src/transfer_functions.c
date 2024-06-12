/*
 * transfer_functions.c
 *
 *  Created on: Feb 20, 2024
 *      Author: marcelc
 */

#include "transfer_functions.h"
#include "functions.h"
#include "main.h"
#include "config.h"

uint16_t TF_3V3(uint8_t bytes, uint32_t raw){
	uint16_t max_volt = 3300;

	uint16_t voltage = raw*max_volt / 4095;
	return voltage;
}

uint16_t TF_5V(uint8_t bytes, uint32_t raw){
	uint16_t max_volt = 5000;

	uint16_t voltage = raw*max_volt / 4095;
	return voltage;

}

uint16_t TF_24V(uint8_t bytes, uint32_t raw){
	uint16_t max_volt = 24000;

	uint16_t voltage = raw*max_volt / 4095;
	return voltage;
}
uint16_t TF_BPPS(uint8_t bytes, uint32_t raw){ //brake pedal position sensor
	uint16_t max_brake_pres = 200;

	uint16_t brake_pres = raw*max_brake_pres / 4095;
	return brake_pres;

}
uint16_t TF_APPS(uint8_t bytes, uint32_t raw){
	uint16_t max_pos = 100; //in percent

	uint16_t apps = raw*max_pos / 4095;
	return apps;

}

uint16_t TF_BTN(uint8_t bytes, uint32_t raw){

}

uint16_t TF_FRONT_HEAVE(uint8_t bytes, uint32_t raw){

}
uint16_t TF_REAR_HEAVE(uint8_t bytes, uint32_t raw){

}
uint16_t TF_FRONT_ROLL(uint8_t bytes, uint32_t raw){

}
uint16_t TF_REAR_ROLL(uint8_t bytes, uint32_t raw){

}
uint16_t TF_TYRE_TEMP(uint8_t bytes, uint32_t raw){

}
uint16_t TF_ANGLE_GEAR(uint8_t bytes, uint32_t raw){

}
uint16_t TF_WATER_LVL(uint8_t bytes, uint32_t raw){

}

uint16_t TF_BRK_PRES(uint8_t bytes, uint32_t raw){

}
