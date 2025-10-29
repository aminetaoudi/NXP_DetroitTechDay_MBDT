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
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
/**
*   @file       Power_Ip_PBcfg.c
*   @version    2.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup POWER_DRIVER_CONFIGURATION Power Ip Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif




/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Power_Ip_Cfg.h"
#include "Std_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define POWER_IP_PBCFG_VENDOR_ID_C                      43
#define POWER_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define POWER_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C       7
#define POWER_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define POWER_IP_PBCFG_SW_MAJOR_VERSION_C               2
#define POWER_IP_PBCFG_SW_MINOR_VERSION_C               0
#define POWER_IP_PBCFG_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/* Check if Power_Ip_PBcfg.c file and Power_Ip_Cfg.h file are of the same vendor */
#if (POWER_IP_PBCFG_VENDOR_ID_C != POWER_IP_CFG_VENDOR_ID)
    #error "Power_Ip_PBcfg.c and Power_Ip_Cfg.h have different vendor ids"
#endif

/* Check if Power_Ip_PBcfg.c file and Power_Ip_Cfg.h file are of the same Autosar version */
#if ((POWER_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != POWER_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != POWER_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (POWER_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != POWER_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Power_Ip_PBcfg.c and Power_Ip_Cfg.h are different"
#endif

/* Check if Power_Ip_PBcfg.c file and Power_Ip_Cfg.h file are of the same Software version */
#if ((POWER_IP_PBCFG_SW_MAJOR_VERSION_C != POWER_IP_CFG_SW_MAJOR_VERSION) || \
     (POWER_IP_PBCFG_SW_MINOR_VERSION_C != POWER_IP_CFG_SW_MINOR_VERSION) || \
     (POWER_IP_PBCFG_SW_PATCH_VERSION_C != POWER_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Power_Ip_PBcfg.c and Power_Ip_Cfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Std_Types.h file are of the same Autosar version */
#if ((POWER_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C    != STD_AR_RELEASE_MAJOR_VERSION) || \
     (POWER_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C    != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Power_Ip_PBcfg.c  and Std_Types.h are different"
#endif
#endif    /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */
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
#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED

#include "Mcu_MemMap.h"








static const Power_Ip_MC_ME_CoreConfigType Power_Ip_MC_ME_aPartition0CoreConfigPB_0[4U] =
{

    /* The configuration structure for Partition 0 Core 0. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)0U,

        /* The boot address of the core. */
        (uint32 *)0x25000000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN0_CORE0_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 0 Core 1. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)1U,

        /* The boot address of the core. */
        (uint32 *)0x25000000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN0_CORE1_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 0 Core 2. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)2U,

        /* The boot address of the core. */
        (uint32 *)0x25000000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN0_CORE2_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 0 Core 3. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)3U,

        /* The boot address of the core. */
        (uint32 *)0x00000000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN0_CORE3_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    }
};
static const Power_Ip_MC_ME_CoreConfigType Power_Ip_MC_ME_aPartition1CoreConfigPB_0[4U] =
{

    /* The configuration structure for Partition 1 Core 0. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)TRUE,

        /* The index of the core within the partition. */
        (uint8)0U,

        /* The boot address of the core. */
        (uint32 *)0x79900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN1_CORE0_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_EN_U32
        )
    },
    /* The configuration structure for Partition 1 Core 1. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)1U,

        /* The boot address of the core. */
        (uint32 *)0x79900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN1_CORE1_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 1 Core 2. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)2U,

        /* The boot address of the core. */
        (uint32 *)0x79900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN1_CORE2_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 1 Core 3. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)3U,

        /* The boot address of the core. */
        (uint32 *)0x79900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN1_CORE3_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    }
};
static const Power_Ip_MC_ME_CoreConfigType Power_Ip_MC_ME_aPartition2CoreConfigPB_0[4U] =
{

    /* The configuration structure for Partition 2 Core 0. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)0U,

        /* The boot address of the core. */
        (uint32 *)0x7d900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN2_CORE0_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 2 Core 1. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)1U,

        /* The boot address of the core. */
        (uint32 *)0x7d900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN2_CORE1_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 2 Core 2. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)2U,

        /* The boot address of the core. */
        (uint32 *)0x7d900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN2_CORE2_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    },
    /* The configuration structure for Partition 2 Core 3. */
    {
        /* Specifies whether the given core is under MCU control. */
        (boolean)FALSE,

        /* The index of the core within the partition. */
        (uint8)3U,

        /* The boot address of the core. */
        (uint32 *)0x7d900000U,

        /* The process configuration register value of the core. */
        MC_ME_PRTN2_CORE3_PCONF_CCE
        (
            MC_ME_PRTNX_COREX_PCONF_CCE_DIS_U32
        )
    }
};






