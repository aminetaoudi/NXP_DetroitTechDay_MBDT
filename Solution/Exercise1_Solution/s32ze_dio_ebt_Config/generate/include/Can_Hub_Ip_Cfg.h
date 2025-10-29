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
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifndef CAN_HUB_IP_CFG_H
#define CAN_HUB_IP_CFG_H

/**
*   @file       Can_Hub_Ip_Cfg.h
*
*   @addtogroup CAN_HUB_IP Can Hub IPV Driver
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus*/

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Can_Hub_Ip_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_CAN_HUB_IP_CFG_VENDOR_ID                    43
#define RM_CAN_HUB_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define RM_CAN_HUB_IP_CFG_AR_RELEASE_MINOR_VERSION     7
#define RM_CAN_HUB_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define RM_CAN_HUB_IP_CFG_SW_MAJOR_VERSION             2
#define RM_CAN_HUB_IP_CFG_SW_MINOR_VERSION             0
#define RM_CAN_HUB_IP_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Can_Hub_Ip_PBcfg.h */
#if (RM_CAN_HUB_IP_CFG_VENDOR_ID != RM_CAN_HUB_IP_PBCFG_VENDOR_ID)
    #error "Can_Hub_Ip_Cfg.h and Can_Hub_Ip_PBcfg.h have different vendor ids"
#endif
#if ((RM_CAN_HUB_IP_CFG_AR_RELEASE_MAJOR_VERSION    != RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (RM_CAN_HUB_IP_CFG_AR_RELEASE_MINOR_VERSION    != RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (RM_CAN_HUB_IP_CFG_AR_RELEASE_REVISION_VERSION != RM_CAN_HUB_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Can_Hub_Ip_Cfg.h and Can_Hub_Ip_PBcfg.h are different"
#endif
#if ((RM_CAN_HUB_IP_CFG_SW_MAJOR_VERSION != RM_CAN_HUB_IP_PBCFG_SW_MAJOR_VERSION) || \
     (RM_CAN_HUB_IP_CFG_SW_MINOR_VERSION != RM_CAN_HUB_IP_PBCFG_SW_MINOR_VERSION) || \
     (RM_CAN_HUB_IP_CFG_SW_PATCH_VERSION != RM_CAN_HUB_IP_PBCFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Can_Hub_Ip_Cfg.h and Can_Hub_Ip_PBcfg.h are different"
#endif


/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define RM_IP_ENABLE_CAN_HUB                            (STD_ON)

/**
* @brief   Collection of all configuration structures declarations.
*/
#define RM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"

CAN_HUB_CONFIG_PB

#define RM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"

#ifdef __cplusplus
}
#endif /* __cplusplus*/

/** @} */

#endif /* CAN_HUB_IP_CFG_H */

