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
#ifndef TRGMUX_IP_CFG_DEVICEREGISTERS_H_
#define TRGMUX_IP_CFG_DEVICEREGISTERS_H_

/**
*   @file    Trgmux_Ip_Cfg_DeviceRegisters.h
*
*   @version 2.0.0
*
*   @brief   AUTOSAR Mcl - Trgmux Ip Cfg Device Registers header file.
*   @details
*
*   @addtogroup TRGMUX_IP_DRIVER TRGMUX IP Driver
*   @{
*/

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
#include "Mcal.h"



#include "S32E2_TRGMUX_0.h"
#include "S32E2_TRGMUX_1.h"
#include "S32E2_TRGMUX_2.h"
#include "S32E2_TRGMUX_3.h"
/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TRGMUX_IP_CFG_DEVICEREGISTERS_VENDOR_ID                    43
#define TRGMUX_IP_CFG_DEVICEREGISTERS_MODULE_ID                    255
#define TRGMUX_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION     4
#define TRGMUX_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION     7
#define TRGMUX_IP_CFG_DEVICEREGISTERS_AR_RELEASE_REVISION_VERSION  0
#define TRGMUX_IP_CFG_DEVICEREGISTERS_SW_MAJOR_VERSION             2
#define TRGMUX_IP_CFG_DEVICEREGISTERS_SW_MINOR_VERSION             0
#define TRGMUX_IP_CFG_DEVICEREGISTERS_SW_PATCH_VERSION             0


/* ----------------------------------------------------------------------------
   -- TRGMUX Peripheral Access Layer
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TRGMUX_Peripheral_Access_Layer TRGMUX Peripheral Access Layer
 * @{
 */

/** TRGMUX - Size of Registers Arrays */
#define TRGMUX_TRGMUXn_COUNT                    61u
#define TRGMUX_IP_TRGMUXn_INSTANCE_COUNT(Instance)\
        ( (Instance==TRGMUX_IP_HW_INST_0) ? (5u) : ( \
          (Instance==TRGMUX_IP_HW_INST_1) ? (5u) : ( \
          (Instance==TRGMUX_IP_HW_INST_2) ? (24u) : (61u))) )
/** TRGMUX - Register Layout Typedef */
typedef struct {
  __IO uint32 TRGMUXn[TRGMUX_TRGMUXn_COUNT];     /**< TRGMUX DMAMUX0 Register..TRGMUX FTM7 Register, array offset: 0x0, array step: 0x4 */
} TRGMUX_Type, *TRGMUX_MemMapPtr;

/** Number of instances of the TRGMUX module. */
#define TRGMUX_INSTANCE_COUNT                    (4u)

/* TRGMUX - Peripheral instance base addresses */
/** Peripheral TRGMUX_0 base address */
#define TRGMUX_IP_0_BASE                         (0x42090000u)
/** Peripheral TRGMUX_0 base pointer */
#define TRGMUX_IP_0                              ((TRGMUX_Type *)TRGMUX_IP_0_BASE)
/** Array initializer of TRGMUX_0 peripheral base addresses */
#define TRGMUX_IP_0_BASE_ADDRS                   { TRGMUX_IP_0_BASE }

/** Peripheral TRGMUX_1 base address */
#define TRGMUX_IP_1_BASE                         (0x40090000u)
/** Peripheral TRGMUX_1 base pointer */
#define TRGMUX_IP_1                              ((TRGMUX_Type *)TRGMUX_IP_1_BASE)
/** Array initializer of TRGMUX_1 peripheral base addresses */
#define TRGMUX_IP_1_BASE_ADDRS                   { TRGMUX_IP_1_BASE }

/** Peripheral TRGMUX_2 base address */
#define TRGMUX_IP_2_BASE                         (0x40370000u)
/** Peripheral TRGMUX_2 base pointer */
#define TRGMUX_IP_2                              ((TRGMUX_Type *)TRGMUX_IP_2_BASE)
/** Array initializer of TRGMUX_2 peripheral base addresses */
#define TRGMUX_IP_2_BASE_ADDRS                   { TRGMUX_IP_2_BASE }

/** Peripheral TRGMUX_3 base address */
#define TRGMUX_IP_3_BASE                         (0x40372000u)
/** Peripheral TRGMUX_3 base pointer */
#define TRGMUX_IP_3                              ((TRGMUX_Type *)TRGMUX_IP_3_BASE)
/** Array initializer of TRGMUX_3 peripheral base addresses */
#define TRGMUX_IP_3_BASE_ADDRS                   { TRGMUX_IP_3_BASE }

/** Array initializer of TRGMUX_0 peripheral base pointers */
#define IP_TRGMUX_BASE_PTRS                      { TRGMUX_IP_0, TRGMUX_IP_1, TRGMUX_IP_2, TRGMUX_IP_3 }

/* ----------------------------------------------------------------------------
   -- TRGMUX Register Masks
   ---------------------------------------------------------------------------- */

/*!
 * @addtogroup TRGMUX_Register_Masks TRGMUX Register Masks
 * @{
 */

