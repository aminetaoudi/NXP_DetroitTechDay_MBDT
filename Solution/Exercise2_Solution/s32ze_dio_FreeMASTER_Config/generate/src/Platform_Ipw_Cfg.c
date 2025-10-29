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
*
*   NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be 
*   used strictly in accordance with the applicable license terms.  By expressly 
*   accepting such terms or by downloading, installing, activating and/or otherwise 
*   using the software, you are agreeing that you have read, and that you agree to 
*   comply with and are bound by, such license terms.  If you do not agree to be 
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

#ifdef __cplusplus
extern "C" {
#endif




/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Platform_Ipw_Cfg.h"
#include "IntCtrl_Ip.h"

#if (PLATFORM_DIPORTSDAE_CFG == STD_ON)
#include "DiportSd_Ip.h"
#endif

#if (PLATFORM_MRU_SUPPORT == STD_ON)
#include "Mru_Ip.h"
#endif

#if (PLATFORM_ENABLE_MPU_R52 == STD_ON)
#include "Mpu_R52_Ip.h"
#endif

#ifdef PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS
#if (PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
#include "Dem.h"
#endif
#endif

#define CDD_PLATFORM_IPW_CFG_VENDOR_ID_C                     43
#define CDD_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C      4
#define CDD_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C      7
#define CDD_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION_C   0
#define CDD_PLATFORM_IPW_CFG_SW_MAJOR_VERSION_C              2
#define CDD_PLATFORM_IPW_CFG_SW_MINOR_VERSION_C              0
#define CDD_PLATFORM_IPW_CFG_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and Platform_Ipw_Cfg header file are of the same vendor */
#if (CDD_PLATFORM_IPW_CFG_VENDOR_ID_C != CDD_PLATFORM_IPW_CFG_VENDOR_ID)
    #error "Platform_Ipw_Cfg.c and Platform_Ipw_Cfg.h have different vendor ids"
#endif
/* Check if current file and Platform_Ipw_Cfg header file are of the same Autosar version */
#if ((CDD_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C    != CDD_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C    != CDD_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION_C != CDD_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Platform_Ipw_Cfg.c and Platform_Ipw_Cfg.h are different"
#endif
/* Check if current file and Platform_Ipw_Cfg header file are of the same Software version */
#if ((CDD_PLATFORM_IPW_CFG_SW_MAJOR_VERSION_C != CDD_PLATFORM_IPW_CFG_SW_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_MINOR_VERSION_C != CDD_PLATFORM_IPW_CFG_SW_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_PATCH_VERSION_C != CDD_PLATFORM_IPW_CFG_SW_PATCH_VERSION))
    #error "Software Version Numbers of Platform_Ipw_Cfg.c and Platform_Ipw_Cfg.h are different"
#endif


#if (CDD_PLATFORM_IPW_CFG_VENDOR_ID_C != CDD_PLATFORM_INTCTRL_IP_VENDOR_ID)
    #error "Platform_Ipw_Cfg.c and IntCtrl_Ip.h have different vendor ids"
#endif
/* Check if current file and IntCtrl_Ip header file are of the same Autosar version */
#if ((CDD_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C    != CDD_PLATFORM_INTCTRL_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C    != CDD_PLATFORM_INTCTRL_IP_AR_RELEASE_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION_C != CDD_PLATFORM_INTCTRL_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Platform_Ipw_Cfg.c and IntCtrl_Ip.h are different"
#endif
/* Check if current file and IntCtrl_Ip header file are of the same Software version */
#if ((CDD_PLATFORM_IPW_CFG_SW_MAJOR_VERSION_C != CDD_PLATFORM_INTCTRL_IP_SW_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_MINOR_VERSION_C != CDD_PLATFORM_INTCTRL_IP_SW_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_PATCH_VERSION_C != CDD_PLATFORM_INTCTRL_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Platform_Ipw_Cfg.c and IntCtrl_Ip.h are different"
#endif

#if (PLATFORM_MRU_SUPPORT == STD_ON)
/* Check if current file and Mru_Ip header file are of the same vendor */
#if (CDD_PLATFORM_IPW_CFG_VENDOR_ID_C != CDD_PLATFORM_MRU_IP_VENDOR_ID)
    #error "Platform_Ipw_Cfg.c and Mru_Ip.h have different vendor ids"
#endif
/* Check if current file and Mru_Ip header file are of the same Autosar version */
#if ((CDD_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C    != CDD_PLATFORM_MRU_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C    != CDD_PLATFORM_MRU_IP_AR_RELEASE_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION_C != CDD_PLATFORM_MRU_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Platform_Ipw_Cfg.c and Mru_Ip.h are different"
#endif
/* Check if current file and Mru_Ip header file are of the same Software version */
#if ((CDD_PLATFORM_IPW_CFG_SW_MAJOR_VERSION_C != CDD_PLATFORM_MRU_IP_SW_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_MINOR_VERSION_C != CDD_PLATFORM_MRU_IP_SW_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_PATCH_VERSION_C != CDD_PLATFORM_MRU_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Platform_Ipw_Cfg.c and Mru_Ip.h are different"
#endif
#endif

#if (PLATFORM_ENABLE_MPU_R52 == STD_ON)
/* Check if current file and Mpu_R52_Ip header file are of the same vendor */
#if (CDD_PLATFORM_IPW_CFG_VENDOR_ID_C != CDD_PLATFORM_MPU_R52_IP_VENDOR_ID)
    #error "Platform_Ipw_Cfg.c and Mpu_R52_Ip.h have different vendor ids"
#endif
/* Check if current file and Mpu_R52_Ip header file are of the same Autosar version */
#if ((CDD_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C    != CDD_PLATFORM_MPU_R52_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C    != CDD_PLATFORM_MPU_R52_IP_AR_RELEASE_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_AR_RELEASE_REVISION_VERSION_C != CDD_PLATFORM_MPU_R52_IP_AR_RELEASE_REVISION_VERSION))
    #error "AutoSar Version Numbers of Platform_Ipw_Cfg.c and Mpu_R52_Ip.h are different"
#endif
/* Check if current file and Mpu_R52_Ip header file are of the same Software version */
#if ((CDD_PLATFORM_IPW_CFG_SW_MAJOR_VERSION_C != CDD_PLATFORM_MPU_R52_IP_SW_MAJOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_MINOR_VERSION_C != CDD_PLATFORM_MPU_R52_IP_SW_MINOR_VERSION) || \
     (CDD_PLATFORM_IPW_CFG_SW_PATCH_VERSION_C != CDD_PLATFORM_MPU_R52_IP_SW_PATCH_VERSION))
    #error "Software Version Numbers of Platform_Ipw_Cfg.c and Mpu_R52_Ip.h are different"
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #ifdef PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS
    #if (PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
      /* Check if the current file and Dem.h header file are of the same version */
      #if ((CDD_PLATFORM_IPW_CFG_AR_RELEASE_MAJOR_VERSION_C != DEM_AR_RELEASE_MAJOR_VERSION) || \
           (CDD_PLATFORM_IPW_CFG_AR_RELEASE_MINOR_VERSION_C != DEM_AR_RELEASE_MINOR_VERSION))
      #error "AutoSar Version Numbers of Platform_Ipw_Cfg.c and Dem.h are different"
      #endif
    #endif
    #endif
