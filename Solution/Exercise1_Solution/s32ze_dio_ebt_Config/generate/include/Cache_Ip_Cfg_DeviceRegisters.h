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
#ifndef CACHE_IP_CFG_DEVICE_REGISTERS_H
#define CACHE_IP_CFG_DEVICE_REGISTERS_H

/**
*   @file    Cache_Ip_Cfg_DeviceRegisters.h
*
*   @version 2.0.0
*
*   @brief   AUTOSAR Mcl - Cache Ip Cfg Device Registers header file.
*   @details
*
*   @addtogroup CACHE_IP_DRIVER CACHE IP Driver
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mcal.h"


#include "S32E2_LMEM64.h"
/*==================================================================================================
                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CACHE_IP_CFG_DEVICEREGISTERS_VENDOR_ID                       43
#define CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION        4
#define CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION        7
#define CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_REVISION_VERSION     0
#define CACHE_IP_CFG_DEVICEREGISTERS_SW_MAJOR_VERSION                2
#define CACHE_IP_CFG_DEVICEREGISTERS_SW_MINOR_VERSION                0
#define CACHE_IP_CFG_DEVICEREGISTERS_SW_PATCH_VERSION                0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if header file and Mcal header file are of the same Autosar version */
#if ((CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
     (CACHE_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Cache_Ip_Cfg_DeviceRegisters.h and Mcal.h are different"
#endif
#endif

/*==================================================================================================
                                        LMEM STRUCTURE
==================================================================================================*/
typedef struct {
  volatile uint32 PCCCR;                             /**< PC bus Cache control register, offset: 0x0 */
  volatile uint32 PCCLCR;                            /**< PC bus Cache line control register, offset: 0x4 */
  volatile uint32 PCCSAR;                            /**< PC bus Cache search address register, offset: 0x8 */
  volatile uint32 PCCCVR;                            /**< PC bus Cache read/write value register, offset: 0xC */
  uint8 RESERVED_0[2032];
  volatile uint32 PSCCR;                             /**< PS bus Cache control register, offset: 0x800 */
  volatile uint32 PSCLCR;                            /**< PS bus Cache line control register, offset: 0x804 */
  volatile uint32 PSCSAR;                            /**< PS bus Cache search address register, offset: 0x808 */
  volatile uint32 PSCCVR;                            /**< PS bus Cache read/write value register, offset: 0x80C */
} LMEM_Type, *LMEM_MemMapPtr;

/** Number of instances of the LMEM64 module. */
#define LMEM_INSTANCE_COUNT                      (2u)

#define IP_CE_LMEM_BASE                          (0xE0082000u)
/** Peripheral CE_LMEM64 base pointer */
#define IP_CE_LMEM                               ((LMEM_Type *)IP_CE_LMEM_BASE)
/** Peripheral SMU__LMEM64 base address */
#define IP_SMU_LMEM_BASE                         (0xE0082000u)
/** Peripheral SMU__LMEM64 base pointer */
#define IP_SMU_LMEM                              ((LMEM_Type *)IP_SMU_LMEM_BASE)
/** Array initializer of LMEM64 peripheral base addresses */
#define IP_LMEM_BASE_ADDRS                       { IP_CE_LMEM_BASE, IP_SMU_LMEM_BASE }
/** Array initializer of LMEM64 peripheral base pointers */
#define IP_LMEM_BASE_PTRS                        { IP_CE_LMEM, IP_SMU_LMEM }

/*==================================================================================================
                                       LMEM REGISTER MASKS
==================================================================================================*/
/*! @name PCCCR - PC bus Cache control register */
/*! @{ */

#define LMEM_PCCCR_ENCACHE_MASK                (0x1U)
#define LMEM_PCCCR_ENCACHE_SHIFT               (0U)
#define LMEM_PCCCR_ENCACHE_WIDTH               (1U)
#define LMEM_PCCCR_ENCACHE(x)                  (((uint32)(((uint32)(x)) << LMEM64_PCCCR_ENCACHE_SHIFT)) & LMEM64_PCCCR_ENCACHE_MASK)

#define LMEM_PCCCR_ENWRBUF_MASK                (0x2U)
#define LMEM_PCCCR_ENWRBUF_SHIFT               (1U)
#define LMEM_PCCCR_ENWRBUF_WIDTH               (1U)
#define LMEM_PCCCR_ENWRBUF(x)                  (((uint32)(((uint32)(x)) << LMEM64_PCCCR_ENWRBUF_SHIFT)) & LMEM64_PCCCR_ENWRBUF_MASK)

#define LMEM_PCCCR_PCCR2_MASK                  (0x4U)
#define LMEM_PCCCR_PCCR2_SHIFT                 (2U)
#define LMEM_PCCCR_PCCR2_WIDTH                 (1U)
#define LMEM_PCCCR_PCCR2(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCCR_PCCR2_SHIFT)) & LMEM64_PCCCR_PCCR2_MASK)

#define LMEM_PCCCR_PCCR3_MASK                  (0x8U)
#define LMEM_PCCCR_PCCR3_SHIFT                 (3U)
#define LMEM_PCCCR_PCCR3_WIDTH                 (1U)
#define LMEM_PCCCR_PCCR3(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCCR_PCCR3_SHIFT)) & LMEM64_PCCCR_PCCR3_MASK)

#define LMEM_PCCCR_INVW0_MASK                  (0x1000000U)
#define LMEM_PCCCR_INVW0_SHIFT                 (24U)
#define LMEM_PCCCR_INVW0_WIDTH                 (1U)
#define LMEM_PCCCR_INVW0(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCCR_INVW0_SHIFT)) & LMEM64_PCCCR_INVW0_MASK)

#define LMEM_PCCCR_PUSHW0_MASK                 (0x2000000U)
#define LMEM_PCCCR_PUSHW0_SHIFT                (25U)
#define LMEM_PCCCR_PUSHW0_WIDTH                (1U)
#define LMEM_PCCCR_PUSHW0(x)                   (((uint32)(((uint32)(x)) << LMEM64_PCCCR_PUSHW0_SHIFT)) & LMEM64_PCCCR_PUSHW0_MASK)

#define LMEM_PCCCR_INVW1_MASK                  (0x4000000U)
#define LMEM_PCCCR_INVW1_SHIFT                 (26U)
#define LMEM_PCCCR_INVW1_WIDTH                 (1U)
#define LMEM_PCCCR_INVW1(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCCR_INVW1_SHIFT)) & LMEM64_PCCCR_INVW1_MASK)

#define LMEM_PCCCR_PUSHW1_MASK                 (0x8000000U)
#define LMEM_PCCCR_PUSHW1_SHIFT                (27U)
#define LMEM_PCCCR_PUSHW1_WIDTH                (1U)
#define LMEM_PCCCR_PUSHW1(x)                   (((uint32)(((uint32)(x)) << LMEM64_PCCCR_PUSHW1_SHIFT)) & LMEM64_PCCCR_PUSHW1_MASK)

#define LMEM_PCCCR_GO_MASK                     (0x80000000U)
#define LMEM_PCCCR_GO_SHIFT                    (31U)
#define LMEM_PCCCR_GO_WIDTH                    (1U)
#define LMEM_PCCCR_GO(x)                       (((uint32)(((uint32)(x)) << LMEM64_PCCCR_GO_SHIFT)) & LMEM64_PCCCR_GO_MASK)
/*! @} */

/*! @name PCCLCR - PC bus Cache line control register */
/*! @{ */

#define LMEM_PCCLCR_LGO_MASK                   (0x1U)
#define LMEM_PCCLCR_LGO_SHIFT                  (0U)
#define LMEM_PCCLCR_LGO_WIDTH                  (1U)
#define LMEM_PCCLCR_LGO(x)                     (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_LGO_SHIFT)) & LMEM64_PCCLCR_LGO_MASK)

#define LMEM_PCCLCR_CACHEADDR_MASK             (0x3FFCU)
#define LMEM_PCCLCR_CACHEADDR_SHIFT            (2U)
#define LMEM_PCCLCR_CACHEADDR_WIDTH            (12U)
#define LMEM_PCCLCR_CACHEADDR(x)               (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_CACHEADDR_SHIFT)) & LMEM64_PCCLCR_CACHEADDR_MASK)

#define LMEM_PCCLCR_WSEL_MASK                  (0x4000U)
#define LMEM_PCCLCR_WSEL_SHIFT                 (14U)
#define LMEM_PCCLCR_WSEL_WIDTH                 (1U)
#define LMEM_PCCLCR_WSEL(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_WSEL_SHIFT)) & LMEM64_PCCLCR_WSEL_MASK)

#define LMEM_PCCLCR_TDSEL_MASK                 (0x10000U)
#define LMEM_PCCLCR_TDSEL_SHIFT                (16U)
#define LMEM_PCCLCR_TDSEL_WIDTH                (1U)
#define LMEM_PCCLCR_TDSEL(x)                   (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_TDSEL_SHIFT)) & LMEM64_PCCLCR_TDSEL_MASK)

#define LMEM_PCCLCR_LCIVB_MASK                 (0x100000U)
#define LMEM_PCCLCR_LCIVB_SHIFT                (20U)
#define LMEM_PCCLCR_LCIVB_WIDTH                (1U)
#define LMEM_PCCLCR_LCIVB(x)                   (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_LCIVB_SHIFT)) & LMEM64_PCCLCR_LCIVB_MASK)

#define LMEM_PCCLCR_LCIMB_MASK                 (0x200000U)
#define LMEM_PCCLCR_LCIMB_SHIFT                (21U)
#define LMEM_PCCLCR_LCIMB_WIDTH                (1U)
#define LMEM_PCCLCR_LCIMB(x)                   (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_LCIMB_SHIFT)) & LMEM64_PCCLCR_LCIMB_MASK)

#define LMEM_PCCLCR_LCWAY_MASK                 (0x400000U)
#define LMEM_PCCLCR_LCWAY_SHIFT                (22U)
#define LMEM_PCCLCR_LCWAY_WIDTH                (1U)
#define LMEM_PCCLCR_LCWAY(x)                   (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_LCWAY_SHIFT)) & LMEM64_PCCLCR_LCWAY_MASK)

#define LMEM_PCCLCR_LCMD_MASK                  (0x3000000U)
#define LMEM_PCCLCR_LCMD_SHIFT                 (24U)
#define LMEM_PCCLCR_LCMD_WIDTH                 (2U)
#define LMEM_PCCLCR_LCMD(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_LCMD_SHIFT)) & LMEM64_PCCLCR_LCMD_MASK)

#define LMEM_PCCLCR_LADSEL_MASK                (0x4000000U)
#define LMEM_PCCLCR_LADSEL_SHIFT               (26U)
#define LMEM_PCCLCR_LADSEL_WIDTH               (1U)
#define LMEM_PCCLCR_LADSEL(x)                  (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_LADSEL_SHIFT)) & LMEM64_PCCLCR_LADSEL_MASK)

#define LMEM_PCCLCR_LACC_MASK                  (0x8000000U)
#define LMEM_PCCLCR_LACC_SHIFT                 (27U)
#define LMEM_PCCLCR_LACC_WIDTH                 (1U)
#define LMEM_PCCLCR_LACC(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCLCR_LACC_SHIFT)) & LMEM64_PCCLCR_LACC_MASK)
/*! @} */

/*! @name PCCSAR - PC bus Cache search address register */
/*! @{ */

#define LMEM_PCCSAR_LGO_MASK                   (0x1U)
#define LMEM_PCCSAR_LGO_SHIFT                  (0U)
#define LMEM_PCCSAR_LGO_WIDTH                  (1U)
#define LMEM_PCCSAR_LGO(x)                     (((uint32)(((uint32)(x)) << LMEM64_PCCSAR_LGO_SHIFT)) & LMEM64_PCCSAR_LGO_MASK)

#define LMEM_PCCSAR_PHYADDR_MASK               (0xFFFFFFFEU)
#define LMEM_PCCSAR_PHYADDR_SHIFT              (1U)
#define LMEM_PCCSAR_PHYADDR_WIDTH              (31U)
#define LMEM_PCCSAR_PHYADDR(x)                 (((uint32)(((uint32)(x)) << LMEM64_PCCSAR_PHYADDR_SHIFT)) & LMEM64_PCCSAR_PHYADDR_MASK)
/*! @} */

/*! @name PCCCVR - PC bus Cache read/write value register */
/*! @{ */

#define LMEM_PCCCVR_DATA_MASK                  (0xFFFFFFFFU)
#define LMEM_PCCCVR_DATA_SHIFT                 (0U)
#define LMEM_PCCCVR_DATA_WIDTH                 (32U)
#define LMEM_PCCCVR_DATA(x)                    (((uint32)(((uint32)(x)) << LMEM64_PCCCVR_DATA_SHIFT)) & LMEM64_PCCCVR_DATA_MASK)
/*! @} */

/*! @name PSCCR - PS bus Cache control register */
/*! @{ */

#define LMEM_PSCCR_ENCACHE_MASK                (0x1U)
#define LMEM_PSCCR_ENCACHE_SHIFT               (0U)
#define LMEM_PSCCR_ENCACHE_WIDTH               (1U)
#define LMEM_PSCCR_ENCACHE(x)                  (((uint32)(((uint32)(x)) << LMEM64_PSCCR_ENCACHE_SHIFT)) & LMEM64_PSCCR_ENCACHE_MASK)

#define LMEM_PSCCR_ENWRBUF_MASK                (0x2U)
#define LMEM_PSCCR_ENWRBUF_SHIFT               (1U)
#define LMEM_PSCCR_ENWRBUF_WIDTH               (1U)
#define LMEM_PSCCR_ENWRBUF(x)                  (((uint32)(((uint32)(x)) << LMEM64_PSCCR_ENWRBUF_SHIFT)) & LMEM64_PSCCR_ENWRBUF_MASK)

#define LMEM_PSCCR_PSCR2_MASK                  (0x4U)
#define LMEM_PSCCR_PSCR2_SHIFT                 (2U)
#define LMEM_PSCCR_PSCR2_WIDTH                 (1U)
#define LMEM_PSCCR_PSCR2(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCCR_PSCR2_SHIFT)) & LMEM64_PSCCR_PSCR2_MASK)

#define LMEM_PSCCR_PSCR3_MASK                  (0x8U)
#define LMEM_PSCCR_PSCR3_SHIFT                 (3U)
#define LMEM_PSCCR_PSCR3_WIDTH                 (1U)
#define LMEM_PSCCR_PSCR3(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCCR_PSCR3_SHIFT)) & LMEM64_PSCCR_PSCR3_MASK)

#define LMEM_PSCCR_INVW0_MASK                  (0x1000000U)
#define LMEM_PSCCR_INVW0_SHIFT                 (24U)
#define LMEM_PSCCR_INVW0_WIDTH                 (1U)
#define LMEM_PSCCR_INVW0(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCCR_INVW0_SHIFT)) & LMEM64_PSCCR_INVW0_MASK)

#define LMEM_PSCCR_PUSHW0_MASK                 (0x2000000U)
#define LMEM_PSCCR_PUSHW0_SHIFT                (25U)
#define LMEM_PSCCR_PUSHW0_WIDTH                (1U)
#define LMEM_PSCCR_PUSHW0(x)                   (((uint32)(((uint32)(x)) << LMEM64_PSCCR_PUSHW0_SHIFT)) & LMEM64_PSCCR_PUSHW0_MASK)

#define LMEM_PSCCR_INVW1_MASK                  (0x4000000U)
#define LMEM_PSCCR_INVW1_SHIFT                 (26U)
#define LMEM_PSCCR_INVW1_WIDTH                 (1U)
#define LMEM_PSCCR_INVW1(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCCR_INVW1_SHIFT)) & LMEM64_PSCCR_INVW1_MASK)

#define LMEM_PSCCR_PUSHW1_MASK                 (0x8000000U)
#define LMEM_PSCCR_PUSHW1_SHIFT                (27U)
#define LMEM_PSCCR_PUSHW1_WIDTH                (1U)
#define LMEM_PSCCR_PUSHW1(x)                   (((uint32)(((uint32)(x)) << LMEM64_PSCCR_PUSHW1_SHIFT)) & LMEM64_PSCCR_PUSHW1_MASK)

#define LMEM_PSCCR_GO_MASK                     (0x80000000U)
#define LMEM_PSCCR_GO_SHIFT                    (31U)
#define LMEM_PSCCR_GO_WIDTH                    (1U)
#define LMEM_PSCCR_GO(x)                       (((uint32)(((uint32)(x)) << LMEM64_PSCCR_GO_SHIFT)) & LMEM64_PSCCR_GO_MASK)
/*! @} */

/*! @name PSCLCR - PS bus Cache line control register */
/*! @{ */

#define LMEM_PSCLCR_LGO_MASK                   (0x1U)
#define LMEM_PSCLCR_LGO_SHIFT                  (0U)
#define LMEM_PSCLCR_LGO_WIDTH                  (1U)
#define LMEM_PSCLCR_LGO(x)                     (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_LGO_SHIFT)) & LMEM64_PSCLCR_LGO_MASK)

#define LMEM_PSCLCR_CACHEADDR_MASK             (0x3FFCU)
#define LMEM_PSCLCR_CACHEADDR_SHIFT            (2U)
#define LMEM_PSCLCR_CACHEADDR_WIDTH            (12U)
#define LMEM_PSCLCR_CACHEADDR(x)               (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_CACHEADDR_SHIFT)) & LMEM64_PSCLCR_CACHEADDR_MASK)

#define LMEM_PSCLCR_WSEL_MASK                  (0x4000U)
#define LMEM_PSCLCR_WSEL_SHIFT                 (14U)
#define LMEM_PSCLCR_WSEL_WIDTH                 (1U)
#define LMEM_PSCLCR_WSEL(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_WSEL_SHIFT)) & LMEM64_PSCLCR_WSEL_MASK)

#define LMEM_PSCLCR_TDSEL_MASK                 (0x10000U)
#define LMEM_PSCLCR_TDSEL_SHIFT                (16U)
#define LMEM_PSCLCR_TDSEL_WIDTH                (1U)
#define LMEM_PSCLCR_TDSEL(x)                   (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_TDSEL_SHIFT)) & LMEM64_PSCLCR_TDSEL_MASK)

#define LMEM_PSCLCR_LCIVB_MASK                 (0x100000U)
#define LMEM_PSCLCR_LCIVB_SHIFT                (20U)
#define LMEM_PSCLCR_LCIVB_WIDTH                (1U)
#define LMEM_PSCLCR_LCIVB(x)                   (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_LCIVB_SHIFT)) & LMEM64_PSCLCR_LCIVB_MASK)

#define LMEM_PSCLCR_LCIMB_MASK                 (0x200000U)
#define LMEM_PSCLCR_LCIMB_SHIFT                (21U)
#define LMEM_PSCLCR_LCIMB_WIDTH                (1U)
#define LMEM_PSCLCR_LCIMB(x)                   (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_LCIMB_SHIFT)) & LMEM64_PSCLCR_LCIMB_MASK)

#define LMEM_PSCLCR_LCWAY_MASK                 (0x400000U)
#define LMEM_PSCLCR_LCWAY_SHIFT                (22U)
#define LMEM_PSCLCR_LCWAY_WIDTH                (1U)
#define LMEM_PSCLCR_LCWAY(x)                   (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_LCWAY_SHIFT)) & LMEM64_PSCLCR_LCWAY_MASK)

#define LMEM_PSCLCR_LCMD_MASK                  (0x3000000U)
#define LMEM_PSCLCR_LCMD_SHIFT                 (24U)
#define LMEM_PSCLCR_LCMD_WIDTH                 (2U)
#define LMEM_PSCLCR_LCMD(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_LCMD_SHIFT)) & LMEM64_PSCLCR_LCMD_MASK)

#define LMEM_PSCLCR_LADSEL_MASK                (0x4000000U)
#define LMEM_PSCLCR_LADSEL_SHIFT               (26U)
#define LMEM_PSCLCR_LADSEL_WIDTH               (1U)
#define LMEM_PSCLCR_LADSEL(x)                  (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_LADSEL_SHIFT)) & LMEM64_PSCLCR_LADSEL_MASK)

#define LMEM_PSCLCR_LACC_MASK                  (0x8000000U)
#define LMEM_PSCLCR_LACC_SHIFT                 (27U)
#define LMEM_PSCLCR_LACC_WIDTH                 (1U)
#define LMEM_PSCLCR_LACC(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCLCR_LACC_SHIFT)) & LMEM64_PSCLCR_LACC_MASK)
/*! @} */

/*! @name PSCSAR - PS bus Cache search address register */
/*! @{ */

#define LMEM_PSCSAR_LGO_MASK                   (0x1U)
#define LMEM_PSCSAR_LGO_SHIFT                  (0U)
#define LMEM_PSCSAR_LGO_WIDTH                  (1U)
#define LMEM_PSCSAR_LGO(x)                     (((uint32)(((uint32)(x)) << LMEM64_PSCSAR_LGO_SHIFT)) & LMEM64_PSCSAR_LGO_MASK)

#define LMEM_PSCSAR_PHYADDR_MASK               (0xFFFFFFFEU)
#define LMEM_PSCSAR_PHYADDR_SHIFT              (1U)
#define LMEM_PSCSAR_PHYADDR_WIDTH              (31U)
#define LMEM_PSCSAR_PHYADDR(x)                 (((uint32)(((uint32)(x)) << LMEM64_PSCSAR_PHYADDR_SHIFT)) & LMEM64_PSCSAR_PHYADDR_MASK)
/*! @} */

/*! @name PSCCVR - PS bus Cache read/write value register */
/*! @{ */

#define LMEM_PSCCVR_DATA_MASK                  (0xFFFFFFFFU)
#define LMEM_PSCCVR_DATA_SHIFT                 (0U)
#define LMEM_PSCCVR_DATA_WIDTH                 (32U)
#define LMEM_PSCCVR_DATA(x)                    (((uint32)(((uint32)(x)) << LMEM64_PSCCVR_DATA_SHIFT)) & LMEM64_PSCCVR_DATA_MASK)
/*! @} */

#ifdef __cplusplus
}
#endif
/** @} */

#endif  /* #ifndef CACHE_IP_CFG_DEVICE_REGISTERS_H_ */
