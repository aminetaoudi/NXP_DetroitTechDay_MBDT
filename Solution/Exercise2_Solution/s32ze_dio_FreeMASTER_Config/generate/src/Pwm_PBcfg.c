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

/**
*   @file       Pwm_PBcfg.c
*
*   @addtogroup pwm_driver Pwm Driver
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
#include "Std_Types.h"
#include "Pwm.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PWM_PB_CFG_VENDOR_ID_C                       43
#define PWM_PB_CFG_MODULE_ID_C                       121
#define PWM_PB_CFG_AR_RELEASE_MAJOR_VERSION_C        4
#define PWM_PB_CFG_AR_RELEASE_MINOR_VERSION_C        7
#define PWM_PB_CFG_AR_RELEASE_REVISION_VERSION_C     0
#define PWM_PB_CFG_SW_MAJOR_VERSION_C                2
#define PWM_PB_CFG_SW_MINOR_VERSION_C                0
#define PWM_PB_CFG_SW_PATCH_VERSION_C                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Std_Types.h are of the same AUTOSAR version */
    #if ((PWM_PB_CFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
         (PWM_PB_CFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR version numbers of Pwm_PBcfg.c and Std_Types.h are different."
    #endif
#endif

#if (PWM_PB_CFG_VENDOR_ID_C != PWM_VENDOR_ID)
    #error "Pwm_PBcfg.c and Pwm.h have different vendor ids"
#endif

#if ((PWM_PB_CFG_AR_RELEASE_MAJOR_VERSION_C    != PWM_AR_RELEASE_MAJOR_VERSION) || \
     (PWM_PB_CFG_AR_RELEASE_MINOR_VERSION_C    != PWM_AR_RELEASE_MINOR_VERSION) || \
     (PWM_PB_CFG_AR_RELEASE_REVISION_VERSION_C != PWM_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR version numbers of Pwm_PBcfg.c and Pwm.h are different"
#endif

#if ((PWM_PB_CFG_SW_MAJOR_VERSION_C != PWM_SW_MAJOR_VERSION) || \
     (PWM_PB_CFG_SW_MINOR_VERSION_C != PWM_SW_MINOR_VERSION) || \
     (PWM_PB_CFG_SW_PATCH_VERSION_C != PWM_SW_PATCH_VERSION))
    #error "Software version numbers of Pwm_PBcfg.c and Pwm.h are different"
#endif

/*==================================================================================================
*                           LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                          LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                         LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                    LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define PWM_START_SEC_CODE
#include "Pwm_MemMap.h"


/** @brief  Prototypes of PWM channels User Notifications */
extern void PwmChannel_0_Callback(void);

extern void PwmChannel_1_Callback(void);

#define PWM_STOP_SEC_CODE
#include "Pwm_MemMap.h"

/*==================================================================================================
*                                        GLOBAL VARIABLES
==================================================================================================*/
#define PWM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"

/*============================== Channels configuration ===================================*/
/**
* @brief        Array of configured PWM channels
*
*/
const Pwm_ChannelConfigType Pwm_Channels_PB[PWM_PB_CFG_CHANNELS_COUNT] =
{
    /* PwmChannel_0 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)0U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_I1_Ch16),
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (PWM_FLEXPWM_USED == STD_ON)
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_I1_CH16_CFG,
            /** @brief The duty cycle of this channel */
            16384U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        &PwmChannel_0_Callback
    },
    /* PwmChannel_1 */
    {
        /** @brief  Channel Id */
        (Pwm_ChannelType)1U,
        /** @brief  Channel class */
        PWM_FIXED_PERIOD,
        /** @brief  Ip channel configuration */
        {
            /** @brief  Hardware Channel Type */
            PWM_CHANNEL_EMIOS,
            /** @brief  Pointer to the Emios ip Configuration */
            (const void *)(&Emios_Pwm_Ip_I1_Ch19),
        #if (defined(PWM_FLEXIO_USED) && (PWM_FLEXIO_USED == STD_ON))
            /** @brief  Pointer to the Flexio ip channel configuration structure */
            NULL_PTR,
        #endif
        #if (PWM_FLEXPWM_USED == STD_ON)
            /** @brief  Pointer to the FlexPwm ip channel configuration structure */
            NULL_PTR,
            /** @brief SubModule id for this channel */
            0U,
        #endif
        #if (defined(PWM_ETIMER_USED) && (PWM_ETIMER_USED == STD_ON))
            /** @brief  Pointer to the Etimer ip channel configuration structure */
            NULL_PTR,
        #endif
            /** @brief  Hardware Channel Instance ID */
            (Pwm_IpwInstanceType)EMIOS_PWM_IP_I1_CH19_CFG,
            /** @brief The duty cycle of this channel */
            16384U
        },
        /** @brief  The state of the channel output in idle mode */
        PWM_LOW,
        &PwmChannel_1_Callback
    }
};

