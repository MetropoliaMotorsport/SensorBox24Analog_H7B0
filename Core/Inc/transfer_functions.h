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
#define BPPS			2
#define APPS			3
#define	FRONT_HEAVE		4
#define	FRONT_ROLL		5
#define	REAR_HEAVE		6
#define REAR_ROLL		7
#define	TYRE_TEMP		8
#define ANGLE_GEAR		9
#define	WATER_LVL		10

#endif /* INC_TRANSFER_FUNCTIONS_H_ */

uint32_t TF_Select(uint8_t bytes,uint32_t raw, uint8_t sensor);

uint32_t TF_3V3(uint8_t bytes, uint32_t raw);
uint32_t TF_5V(uint8_t bytes, uint32_t raw);
uint32_t TF_BPPS(uint8_t bytes, uint32_t raw);
uint32_t TF_APPS(uint8_t bytes, uint32_t raw);
uint32_t TF_FRONT_HEAVE(uint8_t bytes, uint32_t raw);
uint32_t TF_REAR_HEAVE(uint8_t bytes, uint32_t raw);
uint32_t TF_FRONT_ROLL(uint8_t bytes, uint32_t raw);
uint32_t TF_REAR_ROLL(uint8_t bytes, uint32_t raw);
uint32_t TF_TYRE_TEMP(uint8_t bytes, uint32_t raw);
uint32_t TF_ANGLE_GEAR(uint8_t bytes, uint32_t raw);
uint32_t TF_WATER_LVL(uint8_t bytes, uint32_t raw);
