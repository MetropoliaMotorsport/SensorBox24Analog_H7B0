/*
 * transfer_functions.c
 *
 *  Created on: Feb 20, 2024
 *      Author: marcelc
 */

#include "transfer_functions.h"
#include "functions.h"
#include "main.h"



uint16_t TF_Select(uint8_t bytes, uint32_t raw, uint8_t sensor){

	uint16_t transmit = 0;

	switch(sensor){
	case VOLTAGE_3V3:
		transmit = TF_3V3(bytes, raw);
		break;
	case VOLTAGE_5V:
		transmit = TF_5V(bytes, raw);
		break;
	case BPPS:
		transmit = TF_BPPS(bytes, raw);
		break;
	case APPS:
		transmit = TF_APPS(bytes, raw);
		break;
	case FRONT_HEAVE:
		transmit = TF_FRONT_HEAVE(bytes, raw);
		break;
	case REAR_HEAVE:
		transmit = TF_REAR_HEAVE(bytes, raw);
		break;
	case FRONT_ROLL:
		transmit = TF_FRONT_ROLL(bytes, raw);
		break;
	case REAR_ROLL:
		transmit = TF_REAR_ROLL(bytes, raw);
		break;
	case TYRE_TEMP:
		transmit = TF_TYRE_TEMP(bytes, raw);
		break;
	case ANGLE_GEAR:
		transmit = TF_ANGLE_GEAR(bytes, raw);
		break;
	case WATER_LVL:
		transmit = TF_WATER_LVL(bytes, raw);
		break;
	case BRK_PRES:
		transmit = TF_BRK_PRES(bytes, raw);
	default:
		//TODO implement error here
		break;
	}

	return transmit;
}

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
