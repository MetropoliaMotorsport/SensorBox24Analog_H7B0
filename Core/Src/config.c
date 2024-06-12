#include "config.h"

#define ID 1


void Config_Setup(void) {
#if ID == 1
    Config_1();
#elif ID == 2
    Config_2();
#elif ID == 3
    Config_3();
#endif
}

void Config_1(void) {

	//initialize the sensors
	for (int i = 0; i < 16; i++) {
		sensors[i].transfer_function = TF_3V3;
		sensors[i].CAN_ID = 0;
		sensors[i].CAN_interval = 100;
		sensors[i].averages = 0;
		sensors[i].pin = i;
	}

	// Sensor definitions
	Sensor APPS1 = {TF_APPS, 1, 100, 0, V24_in1};
	Sensor APPS2 = {TF_APPS, 2, 100, 0, V5_in0};
	Sensor BPPS = {TF_BPPS, 3, 100, 0, V5_in2};
	Sensor BTN1 = {TF_BTN, 12, 100, 0, V5_in3};
	Sensor BTN2 = {TF_BTN, 13, 100, 0, V5_in4};
	Sensor BTN3 = {TF_BTN, 14, 100, 0, V5_in5};

    sensors[APPS1.pin] = APPS1;
    sensors[APPS2.pin] = APPS2;
    sensors[BPPS.pin] = BPPS;
	sensors[BTN1.pin] = BTN1;
	sensors[BTN2.pin] = BTN2;
	sensors[BTN3.pin] = BTN3;

	

    CAN_interval = 100;
}

void Config_2(void){
	//initialize the sensors
		for (int i = 0; i < 16; i++) {
			sensors[i].transfer_function = TF_3V3;
			sensors[i].CAN_ID = 0;
			sensors[i].CAN_interval = 100;
			sensors[i].averages = 0;
			sensors[i].pin = i;
		}

		// Sensor definitions

	    CAN_interval = 100;
}
