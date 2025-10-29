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
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Ctu_Ip_PBcfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CTU_IP_VENDOR_ID_PBCFG_C                      43
#define CTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C       4
#define CTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C       7
#define CTU_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C    0
#define CTU_IP_SW_MAJOR_VERSION_PBCFG_C               2
#define CTU_IP_SW_MINOR_VERSION_PBCFG_C               0
#define CTU_IP_SW_PATCH_VERSION_PBCFG_C               0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Ctu_Ip_PBcfg.c file and Ctu_Ip_PBcfg.h file are of the same vendor */
#if (CTU_IP_VENDOR_ID_PBCFG_C != CTU_IP_VENDOR_ID_PBCFG)
    #error "Ctu_Ip_PBcfg.c and Ctu_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if Ctu_Ip_PBcfg.c file and Ctu_Ip_PBcfg.h file are of the same Autosar version */
#if ((CTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG_C != CTU_IP_AR_RELEASE_MAJOR_VERSION_PBCFG) || \
     (CTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG_C != CTU_IP_AR_RELEASE_MINOR_VERSION_PBCFG) || \
     (CTU_IP_AR_RELEASE_REVISION_VERSION_PBCFG_C != CTU_IP_AR_RELEASE_REVISION_VERSION_PBCFG) \
    )
    #error "AutoSar Version Numbers of Ctu_Ip_PBcfg.c and Ctu_Ip_PBcfg.h are different"
#endif

/* Check if Ctu_Ip_PBcfg.c file and Ctu_Ip_PBcfg.h file are of the same Software version */
#if ((CTU_IP_SW_MAJOR_VERSION_PBCFG_C != CTU_IP_SW_MAJOR_VERSION_PBCFG) || \
     (CTU_IP_SW_MINOR_VERSION_PBCFG_C != CTU_IP_SW_MINOR_VERSION_PBCFG) || \
     (CTU_IP_SW_PATCH_VERSION_PBCFG_C != CTU_IP_SW_PATCH_VERSION_PBCFG) \
    )
  #error "Software Version Numbers of Ctu_Ip_PBcfg.c and Ctu_Ip_PBcfg.h are different"
#endif

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/**
* @brief          Ctu Trigger Configurations for Control Mode logical id 0, configuration variant .
*/
static const Ctu_Ip_TrigConfigType CtuIpTriggersConfigs_0[8U] =
{
    {
        0U, /* TrigIndex */
        0xAU, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x41U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    },
    {
        1U, /* TrigIndex */
        0x64U, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x1U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    },
    {
        2U, /* TrigIndex */
        0xC8U, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x0U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    },
    {
        3U, /* TrigIndex */
        0x12CU, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x40U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    },
    {
        4U, /* TrigIndex */
        0x190U, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x1U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    },
    {
        5U, /* TrigIndex */
        0x1F4U, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x0U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    },
    {
        6U, /* TrigIndex */
        0x258U, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x0U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    },
    {
        7U, /* TrigIndex */
        0x2BCU, /* CompareVal */
        0U, /* CmdListStartAdr */
        0x0U, /* OutputTrigEnMask */
        NULL_PTR /* TrigNotification */
    }
};

/**
* @brief          Ctu Ip Adc Commands List Config for Control Mode configuration logical id 0, variant.
*/
static const Ctu_Ip_AdcCmdConfigType CtuIpControlModeCommandList_0[] =
{
    { /* Command List Index: 0 - CtuAdcCommandList_0 */
        (boolean)FALSE, /* IntEn */
        0U, /* FifoIdx */
        CTU_IP_CONV_MODE_SINGLE, /* ConvMode */
        CTU_IP_ADC_PORT_A, /* AdcPort */
        6U, /* AdcChanA */
#if (FEATURE_CTU_NUM_ADC > 1)
        0U, /* AdcChanB */
#endif /* (FEATURE_CTU_NUM_ADC > 1) */
        (boolean)FALSE /* bLastCmd */
    },
    { /* Command List Index: 1 - CtuAdcCommandList_1 */
        (boolean)FALSE, /* IntEn */
        1U, /* FifoIdx */
        CTU_IP_CONV_MODE_SINGLE, /* ConvMode */
        CTU_IP_ADC_PORT_B, /* AdcPort */
        7U, /* AdcChanA */
#if (FEATURE_CTU_NUM_ADC > 1)
        0U, /* AdcChanB */
#endif /* (FEATURE_CTU_NUM_ADC > 1) */
        (boolean)TRUE /* bLastCmd */
    }
};

