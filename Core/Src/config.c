/*
 * config.c
 *
 *  Created on: Mar 4, 2024
 *      Author: csort
 */

#include "config.h"

#define ID 1

void Config_Setup(void){

#if ID == 1
	Config_1();
#elif ID == 2
	Config_2();
#elif ID == 3
	Config_3();
#endif
}

void Config_1(){

	CAN_interval = 20;

	transfer_functions[0] = VOLTAGE_3V3;		// PA6
	transfer_functions[1] = VOLTAGE_3V3;	// PC4
	transfer_functions[2] = VOLTAGE_3V3;		//PB1
	transfer_functions[3] = VOLTAGE_3V3;		//PA7
	transfer_functions[4] = VOLTAGE_3V3;		//PC5
	transfer_functions[5] = VOLTAGE_3V3;			//PB0
	transfer_functions[6] = VOLTAGE_3V3;			//PC0
	transfer_functions[7] = VOLTAGE_3V3;			//PC1
	transfer_functions[8] = VOLTAGE_3V3;		//PC2
	transfer_functions[9] = VOLTAGE_3V3;		//PC3
	transfer_functions[10] = VOLTAGE_3V3;	//PA2
	transfer_functions[11] = VOLTAGE_3V3;	//PA3
	transfer_functions[12] = VOLTAGE_3V3;	//PA0
	transfer_functions[13] = VOLTAGE_3V3;	//PA1
	transfer_functions[14] = VOLTAGE_3V3;	//PA4
	transfer_functions[15] = VOLTAGE_3V3;	//PA5

	CAN_ID[0] = 1;
	CAN_ID[1] = 2;
	CAN_ID[2] = 3;
	CAN_ID[3] = 4;
	CAN_ID[4] = 5;
	CAN_ID[5] = 6;
	CAN_ID[6] = 7;
	CAN_ID[7] = 8;
	CAN_ID[8] = 9;
	CAN_ID[9] = 10;
	CAN_ID[10] = 11;
	CAN_ID[11] = 12;
	CAN_ID[12] = 13;
	CAN_ID[13] = 14;
	CAN_ID[14] = 15;
	CAN_ID[15] = 16;

}

