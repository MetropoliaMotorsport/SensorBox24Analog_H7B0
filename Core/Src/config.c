/*
 * config.c
 *
 *  Created on: Mar 4, 2024
 *      Author: csort
 */

#include "config.h"

#define ID 2

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

	//Set up sensors to respective MCU pins

	transfer_functions[0] = APPS;	//PA6 24v_1
	transfer_functions[1] = NC;	//PC4 3v3_0
	transfer_functions[2] = NC;	//PB1 3v3_1
	transfer_functions[3] = BRK_PRES;	//PA7 24v_2
	transfer_functions[4] = NC;	//PC5 NC
	transfer_functions[5] = NC;	//PB0 NC
	transfer_functions[6] = ANGLE_GEAR;	//PC0 24v_0
	transfer_functions[7] = NC;		//PC1 5v_6
	transfer_functions[8] = NC;		//PC2 5v_5
	transfer_functions[9] = NC;		//PC3 5v_4
	transfer_functions[10] = NC;	//PA2 5v_1 angle gear sensor
	transfer_functions[11] = APPS;	//PA3 5v_0
	transfer_functions[12] = NC;	//PA0 5v_3
	transfer_functions[13] = BPPS;	//PA1 5v_2
	transfer_functions[14] = NC;	//PA4 NC
	transfer_functions[15] = NC;	//PA5 NC

	//Change CAN ids for sensors

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

void Config_2(){

	CAN_interval = 20;

	//Set up sensors to respective MCU pins

	transfer_functions[0] = NC;	//PA6 24v_1
	transfer_functions[1] = NC;	//PC4 3v3_0
	transfer_functions[2] = NC;	//PB1 3v3_1
	transfer_functions[3] = NC;	//PA7 24v_2
	transfer_functions[4] = NC;	//PC5 NC
	transfer_functions[5] = NC;	//PB0 NC
	transfer_functions[6] = NC;	//PC0 24v_0
	transfer_functions[7] = NC;		//PC1 5v_6
	transfer_functions[8] = NC;		//PC2 5v_5
	transfer_functions[9] = NC;		//PC3 5v_4
	transfer_functions[10] = NC;	//PA2 5v_1 angle gear sensor
	transfer_functions[11] = NC;	//PA3 5v_0
	transfer_functions[12] = NC;	//PA0 5v_3
	transfer_functions[13] = NC;	//PA1 5v_2
	transfer_functions[14] = NC;	//PA4 NC
	transfer_functions[15] = NC;	//PA5 NC

	//Change CAN ids for sensors

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