static const Power_Ip_MC_ME_PartitionConfigType Power_Ip_MC_ME_aPartitionConfigPB_0[3U] =
{

    /* The configuration structure for Partition 0. */
    {
        /* Specifies whether the given partition is under MCU control. */
        (boolean)TRUE,

        /* Specifies whether the given partition's power management is under MCU control. */
        (boolean)TRUE,

         /* Specifies whether core operations(lockstep, split) is under MCU control */
        (boolean)FALSE,

        /* Partition Index */
        (uint8)0U,

        /* Configure operation for cores is lockstep or split */
        (boolean)FALSE,
        
        /* The process configuration register value of the partition. */
        (
            
            MC_ME_PRTNX_PCONF_PCE_EN_U32 |

            MC_ME_PRTNX_PCONF_OSSE_DIS_U32
            
        ),

        /* Mask containing the Partition triggers (PCE/OSSE/etc) to be updated. */
        MC_ME_PRTN0_PUPD_RWBITS_MASK,

        /* Number of COFBs within Partition 0 */
        (uint8)0U,
        /* Configuration for the COFBs within Partition 0. */
        (NULL_PTR),

        /* Number of Cores within Partition 0 */
        (uint8)4U,
        /* Configuration for the Cores within Partition 0. */
        &Power_Ip_MC_ME_aPartition0CoreConfigPB_0
    },
    /* The configuration structure for Partition 1. */
    {
        /* Specifies whether the given partition is under MCU control. */
        (boolean)TRUE,

        /* Specifies whether the given partition's power management is under MCU control. */
        (boolean)TRUE,

         /* Specifies whether core operations(lockstep, split) is under MCU control */
        (boolean)FALSE,

        /* Partition Index */
        (uint8)1U,

        /* Configure operation for cores is lockstep or split */
        (boolean)FALSE,
        
        /* The process configuration register value of the partition. */
        (
            
            MC_ME_PRTNX_PCONF_PCE_EN_U32 |

            MC_ME_PRTNX_PCONF_OSSE_DIS_U32
            
        ),

        /* Mask containing the Partition triggers (PCE/OSSE/etc) to be updated. */
        MC_ME_PRTN1_PUPD_RWBITS_MASK,

        /* Number of COFBs within Partition 1 */
        (uint8)0U,
        /* Configuration for the COFBs within Partition 1. */
        (NULL_PTR),

        /* Number of Cores within Partition 1 */
        (uint8)4U,
        /* Configuration for the Cores within Partition 1. */
        &Power_Ip_MC_ME_aPartition1CoreConfigPB_0
    },
    /* The configuration structure for Partition 2. */
    {
        /* Specifies whether the given partition is under MCU control. */
        (boolean)TRUE,

        /* Specifies whether the given partition's power management is under MCU control. */
        (boolean)TRUE,

         /* Specifies whether core operations(lockstep, split) is under MCU control */
        (boolean)FALSE,

        /* Partition Index */
        (uint8)2U,

        /* Configure operation for cores is lockstep or split */
        (boolean)FALSE,
        
        /* The process configuration register value of the partition. */
        (
            
            MC_ME_PRTNX_PCONF_PCE_EN_U32 |

            MC_ME_PRTNX_PCONF_OSSE_DIS_U32
            
        ),

        /* Mask containing the Partition triggers (PCE/OSSE/etc) to be updated. */
        MC_ME_PRTN2_PUPD_RWBITS_MASK,

        /* Number of COFBs within Partition 2 */
        (uint8)0U,
        /* Configuration for the COFBs within Partition 2. */
        (NULL_PTR),

        /* Number of Cores within Partition 2 */
        (uint8)4U,
        /* Configuration for the Cores within Partition 2. */
        &Power_Ip_MC_ME_aPartition2CoreConfigPB_0
    }
};



