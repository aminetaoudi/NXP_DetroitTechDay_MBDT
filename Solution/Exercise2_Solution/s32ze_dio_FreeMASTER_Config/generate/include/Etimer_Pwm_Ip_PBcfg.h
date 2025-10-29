/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : Emios Etimer FlexPwm
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
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef ETIMER_PWM_IP_PBCFG_H
#define ETIMER_PWM_IP_PBCFG_H

/**
*   @file       Etimer_Pwm_Ip_PBcfg.h
*
*   @addtogroup etimer_pwm_ip Etimer Pwm IPL
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Etimer_Pwm_Ip_Types.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ETIMER_PWM_IP_PB_CFG_VENDOR_ID                       43
#define ETIMER_PWM_IP_PB_CFG_MODULE_ID                       121
#define ETIMER_PWM_IP_PB_CFG_AR_RELEASE_MAJOR_VERSION        4
#define ETIMER_PWM_IP_PB_CFG_AR_RELEASE_MINOR_VERSION        7
#define ETIMER_PWM_IP_PB_CFG_AR_RELEASE_REVISION_VERSION     0
#define ETIMER_PWM_IP_PB_CFG_SW_MAJOR_VERSION                2
#define ETIMER_PWM_IP_PB_CFG_SW_MINOR_VERSION                0
#define ETIMER_PWM_IP_PB_CFG_SW_PATCH_VERSION                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Etimer_Pwm_Ip_Types header file are of the same vendor */
#if (ETIMER_PWM_IP_PB_CFG_VENDOR_ID != ETIMER_PWM_IP_TYPES_VENDOR_ID)
    #error "Vendor IDs of Etimer_Pwm_Ip_PBcfg.h and Etimer_Pwm_Ip_Types.h are different."
#endif

/* Check if header file and Etimer_Pwm_Ip_Types header file are of the same AUTOSAR version */
#if ((ETIMER_PWM_IP_PB_CFG_AR_RELEASE_MAJOR_VERSION    != ETIMER_PWM_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (ETIMER_PWM_IP_PB_CFG_AR_RELEASE_MINOR_VERSION    != ETIMER_PWM_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (ETIMER_PWM_IP_PB_CFG_AR_RELEASE_REVISION_VERSION != ETIMER_PWM_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Etimer_Pwm_Ip_PBcfg.h and Etimer_Pwm_Ip_Types.h are different."
#endif

/* Check if header file and Etimer_Pwm_Ip_Types header file are of the same software version */
#if ((ETIMER_PWM_IP_PB_CFG_SW_MAJOR_VERSION != ETIMER_PWM_IP_TYPES_SW_MAJOR_VERSION) || \
     (ETIMER_PWM_IP_PB_CFG_SW_MINOR_VERSION != ETIMER_PWM_IP_TYPES_SW_MINOR_VERSION) || \
     (ETIMER_PWM_IP_PB_CFG_SW_PATCH_VERSION != ETIMER_PWM_IP_TYPES_SW_PATCH_VERSION))
    #error "Software version numbers of Etimer_Pwm_Ip_PBcfg.h and Etimer_Pwm_Ip_Types.h are different."
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
#ifndef ETIMER_PWM_IP_PRECOMPILE_SUPPORT
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"
#endif  /* ETIMER_PWM_IP_PRECOMPILE_SUPPORT */

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ETIMER_PWM_IP_PBCFG_H */

