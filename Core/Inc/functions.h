/*
 * functions.h
 *
 *  Created on: Mar 4, 2024
 *      Author: csort
 */

#ifndef INC_FUNCTIONS_H_
#define INC_FUNCTIONS_H_

void CanSend(uint8_t *TxData);
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc);
void print(uint16_t select);
void decode();

typedef struct{
	uint8_t DLC;
	uint8_t Bytes[8];
}CAN_Message;

extern CAN_Message RxMessage;
extern CAN_Message TxMessage;

#endif /* INC_FUNCTIONS_H_ */
