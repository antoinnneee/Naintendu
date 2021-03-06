/*******************************************************************************
* File Name: Pin_J1_AX.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_J1_AX_ALIASES_H) /* Pins Pin_J1_AX_ALIASES_H */
#define CY_PINS_Pin_J1_AX_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Pin_J1_AX_0			(Pin_J1_AX__0__PC)
#define Pin_J1_AX_0_PS		(Pin_J1_AX__0__PS)
#define Pin_J1_AX_0_PC		(Pin_J1_AX__0__PC)
#define Pin_J1_AX_0_DR		(Pin_J1_AX__0__DR)
#define Pin_J1_AX_0_SHIFT	(Pin_J1_AX__0__SHIFT)
#define Pin_J1_AX_0_INTR	((uint16)((uint16)0x0003u << (Pin_J1_AX__0__SHIFT*2u)))

#define Pin_J1_AX_INTR_ALL	 ((uint16)(Pin_J1_AX_0_INTR))


#endif /* End Pins Pin_J1_AX_ALIASES_H */


/* [] END OF FILE */
