/*==================================================================================================
* Project : RTD AUTOSAR 4.7
* Platform : CORTEXM
* Peripheral : Pit_Emios_Stm_Etimer
* Dependencies : none
*
* Autosar Version : 4.7.0
* Autosar Revision : ASR_REL_4_7_REV_0000
* Autosar Conf.Variant :
* SW Version : 2.0.0
* Build Version : S32ZE_RTD_2_0_0_D2407_ASR_REL_4_7_REV_0000_20240726
*
* Copyright 2021-2024 NXP
*
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

#ifndef ETIMER_GPT_IP_CFG_DEFINES_H
#define ETIMER_GPT_IP_CFG_DEFINES_H

/**
*   @file           Etimer_Gpt_Ip_Cfg_Defines.h
*
*   @addtogroup     Etimer_ip Etimer IPL
*
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "StandardTypes.h"
/* Include platform header file. */
#include "S32E2_ETIMER.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ETIMER_GPT_IP_CFG_DEFINES_VENDOR_ID                    43
#define ETIMER_GPT_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define ETIMER_GPT_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     7
#define ETIMER_GPT_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define ETIMER_GPT_IP_CFG_DEFINES_SW_MAJOR_VERSION             2
#define ETIMER_GPT_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define ETIMER_GPT_IP_CFG_DEFINES_SW_PATCH_VERSION             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and StandardTypes.h file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((ETIMER_GPT_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (ETIMER_GPT_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Etimer_Gpt_Ip_Cfg_Defines.h and StandardTypes.h are different"
    #endif
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/**
* @brief These defines indicate that at least one channel from each module is used in all configurations.
*/
#define ETIMER_GPT_IP_USED (STD_OFF)
/*================================================================================================*/
/**
* @brief    ETIMER_GPT_IP_SET_CLOCK_MODE switch
* @details  Enable/disable API for Dual Mode support.
*/
#define ETIMER_GPT_IP_SET_CLOCK_MODE           (STD_OFF)
/**
*
* @brief IRQ Defines for each channel used
*/
/* Macros that indicate ETIMER interrupts used by GPT. */

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif
/** @} */

#endif  /* ETIMER_GPT_IP_CFG_DEFINE_H */
