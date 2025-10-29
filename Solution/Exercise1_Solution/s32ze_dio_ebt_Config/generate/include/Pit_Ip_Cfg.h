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

#ifndef PIT_IP_CFG_H
#define PIT_IP_CFG_H

/**
*   @file           Pit_Ip_Cfg.h
*
*   @addtogroup     pit_ip Pit IPL
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

#include "Pit_Ip_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PIT_IP_VENDOR_ID_CFG                    43
#define PIT_IP_AR_RELEASE_MAJOR_VERSION_CFG     4
#define PIT_IP_AR_RELEASE_MINOR_VERSION_CFG     7
#define PIT_IP_AR_RELEASE_REVISION_VERSION_CFG  0
#define PIT_IP_SW_MAJOR_VERSION_CFG             2
#define PIT_IP_SW_MINOR_VERSION_CFG             0
#define PIT_IP_SW_PATCH_VERSION_CFG             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

#if (PIT_IP_VENDOR_ID_CFG != PIT_IP_VENDOR_ID_PBCFG_H)
    #error "Pit_Ip_Cfg.h and Pit_Ip_PBcfg.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((PIT_IP_AR_RELEASE_MAJOR_VERSION_CFG != PIT_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_H) || \
     (PIT_IP_AR_RELEASE_MINOR_VERSION_CFG != PIT_IP_AR_RELEASE_MINOR_VERSION_PBCFG_H) || \
     (PIT_IP_AR_RELEASE_REVISION_VERSION_CFG != PIT_IP_AR_RELEASE_REVISION_VERSION_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Pit_Ip_Cfg.h and Pit_Ip_PBcfg.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((PIT_IP_SW_MAJOR_VERSION_CFG != PIT_IP_SW_MAJOR_VERSION_PBCFG_H) || \
     (PIT_IP_SW_MINOR_VERSION_CFG != PIT_IP_SW_MINOR_VERSION_PBCFG_H) || \
     (PIT_IP_SW_PATCH_VERSION_CFG != PIT_IP_SW_PATCH_VERSION_PBCFG_H) \
    )
    #error "Software Version Numbers of Pit_Ip_Cfg.h and Pit_Ip_PBcfg.h are different"
#endif


/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
/**
* @brief Dev error detect switch
*/
#define PIT_IP_DEV_ERROR_DETECT (STD_ON)

/*==================================================================================================*/
/**
* @brief    PIT_IP_CHAIN_MODE switch
* @details  Enable/disable API for Chain Mode.
*/
#define PIT_IP_CHAIN_MODE (STD_OFF)

/*================================================================================================*/
/**
* @brief    PIT_IP_CHANGE_NEXT_TIMEOUT_VALUE switch
* @details  Enable/disable support for changing timeout value during timer running
*/
#define PIT_IP_CHANGE_NEXT_TIMEOUT_VALUE     (STD_OFF)

/*================================================================================================*/
/**
* @brief    PIT_IP_ENABLE_USER_MODE_SUPPORT switch
* @details  Enable/disable support usermode.If this parameter has been configured to TRUE the GPT driver code can be executed from both supervisor and user mode.
*/
#define PIT_IP_ENABLE_USER_MODE_SUPPORT    (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #ifdef PIT_IP_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == PIT_IP_ENABLE_USER_MODE_SUPPORT)
            #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Gpt in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined.
        #endif /* (STD_ON == PIT_IP_ENABLE_USER_MODE_SUPPORT) */
    #endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */
#endif /* ifdef MCAL_ENABLE_USER_MODE_SUPPORT*/

