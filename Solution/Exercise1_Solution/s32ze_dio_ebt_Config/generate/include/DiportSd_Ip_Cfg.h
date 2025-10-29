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

#ifndef DIPORTSD_IP_CFG_H
#define DIPORTSD_IP_CFG_H

/**
*   @file DIPORTSD_Ip_Cfg.h
*
*   @addtogroup DIPORTSD_Ip Mpu M33 IPV Driver
*   @{
*/


/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "DiportSd_Ip_Types.h"
#include "DiportSd_Ip_Cfg_Defines.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_PLATFORM_DIPORTSD_IP_CFG_VENDOR_ID                    43
#define CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_MINOR_VERSION     7
#define CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define CDD_PLATFORM_DIPORTSD_IP_CFG_SW_MAJOR_VERSION             2
#define CDD_PLATFORM_DIPORTSD_IP_CFG_SW_MINOR_VERSION             0
#define CDD_PLATFORM_DIPORTSD_IP_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against DIPORTSD_Ip_Types.h */
#if (CDD_PLATFORM_DIPORTSD_IP_CFG_VENDOR_ID != CDD_PLATFORM_DIPORTSD_IP_TYPES_VENDOR_ID)
    #error "DIPORTSD_Ip_Cfg.h and DIPORTSD_Ip_Types.h have different vendor ids"
#endif
#if (( CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_MAJOR_VERSION    != CDD_PLATFORM_DIPORTSD_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_MINOR_VERSION    != CDD_PLATFORM_DIPORTSD_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_REVISION_VERSION != CDD_PLATFORM_DIPORTSD_IP_TYPES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of DIPORTSD_Ip_Cfg.h and DIPORTSD_Ip_Types.h are different"
#endif
#if (( CDD_PLATFORM_DIPORTSD_IP_CFG_SW_MAJOR_VERSION != CDD_PLATFORM_DIPORTSD_IP_TYPES_SW_MAJOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_SW_MINOR_VERSION != CDD_PLATFORM_DIPORTSD_IP_TYPES_SW_MINOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_SW_PATCH_VERSION != CDD_PLATFORM_DIPORTSD_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of DIPORTSD_Ip_Cfg.h and DIPORTSD_Ip_Types.h are different"
#endif

/* Checks against DIPORTSD_Ip_Cfg_Defines.h */
#if (CDD_PLATFORM_DIPORTSD_IP_CFG_VENDOR_ID != CDD_PLATFORM_DIPORTSD_IP_CFG_DEFINES_VENDOR_ID)
    #error "DIPORTSD_Ip_Cfg.h and DIPORTSD_Ip_Cfg_Defines.h have different vendor ids"
#endif
#if (( CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_MAJOR_VERSION    != CDD_PLATFORM_DIPORTSD_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_MINOR_VERSION    != CDD_PLATFORM_DIPORTSD_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_AR_RELEASE_REVISION_VERSION != CDD_PLATFORM_DIPORTSD_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of DIPORTSD_Ip_Cfg.h and DIPORTSD_Ip_Cfg_Defines.h are different"
#endif
#if (( CDD_PLATFORM_DIPORTSD_IP_CFG_SW_MAJOR_VERSION != CDD_PLATFORM_DIPORTSD_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_SW_MINOR_VERSION != CDD_PLATFORM_DIPORTSD_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     ( CDD_PLATFORM_DIPORTSD_IP_CFG_SW_PATCH_VERSION != CDD_PLATFORM_DIPORTSD_IP_CFG_DEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of DIPORTSD_Ip_Cfg.h and DIPORTSD_Ip_Cfg_Defines.h are different"
#endif

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"


#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"
/** @} */

#endif /* DIPORTSD_IP_CFG_H */

