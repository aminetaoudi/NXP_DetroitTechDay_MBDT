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

#ifndef PLATFORM_CFG_DEFINES_H_
#define PLATFORM_CFG_DEFINES_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_PLATFORM_CFGDEFINES_VENDOR_ID                     43
#define CDD_PLATFORM_CFGDEFINES_AR_RELEASE_MAJOR_VERSION      4
#define CDD_PLATFORM_CFGDEFINES_AR_RELEASE_MINOR_VERSION      7
#define CDD_PLATFORM_CFGDEFINES_AR_RELEASE_REVISION_VERSION   0
#define CDD_PLATFORM_CFGDEFINES_SW_MAJOR_VERSION              2
#define CDD_PLATFORM_CFGDEFINES_SW_MINOR_VERSION              0
#define CDD_PLATFORM_CFGDEFINES_SW_PATCH_VERSION              0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Std_Types header file are of the same Autosar version */
#if ((CDD_PLATFORM_CFGDEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_PLATFORM_CFGDEFINES_AR_RELEASE_MINOR_VERSION  != STD_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of Platform_CfgDefines.h and Std_Types.h are different"
#endif
#endif

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
/* Development error checking */
#define PLATFORM_DEV_ERROR_DETECT        (STD_ON)



/* System settings configurable */
#define PLATFORM_SYS_CFG                 (STD_OFF)


/* System DIPORTSDAE configurable */
#define PLATFORM_DIPORTSDAE_CFG          (STD_OFF)
/* System MSCM configurable */
#define PLATFORM_MSCM_CFG                (STD_OFF)

/*********************************** MPU_M33 SECTION *******************************/
#define PLATFORM_ENABLE_MPU_M33          (STD_OFF)




/*********************************** INT_CTRL SECTION *******************************/
#define PLATFORM_ENABLE_INT_CTRL (STD_ON)

#define PLATFORM_MULTICORE_SUPPORT                   (STD_OFF)
#if (STD_ON == PLATFORM_MULTICORE_SUPPORT)
    #define Platform_GetCoreID()     OsIf_GetUserId()
#else
    #define Platform_GetCoreID()     ((uint8)0UL)
#endif




#define PLATFORM_MAX_PARTITIONS                   (1U)

/**
* @brief Support for User mode.
*        If this parameter has been configured to 'STD_ON', the PLATFORM driver code can be executed from both supervisor and user mode.
*/

#define PLATFORM_ENABLE_USER_MODE_SUPPORT   (STD_OFF)


#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
 #ifdef PLATFORM_ENABLE_USER_MODE_SUPPORT
  #if (STD_ON == PLATFORM_ENABLE_USER_MODE_SUPPORT)
   #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Platform in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
  #endif /* (STD_ON == PLATFORM_ENABLE_USER_MODE_SUPPORT) */
 #endif /* ifdef PLATFORM_ENABLE_USER_MODE_SUPPORT*/
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

/* Support for MRU */




#define PLATFORM_MRU_SUPPORT  (STD_ON)

/**
*   @brief  Adds or removes the service Platform_MruResetChannel() for receive/transmit channels from the code.
*        STD_ON: Platform_MruResetChannel() can be used.
*        STD_OFF: Platform_MruResetChannel() can not be used.
*/
#define PLATFORM_MRU_CHANNEL_RESET_API             (STD_OFF)

/**
*   @brief  Adds or removes the service Platform_MruResetInstance() for a Mru instance from the code.
*        STD_ON: Platform_MruResetInstance() can be used.
*        STD_OFF: Platform_MruResetInstance() can not be used.
*/
#define PLATFORM_MRU_INSTANCE_RESET_API             (STD_OFF)

/**
*   @brief  Adds or removes the service Platform_MruEnableChannel() for receive channels from the code.
*        STD_ON: Platform_MruEnableChannel() can be used.
*        STD_OFF: Platform_MruEnableChannel() can not be used.
*/
#define PLATFORM_MRU_CHANNEL_ENABLE_API             (STD_OFF)

/**
*   @brief  Adds or removes the service Platform_MruDisableChannel() for receive channels from the code.
*        STD_ON: Platform_MruDisableChannel() can be used.
*        STD_OFF: Platform_MruDisableChannel() can not be used.
*/
#define PLATFORM_MRU_CHANNEL_DISABLE_API             (STD_OFF)

/**
* @brief TIMEOUT for Read Mru mailbox with polling mode.
*/
#define PLATFORM_TIMEOUT               (1000U)

/**
* @brief DDR Initialization enablement.
*/
/* Note: This macro is always STD_OFF because DDR is not supported by EB tool */
#define PLATFORM_ENABLE_DDR_INIT (STD_OFF)

/**
* @brief   Switches the Production Error Detection and Notification OFF
*/
/* Note: This macro is always STD_ON because DDR is not supported by EB tool */
#define PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS (STD_ON)

/**
* @brief Defines symbolic name for MRU transmitting channels.
*/
#define PlatformConf_PlatformMruTransmittingChannel_PlatformMruTransmittingChannel_0    ((uint8)0)
#define PlatformConf_PlatformMruTransmittingChannel_PlatformMruTransmittingChannel_1    ((uint8)1)
#define PlatformConf_PlatformMruTransmittingChannel_PlatformMruTransmittingChannel_2    ((uint8)2)
#define PlatformConf_PlatformMruTransmittingChannel_PlatformMruTransmittingChannel_3    ((uint8)3)
#define PlatformConf_PlatformMruTransmittingChannel_PlatformMruTransmittingChannel_4    ((uint8)4)

/**
* @brief Defines symbolic name for MRU receiving channels.
*/
#define PlatformConf_PlatformMruReceivingChannel_PlatformMruReceivingChannel_0    ((uint8)0)
#define PlatformConf_PlatformMruReceivingChannel_PlatformMruReceivingChannel_1    ((uint8)1)
#define PlatformConf_PlatformMruReceivingChannel_PlatformMruReceivingChannel_2    ((uint8)2)
#define PlatformConf_PlatformMruReceivingChannel_PlatformMruReceivingChannel_3    ((uint8)3)
#define PlatformConf_PlatformMruReceivingChannel_PlatformMruReceivingChannel_4    ((uint8)4)

/**
* @brief Defines symbolic name for MRU Reset instances.
*/


/* MPU_R52 feature enablement */
/**
* @brief MPU_R52 feature enablement.
*/
#define PLATFORM_ENABLE_MPU_R52 (STD_OFF)
#endif /* PLATFORM_CFG_DEFINES_H_ */