#if (defined(PIT_IP_ENABLE_USER_MODE_SUPPORT) && (STD_ON == PIT_IP_ENABLE_USER_MODE_SUPPORT))
#include  "Reg_eSys.h"
/* Check if header file and Reg_eSys.h file are of the same Autosar version */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((PIT_IP_AR_RELEASE_MAJOR_VERSION_CFG != REG_ESYS_AR_RELEASE_MAJOR_VERSION) || \
         (PIT_IP_AR_RELEASE_MINOR_VERSION_CFG != REG_ESYS_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Pit_Ip_Cfg.h and Reg_eSys.h are different"
    #endif
#endif
#endif

/*================================================================================================*/

        
#ifndef MCAL_PIT_AE_REG_PROT_AVAILABLE
    #define GPT_PIT_AE_REG_PROT_AVAILABLE  STD_OFF
#else
    #define GPT_PIT_AE_REG_PROT_AVAILABLE  MCAL_PIT_AE_REG_PROT_AVAILABLE
#endif
        

    
#if(defined(CRS_FSS_AND_RTU_BASE_ADDR_OF_PIT_REGISTERS_CONCATENATED) && (CRS_FSS_AND_RTU_BASE_ADDR_OF_PIT_REGISTERS_CONCATENATED == STD_ON))
#define GPT_PIT_INSTANCE_COUNT (PIT_INSTANCE_COUNT + RTU_PIT_INSTANCE_COUNT)
#elif (defined(PIT_IP_INSTANCE_GAP_EXISTS) && (PIT_IP_INSTANCE_GAP_EXISTS == STD_ON))
#define GPT_PIT_INSTANCE_COUNT (PIT_INSTANCE_COUNT + 1U)
#else
#define GPT_PIT_INSTANCE_COUNT (PIT_INSTANCE_COUNT)
#endif

    
/*================================================================================================*/

/*================================================================================================*/
/** Channels number instance PIT_0 */
#define PIT_0_IP_CHANNELS_NUMBER  (7U)
#define PIT_0_IP_EXISTS
#define PIT_0_IP_INSTANCE_NUMBER     (6U)
/** Channels number instance PIT_1 */
#define PIT_1_IP_CHANNELS_NUMBER  (5U)
#define PIT_1_IP_EXISTS
#define PIT_1_IP_INSTANCE_NUMBER     (7U)
/** Channels number instance PIT_4 */
#define PIT_4_IP_CHANNELS_NUMBER  (5U)
#define PIT_4_IP_EXISTS
#define PIT_4_IP_INSTANCE_NUMBER     (8U)
/** Channels number instance PIT_5 */
#define PIT_5_IP_CHANNELS_NUMBER  (5U)
#define PIT_5_IP_EXISTS
#define PIT_5_IP_INSTANCE_NUMBER     (9U)
/** Channels number instance CE_PIT_0 */
#define CE_PIT_0_IP_CHANNELS_NUMBER  (4U)
#define CE_PIT_0_IP_EXISTS
#define CE_PIT_0_IP_INSTANCE_NUMBER    (0U)
/** Channels number instance CE_PIT_1 */
#define CE_PIT_1_IP_CHANNELS_NUMBER  (4U)
#define CE_PIT_1_IP_EXISTS
#define CE_PIT_1_IP_INSTANCE_NUMBER    (1U)
/** Channels number instance CE_PIT_2 */
#define CE_PIT_2_IP_CHANNELS_NUMBER  (4U)
#define CE_PIT_2_IP_EXISTS
#define CE_PIT_2_IP_INSTANCE_NUMBER    (2U)
/** Channels number instance CE_PIT_3 */
#define CE_PIT_3_IP_CHANNELS_NUMBER  (4U)
#define CE_PIT_3_IP_EXISTS
#define CE_PIT_3_IP_INSTANCE_NUMBER    (3U)
/** Channels number instance CE_PIT_4 */
#define CE_PIT_4_IP_CHANNELS_NUMBER  (4U)
#define CE_PIT_4_IP_EXISTS
#define CE_PIT_4_IP_INSTANCE_NUMBER    (4U)
/** Channels number instance CE_PIT_5 */
#define CE_PIT_5_IP_CHANNELS_NUMBER  (4U)
#define CE_PIT_5_IP_EXISTS
#define CE_PIT_5_IP_INSTANCE_NUMBER    (5U)
/** Channels number instance PIT_AE */
#define PIT_AE_IP_CHANNELS_NUMBER  (6U)
#define PIT_AE_IP_EXISTS
#define PIT_AE_IP_INSTANCE_NUMBER  (10U)
/** Channels number instance RTU0_PIT_0 */
#define RTU0_PIT_0_IP_CHANNELS_NUMBER  (6U)
#define RTU0_PIT_0_IP_EXISTS
#define RTU0_PIT_0_IP_INSTANCE_NUMBER  (11U)
/** Channels number instance RTU1_PIT_0 */
#define RTU1_PIT_0_IP_CHANNELS_NUMBER  (6U)
#define RTU1_PIT_0_IP_EXISTS
#define RTU1_PIT_0_IP_INSTANCE_NUMBER  (12U)

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

#ifdef __cplusplus
}
#endif

/** @} */
#endif  /* PIT_IP_CFG_H */
