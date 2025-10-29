/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : 
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
*   used strictly in accordance with the applicable license terms.  By expressly 
*   accepting such terms or by downloading, installing, activating and/or otherwise 
*   using the software, you are agreeing that you have read, and that you agree to 
*   comply with and are bound by, such license terms.  If you do not agree to be 
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef MPU_R52_IP_CFG_H
#define MPU_R52_IP_CFG_H

/**
*   @file Mpu_R52_Ip_Cfg.h
*
*   @addtogroup Mpu_R52_Ip Mpu R52 IPV Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Mpu_R52_Ip_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_PLATFORM_MPU_R52_IP_CFG_VENDOR_ID                    43
#define CDD_PLATFORM_MPU_R52_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define CDD_PLATFORM_MPU_R52_IP_CFG_AR_RELEASE_MINOR_VERSION     7
#define CDD_PLATFORM_MPU_R52_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define CDD_PLATFORM_MPU_R52_IP_CFG_SW_MAJOR_VERSION             2
#define CDD_PLATFORM_MPU_R52_IP_CFG_SW_MINOR_VERSION             0
#define CDD_PLATFORM_MPU_R52_IP_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Mpu_R52_Ip_Cfg.h and Mpu_R52_Ip_Types.h are of the same vendor */
#if (CDD_PLATFORM_MPU_R52_IP_CFG_VENDOR_ID != CDD_PLATFORM_MPU_R52_IP_TYPES_VENDOR_ID)
    #error "Mpu_R52_Ip_Cfg.h and Mpu_R52_Ip_Types.h have different vendor ids"
#endif
/* Check if Mpu_R52_Ip_Cfg.h file and Mpu_R52_Ip_Types.h file are of the same Autosar version */
#if (( CDD_PLATFORM_MPU_R52_IP_CFG_AR_RELEASE_MAJOR_VERSION    != CDD_PLATFORM_MPU_R52_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     ( CDD_PLATFORM_MPU_R52_IP_CFG_AR_RELEASE_MINOR_VERSION    != CDD_PLATFORM_MPU_R52_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     ( CDD_PLATFORM_MPU_R52_IP_CFG_AR_RELEASE_REVISION_VERSION != CDD_PLATFORM_MPU_R52_IP_TYPES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Mpu_R52_Ip_Cfg.h and Mpu_R52_Ip_Types.h are different"
#endif
/* Check if Mpu_R52_Ip_Cfg.h file and Mpu_R52_Ip_Types.h file are of the same Software version */
#if (( CDD_PLATFORM_MPU_R52_IP_CFG_SW_MAJOR_VERSION != CDD_PLATFORM_MPU_R52_IP_TYPES_SW_MAJOR_VERSION) || \
     ( CDD_PLATFORM_MPU_R52_IP_CFG_SW_MINOR_VERSION != CDD_PLATFORM_MPU_R52_IP_TYPES_SW_MINOR_VERSION) || \
     ( CDD_PLATFORM_MPU_R52_IP_CFG_SW_PATCH_VERSION != CDD_PLATFORM_MPU_R52_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Mpu_R52_Ip_Cfg.h and Mpu_R52_Ip_Types.h are different"
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

/** @} */

#endif /* MPU_R52_IP_CFG_H */