/**
* @brief            Definition of a MCU mode section in the configuration structure.
* @details          Specifies the system behaviour during the selected target mode.
*                   Data set and configured by Mcu_SetMode call.
*/
static const Power_Ip_MC_ME_ModeConfigType Power_Ip_MC_ME_ModeConfigPB_0 =
{
#if (defined(POWER_IP_ENTER_LOW_POWER_MODE) && (POWER_IP_ENTER_LOW_POWER_MODE == STD_ON))
    /* MC_ME Main Core ID register */
    MC_ME_MAIN_COREID_NOT_USED_U32,
#endif /* (POWER_IP_ENTER_LOW_POWER_MODE == STD_ON) */
    /* MC_ME Mode Partition Settings. */
    &Power_Ip_MC_ME_aPartitionConfigPB_0
};





static const Power_Ip_MC_RGM_CoreConfigType Power_Ip_MC_RGM_aDomain0CoreConfigPB_0[4U] =
{
                    
    /* The configuration structure for Domain 0 Core 0. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)0U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST0_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST0_COFB0_RSTEN_CORES_MASK(0U)
    }
                    ,
    /* The configuration structure for Domain 0 Core 1. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)1U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST0_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST0_COFB0_RSTEN_CORES_MASK(1U)
    }
                    ,
    /* The configuration structure for Domain 0 Core 2. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)2U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST0_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST0_COFB0_RSTEN_CORES_MASK(2U)
    }
                    ,
    /* The configuration structure for Domain 0 Core 3. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)3U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST0_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST0_COFB0_RSTEN_CORES_MASK(3U)
    }
};

static const Power_Ip_MC_RGM_CoreConfigType Power_Ip_MC_RGM_aDomain1CoreConfigPB_0[4U] =
{
                    
    /* The configuration structure for Domain 1 Core 0. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)TRUE,

        /* The index of the core within the domain. */
        (uint8)0U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST1_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST1_COFB0_RSTEN_CORES_MASK(0U)
    }
                    ,
    /* The configuration structure for Domain 1 Core 1. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)1U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST1_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    | MC_RGM_PRST1_COFB0_RSTEN_CORES_MASK(1U)
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST1_COFB0_RSTEN_CORES_MASK(1U)
    }
                    ,
    /* The configuration structure for Domain 1 Core 2. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)2U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST1_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    | MC_RGM_PRST1_COFB0_RSTEN_CORES_MASK(2U)
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST1_COFB0_RSTEN_CORES_MASK(2U)
    }
                    ,
    /* The configuration structure for Domain 1 Core 3. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)3U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST1_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    | MC_RGM_PRST1_COFB0_RSTEN_CORES_MASK(3U)
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST1_COFB0_RSTEN_CORES_MASK(3U)
    }
};

static const Power_Ip_MC_RGM_CoreConfigType Power_Ip_MC_RGM_aDomain2CoreConfigPB_0[4U] =
{
                    
    /* The configuration structure for Domain 2 Core 0. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)0U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST2_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    | MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(0U)
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(0U)
    }
                    ,
    /* The configuration structure for Domain 2 Core 1. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)1U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST2_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    | MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(1U)
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(1U)
    }
                    ,
    /* The configuration structure for Domain 2 Core 2. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)2U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST2_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    | MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(2U)
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(2U)
    }
                    ,
    /* The configuration structure for Domain 2 Core 3. */
    {
        /* Specifies whether the given core is under MCU control. */
                    (boolean)FALSE,

        /* The index of the core within the domain. */
        (uint8)3U,

        /* The reset enable register value of the core. */
        MC_RGM_PRST2_COFB0_RSTEN
        (
            ((uint32)0x00000000U)
                    | MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(3U)
        ),

        /* Mask containing the Core blocks to be updated. */
        MC_RGM_PRST2_COFB0_RSTEN_CORES_MASK(3U)
    }
};