/*============================== Instances configuration ===================================*/

#if (PWM_HW_INSTANCE_USED == STD_ON)
/** @brief        Array of configured Pwm instances */
const Pwm_IpwInstanceConfigType Pwm_Instances_PB[PWM_PB_CFG_INSTANCES_COUNT] =
{
    {
         /** @brief  The Id instance configured */
        255U,
        /** @brief  The type of ip instance configured */
        PWM_INSTANCE_NONE,
#if (PWM_FLEXPWM_USED == STD_ON)
        /** @brief  Pointer to the ip instance configuration structure */
        NULL_PTR  
#endif
    }
};
#endif

/*============================== High level configuration ===================================*/
const Pwm_ConfigType Pwm_Config =
{
    /** @brief  Number of configured PWM channels */
    (Pwm_ChannelType)PWM_PB_CFG_CHANNELS_COUNT,
    /** @brief  Pointer to array of PWM channels */
    &Pwm_Channels_PB,
#if (PWM_HW_INSTANCE_USED == STD_ON)
    /** @brief  Number of Pwm configured instances */
    (Pwm_InstanceType)PWM_PB_CFG_INSTANCES_COUNT,
    /** @brief  Pointer to the list of Pwm configured channels */
    &Pwm_Instances_PB,
#endif
#if (PWM_NOTIFICATION_SUPPORTED == STD_ON)
    /** @brief  Hardware to logic channel map. Array containing a number of elements
                equal to total number of available channels on all IP. */
    {
        /*---------------------eMIOS_0---------------------------*/
        (Pwm_ChannelType)255,            /* Emios_0_0 unused */
        (Pwm_ChannelType)255,            /* Emios_0_1 unused */
        (Pwm_ChannelType)255,            /* Emios_0_2 unused */
        (Pwm_ChannelType)255,            /* Emios_0_3 unused */
        (Pwm_ChannelType)255,            /* Emios_0_4 unused */
        (Pwm_ChannelType)255,            /* Emios_0_5 unused */
        (Pwm_ChannelType)255,            /* Emios_0_6 unused */
        (Pwm_ChannelType)255,            /* Emios_0_7 unused */
        (Pwm_ChannelType)255,            /* Emios_0_8 unused */
        (Pwm_ChannelType)255,            /* Emios_0_9 unused */
        (Pwm_ChannelType)255,            /* Emios_0_10 unused */
        (Pwm_ChannelType)255,            /* Emios_0_11 unused */
        (Pwm_ChannelType)255,            /* Emios_0_12 unused */
        (Pwm_ChannelType)255,            /* Emios_0_13 unused */
        (Pwm_ChannelType)255,            /* Emios_0_14 unused */
        (Pwm_ChannelType)255,            /* Emios_0_15 unused */
        (Pwm_ChannelType)255,            /* Emios_0_16 unused */
        (Pwm_ChannelType)255,            /* Emios_0_17 unused */
        (Pwm_ChannelType)255,            /* Emios_0_18 unused */
        (Pwm_ChannelType)255,            /* Emios_0_19 unused */
        (Pwm_ChannelType)255,            /* Emios_0_20 unused */
        (Pwm_ChannelType)255,            /* Emios_0_21 unused */
        (Pwm_ChannelType)255,            /* Emios_0_22 unused */
        (Pwm_ChannelType)255,            /* Emios_0_23 unused */
        (Pwm_ChannelType)255,            /* Emios_0_24 unused */
        (Pwm_ChannelType)255,            /* Emios_0_25 unused */
        (Pwm_ChannelType)255,            /* Emios_0_26 unused */
        (Pwm_ChannelType)255,            /* Emios_0_27 unused */
        (Pwm_ChannelType)255,            /* Emios_0_28 unused */
        (Pwm_ChannelType)255,            /* Emios_0_29 unused */
        (Pwm_ChannelType)255,            /* Emios_0_30 unused */
        (Pwm_ChannelType)255,            /* Emios_0_31 unused */
        /*---------------------eMIOS_1---------------------------*/
        (Pwm_ChannelType)255,            /* Emios_1_0 unused */
        (Pwm_ChannelType)255,            /* Emios_1_1 unused */
        (Pwm_ChannelType)255,            /* Emios_1_2 unused */
        (Pwm_ChannelType)255,            /* Emios_1_3 unused */
        (Pwm_ChannelType)255,            /* Emios_1_4 unused */
        (Pwm_ChannelType)255,            /* Emios_1_5 unused */
        (Pwm_ChannelType)255,            /* Emios_1_6 unused */
        (Pwm_ChannelType)255,            /* Emios_1_7 unused */
        (Pwm_ChannelType)255,            /* Emios_1_8 unused */
        (Pwm_ChannelType)255,            /* Emios_1_9 unused */
        (Pwm_ChannelType)255,            /* Emios_1_10 unused */
        (Pwm_ChannelType)255,            /* Emios_1_11 unused */
        (Pwm_ChannelType)255,            /* Emios_1_12 unused */
        (Pwm_ChannelType)255,            /* Emios_1_13 unused */
        (Pwm_ChannelType)255,            /* Emios_1_14 unused */
        (Pwm_ChannelType)255,            /* Emios_1_15 unused */
        (Pwm_ChannelType)0,            /* Emios_1_16 */
        (Pwm_ChannelType)255,            /* Emios_1_17 unused */
        (Pwm_ChannelType)255,            /* Emios_1_18 unused */
        (Pwm_ChannelType)1,            /* Emios_1_19 */
        (Pwm_ChannelType)255,            /* Emios_1_20 unused */
        (Pwm_ChannelType)255,            /* Emios_1_21 unused */
        (Pwm_ChannelType)255,            /* Emios_1_22 unused */
        (Pwm_ChannelType)255,            /* Emios_1_23 unused */
        (Pwm_ChannelType)255,            /* Emios_1_24 unused */
        (Pwm_ChannelType)255,            /* Emios_1_25 unused */
        (Pwm_ChannelType)255,            /* Emios_1_26 unused */
        (Pwm_ChannelType)255,            /* Emios_1_27 unused */
        (Pwm_ChannelType)255,            /* Emios_1_28 unused */
        (Pwm_ChannelType)255,            /* Emios_1_29 unused */
        (Pwm_ChannelType)255,            /* Emios_1_30 unused */
        (Pwm_ChannelType)255,            /* Emios_1_31 unused */
        /*---------------------Etimer_0---------------------------*/
        (Pwm_ChannelType)255,            /* Etimer_0_0 unused */
        (Pwm_ChannelType)255,            /* Etimer_0_1 unused */
        (Pwm_ChannelType)255,            /* Etimer_0_2 unused */
        (Pwm_ChannelType)255,            /* Etimer_0_3 unused */
        (Pwm_ChannelType)255,            /* Etimer_0_4 unused */
        (Pwm_ChannelType)255,            /* Etimer_0_5 unused */
        /*---------------------Etimer_1---------------------------*/
        (Pwm_ChannelType)255,            /* Etimer_1_0 unused */
        (Pwm_ChannelType)255,            /* Etimer_1_1 unused */
        (Pwm_ChannelType)255,            /* Etimer_1_2 unused */
        (Pwm_ChannelType)255,            /* Etimer_1_3 unused */
        (Pwm_ChannelType)255,            /* Etimer_1_4 unused */
        (Pwm_ChannelType)255,            /* Etimer_1_5 unused */
        /*---------------------Etimer_2---------------------------*/
        (Pwm_ChannelType)255,            /* Etimer_2_0 unused */
        (Pwm_ChannelType)255,            /* Etimer_2_1 unused */
        (Pwm_ChannelType)255,            /* Etimer_2_2 unused */
        (Pwm_ChannelType)255,            /* Etimer_2_3 unused */
        (Pwm_ChannelType)255,            /* Etimer_2_4 unused */
        (Pwm_ChannelType)255,            /* Etimer_2_5 unused */
        /*---------------------Etimer_3---------------------------*/
        (Pwm_ChannelType)255,            /* Etimer_3_0 unused */
        (Pwm_ChannelType)255,            /* Etimer_3_1 unused */
        (Pwm_ChannelType)255,            /* Etimer_3_2 unused */
        (Pwm_ChannelType)255,            /* Etimer_3_3 unused */
        (Pwm_ChannelType)255,            /* Etimer_3_4 unused */
        (Pwm_ChannelType)255,            /* Etimer_3_5 unused */
        /* Index of channel X, A and B of sub-module 0 of FlexPWM 0 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channel X, A and B of sub-module 1 of FlexPWM 0 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channel X, A and B of sub-module 2 of FlexPWM 0 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channel X, A and B of sub-module 3 of FlexPWM 0 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channel X, A and B of sub-module 0 of FlexPWM 1 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channel X, A and B of sub-module 1 of FlexPWM 1 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channel X, A and B of sub-module 2 of FlexPWM 1 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255,
        /* Index of channel X, A and B of sub-module 3 of FlexPWM 1 in the array of logic PWM channels */
        (Pwm_ChannelType)255, (Pwm_ChannelType)255, (Pwm_ChannelType)255
    }
#endif
};

#define PWM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Pwm_MemMap.h"


#ifdef __cplusplus
}
#endif

/** @} */

