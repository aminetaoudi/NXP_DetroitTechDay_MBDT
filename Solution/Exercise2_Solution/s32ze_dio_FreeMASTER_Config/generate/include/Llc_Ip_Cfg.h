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

/* Prevention from multiple including the same header */
#ifndef LLC_IP_CFG_H_
#define LLC_IP_CFG_H_

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
#include "Llc_Ip_Types.h"
#include "Llc_Ip_PBcfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LLC_IP_CFG_VENDOR_ID                    43
#define LLC_IP_CFG_MODULE_ID                    255
#define LLC_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define LLC_IP_CFG_AR_RELEASE_MINOR_VERSION     7
#define LLC_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define LLC_IP_CFG_SW_MAJOR_VERSION             2
#define LLC_IP_CFG_SW_MINOR_VERSION             0
#define LLC_IP_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if header file and Llc_Ip_Types.h file are of the same vendor */
#if (LLC_IP_CFG_VENDOR_ID != LLC_IP_TYPES_VENDOR_ID)
    #error "Llc_Ip_Cfg.h and Llc_Ip_Types.h have different vendor ids"
#endif

/* Check if header file and Llc_Ip_Types.h file are of the same Autosar version */
#if ((LLC_IP_CFG_AR_RELEASE_MAJOR_VERSION != LLC_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (LLC_IP_CFG_AR_RELEASE_MINOR_VERSION != LLC_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (LLC_IP_CFG_AR_RELEASE_REVISION_VERSION != LLC_IP_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Llc_Ip_Cfg.h and Llc_Ip_Types.h are different"
#endif

/* Check if header file and Llc_Ip_Types.h file are of the same Software version */
#if ((LLC_IP_CFG_SW_MAJOR_VERSION != LLC_IP_TYPES_SW_MAJOR_VERSION) || \
     (LLC_IP_CFG_SW_MINOR_VERSION != LLC_IP_TYPES_SW_MINOR_VERSION) || \
     (LLC_IP_CFG_SW_PATCH_VERSION != LLC_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Llc_Ip_Cfg.h and Llc_Ip_Types.h are different"
#endif
/* Check if header file and Llc_Ip_PBcfg.h file are of the same vendor */
#if (LLC_IP_CFG_VENDOR_ID != LLC_IP_PBCFG_VENDOR_ID)
    #error "Llc_Ip_Cfg.h and Llc_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if header file and Llc_Ip_PBcfg.h file are of the same Autosar version */
#if ((LLC_IP_CFG_AR_RELEASE_MAJOR_VERSION != LLC_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (LLC_IP_CFG_AR_RELEASE_MINOR_VERSION != LLC_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (LLC_IP_CFG_AR_RELEASE_REVISION_VERSION != LLC_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Llc_Ip_Cfg.h and Llc_Ip_PBcfg.h are different"
#endif

/* Check if header file and Llc_Ip_PBcfg.h file are of the same Software version */
#if ((LLC_IP_CFG_SW_MAJOR_VERSION != LLC_IP_PBCFG_SW_MAJOR_VERSION) || \
     (LLC_IP_CFG_SW_MINOR_VERSION != LLC_IP_PBCFG_SW_MINOR_VERSION) || \
     (LLC_IP_CFG_SW_PATCH_VERSION != LLC_IP_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Llc_Ip_Cfg.h and Llc_Ip_PBcfg.h are different"
#endif

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

#endif /* LLC_IP_CFG_H_ */