#endif







/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"
#if (PLATFORM_MRU_SUPPORT == STD_ON)
static const Platform_Ipw_MruTransmitChType Platform_Ipw_TransmitCfg[]=
{
    
    {
        &Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_0
    }
    ,
    {
        &Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_1
    }
    ,
    {
        &Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_2
    }
    ,
    {
        &Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_3
    }
    ,
    {
        &Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_4
    }
};
static const Platform_Ipw_MruIpConfigType Platform_Ipw_IpConfig[]=
{
    {
        &Mru_Ip_HWUnitConfig_RTU0_MRU0
    },
    {
        &Mru_Ip_HWUnitConfig_RTU0_MRU1
    },
    {
        &Mru_Ip_HWUnitConfig_RTU0_MRU2
    }
};
static const Platform_Ipw_MruReceiveChType Platform_Ipw_ReceiveCfg[]=
{
    
    {
        &Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_0
    }
    ,
    {
        &Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_1
    }
    ,
    {
        &Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_2
    }
    ,
    {
        &Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_3
    }
    ,
    {
        &Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_4
    }
};
static const Platform_Ipw_MruUnitsConfigType Platform_Ipw_UnitsConfig=
{
    3u,  /* NumHwUnit */
    Platform_Ipw_IpConfig,
    5u,  /* MaxTransmitChannel */
    5u,  /* MaxReceiveChannel */
    0u,  /* MaxResetInstance */
    Platform_Ipw_TransmitCfg,
    Platform_Ipw_ReceiveCfg,
    NULL_PTR
};
#endif /* (PLATFORM_MRU_SUPPORT == STD_ON) */

/* Definition of the configuration structure for Platform IPW */
const Platform_Ipw_ConfigType ipwConfig =
{
     &intCtrlConfig, /* Interrupt controller configuration */

    NULL_PTR /* System settings */
        ,&Platform_Ipw_UnitsConfig /* MRU configuration */
    
#ifdef PLATFORM_ENABLE_DDR_INIT
#if (PLATFORM_ENABLE_DDR_INIT == STD_ON)
    ,(boolean)FALSE
    #ifdef PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS
    #if (PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF)
    ,{ (uint32)STD_OFF, (uint32)0U} /* PLATFORM_E_DDR_INIT_ERROR parameters*/
    #endif /* PLATFORM_DISABLE_DEM_REPORT_ERROR_STATUS == STD_OFF */
    #endif
#endif
#endif
    
    
};
    
#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#ifdef __cplusplus
}
#endif
