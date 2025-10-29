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

#ifndef CAN_HUB_IP_CFG_DEFINES_H
#define CAN_HUB_IP_CFG_DEFINES_H

/**
*   @file       Can_Hub_Ip_Cfg_Defines.h
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
/**
 * Include specific header file
 */
#include "Std_Types.h"

#include "S32E2_CAN_HUB.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_CAN_HUB_IP_CFG_DEFINES_VENDOR_ID                    43
#define RM_CAN_HUB_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define RM_CAN_HUB_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     7
#define RM_CAN_HUB_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define RM_CAN_HUB_IP_CFG_DEFINES_SW_MAJOR_VERSION             2
#define RM_CAN_HUB_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define RM_CAN_HUB_IP_CFG_DEFINES_SW_PATCH_VERSION             0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((RM_CAN_HUB_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (RM_CAN_HUB_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "Autosar Version Numbers of Can_Hub_Ip_Cfg_Defines.h and Std_Types.h are different"
    #endif
#endif

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/** @brief    Development error checking */
#define CAN_HUB_IP_DEV_ERROR_DETECT           (STD_ON)

/** @brief    Number of Can Group support */
#define CAN_HUB_NUM_OF_CAN_GROUP_SUPPORT      (24U)


#ifdef __cplusplus
}
#endif /* __cplusplus*/

/** @} */

#endif /* CAN_HUB_IP_CFG_DEFINES_H */
