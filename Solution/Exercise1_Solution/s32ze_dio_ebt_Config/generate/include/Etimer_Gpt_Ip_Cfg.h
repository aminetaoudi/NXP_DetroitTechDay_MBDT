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

#ifndef ETIMER_GPT_IP_CFG_H
#define ETIMER_GPT_IP_CFG_H

/**
*   @file           Etimer_Gpt_Ip_Cfg.h
*
*   @addtogroup     etimer_ip Etimer IPL
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
/* Include all variants header files. */

#include "Etimer_Gpt_Ip_PBcfg.h"


/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ETIMER_GPT_IP_VENDOR_ID_CFG                    43
#define ETIMER_GPT_IP_AR_RELEASE_MAJOR_VERSION_CFG     4
#define ETIMER_GPT_IP_AR_RELEASE_MINOR_VERSION_CFG     7
#define ETIMER_GPT_IP_AR_RELEASE_REVISION_VERSION_CFG  0
#define ETIMER_GPT_IP_SW_MAJOR_VERSION_CFG             2
#define ETIMER_GPT_IP_SW_MINOR_VERSION_CFG             0
#define ETIMER_GPT_IP_SW_PATCH_VERSION_CFG             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

#if (ETIMER_GPT_IP_VENDOR_ID_CFG != ETIMER_GPT_IP_VENDOR_ID_PBCFG_H)
    #error "Etimer_Gpt_Ip_Cfg.h and Etimer_Gpt_Ip_PBcfg.h have different vendor ids"
#endif
/* Check if header file and Etimer_Gpt_Ip_PBcfg.h file are of the same Autosar version */
#if ((ETIMER_GPT_IP_AR_RELEASE_MAJOR_VERSION_CFG != ETIMER_GPT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_H) || \
     (ETIMER_GPT_IP_AR_RELEASE_MINOR_VERSION_CFG != ETIMER_GPT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_H) || \
     (ETIMER_GPT_IP_AR_RELEASE_REVISION_VERSION_CFG != ETIMER_GPT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Etimer_Gpt_Ip_Cfg.h and Etimer_Gpt_Ip_PBcfg.h are different"
#endif
/* Check if header file and Etimer_Gpt_Ip_PBcfg.h file are of the same Software version */
#if ((ETIMER_GPT_IP_SW_MAJOR_VERSION_CFG != ETIMER_GPT_IP_SW_MAJOR_VERSION_PBCFG_H) || \
     (ETIMER_GPT_IP_SW_MINOR_VERSION_CFG != ETIMER_GPT_IP_SW_MINOR_VERSION_PBCFG_H) || \
     (ETIMER_GPT_IP_SW_PATCH_VERSION_CFG != ETIMER_GPT_IP_SW_PATCH_VERSION_PBCFG_H) \
    )
    #error "Software Version Numbers of Etimer_Gpt_Ip_Cfg.h and Etimer_Gpt_Ip_PBcfg.h are different"
#endif

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief   Dev error detect switch ETIMER_GPT_IP_DEV_ERROR_DETECT
* @details On/Off ETIMER_GPT_IP_DEV_ERROR_DETECT
*/
#define ETIMER_GPT_IP_DEV_ERROR_DETECT (STD_ON)

/*================================================================================================*/
/**
* @brief    ETIMER_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE switch
* @details  Enable/disable support for changing timeout value during timer running
*/
#define ETIMER_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE     (STD_OFF)
/*================================================================================================*/

/**
* @brief    ETIMER_GPT_IP_ENABLE_USER_MODE_SUPPORT switch
* @details  Enable/disable support usermode.If this parameter has been configured to TRUE the GPT driver code can be executed from both supervisor and user mode.
*/
#define ETIMER_GPT_IP_ENABLE_USER_MODE_SUPPORT    (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #ifdef ETIMER_GPT_IP_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == ETIMER_GPT_IP_ENABLE_USER_MODE_SUPPORT)
            #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Gpt in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
        #endif /* (STD_ON == ETIMER_GPT_IP_ENABLE_USER_MODE_SUPPORT) */
    #endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */
#endif /* ifdef MCAL_ENABLE_USER_MODE_SUPPORT*/
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

#ifdef _cplusplus
}
#endif

/** @} */
#endif  /* ETIMER_GPT_IP_CFG_H */
