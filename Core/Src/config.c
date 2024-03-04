/*
 * config.c
 *
 *  Created on: Mar 4, 2024
 *      Author: csort
 */

void Config_Setup(void){
	switch(ID){
	case 1:
		Config_1();
		break;
	case 2:
		Config_2();
		break;
	case 3:
		Config_3();
		break;
	}
}