/*! @name TRGMUXn - TRGMUX DMAMUX0 Register..TRGMUX FTM7 Register */
/*! @{ */

#define TRGMUX_TRGMUXn_SEL0_MASK                 (0x7FU)
#define TRGMUX_TRGMUXn_SEL0_SHIFT                (0U)
#define TRGMUX_TRGMUXn_SEL0_WIDTH                (7U)
#define TRGMUX_TRGMUXn_SEL0(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUXn_SEL0_SHIFT)) & TRGMUX_TRGMUXn_SEL0_MASK)

#define TRGMUX_TRGMUXn_SEL1_MASK                 (0x7F00U)
#define TRGMUX_TRGMUXn_SEL1_SHIFT                (8U)
#define TRGMUX_TRGMUXn_SEL1_WIDTH                (7U)
#define TRGMUX_TRGMUXn_SEL1(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUXn_SEL1_SHIFT)) & TRGMUX_TRGMUXn_SEL1_MASK)

#define TRGMUX_TRGMUXn_SEL2_MASK                 (0x7F0000U)
#define TRGMUX_TRGMUXn_SEL2_SHIFT                (16U)
#define TRGMUX_TRGMUXn_SEL2_WIDTH                (7U)
#define TRGMUX_TRGMUXn_SEL2(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUXn_SEL2_SHIFT)) & TRGMUX_TRGMUXn_SEL2_MASK)

#define TRGMUX_TRGMUXn_SEL3_MASK                 (0x7F000000U)
#define TRGMUX_TRGMUXn_SEL3_SHIFT                (24U)
#define TRGMUX_TRGMUXn_SEL3_WIDTH                (7U)
#define TRGMUX_TRGMUXn_SEL3(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUXn_SEL3_SHIFT)) & TRGMUX_TRGMUXn_SEL3_MASK)

#define TRGMUX_TRGMUXn_LK_MASK                   (0x80000000U)
#define TRGMUX_TRGMUXn_LK_SHIFT                  (31U)
#define TRGMUX_TRGMUXn_LK_WIDTH                  (1U)
#define TRGMUX_TRGMUXn_LK(x)                     (((uint32)(((uint32)(x)) << TRGMUX_TRGMUXn_LK_SHIFT)) & TRGMUX_TRGMUXn_LK_MASK)
/*! @} */


/* TRGMUX 2 GTM Subsystem */
#define TRGMUX_TRGMUX2_SEL0_MASK                 (0xFFU)
#define TRGMUX_TRGMUX2_SEL0_SHIFT                (0U)
#define TRGMUX_TRGMUX2_SEL0_WIDTH                (8U)
#define TRGMUX_TRGMUX2_SEL0(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUXn_SEL0_SHIFT)) & TRGMUX_TRGMUXn_SEL0_MASK)

#define TRGMUX_TRGMUX2_SEL1_MASK                 (0xFF00U)
#define TRGMUX_TRGMUX2_SEL1_SHIFT                (8U)
#define TRGMUX_TRGMUX2_SEL1_WIDTH                (8U)
#define TRGMUX_TRGMUX2_SEL1(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUXn_SEL1_SHIFT)) & TRGMUX_TRGMUXn_SEL1_MASK)

/* TRGMUX 3 GTM Subsystem */
#define TRGMUX_TRGMUX3_SEL0_MASK                 (0x7FU)
#define TRGMUX_TRGMUX3_SEL0_SHIFT                (0U)
#define TRGMUX_TRGMUX3_SEL0_WIDTH                (7U)
#define TRGMUX_TRGMUX3_SEL0(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUX3_SEL0_SHIFT)) & TRGMUX_TRGMUX3_SEL0_MASK)

#define TRGMUX_TRGMUX3_SEL1_MASK                 (0x7F00U)
#define TRGMUX_TRGMUX3_SEL1_SHIFT                (8U)
#define TRGMUX_TRGMUX3_SEL1_WIDTH                (7U)
#define TRGMUX_TRGMUX3_SEL1(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUX3_SEL1_SHIFT)) & TRGMUX_TRGMUX3_SEL1_MASK)

#define TRGMUX_TRGMUX3_SEL2_MASK                 (0x7F0000U)
#define TRGMUX_TRGMUX3_SEL2_SHIFT                (16U)
#define TRGMUX_TRGMUX3_SEL2_WIDTH                (7U)
#define TRGMUX_TRGMUX3_SEL2(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUX3_SEL2_SHIFT)) & TRGMUX_TRGMUX3_SEL2_MASK)

#define TRGMUX_TRGMUX3_SEL3_MASK                 (0x7F000000U)
#define TRGMUX_TRGMUX3_SEL3_SHIFT                (24U)
#define TRGMUX_TRGMUX3_SEL3_WIDTH                (7U)
#define TRGMUX_TRGMUX3_SEL3(x)                   (((uint32)(((uint32)(x)) << TRGMUX_TRGMUX3_SEL3_SHIFT)) & TRGMUX_TRGMUX3_SEL3_MASK)

#ifdef __cplusplus
}
#endif

/** @} */

#endif  /* #ifndef TRGMUX_IP_CFG_DEVICEREGISTERS_H_ */
