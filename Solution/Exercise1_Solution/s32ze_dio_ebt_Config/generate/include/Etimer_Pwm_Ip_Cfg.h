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

#ifndef ETIMER_PWM_IP_CFG_H
#define ETIMER_PWM_IP_CFG_H

/**
*   @file       Etimer_Pwm_Ip_Cfg.h
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
/* Standard Types */
#include "Std_Types.h"

/* DevAssert implementation */
#include "Devassert.h"

/* Register definitions */
#include "S32E2_ETIMER.h"

/* Include all variants header files. */

#include "Etimer_Pwm_Ip_PBcfg.h"

/* Include Feature Defines */
#include "Reg_eSys.h"
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define ETIMER_PWM_IP_CFG_VENDOR_ID                    43
#define ETIMER_PWM_IP_CFG_MODULE_ID                    121
#define ETIMER_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define ETIMER_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION     7
#define ETIMER_PWM_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define ETIMER_PWM_IP_CFG_SW_MAJOR_VERSION             2
#define ETIMER_PWM_IP_CFG_SW_MINOR_VERSION             0
#define ETIMER_PWM_IP_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if header file and Std_Types.h are of the same AUTOSAR version */
    #if ((ETIMER_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (ETIMER_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Etimer_Pwm_Ip_Cfg.h and Std_Types.h are different"
    #endif

    /* Check if header file and Devassert.h are of the same AUTOSAR version */
    #if ((ETIMER_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION != DEVASSERT_AR_RELEASE_MAJOR_VERSION) || \
         (ETIMER_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION != DEVASSERT_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Etimer_Pwm_Ip_Cfg.h and Devassert.h are different"
    #endif

    /* Check if header file and Reg_eSys.h are of the same AUTOSAR version */
    #if ((ETIMER_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION != REG_ESYS_AR_RELEASE_MAJOR_VERSION) || \
         (ETIMER_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION != REG_ESYS_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Etimer_Pwm_Ip_Cfg.h and Reg_eSys.h are different"
    #endif
#endif


/* Check if header file and Etimer_Pwm_Ip_PBcfg header file are of the same vendor */
#if (ETIMER_PWM_IP_CFG_VENDOR_ID != ETIMER_PWM_IP_PB_CFG_VENDOR_ID)
    #error "Vendor IDs of Etimer_Pwm_Ip_Cfg.h and Etimer_Pwm_Ip_Pbcfg.h are different."
#endif

/* Check if header file and Etimer_Pwm_Ip_PBcfg header file are of the same AUTOSAR version */
#if ((ETIMER_PWM_IP_CFG_AR_RELEASE_MAJOR_VERSION    != ETIMER_PWM_IP_PB_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (ETIMER_PWM_IP_CFG_AR_RELEASE_MINOR_VERSION    != ETIMER_PWM_IP_PB_CFG_AR_RELEASE_MINOR_VERSION) || \
     (ETIMER_PWM_IP_CFG_AR_RELEASE_REVISION_VERSION != ETIMER_PWM_IP_PB_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Etimer_Pwm_Ip_Cfg.h and Etimer_Pwm_Ip_Pbcfg.h are different."
#endif

/* Check if header file and Etimer_Pwm_Ip_PBcfg header file are of the same software version */
#if ((ETIMER_PWM_IP_CFG_SW_MAJOR_VERSION != ETIMER_PWM_IP_PB_CFG_SW_MAJOR_VERSION) || \
     (ETIMER_PWM_IP_CFG_SW_MINOR_VERSION != ETIMER_PWM_IP_PB_CFG_SW_MINOR_VERSION) || \
     (ETIMER_PWM_IP_CFG_SW_PATCH_VERSION != ETIMER_PWM_IP_PB_CFG_SW_PATCH_VERSION))
    #error "Software version numbers of Etimer_Pwm_Ip_Cfg.h and Etimer_Pwm_Ip_Pbcfg.h are different."
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/** @brief      Switch to enable the development error detection. */
#define ETIMER_PWM_IP_DEV_ERROR_DETECT           (STD_ON)

/** @brief      The number of Etimer instances available on platform */
#define ETIMER_PWM_IP_INSTANCE_COUNT                (ETIMER_INSTANCE_COUNT)
/** @brief      The number of channels available on each Etimer instance */
#define ETIMER_PWM_IP_CHANNEL_COUNT                 (ETIMER_CH_COUNT)

/** @brief    Support for User mode */
#define ETIMER_PWM_IP_ENABLE_USER_MODE_SUPPORT   (STD_OFF)

/** @brief Min counter value for PWM modes */
#define ETIMER_PWM_IP_MIN_CNT_VAL                   (0x0001UL)
/** @brief Max counter value for PWM modes */
#define ETIMER_PWM_IP_MAX_CNT_VAL                   (0xFFFFUL)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #if (STD_ON == ETIMER_PWM_IP_ENABLE_USER_MODE_SUPPORT)
        #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running ETIMER in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
    #endif
#endif

#if ((STD_ON == ETIMER_PWM_IP_ENABLE_USER_MODE_SUPPORT) && defined(MCAL_ETIMER_AE_REG_PROT_AVAILABLE))
    #if (STD_ON == MCAL_ETIMER_AE_REG_PROT_AVAILABLE)
        #define  ETIMER_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE     (STD_ON)
    #else
        #define  ETIMER_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE     (STD_OFF)
    #endif
#else
#define  ETIMER_PWM_IP_USER_ACCESS_ALLOWED_AVAILABLE     (STD_OFF)
#endif

/* @brief Define if global variables need to be placed in non-cache area or not */
#define ETIMER_PWM_IP_NO_CACHE_NEEDED               (STD_OFF)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/* Redefine ETIMER_Type from header file to comply with coding guidelines */
typedef ETIMER_Type Etimer_Pwm_Ip_HwAddrType;

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* ETIMER_PWM_IP_CFG_H */

