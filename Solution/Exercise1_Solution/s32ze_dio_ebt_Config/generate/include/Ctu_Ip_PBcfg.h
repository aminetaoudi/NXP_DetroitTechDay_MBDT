/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : ADC_SAR
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
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly
*   in accordance with the applicable license terms.  By expressly accepting
*   such terms or by downloading, installing, activating and/or otherwise using
*   the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms.  If you do not agree to
*   be bound by the applicable license terms, then you may not retain,
*   install, activate or otherwise use the software.
==================================================================================================*/

#ifndef CTU_IP_PBCFG_H
#define CTU_IP_PBCFG_H

/**
*   @file
*
*   @addtogroup ctu_ip_config CTU IPL Configuration
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Ctu_Ip_Types.h"
#ifdef CTU_IP_DMA_SUPPORTED
#include "Dma_Ip.h"
#endif /* CTU_IP_DMA_SUPPORTED */

/*==================================================================================================
*                                SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CTU_IP_VENDOR_ID_PBCFG                      43
#define CTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG       4
#define CTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG       7
#define CTU_IP_AR_RELEASE_REVISION_VERSION_PBCFG    0
#define CTU_IP_SW_MAJOR_VERSION_PBCFG               2
#define CTU_IP_SW_MINOR_VERSION_PBCFG               0
#define CTU_IP_SW_PATCH_VERSION_PBCFG               0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if Ctu_Ip_PBcfg.h file and Ctu_Ip_Types.h file are of the same vendor */
#if (CTU_IP_VENDOR_ID_PBCFG != CTU_IP_VENDOR_ID_TYPES)
    #error "Ctu_Ip_PBcfg.h and Ctu_Ip_Types.h have different vendor ids"
#endif

/* Check if Ctu_Ip_PBcfg.h file and Ctu_Ip_Types.h file are of the same Autosar version */
#if ((CTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG != CTU_IP_AR_RELEASE_MAJOR_VERSION_TYPES) || \
     (CTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG != CTU_IP_AR_RELEASE_MINOR_VERSION_TYPES) || \
     (CTU_IP_AR_RELEASE_REVISION_VERSION_PBCFG != CTU_IP_AR_RELEASE_REVISION_VERSION_TYPES) \
    )
    #error "AutoSar Version Numbers of Ctu_Ip_PBcfg.h and Ctu_Ip_Types.h are different"
#endif

/* Check if Ctu_Ip_PBcfg.h file and Ctu_Ip_Types.h file are of the same Software version */
#if ((CTU_IP_SW_MAJOR_VERSION_PBCFG != CTU_IP_SW_MAJOR_VERSION_TYPES) || \
     (CTU_IP_SW_MINOR_VERSION_PBCFG != CTU_IP_SW_MINOR_VERSION_TYPES) || \
     (CTU_IP_SW_PATCH_VERSION_PBCFG != CTU_IP_SW_PATCH_VERSION_TYPES) \
    )
  #error "Software Version Numbers of Ctu_Ip_PBcfg.h and Ctu_Ip_Types.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#ifdef CTU_IP_DMA_SUPPORTED
 /* Check if Ctu_Ip_PBcfg.h file and Dma_Ip.h file are of the same Autosar version */
#if ((CTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG != DMA_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG != DMA_IP_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of Ctu_Ip_PBcfg.h and Dma_Ip.h are different"
#endif
#endif /* CTU_IP_DMA_SUPPORTED */
#endif /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"


/**
* @brief          Ctu Ip Config for Control Mode configuration logical id 0 variant.
*/
extern const Ctu_Ip_ConfigType CtuIpConfigControlMode_0;

#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#define ADC_START_SEC_CODE
#include "Adc_MemMap.h"


/**
* @brief          Ctu Control Mode Notification function prototypes.
*/
void Adc_CtuFifo0ThresholdNotification(void);
void Adc_CtuFifo1ThresholdNotification(void);

#define ADC_STOP_SEC_CODE
#include "Adc_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CTU_IP_PBCFG_H */

