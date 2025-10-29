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

/**
*   @file       Can_Hub_Ip_PBcfg.c
*
*   @addtogroup CAN_HUB_IP Can Hub IPV Driver
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus*/

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Can_Hub_Ip_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_CAN_HUB_IP_PBCFG_VENDOR_ID_C                     43
#define RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C      4
#define RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C      7
#define RM_CAN_HUB_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C   0
#define RM_CAN_HUB_IP_PBCFG_SW_MAJOR_VERSION_C              2
#define RM_CAN_HUB_IP_PBCFG_SW_MINOR_VERSION_C              0
#define RM_CAN_HUB_IP_PBCFG_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Can_Hub_Ip_PBcfg.h */
#if (RM_CAN_HUB_IP_PBCFG_VENDOR_ID_C != RM_CAN_HUB_IP_PBCFG_VENDOR_ID)
    #error "Can_Hub_Ip_PBcfg.c and Can_Hub_Ip_PBcfg.h have different vendor ids"
#endif
#if ((RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C    != RM_CAN_HUB_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (RM_CAN_HUB_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != RM_CAN_HUB_IP_PBCFG_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Can_Hub_Ip_PBcfg.c and Can_Hub_Ip_PBcfg.h are different"
#endif
#if ((RM_CAN_HUB_IP_PBCFG_SW_MAJOR_VERSION_C != RM_CAN_HUB_IP_PBCFG_SW_MAJOR_VERSION) || \
     (RM_CAN_HUB_IP_PBCFG_SW_MINOR_VERSION_C != RM_CAN_HUB_IP_PBCFG_SW_MINOR_VERSION) || \
     (RM_CAN_HUB_IP_PBCFG_SW_PATCH_VERSION_C != RM_CAN_HUB_IP_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Can_Hub_Ip_PBcfg.c and Can_Hub_Ip_PBcfg.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define RM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"

static const Can_Hub_GroupConfigType Can_Hub_GroupConfig[CAN_HUB_NUM_OF_GROUP_PB] =
{
    {
        /* CanGroup         */ 0U,
        /* CanBus           */ 0U,
        /* HwFaultReaction  */ 0U
    }
};

/**
 * @brief  Configure CAN HUB driver initialization
 **/
const Can_Hub_ConfigType Can_Hub_Config =
{
    /* numOfGroupConfig */ CAN_HUB_NUM_OF_GROUP_PB,
    /* pCanGroupConfig  */ Can_Hub_GroupConfig
};

#define RM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"

/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif /* __cplusplus*/

/** @} */
