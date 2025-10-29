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
*   @file       Clock_Ip_PBcfg.c
*   @version    2.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Ip Driver
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
#include "Std_Types.h"
#include "Clock_Ip_Private.h"

/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_PBCFG_VENDOR_ID_C                      43
#define CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C       7
#define CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C               2
#define CLOCK_IP_PBCFG_SW_MINOR_VERSION_C               0
#define CLOCK_IP_PBCFG_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
#endif

/* Check if Clock_Ip_PBcfg.c file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
#endif


#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Std_Types.h file are of the same Autosar version */
    #if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C  != STD_AR_RELEASE_MAJOR_VERSION) || \
         (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C  != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Std_Types.h are different"
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











static const Clock_Ip_XoscConfigType Clock_Ip_XoscConfigurations_0[CLOCK_IP_CONFIGURED_XOSCS_0_NO] = {

#if CLOCK_IP_CONFIGURED_XOSCS_0_NO > 0U
    {
        FXOSC_CLK,                    /* Clock name associated to xosc */
        40000000U,                    /* External oscillator frequency. */
        1U,                           /* Enable xosc. */
        157U,                         /* Startup stabilization time. */
        0U,                           /* XOSC bypass option */
        1U,                           /* Comparator enable */
        12U,                          /* Crystal overdrive protection */
        0U,                     /* Gain value */
        0U,                     /* Monitor type */
        0U,                     /* Automatic level controller */
    },
    #endif
};


static const Clock_Ip_PllConfigType Clock_Ip_PllConfigurations_0[CLOCK_IP_CONFIGURED_PLLS_0_NO] = {
                            
                #if CLOCK_IP_CONFIGURED_PLLS_0_NO > 0U
                {
                    COREPLL_CLK,                  /*!<     name;                    */
                    1U,                           /*!<     enable;                  */
                    FXOSC_CLK,                    /*!<     inputReference           */
                    0U,                           /*!<     bypass;                  */
                    2U,                           /*!<     predivider;              */
                    0U,                           /*!<     multiplier;              */
                    0U,                           /*!<     postdivider;              */
                    0U,                           /*!<     numeratorFracLoopDiv;    */
                    120U,                          /*!<     mulFactorDiv;            */
                    1U,                           /*!<     ModulationBypass;              */
                    0U,                           /*!<     modulationType;        */
                    0U,                           /*!<     modulationPeriod;        */
                    0U,                           /*!<     incrementStep;           */
                    0U,                           /*!<     sigmaDelta;              */
                    0U,                           /*!<     ditherControl;           */
                    0U,                           /*!<     ditherControlValue;      */
                    0U,                           /*!<     Monitor type */
                    {                             /*!<     Dividers */
                            0U,
                            0U,
                            0U,
                    },
                    0U,                     /* SoftwareDisable */
                },
                #endif
                                            
                #if CLOCK_IP_CONFIGURED_PLLS_0_NO > 1U
                {
                    PERIPHPLL_CLK,                  /*!<     name;                    */
                    1U,                           /*!<     enable;                  */
                    FXOSC_CLK,                    /*!<     inputReference           */
                    0U,                           /*!<     bypass;                  */
                    2U,                           /*!<     predivider;              */
                    0U,                           /*!<     multiplier;              */
                    0U,                           /*!<     postdivider;              */
                    0U,                           /*!<     numeratorFracLoopDiv;    */
                    120U,                          /*!<     mulFactorDiv;            */
                    1U,                           /*!<     ModulationBypass;              */
                    0U,                           /*!<     modulationType;        */
                    0U,                           /*!<     modulationPeriod;        */
                    0U,                           /*!<     incrementStep;           */
                    0U,                           /*!<     sigmaDelta;              */
                    0U,                           /*!<     ditherControl;           */
                    0U,                           /*!<     ditherControlValue;      */
                    0U,                           /*!<     Monitor type */
                    {                             /*!<     Dividers */
                            0U,
                            0U,
                            0U,
                    },
                    0U,                     /* SoftwareDisable */
                },
                #endif
                                            
                #if CLOCK_IP_CONFIGURED_PLLS_0_NO > 2U
                {
                    DDRPLL_CLK,                  /*!<     name;                    */
                    1U,                           /*!<     enable;                  */
                    FXOSC_CLK,                    /*!<     inputReference           */
                    0U,                           /*!<     bypass;                  */
                    1U,                           /*!<     predivider;              */
                    0U,                           /*!<     multiplier;              */
                    0U,                           /*!<     postdivider;              */
                    0U,                           /*!<     numeratorFracLoopDiv;    */
                    40U,                          /*!<     mulFactorDiv;            */
                    1U,                           /*!<     ModulationBypass;              */
                    0U,                           /*!<     modulationType;        */
                    0U,                           /*!<     modulationPeriod;        */
                    0U,                           /*!<     incrementStep;           */
                    0U,                           /*!<     sigmaDelta;              */
                    0U,                           /*!<     ditherControl;           */
                    0U,                           /*!<     ditherControlValue;      */
                    0U,                           /*!<     Monitor type */
                    {                             /*!<     Dividers */
                            0U,
                            0U,
                            0U,
                    },
                    0U,                     /* SoftwareDisable */
                },
                #endif
                                            
                #if CLOCK_IP_CONFIGURED_PLLS_0_NO > 3U
                {
                    LFAST0_PLL_CLK,                  /*!<     name;                    */
                    0U,                           /*!<     enable;                  */
                    P1_LFAST0_REF_CLK,                    /*!<     inputReference           */
                    0U,                           /*!<     bypass;                  */
                    1U,                           /*!<     predivider;              */
                    0U,                           /*!<     multiplier;              */
                    0U,                           /*!<     postdivider;              */
                    0U,                           /*!<     numeratorFracLoopDiv;    */
                    16U,                          /*!<     mulFactorDiv;            */
                    0U,                           /*!<     ModulationBypass;              */
                    0U,                           /*!<     modulationType;        */
                    0U,                           /*!<     modulationPeriod;        */
                    0U,                           /*!<     incrementStep;           */
                    0U,                           /*!<     sigmaDelta;              */
                    0U,                           /*!<     ditherControl;           */
                    0U,                           /*!<     ditherControlValue;      */
                    0U,                           /*!<     Monitor type */
                    {                             /*!<     Dividers */
                            0U,
                            0U,
                            0U,
                    },
                    0U,                     /* SoftwareDisable */
                },
                #endif
                                            
                #if CLOCK_IP_CONFIGURED_PLLS_0_NO > 4U
                {
                    LFAST1_PLL_CLK,                  /*!<     name;                    */
                    0U,                           /*!<     enable;                  */
                    P1_LFAST1_REF_CLK,                    /*!<     inputReference           */
                    0U,                           /*!<     bypass;                  */
                    1U,                           /*!<     predivider;              */
                    0U,                           /*!<     multiplier;              */
                    0U,                           /*!<     postdivider;              */
                    0U,                           /*!<     numeratorFracLoopDiv;    */
                    16U,                          /*!<     mulFactorDiv;            */
                    0U,                           /*!<     ModulationBypass;              */
                    0U,                           /*!<     modulationType;        */
                    0U,                           /*!<     modulationPeriod;        */
                    0U,                           /*!<     incrementStep;           */
                    0U,                           /*!<     sigmaDelta;              */
                    0U,                           /*!<     ditherControl;           */
                    0U,                           /*!<     ditherControlValue;      */
                    0U,                           /*!<     Monitor type */
                    {                             /*!<     Dividers */
                            0U,
                            0U,
                            0U,
                    },
                    0U,                     /* SoftwareDisable */
                },
                #endif
                            };



static const Clock_Ip_SelectorConfigType Clock_Ip_SelectorConfigurations_0[CLOCK_IP_CONFIGURED_SELECTORS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 0U
    {
        P0_SYS_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS1_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 1U
    {
        P0_REG_INTF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 2U
    {
        P0_PSI5_S_TRIG0_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 3U
    {
        P0_LIN_BAUD_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 4U
    {
        P0_DSPI_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 5U
    {
        P0_FR_PE_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 6U
    {
        P0_NANO_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 7U
    {
        GLB_LBIST_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 8U
    {
        P0_EMIOS_LCU_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 9U
    {
        CLKOUT0_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 10U
    {
        P1_SYS_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS1_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 11U
    {
        P1_REG_INTF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 12U
    {
        P1_DSPI60_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 13U
    {
        P1_LIN_BAUD_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 14U
    {
        ETH_TS_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 15U
    {
        ETH0_TX_MII_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 16U
    {
        ETH0_RX_MII_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 17U
    {
        ETH1_TX_MII_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 18U
    {
        ETH1_RX_MII_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 19U
    {
        CLKOUT1_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 20U
    {
        P1_LFAST0_REF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 21U
    {
        P1_LFAST1_REF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 22U
    {
        P1_NETC_AXI_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 23U
    {
        P2_SYS_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS4_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 24U
    {
        P2_REG_INTF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 25U
    {
        P2_DBG_ATB_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 26U
    {
        P2_MATH_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS2_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 27U
    {
        P3_SYS_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS1_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 28U
    {
        P3_REG_INTF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 29U
    {
        P3_DBG_TS_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 30U
    {
        P3_CAN_PE_CLK,                     /* Clock name associated to selector */
        FXOSC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 31U
    {
        CLKOUT4_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 32U
    {
        P4_SYS_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS4_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 33U
    {
        P4_REG_INTF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 34U
    {
        P4_PSI5_S_TRIG0_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 35U
    {
        P4_DSPI_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 36U
    {
        P4_DSPI60_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 37U
    {
        CLKOUT2_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 38U
    {
        P4_SDHC_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 39U
    {
        P4_QSPI0_2X_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 40U
    {
        P4_LIN_BAUD_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 41U
    {
        P4_SDHC_IP_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 42U
    {
        P4_EMIOS_LCU_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 43U
    {
        P5_SYS_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS4_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 44U
    {
        P5_REG_INTF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 45U
    {
        P5_LIN_BAUD_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 46U
    {
        P5_DSPI_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 47U
    {
        CLKOUT3_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 48U
    {
        P5_DIPORT_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 49U
    {
        DDR_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 50U
    {
        P6_REG_INTF_CLK,                     /* Clock name associated to selector */
        FIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 51U
    {
        RTU0_CORE_CLK,                     /* Clock name associated to selector */
        COREPLL_PHI0_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 52U
    {
        RTU0_REG_INTF_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS1_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 53U
    {
        RTU1_CORE_CLK,                     /* Clock name associated to selector */
        COREPLL_PHI0_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 54U
    {
        RTU1_REG_INTF_CLK,                     /* Clock name associated to selector */
        COREPLL_DFS1_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 55U
    {
        P0_CLKOUT_SRC_CLK,                     /* Clock name associated to selector */
        SIRC_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 56U
    {
        P1_CLKOUT_SRC_CLK,                     /* Clock name associated to selector */
        P1_SYS_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 57U
    {
        P3_CLKOUT_SRC_CLK,                     /* Clock name associated to selector */
        P3_SYS_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 58U
    {
        P4_CLKOUT_SRC_CLK,                     /* Clock name associated to selector */
        P4_SYS_CLK,                       /* Name of the selected input source */
    },
    #endif

    #if CLOCK_IP_CONFIGURED_SELECTORS_0_NO > 59U
    {
        P5_CLKOUT_SRC_CLK,                     /* Clock name associated to selector */
        P5_SYS_CLK,                       /* Name of the selected input source */
    },
    #endif

};

static const Clock_Ip_DividerConfigType Clock_Ip_DividerConfigurations_0[CLOCK_IP_CONFIGURED_DIVIDERS_0_NO] = {

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 0U
    {
        CLKOUT0_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 1U
    {
        CLKOUT1_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 2U
    {
        COREPLL_PHI0_CLK,
        3U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 3U
    {
        DDR_CLK,
        2U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 4U
    {
        DDRPLL_PHI0_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 5U
    {
        ETH_TS_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 6U
    {
        ETH0_REF_RMII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 7U
    {
        ETH0_RX_MII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 8U
    {
        ETH0_RX_RGMII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 9U
    {
        ETH0_TX_MII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 10U
    {
        ETH0_TX_RGMII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 11U
    {
        ETH1_REF_RMII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 12U
    {
        ETH1_RX_MII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 13U
    {
        ETH1_RX_RGMII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 14U
    {
        ETH1_TX_MII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 15U
    {
        ETH1_TX_RGMII_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 16U
    {
        GLB_LBIST_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 17U
    {
        P0_CTU_PER_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 18U
    {
        P0_DSPI_MSC_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 19U
    {
        P0_FR_PE_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 20U
    {
        P0_GTM_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 21U
    {
        P0_LIN_BAUD_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 22U
    {
        P0_PSI5_S_TRIG0_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 23U
    {
        P0_PSI5_S_TRIG1_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 24U
    {
        P0_PSI5_S_TRIG2_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 25U
    {
        P0_PSI5_S_TRIG3_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 26U
    {
        P0_PSI5_S_WDOG0_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 27U
    {
        P0_PSI5_S_WDOG1_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 28U
    {
        P0_PSI5_S_WDOG2_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 29U
    {
        P0_PSI5_S_WDOG3_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 30U
    {
        P1_LFAST0_REF_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 31U
    {
        P1_LFAST1_REF_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 32U
    {
        P1_LIN_BAUD_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 33U
    {
        P1_NETC_AXI_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 34U
    {
        P1_REG_INTF_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 35U
    {
        P2_REG_INTF_CLK,
        2U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 36U
    {
        P3_AES_CLK,
        48U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 37U
    {
        P3_CAN_PE_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 38U
    {
        CLKOUT4_CLK,
        2U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 39U
    {
        P3_DBG_TS_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 40U
    {
        P3_REG_INTF_CLK,
        2U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 41U
    {
        CLKOUT2_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 42U
    {
        P4_LIN_BAUD_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 43U
    {
        P4_PSI5_S_TRIG0_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 44U
    {
        P4_PSI5_S_TRIG1_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 45U
    {
        P4_PSI5_S_TRIG2_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 46U
    {
        P4_PSI5_S_TRIG3_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 47U
    {
        P4_PSI5_S_WDOG0_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 48U
    {
        P4_PSI5_S_WDOG1_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 49U
    {
        P4_PSI5_S_WDOG2_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 50U
    {
        P4_PSI5_S_WDOG3_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 51U
    {
        P4_QSPI0_2X_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 52U
    {
        P4_QSPI1_2X_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 53U
    {
        P5_AE_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 54U
    {
        P5_CANXL_PE_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 55U
    {
        P5_CANXL_CHI_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 56U
    {
        CLKOUT3_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 57U
    {
        P5_LIN_BAUD_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 58U
    {
        P5_REG_INTF_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 59U
    {
        P5_SYS_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 60U
    {
        P6_REG_INTF_CLK,
        2U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 61U
    {
        PERIPHPLL_PHI0_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 62U
    {
        PERIPHPLL_PHI1_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 63U
    {
        PERIPHPLL_PHI2_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 64U
    {
        PERIPHPLL_PHI3_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 65U
    {
        PERIPHPLL_PHI4_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 66U
    {
        PERIPHPLL_PHI5_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 67U
    {
        PERIPHPLL_PHI6_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 68U
    {
        RTU0_CORE_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 69U
    {
        RTU0_REG_INTF_CLK,
        3U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 70U
    {
        RTU1_CORE_CLK,
        1U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 71U
    {
        RTU1_REG_INTF_CLK,
        3U,
        {
            0U,
        }
    },
    #endif

    #if CLOCK_IP_CONFIGURED_DIVIDERS_0_NO > 72U
    {
        P4_SDHC_CLK,
        0U,
        {
            0U,
        }
    },
    #endif

};


static const Clock_Ip_FracDivConfigType Clock_Ip_FracDivsConfigurations_0[CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO] = {

                                                                        #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 0U
    {
        COREPLL_DFS0_CLK,
        1U,
        {
            1U,
            12U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 1U
    {
        COREPLL_DFS1_CLK,
        1U,
        {
            3U,
            0U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 2U
    {
        COREPLL_DFS2_CLK,
        1U,
        {
            3U,
            0U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 3U
    {
        COREPLL_DFS3_CLK,
        1U,
        {
            3U,
            0U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 4U
    {
        COREPLL_DFS4_CLK,
        1U,
        {
            3U,
            0U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 5U
    {
        COREPLL_DFS5_CLK,
        1U,
        {
            3U,
            0U,
        },
    },
    #endif
                
                                                                                                        #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 6U
    {
        PERIPHPLL_DFS0_CLK,
        0U,
        {
            1U,
            18U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 7U
    {
        PERIPHPLL_DFS1_CLK,
        0U,
        {
            1U,
            9U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 8U
    {
        PERIPHPLL_DFS2_CLK,
        0U,
        {
            2U,
            0U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 9U
    {
        PERIPHPLL_DFS3_CLK,
        0U,
        {
            2U,
            14U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 10U
    {
        PERIPHPLL_DFS4_CLK,
        0U,
        {
            2U,
            14U,
        },
    },
    #endif
                
                                                                                            #if CLOCK_IP_CONFIGURED_FRACTIONAL_DIVIDERS_0_NO  > 11U
    {
        PERIPHPLL_DFS5_CLK,
        0U,
        {
            4U,
            0U,
        },
    },
    #endif
                
                                        };

static const Clock_Ip_ExtClkConfigType Clock_Ip_ExtClkConfigurations_0[CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO] = {

                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 0U
    {
        ETH0_EXT_RX_CLK,
        125000000U,
    },
    #endif
        
                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 1U
    {
        ETH0_EXT_TX_CLK,
        125000000U,
    },
    #endif
        
                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 2U
    {
        ETH1_EXT_RX_CLK,
        125000000U,
    },
    #endif
        
                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 3U
    {
        ETH1_EXT_TX_CLK,
        125000000U,
    },
    #endif
        
                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 4U
    {
        ETH_RGMII_REF_CLK,
        50000000U,
    },
    #endif
        
                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 5U
    {
        LFAST0_EXT_REF_CLK,
        26000000U,
    },
    #endif
        
                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 6U
    {
        LFAST1_EXT_REF_CLK,
        26000000U,
    },
    #endif
        
                        #if CLOCK_IP_CONFIGURED_EXT_CLKS_0_NO  > 7U
    {
        TMR_1588_CLK,
        200000000U,
    },
    #endif
        
    };

    static const Clock_Ip_GateConfigType Clock_Ip_GatesConfigurations_0[CLOCK_IP_CONFIGURED_GATES_0_NO] = {
                                                                            
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 0U
    {
        DDR_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DDR_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 1U
    {
        ADC0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate ADC0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 2U
    {
        ADC1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate ADC1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 3U
    {
        CE_EDMA_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CE_EDMA_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 4U
    {
        CE_PIT0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CE_PIT0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 5U
    {
        CE_PIT1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CE_PIT1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 6U
    {
        CE_PIT2_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CE_PIT2_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 7U
    {
        CE_PIT3_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CE_PIT3_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 8U
    {
        CE_PIT4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CE_PIT4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 9U
    {
        CE_PIT5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CE_PIT5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 10U
    {
        CTU_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate CTU_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 11U
    {
        DMACRC0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMACRC0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 12U
    {
        DMACRC1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMACRC1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 13U
    {
        DMACRC4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMACRC4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 14U
    {
        DMACRC5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMACRC5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 15U
    {
        DMAMUX0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMAMUX0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 16U
    {
        DMAMUX1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMAMUX1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 17U
    {
        DMAMUX4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMAMUX4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 18U
    {
        DMAMUX5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate DMAMUX5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 19U
    {
        EDMA0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate EDMA0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 20U
    {
        EDMA1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate EDMA1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 21U
    {
        EDMA3_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate EDMA3_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 22U
    {
        EDMA4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate EDMA4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 23U
    {
        EDMA5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate EDMA5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 24U
    {
        ENET0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate ENET0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 25U
    {
        FLEXCAN0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 26U
    {
        FLEXCAN1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 27U
    {
        FLEXCAN2_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN2_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 28U
    {
        FLEXCAN3_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN3_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 29U
    {
        FLEXCAN4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 30U
    {
        FLEXCAN5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 31U
    {
        FLEXCAN6_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN6_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 32U
    {
        FLEXCAN7_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN7_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 33U
    {
        FLEXCAN8_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN8_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 34U
    {
        FLEXCAN9_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN9_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 35U
    {
        FLEXCAN10_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN10_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 36U
    {
        FLEXCAN11_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN11_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 37U
    {
        FLEXCAN12_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN12_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 38U
    {
        FLEXCAN13_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN13_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 39U
    {
        FLEXCAN14_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN14_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 40U
    {
        FLEXCAN15_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN15_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 41U
    {
        FLEXCAN16_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN16_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 42U
    {
        FLEXCAN17_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN17_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 43U
    {
        FLEXCAN18_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN18_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 44U
    {
        FLEXCAN19_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN19_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 45U
    {
        FLEXCAN20_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN20_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 46U
    {
        FLEXCAN21_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN21_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 47U
    {
        FLEXCAN22_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN22_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 48U
    {
        FLEXCAN23_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FLEXCAN23_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 49U
    {
        FRAY0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FRAY0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 50U
    {
        FRAY1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate FRAY1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 51U
    {
        GTM_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate GTM_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 52U
    {
        IIIC0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate IIIC0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 53U
    {
        IIIC1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate IIIC1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 54U
    {
        IIIC2_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate IIIC2_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 55U
    {
        LIN0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 56U
    {
        LIN1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 57U
    {
        LIN2_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN2_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 58U
    {
        LIN3_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN3_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 59U
    {
        LIN4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 60U
    {
        LIN5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 61U
    {
        LIN6_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN6_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 62U
    {
        LIN7_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN7_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 63U
    {
        LIN8_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN8_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 64U
    {
        LIN9_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN9_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 65U
    {
        LIN10_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN10_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 66U
    {
        LIN11_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate LIN11_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 67U
    {
        MSCDSPI_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate MSCDSPI_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 68U
    {
        MSCLIN_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate MSCLIN_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 69U
    {
        NANO_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate NANO_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 70U
    {
        PIT0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PIT0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 71U
    {
        PIT1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PIT1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 72U
    {
        PIT4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PIT4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 73U
    {
        PIT5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PIT5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 74U
    {
        PSI5_0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PSI5_0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 75U
    {
        PSI5_1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PSI5_1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 76U
    {
        PSI5S_0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PSI5S_0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 77U
    {
        PSI5S_1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate PSI5S_1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 78U
    {
        QSPI0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate QSPI0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 79U
    {
        QSPI1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate QSPI1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 80U
    {
        RXLUT_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate RXLUT_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 81U
    {
        SDHC0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SDHC0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 82U
    {
        SINC_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SINC_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 83U
    {
        SIPI0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SIPI0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 84U
    {
        SIPI1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SIPI1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 85U
    {
        SIUL2_0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SIUL2_0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 86U
    {
        SIUL2_1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SIUL2_1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 87U
    {
        SIUL2_4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SIUL2_4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 88U
    {
        SIUL2_5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SIUL2_5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 89U
    {
        SPI0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 90U
    {
        SPI1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI1_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 91U
    {
        SPI2_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI2_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 92U
    {
        SPI3_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI3_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 93U
    {
        SPI4_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI4_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 94U
    {
        SPI5_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI5_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 95U
    {
        SPI6_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI6_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 96U
    {
        SPI7_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI7_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 97U
    {
        SPI8_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI8_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 98U
    {
        SPI9_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SPI9_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 99U
    {
        SRX0_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SRX0_CLK */
    },
    #endif
                                                                        
    #if CLOCK_IP_CONFIGURED_GATES_0_NO > 100U
    {
        SRX1_CLK,            /* Clock name associated to clock Gate. */
        1U,                   /*Enable/disable clock Gate SRX1_CLK */
    },
    #endif
                    };

        static const Clock_Ip_CmuConfigType Clock_Ip_CmuConfigurations_0[CLOCK_IP_CONFIGURED_CMUS_0_NO] = {
                                                                                                                                                                                
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 0U
    {
        P2_SYS_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor SMU__CMU_FC_P2_SYS_CLK */
        (                                           /* IER for SMU__CMU_FC_P2_SYS_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 1U
    {
        P0_REG_INTF_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_0_P0_REG_INTF_CLK */
        (                                           /* IER for CMU_FC_0_P0_REG_INTF_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        16000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 2U
    {
        P1_REG_INTF_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_1_P1_REG_INTF_CLK */
        (                                           /* IER for CMU_FC_1_P1_REG_INTF_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        48000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 3U
    {
        FIRC_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_2A_FIRC_CLK */
        (                                           /* IER for CMU_FC_2A_FIRC_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        48000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 4U
    {
        FXOSC_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_2B_FXOSC_CLK */
        (                                           /* IER for CMU_FC_2B_FXOSC_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        40000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 5U
    {
        P2_MATH_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_2C_P2_MATH_CLK */
        (                                           /* IER for CMU_FC_2C_P2_MATH_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 6U
    {
        P3_SYS_MON1_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_3_P3_SYS_MON1_CLK */
        (                                           /* IER for CMU_FC_3_P3_SYS_MON1_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 7U
    {
        P4_REG_INTF_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_4_P4_REG_INTF_CLK */
        (                                           /* IER for CMU_FC_4_P4_REG_INTF_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        16000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 8U
    {
        P5_REG_INTF_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_5_P5_REG_INTF_CLK */
        (                                           /* IER for CMU_FC_5_P5_REG_INTF_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        48000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 9U
    {
        DDR_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_6_DDR_CLK */
        (                                           /* IER for CMU_FC_6_DDR_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        24000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 10U
    {
        P3_SYS_MON2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CE_CMU_FC_0_P3_SYS_MON2_CLK */
        (                                           /* IER for CE_CMU_FC_0_P3_SYS_MON2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 11U
    {
        P3_SYS_MON3_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CE_CMU_FC_1_P3_SYS_MON3_CLK */
        (                                           /* IER for CE_CMU_FC_1_P3_SYS_MON3_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 12U
    {
        CE_SYS_DIV2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CE_CMU_FC_2_CE_SYS_DIV2_CLK */
        (                                           /* IER for CE_CMU_FC_2_CE_SYS_DIV2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        200000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 13U
    {
        RTU0_CORE_MON1_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU0__CMU_FC_0_RTU0_CORE_MON1_CLK */
        (                                           /* IER for RTU0__CMU_FC_0_RTU0_CORE_MON1_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        800000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 14U
    {
        RTU0_CORE_DIV2_MON1_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU0__CMU_FC_1_RTU0_CORE_DIV2_MON1_CLK */
        (                                           /* IER for RTU0__CMU_FC_1_RTU0_CORE_DIV2_MON1_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 15U
    {
        RTU0_CORE_DIV2_MON2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU0__CMU_FC_2_RTU0_CORE_DIV2_MON2_CLK */
        (                                           /* IER for RTU0__CMU_FC_2_RTU0_CORE_DIV2_MON2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 16U
    {
        RTU0_CORE_MON2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU0__CMU_FC_3_RTU0_CORE_MON2_CLK */
        (                                           /* IER for RTU0__CMU_FC_3_RTU0_CORE_MON2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        800000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 17U
    {
        RTU0_CORE_DIV2_MON3_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU0__CMU_FC_4_RTU0_CORE_DIV2_MON3_CLK */
        (                                           /* IER for RTU0__CMU_FC_4_RTU0_CORE_DIV2_MON3_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 18U
    {
        RTU1_CORE_MON1_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU1__CMU_FC_0_RTU1_CORE_MON1_CLK */
        (                                           /* IER for RTU1__CMU_FC_0_RTU1_CORE_MON1_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        800000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 19U
    {
        RTU1_CORE_DIV2_MON1_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU1__CMU_FC_1_RTU1_CORE_DIV2_MON1_CLK */
        (                                           /* IER for RTU1__CMU_FC_1_RTU1_CORE_DIV2_MON1_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 20U
    {
        RTU1_CORE_DIV2_MON2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU1__CMU_FC_2_RTU1_CORE_DIV2_MON2_CLK */
        (                                           /* IER for RTU1__CMU_FC_2_RTU1_CORE_DIV2_MON2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 21U
    {
        RTU1_CORE_MON2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU1__CMU_FC_3_RTU1_CORE_MON2_CLK */
        (                                           /* IER for RTU1__CMU_FC_3_RTU1_CORE_MON2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        800000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 22U
    {
        RTU1_CORE_DIV2_MON3_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor RTU1__CMU_FC_4_RTU1_CORE_DIV2_MON3_CLK */
        (                                           /* IER for RTU1__CMU_FC_4_RTU1_CORE_DIV2_MON3_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 23U
    {
        P0_CLKOUT_SRC_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_DEBUG_1_P0_CLKOUT_SRC_CLK */
        (                                           /* IER for CMU_FC_DEBUG_1_P0_CLKOUT_SRC_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        32000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 24U
    {
        P1_CLKOUT_SRC_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_DEBUG_2_P1_CLKOUT_SRC_CLK */
        (                                           /* IER for CMU_FC_DEBUG_2_P1_CLKOUT_SRC_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        400000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 25U
    {
        SYSTEM_DIV2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_AE_1_SYSTEM_DIV2_CLK */
        (                                           /* IER for CMU_FC_AE_1_SYSTEM_DIV2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        8000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 26U
    {
        SYSTEM_DIV4_MON1_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_AE_2_SYSTEM_DIV4_MON1_CLK */
        (                                           /* IER for CMU_FC_AE_2_SYSTEM_DIV4_MON1_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        4000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                                                                                                                                                                            
    #if CLOCK_IP_CONFIGURED_CMUS_0_NO > 27U
    {
        SYSTEM_DIV4_MON2_CLK,            /* Clock name associated to clock monitor. */
        0U,                   /*Enable/disable clock monitor CMU_FC_AE_3_SYSTEM_DIV4_MON2_CLK */
        (                                           /* IER for CMU_FC_AE_3_SYSTEM_DIV4_MON2_CLK */
        CMU_FC_IER_FLLIE(0) |
        CMU_FC_IER_FHHIE(0) |
        CMU_FC_IER_FLLAIE(0) |
        CMU_FC_IER_FHHAIE(0)
        ),
        4000000U,
                        {
            0U,          /* Start index in register values array */
            0U,          /* End index in register values array */
        },
                    },
                    #endif
                    };

    static const Clock_Ip_ConfiguredFrequencyType Clock_Ip_ConfiguredFrequencyConfigurations_0[CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT] = {

    {
        CLOCK_IS_OFF,
        0U,
    },
                    
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 1U
    {
        FIRC_CLK,
        48000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 2U
    {
        FIRC_AE_CLK,
        16000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 3U
    {
        FXOSC_CLK,
        40000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 4U
    {
        CE_SYS_DIV4_CLK,
        100000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 5U
    {
        P0_REG_INTF_CLK,
        16000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 6U
    {
        P1_REG_INTF_CLK,
        48000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 7U
    {
        P2_MATH_DIV3_CLK,
        133333333U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 8U
    {
        P2_REG_INTF_CLK,
        24000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 9U
    {
        P2_SYS_DIV4_CLK,
        100000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 10U
    {
        P3_REG_INTF_CLK,
        24000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 11U
    {
        P4_REG_INTF_CLK,
        16000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 12U
    {
        P5_REG_INTF_CLK,
        48000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 13U
    {
        P6_REG_INTF_CLK,
        24000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 14U
    {
        RTU0_CORE_CLK,
        800000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 15U
    {
        RTU0_REG_INTF_CLK,
        133333333U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 16U
    {
        RTU1_CORE_CLK,
        800000000U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 17U
    {
        RTU1_REG_INTF_CLK,
        133333333U,
    },
    #endif
                            
    #if CLOCK_IP_CONFIGURED_FREQUENCIES_COUNT > 18U
    {
        SYSTEM_DIV2_CLK,
        8000000U,
    },
    #endif
            };


/* *************************************************************************
 * Configuration structure for Clock Configuration 0
 * ************************************************************************* */
 /*! @brief User Configuration structure clock_Cfg_0 */
const Clock_Ip_ClockConfigType Mcu_aClockConfigPB[1U] = {

    {
        0U,                                 /* clkConfigId */

        (NULL_PTR),                                 /* Register data if register value optimization is enabled */
        0U,                                 /* ircoscsCount */
        1U,                                 /* xoscsCount */
        5U,                                 /* pllsCount */
        60U,                                /* selectorsCount */
        73U,                                /* dividersCount */
        0U,                                 /* dividerTriggersCount */
        12U,                                /* fracDivsCount */
        8U,                                /* extClksCount */
        101U,                                 /* gatesCount */
        0U,                                 /* pcfsCount */
        28U,                                /* cmusCount */
        19U,                                /* configureFrequenciesCount */

        (NULL_PTR),                                 /* Ircosc configurations */
        (&Clock_Ip_XoscConfigurations_0),                      /* Xosc configurations */
        (&Clock_Ip_PllConfigurations_0),                       /* Pll configurations */
        (&Clock_Ip_SelectorConfigurations_0),                  /* Selectors configurations */
        (&Clock_Ip_DividerConfigurations_0),                   /* dividers configurations */
        (NULL_PTR),                                 /* dividerTriggers configurations */
        (&Clock_Ip_FracDivsConfigurations_0),            /* fracDivs configurations */
        (&Clock_Ip_ExtClkConfigurations_0),                    /* extClks configurations */
        (&Clock_Ip_GatesConfigurations_0),                    /* gates configurations */
        (NULL_PTR),                                 /* pcfs configurations */
        (&Clock_Ip_CmuConfigurations_0),                       /* cmus configurations */
        (&Clock_Ip_ConfiguredFrequencyConfigurations_0),       /* configureFrequencies configurations */
    },

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