static const Power_Ip_MC_RGM_CofbConfigType Power_Ip_MC_RGM_aDomain0CofbConfigPB_0[1U] =
{
    
    /* The configuration structure for Domain 0 COFB 0 (i.e. PRST0_0). */
    {
        /* Specifies whether the given COFB set is under MCU control. */
        (boolean)FALSE,

        /* The index of the COFB set within the domain. */
        (uint8)0U,

        /* The reset enable register value of the COFB set. */
        MC_RGM_PRST0_COFB0_RSTEN
        (
            ((uint32)0x00000000U) 
        ),

        /* Mask containing the COFB blocks to be updated. */
        MC_RGM_PRST0_COFB0_RSTEN_PERIPH_MASK
    }
};


static const Power_Ip_MC_RGM_DomainConfigType Power_Ip_MC_RGM_aDomainConfigPB_0[3U] =
{

    
    /* The configuration structure for Domain 0. */
    {
        /* Specifies whether the given domain is under MCU control. */
        (boolean)TRUE,

        /* Specifies whether the given domain's power management is under MCU control. */
        (boolean)TRUE,

        /* Domain Index */
        (uint8)0U,

        /* The process configuration register value of the domain. */
        RDC_RDX_CTRL_REG_ICON_INTF_ENABLE,

        /* Number of COFBs within Domain 0 */
        (uint8)1U,
        /* Configuration for the COFBs within Domain 0. */
        &Power_Ip_MC_RGM_aDomain0CofbConfigPB_0,

        /* Number of Cores within Domain 0 */
        (uint8)4U,
        /* Configuration for the Cores within Domain 0. */
        &Power_Ip_MC_RGM_aDomain0CoreConfigPB_0
    }

    ,
    /* The configuration structure for Domain 1. */
    {
        /* Specifies whether the given domain is under MCU control. */
        (boolean)TRUE,

        /* Specifies whether the given domain's power management is under MCU control. */
        (boolean)TRUE,

        /* Domain Index */
        (uint8)1U,

        /* The process configuration register value of the domain. */
        RDC_RDX_CTRL_REG_ICON_INTF_ENABLE,

        /* Number of COFBs within Domain 1 */
        (uint8)0U,
        /* Configuration for the COFBs within Domain 1. */
        (NULL_PTR),

        /* Number of Cores within Domain 1 */
        (uint8)4U,
        /* Configuration for the Cores within Domain 1. */
        &Power_Ip_MC_RGM_aDomain1CoreConfigPB_0
    }

    ,
    /* The configuration structure for Domain 2. */
    {
        /* Specifies whether the given domain is under MCU control. */
        (boolean)TRUE,

        /* Specifies whether the given domain's power management is under MCU control. */
        (boolean)TRUE,

        /* Domain Index */
        (uint8)2U,

        /* The process configuration register value of the domain. */
        RDC_RDX_CTRL_REG_ICON_INTF_ENABLE,

        /* Number of COFBs within Domain 2 */
        (uint8)0U,
        /* Configuration for the COFBs within Domain 2. */
        (NULL_PTR),

        /* Number of Cores within Domain 2 */
        (uint8)4U,
        /* Configuration for the Cores within Domain 2. */
        &Power_Ip_MC_RGM_aDomain2CoreConfigPB_0
    }

};


/**
* @brief            Definition of a MCU mode section in the configuration structure.
* @details          Specifies the system behaviour during the selected target mode.
*                   Data set and configured by Mcu_SetMode call.
*/
static const Power_Ip_MC_RGM_ModeConfigType Power_Ip_MC_RGM_ModeConfigPB_0 =
{
    /* MC_RGM Mode Domain Settings. */
    &Power_Ip_MC_RGM_aDomainConfigPB_0
};



