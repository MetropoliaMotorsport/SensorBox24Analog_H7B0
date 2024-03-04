/*
 * config.c
 *
 *  Created on: Mar 4, 2024
 *      Author: csort
 */

#include "config.h"

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

	transfer_functions[0] = WATER_LVL;		// PA6
	transfer_functions[1] = FRONT_HEAVE;	// PC4
	transfer_functions[2] = FRONT_ROLL;		//PB1
	transfer_functions[3] = REAR_HEAVE;		//PA7
	transfer_functions[4] = REAR_ROLL;		//PC5
	transfer_functions[5] = APPS;			//PB0
	transfer_functions[6] = BPPS;			//PC0
	transfer_functions[7] = BPPS;			//PC1
	transfer_functions[8] = TYRE_TEMP;		//PC2
	transfer_functions[9] = ANGLE_GEAR;		//PC3
	transfer_functions[10] = VOLTAGE_3V3;	//PA2
	transfer_functions[11] = VOLTAGE_5V;	//PA3
	transfer_functions[12] = VOLTAGE_5V;	//PA0
	transfer_functions[13] = VOLTAGE_5V;	//PA1
	transfer_functions[14] = VOLTAGE_5V;	//PA4
	transfer_functions[15] = VOLTAGE_5V;	//PA5

}

