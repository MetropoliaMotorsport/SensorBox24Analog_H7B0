/*
 * functions.c
 *
 *  Created on: Mar 4, 2024
 *      Author: csort
 */

#include "transfer_functions.h"
#include "stm32h7xx_hal.h"
#include "stm32h7xx.h"
#include "config.h"
#include "main.h"

void CanSend(uint8_t *TxData){
	while(HAL_FDCAN_GetTxFifoFreeLevel(&hfdcan1) != 0 && HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1, &TxHeader, TxData) != HAL_OK){
		Error_Handler();
	}
}

void HAL_FDCAN_RxFifo0Callback(FDCAN_HandleTypeDef *hfdcan, uint32_t RxFifo0ITs)
{
	if((RxFifo0ITs & FDCAN_IT_RX_FIFO0_NEW_MESSAGE) != RESET)
	{
		/* Retreive Rx messages from RX FIFO0 */
		if (HAL_FDCAN_GetRxMessage(hfdcan, FDCAN_RX_FIFO0, &RxHeader, RxMessage.Bytes) != HAL_OK)
		{
			/* Reception Error */
			Error_Handler();
		}else{
			decode();
		}

		if (HAL_FDCAN_ActivateNotification(hfdcan, FDCAN_IT_RX_FIFO0_NEW_MESSAGE, 0) != HAL_OK)
		{
			/* Notification Error */
			Error_Handler();
		}
	}
}



void print(uint16_t select){
		//uint16_t Data = TF_Select(1,averages[select],transfer_functions[select]);
		sensors[select].data = sensors[select].transfer_function(1,sensors[select].averages);
		TxMessage.Bytes[0] = sensors[select].data;
		TxMessage.Bytes[1] = sensors[select].data >> 8;
		TxHeader.Identifier = sensors[select].CAN_ID;

		if(sensors[select].CAN_ID)
			CanSend(TxMessage.Bytes);
}

void decode(){
	switch(RxMessage.Bytes[0]){
	
	}
}
