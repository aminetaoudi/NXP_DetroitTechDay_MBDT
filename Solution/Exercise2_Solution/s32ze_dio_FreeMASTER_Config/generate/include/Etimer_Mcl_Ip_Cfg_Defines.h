/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,EMIOS,LCU,ETIMER,LLC,SPFU
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 2.0.0
*   Build Version        : S32ZE_RTD_2_0_0_D2407_ASR_REL_4_7_REV_0000_20240726
*
*   Copyright 2021-2024 NXP
*   
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be 
*   used strictly in accordance with the applicable license terms.  By expressly 
*   accepting such terms or by downloading, installing, activating and/or otherwise 
*   using the software, you are agreeing that you have read, and that you agree to 
*   comply with and are bound by, such license terms.  If you do not agree to be 
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef ETIMER_MCL_IP_CFG_DEFINES_H
#define ETIMER_MCL_IP_CFG_DEFINES_H
/**
*   @file Etimer_Mcl_Ip_Cfg_Defines.h
*
*   @version 2.0.0
*
*   @brief   AUTOSAR Mcl - MCL driver header file.
*   @details 
*
*   @addtogroup MCL_DRIVER MCL Driver
*   @{
*/
#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Etimer_Mcl_Ip_Cfg_DeviceRegisters.h"

#include "Etimer_Pwm_Ip_CfgDefines.h"
#include "Etimer_Gpt_Ip_Cfg_Defines.h"

/*==================================================================================================
*                               HEADER FILE VERSION INFORMATION
==================================================================================================*/
#define ETIMER_MCL_IP_CFG_DEFINES_VENDOR_ID                       43
#define ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION        4
#define ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION        7
#define ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION     0
#define ETIMER_MCL_IP_CFG_DEFINES_SW_MAJOR_VERSION                2
#define ETIMER_MCL_IP_CFG_DEFINES_SW_MINOR_VERSION                0
#define ETIMER_MCL_IP_CFG_DEFINES_SW_PATCH_VERSION                0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (ETIMER_MCL_IP_CFG_DEFINES_VENDOR_ID != ETIMER_MCL_IP_CFG_DEVICEREGISTERS_VENDOR_ID)
    #error "Etimer_Mcl_Ip_Cfg_Defines.h and Etimer_Mcl_Ip_Cfg_DeviceRegisters.h have different vendor ids"
#endif

/* Check if  header file and Etimer_Mcl_Ip_Cfg_DeviceRegisters.h file are of the same Autosar version */
#if ((ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != ETIMER_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION) || \
     (ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != ETIMER_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION) || \
     (ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION != ETIMER_MCL_IP_CFG_DEVICEREGISTERS_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Etimer_Mcl_Ip_Cfg_Defines.h and Etimer_Mcl_Ip_Cfg_DeviceRegisters.h are different"
#endif

/* Check if header file and Etimer_Mcl_Ip_Cfg_DeviceRegisters.h file are of the same Software version */
#if ((ETIMER_MCL_IP_CFG_DEFINES_SW_MAJOR_VERSION != ETIMER_MCL_IP_CFG_DEVICEREGISTERS_SW_MAJOR_VERSION) || \
     (ETIMER_MCL_IP_CFG_DEFINES_SW_MINOR_VERSION != ETIMER_MCL_IP_CFG_DEVICEREGISTERS_SW_MINOR_VERSION) || \
     (ETIMER_MCL_IP_CFG_DEFINES_SW_PATCH_VERSION != ETIMER_MCL_IP_CFG_DEVICEREGISTERS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Etimer_Mcl_Ip_Cfg_Defines.h and Etimer_Mcl_Ip_Cfg_DeviceRegisters.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if this header file and Etimer_Gpt_Ip_Cfg_Defines.h file are of the same Autosar version */
    #if ((ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != ETIMER_GPT_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
        (ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != ETIMER_GPT_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Etimer_Mcl_Ip_Cfg_Defines.h and Etimer_Gpt_Ip_Cfg_Defines.h are different"
    #endif
    /* Check if this header file and Etimer_Pwm_Ip_CfgDefines.h file are of the same Autosar version */
    #if ((ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != ETIMER_PWM_IP_CFGDEFINES_AR_RELEASE_MAJOR_VERSION) || \
        (ETIMER_MCL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != ETIMER_PWM_IP_CFGDEFINES_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of Etimer_Mcl_Ip_Cfg_Defines.h and Etimer_Pwm_Ip_CfgDefines.h are different"
    #endif
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* ETIMER_MCL_IP_CFG_DEFINES_H */
