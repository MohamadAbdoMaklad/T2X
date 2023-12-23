/************************************************************************************************************/
/*Author	            : Mohamad Abdo Maklad	 ************************************************************/
/*Date		            : 16-11-2023			 ************************************************************/
/*Last Modification		: 16-11-2023			 ************************************************************/
/*Version	            : V01				   	 ************************************************************/
/************************************************************************************************************/
/*Controller			: ATMEGA128				 ************************************************************/
/*SWC					: L298N					 ************************************************************/
/************************************************************************************************************/
/****************(L298N_Interface.h)*************************************************************************/
/************************************************************************************************************/
#ifndef L298N_INTERFACE_H_
#define L298N_INTERFACE_H_
#include "L298N_Cfg.h"

typedef enum
{
	MotorOFF=0,
	MotorCW,
	MotorCCW
}MotorState_t;




#if CHANNEL1STATE == ENABLE_Macro

/*******************************************************************************************************/
/*Function Name: DCM_CH1_voidInit()*********************************************************************/
/*Function inputs: No Inputs****************************************************************************/
/*Function return: No return****************************************************************************/
/*Function Description:"This function Init The L298N DC Motor Driver Channel 1"*************************/
/*******************************************************************************************************/

	void DCM_CH1_voidInit(void);

/*******************************************************************************************************/
/*Function Name: DCM_CH1_voidSetMotorState(MotorState_t Copy_State)*************************************/
/*Function inputs: *************************************************************************************/
/*	Copy_State	<<MotorState_t>> MotorOFF - MotorCW - MotorCCW *****************************************/
/*Function return: No return****************************************************************************/
/*Function Description:"This function Set State Or Direction For L298N DC Motor Driver Channel 1"*******/
/*******************************************************************************************************/

	void DCM_CH1_voidSetMotorState(MotorState_t Copy_State);

/*******************************************************************************************************/
/*Function Name: DCM_CH1_voidSetMotorSpeed(u8 copy_u8Speed)*********************************************/
/*Function inputs: *************************************************************************************/
/*	Copy_State	<<STD_t>> 0 ... 100 <<u8>>**************************************************************/
/*Function return: No return****************************************************************************/
/*Function Description:"This function Set Speed For L298N DC Motor Driver Channel 1"********************/
/*******************************************************************************************************/

	void DCM_CH1_voidSetMotorSpeed(u8 copy_u8Speed);
#endif


#if CHANNEL2STATE == ENABLE_Macro

/*******************************************************************************************************/
/*Function Name: DCM_CH2_voidInit()*********************************************************************/
/*Function inputs: No Inputs****************************************************************************/
/*Function return: No return****************************************************************************/
/*Function Description:"This function Init The L298N DC Motor Driver Channel 2"*************************/
/*******************************************************************************************************/

	void DCM_CH2_voidInit(void);
	
/*******************************************************************************************************/
/*Function Name: DCM_CH2_voidSetMotorState(MotorState_t Copy_State)*************************************/
/*Function inputs: *************************************************************************************/
/*	Copy_State	<<MotorState_t>> MotorOFF - MotorCW - MotorCCW *****************************************/
/*Function return: No return****************************************************************************/
/*Function Description:"This function Set State Or Direction For L298N DC Motor Driver Channel 2"*******/
/*******************************************************************************************************/
	
	void DCM_CH2_voidSetMotorState(MotorState_t Copy_State);
	
/*******************************************************************************************************/
/*Function Name: DCM_CH2_voidSetMotorSpeed(u8 copy_u8Speed)*********************************************/
/*Function inputs: *************************************************************************************/
/*	Copy_State	<<STD_t>> 0 ... 100 <<u8>>**************************************************************/
/*Function return: No return****************************************************************************/
/*Function Description:"This function Set Speed For L298N DC Motor Driver Channel 2"********************/
/*******************************************************************************************************/
	
	void DCM_CH2_voidSetMotorSpeed(u8 copy_u8Speed);
#endif


#endif /* L298N_INTERFACE_H_ */