/**
* @brief          Ctu Result FIFOs Config for Control Mode logical id 0, configuration variant.
*/
static const Ctu_Ip_FifoConfigType CtuIpResultFifos_0[] =
{
    /* Configuration for FIFO0 */
    {
        0U, /* FifoIndex */
        0U, /* FifoThreshold */
        (boolean)FALSE, /* FifoDmaEnable */
        CTU_IP_INVALID_DMA_CHANNEL_ID, /* FifoDmaChannel */
        NULL_PTR, /* UserFifoBuffer */
        &Adc_CtuFifo0ThresholdNotification, /* ThresholdNotification */
        NULL_PTR, /* UnderrunNotification */
        NULL_PTR, /* OverrunNotification */
        NULL_PTR /* FullNotification */
    },
    /* Configuration for FIFO1 */
    {
        1U, /* FifoIndex */
        0U, /* FifoThreshold */
        (boolean)FALSE, /* FifoDmaEnable */
        CTU_IP_INVALID_DMA_CHANNEL_ID, /* FifoDmaChannel */
        NULL_PTR, /* UserFifoBuffer */
        &Adc_CtuFifo1ThresholdNotification, /* ThresholdNotification */
        NULL_PTR, /* UnderrunNotification */
        NULL_PTR, /* OverrunNotification */
        NULL_PTR /* FullNotification */
    }
};

#define ADC_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

#define ADC_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Adc_MemMap.h"





/**
* @brief          Ctu Ip Config for Control Mode logical id 0 variant.
*/
const Ctu_Ip_ConfigType CtuIpConfigControlMode_0 =
{
    CTU_IP_TGS_MODE_SEQUENTIAL, /* TgsMode */
    CTU_IP_PRESCALER_1, /* Prescaler */
#if FEATURE_CTU_EXT_TRIG_PRESENT
    CTU_IP_EXT_TRIG_MODE_PULSE, /* ExtTrigMode */
#endif /* FEATURE_CTU_EXT_TRIG_PRESENT */
    0x840U, /* InputTrigSelectMask */
    0x100U, /* TgsCounterCompareVal */
    0x0U, /* TgsCounterReloadVal */
    CTU_IP_ADC_CMD_LIST_MODE_STREAMING, /* AdcCmdListMode */
    CTU_IP_INPUT_TRIG_PWM_ODD_3, /* SeqModeMrsInput */
    CTU_IP_INPUT_EDGE_BOTH, /* SeqModeMrsInputEdge */
    (boolean)FALSE, /* DmaDoneGRE */
    (boolean)FALSE, /* DmaReqMRS */
    (boolean)FALSE, /* DisableOutput */
    0x0U, /* DigitalFilter */
    { 0xFFFFU, 0xFFFFU }, /* ConvDurationExpectedVal */
    0xFFFFU, /* ConvDurationCounterRange */
    0x0U, /* ControlOnTime */
    NULL_PTR, /* ErrNotification */
    NULL_PTR, /* MrsNotification */
    NULL_PTR, /* AdcCommandIssueNotification */
    { NULL_PTR, NULL_PTR }, /* ConvDurationExceedNotification */
    8U, /* NumTrigConfigs */
    CtuIpTriggersConfigs_0, /* TrigConfigs */
    CTU_IP_NOTIFICATION_DISABLE, /* EnabledInterrupts */
    2U, /* NumAdcCmdConfigs */
    CtuIpControlModeCommandList_0, /* AdcCmdConfigs */
    2U, /* NumFifoConfigs */
    CtuIpResultFifos_0 /* FifoConfigs */
};

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

#ifdef __cplusplus
}
#endif

/** @} */

