/*****************************************************************************
**											  								**
** project :  POPBL							 							  	**
** filename : pines.h							  							**
** version : 1 									  							**
** date :  	2013-01-16		 		 									    **
** 											  								**
******************************************************************************
** 											  								**
** gpl2 license  2013, Irune Agirre, Aitor Arrieta & Ane Alberdi	  		**
**  								  					                    **
** 											  								**
******************************************************************************
**										        							**
**VERSION HISTORY:									  						**
**----------------									  						**
**Version : 1										  						**
**Date : 2013-01-16										 					**
**Revised by : 							  									**
**Description : Original version.							  				**
*****************************************************************************/
#ifndef _PINES_H
#define _PINES_H
/*****************************************************************************
** 																			**
** MODULES USED 															**
** 																			**
****************************************************************************/
#include "hw_types.h"
#include "hw_memmap.h"
#include "hw_ints.h"
#include "sysctl.h"
#include "interrupt.h"
#include "gpio.h"
#include "FreeRTOS.h"
#include "task.h"
/*****************************************************************************
**	 																		**
** TYPEDEFS AND STRUCTURES 													**
** 																			**
*****************************************************************************/
#ifndef _PINES_C
#define PUB_PINES extern
#else
#define PUB_PINES
#endif
/*****************************************************************************
**								 											**
** EXPORTED VARIABLES 														**
** 																			**
******************************************************************************/
extern xTaskHandle xHandle_Task_Recibir_Infrarrojos; /*"Handle" de la tarea de
recibir infrarrojos*/
/*****************************************************************************
**					 														**
** EXPORTED FUNCTIONS 														**
** 																			**
******************************************************************************/
void PINES_inicializar_puerto_b_pines_0_1(void);
void PINES_inicializar_int_puerto_b_pines_0_1();
/*****************************************************************************
** 																			**
** EOF 																		**
** 																			**
******************************************************************************/
#endif