static const Power_Ip_Peripheral_ConfigType Power_Ip_Peripheral_ConfigPB_0[101U] =
{
    /* The configuration for ADC0PCTL register */
    {
        (boolean)TRUE,
        0U,
        13U,
        (boolean)TRUE
    },
    /* The configuration for ADC1PCTL register */
    {
        (boolean)TRUE,
        0U,
        12U,
        (boolean)TRUE
    },
    /* The configuration for CE_EDMAPCTL register */
    {
        (boolean)TRUE,
        3U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for CE_PIT0PCTL register */
    {
        (boolean)TRUE,
        3U,
        27U,
        (boolean)TRUE
    },
    /* The configuration for CE_PIT1PCTL register */
    {
        (boolean)TRUE,
        3U,
        28U,
        (boolean)TRUE
    },
    /* The configuration for CE_PIT2PCTL register */
    {
        (boolean)TRUE,
        3U,
        29U,
        (boolean)TRUE
    },
    /* The configuration for CE_PIT3PCTL register */
    {
        (boolean)TRUE,
        3U,
        30U,
        (boolean)TRUE
    },
    /* The configuration for CE_PIT4PCTL register */
    {
        (boolean)TRUE,
        3U,
        31U,
        (boolean)TRUE
    },
    /* The configuration for CE_PIT5PCTL register */
    {
        (boolean)TRUE,
        3U,
        32U,
        (boolean)TRUE
    },
    /* The configuration for CTUPCTL register */
    {
        (boolean)TRUE,
        0U,
        20U,
        (boolean)TRUE
    },
    /* The configuration for DDRCPCTL register */
    {
        (boolean)TRUE,
        6U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for DMACRC0PCTL register */
    {
        (boolean)TRUE,
        0U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for DMACRC1PCTL register */
    {
        (boolean)TRUE,
        1U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for DMACRC4PCTL register */
    {
        (boolean)TRUE,
        4U,
        2U,
        (boolean)TRUE
    },
    /* The configuration for DMACRC5PCTL register */
    {
        (boolean)TRUE,
        5U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for DMAMUX0PCTL register */
    {
        (boolean)TRUE,
        0U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for DMAMUX1PCTL register */
    {
        (boolean)TRUE,
        1U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for DMAMUX4PCTL register */
    {
        (boolean)TRUE,
        4U,
        2U,
        (boolean)TRUE
    },
    /* The configuration for DMAMUX5PCTL register */
    {
        (boolean)TRUE,
        5U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for EDMA0PCTL register */
    {
        (boolean)TRUE,
        0U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for EDMA1PCTL register */
    {
        (boolean)TRUE,
        1U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for EDMA3PCTL register */
    {
        (boolean)TRUE,
        3U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for EDMA4PCTL register */
    {
        (boolean)TRUE,
        4U,
        2U,
        (boolean)TRUE
    },
    /* The configuration for EDMA5PCTL register */
    {
        (boolean)TRUE,
        5U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for ENET0PCTL register */
    {
        (boolean)TRUE,
        1U,
        12U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN0PCTL register */
    {
        (boolean)TRUE,
        3U,
        3U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN1PCTL register */
    {
        (boolean)TRUE,
        3U,
        4U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN10PCTL register */
    {
        (boolean)TRUE,
        3U,
        13U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN11PCTL register */
    {
        (boolean)TRUE,
        3U,
        14U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN12PCTL register */
    {
        (boolean)TRUE,
        3U,
        15U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN13PCTL register */
    {
        (boolean)TRUE,
        3U,
        16U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN14PCTL register */
    {
        (boolean)TRUE,
        3U,
        17U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN15PCTL register */
    {
        (boolean)TRUE,
        3U,
        18U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN16PCTL register */
    {
        (boolean)TRUE,
        3U,
        19U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN17PCTL register */
    {
        (boolean)TRUE,
        3U,
        20U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN18PCTL register */
    {
        (boolean)TRUE,
        3U,
        21U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN19PCTL register */
    {
        (boolean)TRUE,
        3U,
        22U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN2PCTL register */
    {
        (boolean)TRUE,
        3U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN20PCTL register */
    {
        (boolean)TRUE,
        3U,
        23U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN21PCTL register */
    {
        (boolean)TRUE,
        3U,
        24U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN22PCTL register */
    {
        (boolean)TRUE,
        3U,
        25U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN23PCTL register */
    {
        (boolean)TRUE,
        3U,
        26U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN3PCTL register */
    {
        (boolean)TRUE,
        3U,
        6U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN4PCTL register */
    {
        (boolean)TRUE,
        3U,
        7U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN5PCTL register */
    {
        (boolean)TRUE,
        3U,
        8U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN6PCTL register */
    {
        (boolean)TRUE,
        3U,
        9U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN7PCTL register */
    {
        (boolean)TRUE,
        3U,
        10U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN8PCTL register */
    {
        (boolean)TRUE,
        3U,
        11U,
        (boolean)TRUE
    },
    /* The configuration for FLEXCAN9PCTL register */
    {
        (boolean)TRUE,
        3U,
        12U,
        (boolean)TRUE
    },
    /* The configuration for FRAY0PCTL register */
    {
        (boolean)TRUE,
        0U,
        2U,
        (boolean)TRUE
    },
    /* The configuration for FRAY1PCTL register */
    {
        (boolean)TRUE,
        0U,
        3U,
        (boolean)TRUE
    },
    /* The configuration for GTMPCTL register */
    {
        (boolean)TRUE,
        0U,
        22U,
        (boolean)TRUE
    },
    /* The configuration for IIIC0PCTL register */
    {
        (boolean)TRUE,
        0U,
        4U,
        (boolean)TRUE
    },
    /* The configuration for IIIC1PCTL register */
    {
        (boolean)TRUE,
        1U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for IIIC2PCTL register */
    {
        (boolean)TRUE,
        4U,
        11U,
        (boolean)TRUE
    },
    /* The configuration for LIN0PCTL register */
    {
        (boolean)TRUE,
        0U,
        8U,
        (boolean)TRUE
    },
    /* The configuration for LIN1PCTL register */
    {
        (boolean)TRUE,
        0U,
        9U,
        (boolean)TRUE
    },
    /* The configuration for LIN10PCTL register */
    {
        (boolean)TRUE,
        5U,
        4U,
        (boolean)TRUE
    },
    /* The configuration for LIN11PCTL register */
    {
        (boolean)TRUE,
        5U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for LIN2PCTL register */
    {
        (boolean)TRUE,
        0U,
        10U,
        (boolean)TRUE
    },
    /* The configuration for LIN3PCTL register */
    {
        (boolean)TRUE,
        1U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for LIN4PCTL register */
    {
        (boolean)TRUE,
        1U,
        6U,
        (boolean)TRUE
    },
    /* The configuration for LIN5PCTL register */
    {
        (boolean)TRUE,
        1U,
        7U,
        (boolean)TRUE
    },
    /* The configuration for LIN6PCTL register */
    {
        (boolean)TRUE,
        4U,
        6U,
        (boolean)TRUE
    },
    /* The configuration for LIN7PCTL register */
    {
        (boolean)TRUE,
        4U,
        7U,
        (boolean)TRUE
    },
    /* The configuration for LIN8PCTL register */
    {
        (boolean)TRUE,
        4U,
        8U,
        (boolean)TRUE
    },
    /* The configuration for LIN9PCTL register */
    {
        (boolean)TRUE,
        5U,
        3U,
        (boolean)TRUE
    },
    /* The configuration for MSCDSPIPCTL register */
    {
        (boolean)TRUE,
        0U,
        6U,
        (boolean)TRUE
    },
    /* The configuration for MSCLINPCTL register */
    {
        (boolean)TRUE,
        0U,
        11U,
        (boolean)TRUE
    },
    /* The configuration for NANOPCTL register */
    {
        (boolean)TRUE,
        0U,
        22U,
        (boolean)TRUE
    },
    /* The configuration for PIT_0PCTL register */
    {
        (boolean)TRUE,
        0U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for PIT_1PCTL register */
    {
        (boolean)TRUE,
        1U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for PIT_4PCTL register */
    {
        (boolean)TRUE,
        4U,
        2U,
        (boolean)TRUE
    },
    /* The configuration for PIT_5PCTL register */
    {
        (boolean)TRUE,
        5U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for PSI5_0PCTL register */
    {
        (boolean)TRUE,
        0U,
        19U,
        (boolean)TRUE
    },
    /* The configuration for PSI5_1PCTL register */
    {
        (boolean)TRUE,
        4U,
        12U,
        (boolean)TRUE
    },
    /* The configuration for PSI5S_0PCTL register */
    {
        (boolean)TRUE,
        0U,
        23U,
        (boolean)TRUE
    },
    /* The configuration for PSI5S_1PCTL register */
    {
        (boolean)TRUE,
        4U,
        14U,
        (boolean)TRUE
    },
    /* The configuration for QSPI0PCTL register */
    {
        (boolean)TRUE,
        4U,
        0U,
        (boolean)TRUE
    },
    /* The configuration for QSPI1PCTL register */
    {
        (boolean)TRUE,
        4U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for RXLUTPCTL register */
    {
        (boolean)TRUE,
        3U,
        33U,
        (boolean)TRUE
    },
    /* The configuration for SDHC0PCTL register */
    {
        (boolean)TRUE,
        4U,
        9U,
        (boolean)TRUE
    },
    /* The configuration for SINCPCTL register */
    {
        (boolean)TRUE,
        0U,
        24U,
        (boolean)TRUE
    },
    /* The configuration for SIPI0PCTL register */
    {
        (boolean)TRUE,
        1U,
        8U,
        (boolean)TRUE
    },
    /* The configuration for SIPI1PCTL register */
    {
        (boolean)TRUE,
        1U,
        9U,
        (boolean)TRUE
    },
    /* The configuration for SIUL2_0PCTL register */
    {
        (boolean)TRUE,
        0U,
        21U,
        (boolean)TRUE
    },
    /* The configuration for SIUL2_1PCTL register */
    {
        (boolean)TRUE,
        1U,
        14U,
        (boolean)TRUE
    },
    /* The configuration for SIUL2_4PCTL register */
    {
        (boolean)TRUE,
        4U,
        13U,
        (boolean)TRUE
    },
    /* The configuration for SIUL2_5PCTL register */
    {
        (boolean)TRUE,
        5U,
        6U,
        (boolean)TRUE
    },
    /* The configuration for SPI0PCTL register */
    {
        (boolean)TRUE,
        0U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for SPI1PCTL register */
    {
        (boolean)TRUE,
        0U,
        7U,
        (boolean)TRUE
    },
    /* The configuration for SPI2PCTL register */
    {
        (boolean)TRUE,
        1U,
        2U,
        (boolean)TRUE
    },
    /* The configuration for SPI3PCTL register */
    {
        (boolean)TRUE,
        1U,
        3U,
        (boolean)TRUE
    },
    /* The configuration for SPI4PCTL register */
    {
        (boolean)TRUE,
        1U,
        4U,
        (boolean)TRUE
    },
    /* The configuration for SPI5PCTL register */
    {
        (boolean)TRUE,
        4U,
        3U,
        (boolean)TRUE
    },
    /* The configuration for SPI6PCTL register */
    {
        (boolean)TRUE,
        4U,
        4U,
        (boolean)TRUE
    },
    /* The configuration for SPI7PCTL register */
    {
        (boolean)TRUE,
        4U,
        5U,
        (boolean)TRUE
    },
    /* The configuration for SPI8PCTL register */
    {
        (boolean)TRUE,
        5U,
        1U,
        (boolean)TRUE
    },
    /* The configuration for SPI9PCTL register */
    {
        (boolean)TRUE,
        5U,
        2U,
        (boolean)TRUE
    },
    /* The configuration for SRX0PCTL register */
    {
        (boolean)TRUE,
        1U,
        10U,
        (boolean)TRUE
    },
    /* The configuration for SRX1PCTL register */
    {
        (boolean)TRUE,
        4U,
        10U,
        (boolean)TRUE
    },

};





static const Power_Ip_GPR_ConfigType Power_Ip_GPR_ConfigPB_0 =
{
    &Power_Ip_Peripheral_ConfigPB_0
};




/**
* @brief          Initialization mode data.
* @details        Static configuration realized by calling Mcu_SetMode() API.
*
*/
const Power_Ip_ModeConfigType Power_Ip_aModeConfigPB[1U] =
{
    /* Start of Mcu_aModeConfig[0] */
    {
        /* Mode Configuration ID. */
        (Power_Ip_ModeType)0U,

        /* The Power Mode name (code). */
        POWER_IP_RUN_MODE,
        
        /* The Sleep On Exit configuration */
        (boolean)FALSE,
        
        /* The Deep Sleep configuration */
        (boolean)FALSE,

        /* MC_ME IP Mode settings. */
        &Power_Ip_MC_ME_ModeConfigPB_0,

        /* MC_RGM IP Mode settings. */
        &Power_Ip_MC_RGM_ModeConfigPB_0,
        
        /* GPR IP settings. */
        &Power_Ip_GPR_ConfigPB_0

    } /* End of Mcu_aModeConfig[0] */
};



/**
* @brief          Initialization data for MC_RGM hardware IP.
* @details        Static configuration assigned at startup by calling Mcu_Init() API.
*
*/
static const Power_Ip_MC_RGM_ConfigType Power_Ip_MC_RGM_ConfigPB =
{
#if (POWER_IP_PERFORM_RESET_API == STD_ON)
    /* MC_ResetType: Functional vs Destructive. */
    (MCU_FUNC_RESET),
#endif /* (POWER_IP_PERFORM_RESET_API == STD_ON) */


#if (defined(POWER_IP_FUNCTIONAL_RESET_DISABLE_SUPPORT) && (POWER_IP_FUNCTIONAL_RESET_DISABLE_SUPPORT == STD_ON))
    /* Func_ResetOpt: FERD Register Configuration. */
    (
        0U
    ),
#endif /* POWER_IP_FUNCTIONAL_RESET_DISABLE_SUPPORT */


#if defined(POWER_IP_FUNCTIONAL_RESET_ENTRY_TIMEOUT_SUPPORT)
  #if (POWER_IP_FUNCTIONAL_RESET_ENTRY_TIMEOUT_SUPPORT == STD_ON)
    (uint32)(MC_RGM_FRENTC_FRET_EN(1U) |
             MC_RGM_FRENTC_FRET_TIMEOUT(0)),
  #endif
#endif

    /* Func_Threshold_Reset: RGM_FRET Register Configuration. */
    MC_RGM_FRET_FRET((uint32)15U),

    /* Dest_Threshold_Reset: RGM_DRET Register Configuration. */
    MC_RGM_DRET_DRET((uint32)0U)
};




/**
* @brief          Initialization data for PMC hw IP.
* @details        Static configuration realized at startup by calling Mcu_Init() API.
*
*/
static const Power_Ip_PMC_ConfigType Power_Ip_PMC_ConfigPB =
{
    /* Non-Critical Supply Presence Detector Control Register (NCSPD_CTL). */
    (
        ((uint32)0x00000000U) 
    )
};




/**
* @brief          Initialization data for different hw IPs.
* @details        Static configuration realized at startup by calling Mcu_Init() API.
*
*/
const Power_Ip_HwIPsConfigType Power_Ip_HwIPsConfigPB =
{
    /* Configuration for MC_RGM (Reset Generation Module) hardware IP. */
    &Power_Ip_MC_RGM_ConfigPB,

    /* Configuration for PMU (Power Management Unit) hardware IP, part of PCU. */
    &Power_Ip_PMC_ConfigPB,

};




#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED

#include "Mcu_MemMap.h"

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
#endif

/** @} */

