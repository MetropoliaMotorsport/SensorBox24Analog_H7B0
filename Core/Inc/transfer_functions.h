/*
 * transfer_functions.h
 *
 *  Created on: Feb 20, 2024
 *      Author: marcelc
 */

#ifndef INC_TRANSFER_FUNCTIONS_H_
#define INC_TRANSFER_FUNCTIONS_H_

#include "main.h"
#include "config.h"

#define VOLTAGE_3V3		0
#define VOLTAGE_5V		1
#define VOLTAGE_24V		2
#define BPPS			3
#define APPS			4
#define	FRONT_HEAVE		5
#define	FRONT_ROLL		6
#define	REAR_HEAVE		7
#define REAR_ROLL		8
#define	TYRE_TEMP		9
#define ANGLE_GEAR		10
#define	WATER_LVL		11
#define BRK_PRES		12
#define NC				13

#endif /* INC_TRANSFER_FUNCTIONS_H_ */

uint16_t TF_Select(uint8_t bytes,uint32_t raw, uint8_t sensor);

uint16_t TF_3V3(uint8_t bytes, uint32_t raw);
uint16_t TF_5V(uint8_t bytes, uint32_t raw);
uint16_t TF_24V(uint8_t bytes, uint32_t raw);
uint16_t TF_BPPS(uint8_t bytes, uint32_t raw);
uint16_t TF_APPS(uint8_t bytes, uint32_t raw);
uint16_t TF_FRONT_HEAVE(uint8_t bytes, uint32_t raw);
uint16_t TF_REAR_HEAVE(uint8_t bytes, uint32_t raw);
uint16_t TF_FRONT_ROLL(uint8_t bytes, uint32_t raw);
uint16_t TF_REAR_ROLL(uint8_t bytes, uint32_t raw);
uint16_t TF_TYRE_TEMP(uint8_t bytes, uint32_t raw);
uint16_t TF_ANGLE_GEAR(uint8_t bytes, uint32_t raw);
uint16_t TF_WATER_LVL(uint8_t bytes, uint32_t raw);
uint16_t TF_BRK_PRES(uint8_t bytes, uint32_t raw);
uint16_t TF_NC(uint8_t bytes, uint32_t raw);
