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
#ifndef DMA_IP_CFG_DEVICE_REGISTERS_H
#define DMA_IP_CFG_DEVICE_REGISTERS_H

/**
*   @file    Dma_Ip_Cfg_DeviceRegisters.h
*
*   @version 2.0.0
*
*   @brief   AUTOSAR Mcl - Dma Ip Cfg Device Register V3 header file.
*   @details Contains common register information and specific register information for
*            DMA Hardware Version 3.
*
*   @addtogroup DMA_IP_DRIVER DMA IP Driver
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
#include "Mcal.h"


#include "S32E2_DMA_CRC.h"
#include "S32E2_EDMA2.h"
#include "S32E2_EDMA3_MP.h"
#include "S32E2_EDMA3_TCD.h"
#include "S32E2_EDMA4_MP.h"
#include "S32E2_EDMA4_TCD.h"

/*==================================================================================================
SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define DMA_IP_CFG_DEVICEREGISTERS_VENDOR_ID                       43
#define DMA_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION        4
#define DMA_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION        7
#define DMA_IP_CFG_DEVICEREGISTERS_AR_RELEASE_REVISION_VERSION     0
#define DMA_IP_CFG_DEVICEREGISTERS_SW_MAJOR_VERSION                2
#define DMA_IP_CFG_DEVICEREGISTERS_SW_MINOR_VERSION                0
#define DMA_IP_CFG_DEVICEREGISTERS_SW_PATCH_VERSION                0

/*==================================================================================================
FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if header file and Mcal header file are of the same Autosar version */
#if ((DMA_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
(DMA_IP_CFG_DEVICEREGISTERS_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
#error "AutoSar Version Numbers of Dma_Ip_Cfg_DeviceRegisters.h and Mcal.h are different"
#endif
#endif
/*==================================================================================================
DEFINES
==================================================================================================*/

/*-----------------------------------------------/
/  DMA HWV3 INSTANCES                            /
/-----------------------------------------------*/
#define DMA_IP_BASE0                         (0x405D0000u)
#define DMA_IP_BASE0_PTR                     ((Dma_Ip_Hwv3InstRegType *)DMA_IP_BASE0)
#define DMA_IP_BASE1                         (0x40DD0000u)
#define DMA_IP_BASE1_PTR                     ((Dma_Ip_Hwv3InstRegType *)DMA_IP_BASE1)
#define DMA_IP_BASE4                         (0x425D0000u)
#define DMA_IP_BASE4_PTR                     ((Dma_Ip_Hwv3InstRegType *)DMA_IP_BASE4)
#define DMA_IP_BASE5                         (0x42DD0000u)
#define DMA_IP_BASE5_PTR                     ((Dma_Ip_Hwv3InstRegType *)DMA_IP_BASE5)
#define DMA_IP_BASE6_CE                      (0x44E00000u)
#define DMA_IP_BASE6_CE_PTR                  ((Dma_Ip_Hwv3InstRegType *)DMA_IP_BASE6_CE)
#define DMA_IP_DMA_BASE_PTRS                 { DMA_IP_BASE0_PTR,DMA_IP_BASE1_PTR,DMA_IP_BASE4_PTR,DMA_IP_BASE5_PTR,DMA_IP_BASE6_CE_PTR }

#define DMA_IP_DMA_MP_GRPRI_COUNT           DMA_IP_MP_GRPRI_COUNT
#define DMA_IP_MP_GRPRI_COUNT               ((uint32)32U)

#define DMA_IP_DMA_NOF_HWV3_INST            ((uint32)5U)        /* Total number of hardware instances */

/*-----------------------------------------------/
/  DMA HWV3 CHANNELS                             /
/-----------------------------------------------*/
#define DMA_IP_TCD_BASE0                     (0x40600000u)
#define DMA_IP_TCD_BASE0_PTR                 ((Dma_Ip_Hwv3TcdArrayType *)DMA_IP_TCD_BASE0)
#define DMA_IP_TCD_BASE1                     (0x40E00000u)
#define DMA_IP_TCD_BASE1_PTR                 ((Dma_Ip_Hwv3TcdArrayType *)DMA_IP_TCD_BASE1)
#define DMA_IP_TCD_BASE4                     (0x42600000u)
#define DMA_IP_TCD_BASE4_PTR                 ((Dma_Ip_Hwv3TcdArrayType *)DMA_IP_TCD_BASE4)
#define DMA_IP_TCD_BASE5                     (0x42E00000u)
#define DMA_IP_TCD_BASE5_PTR                 ((Dma_Ip_Hwv3TcdArrayType *)DMA_IP_TCD_BASE5)
#define DMA_IP_TCD_BASE6_CE                  (0x44E04000u)
#define DMA_IP_TCD_BASE6_CE_PTR              ((Dma_Ip_Hwv3TcdArrayType *)DMA_IP_TCD_BASE6_CE)
#define DMA_IP_TCD_BASE_PTRS                 { DMA_IP_TCD_BASE0_PTR, DMA_IP_TCD_BASE1_PTR, DMA_IP_TCD_BASE4_PTR, DMA_IP_TCD_BASE5_PTR, DMA_IP_TCD_BASE6_CE_PTR }

#define DMA_IP_TCD_RESERVED                 (65472U)           /* Reserved space between hardware TCDs */

#define DMA_IP_TCD_NOF_HWV3_CH              ((uint32)32U)      /* Number of hardware channels */

#define DMA_IP_TCD_NOF_HWV4_CH              ((uint32)32U)      /* Number of hardware channels */

#define DMA_IP_TCD_NOF_HWV3_CH_INST         ((uint32)5U)       /* Number of hardware TCD instances */

/*-----------------------------------------------/
/  DMA HWV3 TOTAL CHANNELS                       /
/-----------------------------------------------*/
#define DMA_IP_NOF_HWV3_CH                  (DMA_IP_TCD_NOF_HWV3_CH_INST * DMA_IP_TCD_NOF_HWV3_CH)  /* Total number of hardware channels of all instances */

/*-----------------------------------------------/
/  DMA HWV4 INSTANCES                            /
/-----------------------------------------------*/
#define DMA_IP_BASE3                         (0x41DD0000u)
#define DMA_IP_BASE3_PTR                     ((Dma_Ip_Hwv4InstRegType *)DMA_IP_BASE3)
#define DMA_IP_HWV4_BASE_PTRS                { DMA_IP_BASE3_PTR}

#define DMA_IP_DMA_NOF_HWV4_INST            ((uint32)1U)        /* Total number of hardware instances */

/*-----------------------------------------------/
/  DMA HWV4 CHANNELS                             /
/-----------------------------------------------*/
#define DMA_IP_TCD_BASE3                     (0x41E00000u)
#define DMA_IP_TCD_BASE3_PTR                 ((Dma_Ip_Hwv4TcdArrayType *)DMA_IP_TCD_BASE3)
#define DMA_IP_HWV4_TCD_BASE_PTRS            { DMA_IP_TCD_BASE3_PTR}
#define DMA_IP_TCD_NOF_HWV4_CH_INST          ((uint32)1U)       /* Number of hardware TCD instances */

/*-----------------------------------------------/
/  DMA INSTANCE ES MASK                     /
/-----------------------------------------------*/
#define DMA_IP_MP_ES_MASK                   (DMA_IP_MP_ES_DBE_MASK | DMA_IP_MP_ES_SBE_MASK |\
DMA_IP_MP_ES_SGE_MASK | DMA_IP_MP_ES_NCE_MASK |\
DMA_IP_MP_ES_DOE_MASK | DMA_IP_MP_ES_DAE_MASK |\
DMA_IP_MP_ES_SOE_MASK | DMA_IP_MP_ES_SAE_MASK |\
DMA_IP_MP_ES_ECX_MASK | DMA_IP_MP_ES_UCE_MASK |\
DMA_IP_MP_ES_ERRCHN_MASK | DMA_IP_MP_ES_VLD_MASK)

/*-----------------------------------------------/
/  DMA CHANNEL ES MASK                      /
/-----------------------------------------------*/
#define DMA_IP_TCD_CH_ES_MASK               (DMA_IP_TCD_CH_ES_DBE_MASK | DMA_IP_TCD_CH_ES_SBE_MASK |\
DMA_IP_TCD_CH_ES_SGE_MASK | DMA_IP_TCD_CH_ES_NCE_MASK |\
DMA_IP_TCD_CH_ES_DOE_MASK | DMA_IP_TCD_CH_ES_DAE_MASK |\
DMA_IP_TCD_CH_ES_SOE_MASK | DMA_IP_TCD_CH_ES_SAE_MASK |\
DMA_IP_TCD_CH_ES_ERR_MASK)

/*-----------------------------------------------/
/  DMA CRC CHANNELS                              /
/-----------------------------------------------*/
#define DMA_IP_DMACRC_NOF_INST             DMA_CRC_INSTANCE_COUNT
#define DMA_IP_DMACRC_NOF_CH               DMA_CRC_CONTROL_REGISTER_COUNT
#define DMA_IP_DMACRC_HWV3_NOF_INST         ((uint32)0x5U)
#define DMA_IP_DMACRC_HWV4_NOF_INST         ((uint32)0x1U)
#define DMA_IP_DMACRC_HWV3_BASE_PTRS       { IP_DMA_CRC_0, IP_DMA_CRC_1, IP_DMA_CRC_4, IP_DMA_CRC_5, IP_CE_DMA_CRC }
#define DMA_IP_DMACRC_HWV4_BASE_PTRS       { IP_DMA_CRC_3 }

/*==================================================================================================
DMA TCD NOT ALIGNED
==================================================================================================*/
#define DMA_IP_TCD_NOT_ALIGNED               STD_OFF
#define DMA_IP_TCD_HWV4_NOT_ALIGNED          STD_OFF

/*-----------------------------------------------/
/  DMA REGISTER PROTECTION SIZE                  /
/-----------------------------------------------*/
#define DMA_IP_REG_PROT_SIZE               ((uint32)0x1U)



/*-----------------------------------------------/
/  DMA HWV2 INSTANCES                            /
/-----------------------------------------------*/
#define DMA_IP_BASE                            (IP_EDMA_AE_BASE)
#define DMA_IP_PTR                             ((Dma_Ip_Hwv2InstRegType *)DMA_IP_BASE)
#define DMA_IP_DMA_HWV2_BASE_PTRS              { DMA_IP_PTR }

#define DMA_IP_HWV2_DMA_MP_GRPRI_COUNT         DMA_IP_MP_GRPRI_COUNT

#define DMA_IP_HWV2_DMA_NOF_INST               EDMA2_INSTANCE_COUNT       /* Total number of hardware instances */

#define DMA_IP_HWV2_PRIOLVL_REG_INDEX_CONV(x)  ((uint32)(x) ^ 3U)

/*-----------------------------------------------/
/  DMA HWV2 CHANNELS                     /
/-----------------------------------------------*/
#define DMA_IP_TCD_BASE                     (IP_EDMA_AE_BASE + 4096U)
#define DMA_IP_TCD_PTR                      ((Dma_Ip_Hwv2TcdArrayType *)DMA_IP_TCD_BASE)
#define DMA_IP_TCD_HWV2_BASE_PTRS           { DMA_IP_TCD_PTR }

#define DMA_IP_HWV2_TCD_NOF_CH              EDMA2_TCD_COUNT          /* Number of hardware channels */

#define DMA_IP_HWV2_TCD_NOF_INST            EDMA2_INSTANCE_COUNT       /* Number of hardware TCD instances */

/*-----------------------------------------------/
/  DMA BASE REGISTER ADDRESS                     /
/-----------------------------------------------*/
#define DMA_IP_BASE_ADDR(instIdx)               ((uint32)DMA_IP_BASE)

#define DMA_IP_CSR_BASE_ADDR(instIdx) \
((uint32)(DMA_IP_BASE_ADDR(instIdx)))

/*-----------------------------------------------/
/  DMA TOTAL NUMBER OF HARDWARE INSTANCE         /
/-----------------------------------------------*/


#define DMA_IP_DMA_TOTAL_NOF_INST             ((uint32)7U)


/*==================================================================================================
DMA MP HWV3 AND HWV4 REGISTER MASKS
==================================================================================================*/
/*! reg_CSR - Management Page Control */
/*! @{ */
#define DMA_IP_MP_CSR_EDBG_MASK                  (0x2U)
#define DMA_IP_MP_CSR_EDBG_SHIFT                 (1U)
#define DMA_IP_MP_CSR_EDBG(x)                    (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_EDBG_SHIFT)) & DMA_IP_MP_CSR_EDBG_MASK)
#define DMA_IP_MP_CSR_ERCA_MASK                  (0x4U)
#define DMA_IP_MP_CSR_ERCA_SHIFT                 (2U)
#define DMA_IP_MP_CSR_ERCA(x)                    (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_ERCA_SHIFT)) & DMA_IP_MP_CSR_ERCA_MASK)
#define DMA_IP_MP_CSR_HAE_MASK                   (0x10U)
#define DMA_IP_MP_CSR_HAE_SHIFT                  (4U)
#define DMA_IP_MP_CSR_HAE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_HAE_SHIFT)) & DMA_IP_MP_CSR_HAE_MASK)
#define DMA_IP_MP_CSR_HALT_MASK                  (0x20U)
#define DMA_IP_MP_CSR_HALT_SHIFT                 (5U)
#define DMA_IP_MP_CSR_HALT(x)                    (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_HALT_SHIFT)) & DMA_IP_MP_CSR_HALT_MASK)
#define DMA_IP_MP_CSR_GCLC_MASK                  (0x40U)
#define DMA_IP_MP_CSR_GCLC_SHIFT                 (6U)
#define DMA_IP_MP_CSR_GCLC(x)                    (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_GCLC_SHIFT)) & DMA_IP_MP_CSR_GCLC_MASK)
#define DMA_IP_MP_CSR_GMRC_MASK                  (0x80U)
#define DMA_IP_MP_CSR_GMRC_SHIFT                 (7U)
#define DMA_IP_MP_CSR_GMRC(x)                    (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_GMRC_SHIFT)) & DMA_IP_MP_CSR_GMRC_MASK)
#define DMA_IP_MP_CSR_ECX_MASK                   (0x100U)
#define DMA_IP_MP_CSR_ECX_SHIFT                  (8U)
#define DMA_IP_MP_CSR_ECX(x)                     (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_ECX_SHIFT)) & DMA_IP_MP_CSR_ECX_MASK)
#define DMA_IP_MP_CSR_CX_MASK                    (0x200U)
#define DMA_IP_MP_CSR_CX_SHIFT                   (9U)
#define DMA_IP_MP_CSR_CX(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_CX_SHIFT)) & DMA_IP_MP_CSR_CX_MASK)
#define DMA_IP_MP_CSR_VER_MASK                   (0xFF0000U)
#define DMA_IP_MP_CSR_VER_SHIFT                  (16U)
#define DMA_IP_MP_CSR_VER_WIDTH                  (8U)
#define DMA_IP_MP_CSR_VER(x)                     (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_VER_SHIFT)) & DMA_IP_MP_CSR_VER_MASK)
#define DMA_IP_MP_CSR_ACTIVE_ID_MASK             (0x1F000000U)
#define DMA_IP_MP_CSR_ACTIVE_ID_SHIFT            (24U)
#define DMA_IP_MP_CSR_ACTIVE_ID(x)               (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_ACTIVE_ID_SHIFT)) & DMA_IP_MP_CSR_ACTIVE_ID_MASK)
#define DMA_IP_MP_CSR_ACTIVE_MASK                (0x80000000U)
#define DMA_IP_MP_CSR_ACTIVE_SHIFT               (31U)
#define DMA_IP_MP_CSR_ACTIVE(x)                  (((uint32)(((uint32)(x)) << DMA_IP_MP_CSR_ACTIVE_SHIFT)) & DMA_IP_MP_CSR_ACTIVE_MASK)
/*! @} */

/*! reg_ES - Management Page Error Status */
/*! @{ */
#define DMA_IP_MP_ES_DBE_MASK                    (0x1U)
#define DMA_IP_MP_ES_DBE_SHIFT                   (0U)
#define DMA_IP_MP_ES_DBE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_DBE_SHIFT)) & DMA_IP_MP_ES_DBE_MASK)
#define DMA_IP_MP_ES_SBE_MASK                    (0x2U)
#define DMA_IP_MP_ES_SBE_SHIFT                   (1U)
#define DMA_IP_MP_ES_SBE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_SBE_SHIFT)) & DMA_IP_MP_ES_SBE_MASK)
#define DMA_IP_MP_ES_SGE_MASK                    (0x4U)
#define DMA_IP_MP_ES_SGE_SHIFT                   (2U)
#define DMA_IP_MP_ES_SGE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_SGE_SHIFT)) & DMA_IP_MP_ES_SGE_MASK)
#define DMA_IP_MP_ES_NCE_MASK                    (0x8U)
#define DMA_IP_MP_ES_NCE_SHIFT                   (3U)
#define DMA_IP_MP_ES_NCE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_NCE_SHIFT)) & DMA_IP_MP_ES_NCE_MASK)
#define DMA_IP_MP_ES_DOE_MASK                    (0x10U)
#define DMA_IP_MP_ES_DOE_SHIFT                   (4U)
#define DMA_IP_MP_ES_DOE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_DOE_SHIFT)) & DMA_IP_MP_ES_DOE_MASK)
#define DMA_IP_MP_ES_DAE_MASK                    (0x20U)
#define DMA_IP_MP_ES_DAE_SHIFT                   (5U)
#define DMA_IP_MP_ES_DAE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_DAE_SHIFT)) & DMA_IP_MP_ES_DAE_MASK)
#define DMA_IP_MP_ES_SOE_MASK                    (0x40U)
#define DMA_IP_MP_ES_SOE_SHIFT                   (6U)
#define DMA_IP_MP_ES_SOE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_SOE_SHIFT)) & DMA_IP_MP_ES_SOE_MASK)
#define DMA_IP_MP_ES_SAE_MASK                    (0x80U)
#define DMA_IP_MP_ES_SAE_SHIFT                   (7U)
#define DMA_IP_MP_ES_SAE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_SAE_SHIFT)) & DMA_IP_MP_ES_SAE_MASK)
#define DMA_IP_MP_ES_ECX_MASK                    (0x100U)
#define DMA_IP_MP_ES_ECX_SHIFT                   (8U)
#define DMA_IP_MP_ES_ECX(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_ECX_SHIFT)) & DMA_IP_MP_ES_ECX_MASK)
#define DMA_IP_MP_ES_UCE_MASK                    (0x200U)
#define DMA_IP_MP_ES_UCE_SHIFT                   (9U)
#define DMA_IP_MP_ES_UCE(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_UCE_SHIFT)) & DMA_IP_MP_ES_UCE_MASK)
#define DMA_IP_MP_ES_ERRCHN_MASK                 (0x1F000000U)
#define DMA_IP_MP_ES_ERRCHN_SHIFT                (24U)
#define DMA_IP_MP_ES_ERRCHN(x)                   (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_ERRCHN_SHIFT)) & DMA_IP_MP_ES_ERRCHN_MASK)
#define DMA_IP_MP_ES_VLD_MASK                    (0x80000000U)
#define DMA_IP_MP_ES_VLD_SHIFT                   (31U)
#define DMA_IP_MP_ES_VLD(x)                      (((uint32)(((uint32)(x)) << DMA_IP_MP_ES_VLD_SHIFT)) & DMA_IP_MP_ES_VLD_MASK)
/*! @} */

/*! reg_INT - Management Page Interrupt Request Status */
/*! @{ */
#define DMA_IP_MP_INT_INT_MASK                   (0xFFFFFFFFU)
#define DMA_IP_MP_INT_INT_SHIFT                  (0U)
#define DMA_IP_MP_INT_INT(x)                     (((uint32)(((uint32)(x)) << DMA_IP_MP_INT_INT_SHIFT)) & DMA_IP_MP_INT_INT_MASK)
/*! @} */

/*! reg_HRS - Management Page Hardware Request Status */
/*! @{ */
#define DMA_IP_MP_HRS_HRS_MASK                   (0xFFFFFFFFU)
#define DMA_IP_MP_HRS_HRS_SHIFT                  (0U)
#define DMA_IP_MP_HRS_HRS(x)                     (((uint32)(((uint32)(x)) << DMA_IP_MP_HRS_HRS_SHIFT)) & DMA_IP_MP_HRS_HRS_MASK)
/*! @} */

/*! reg_CH_GRPRI - Channel Arbitration Group */
/*! @{ */
#define DMA_IP_MP_CH_GRPRI_GRPRI_MASK                  (0x1FU)
#define DMA_IP_MP_CH_GRPRI_GRPRI_SHIFT                 (0U)
#define DMA_IP_MP_CH_GRPRI_GRPRI(x)                    (((uint32)(((uint32)(x)) << DMA_IP_MP_CH_GRPRI_GRPRI_SHIFT)) & DMA_IP_MP_CH_GRPRI_GRPRI_MASK)
/*! @} */

/*==================================================================================================
DMA TCD HWV3 AND HWV4 REGISTER MASKS
==================================================================================================*/
/*! reg_CH_CSR - Channel Control and Status */
/*! @{ */
#define DMA_IP_TCD_CH_CSR_ERQ_MASK                  (0x1U)
#define DMA_IP_TCD_CH_CSR_ERQ_SHIFT                 (0U)
#define DMA_IP_TCD_CH_CSR_ERQ_WIDTH                 (1U)
#define DMA_IP_TCD_CH_CSR_ERQ(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_CSR_ERQ_SHIFT)) & DMA_IP_TCD_CH_CSR_ERQ_MASK)
#define DMA_IP_TCD_CH_CSR_EARQ_MASK                 (0x2U)
#define DMA_IP_TCD_CH_CSR_EARQ_SHIFT                (1U)
#define DMA_IP_TCD_CH_CSR_EARQ_WIDTH                (1U)
#define DMA_IP_TCD_CH_CSR_EARQ(x)                   (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_CSR_EARQ_SHIFT)) & DMA_IP_TCD_CH_CSR_EARQ_MASK)
#define DMA_IP_TCD_CH_CSR_EEI_MASK                  (0x4U)
#define DMA_IP_TCD_CH_CSR_EEI_SHIFT                 (2U)
#define DMA_IP_TCD_CH_CSR_EEI_WIDTH                 (1U)
#define DMA_IP_TCD_CH_CSR_EEI(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_CSR_EEI_SHIFT)) & DMA_IP_TCD_CH_CSR_EEI_MASK)
#define DMA_IP_TCD_CH_CSR_EBW_MASK                  (0x8U)
#define DMA_IP_TCD_CH_CSR_EBW_SHIFT                 (3U)
#define DMA_IP_TCD_CH_CSR_EBW_WIDTH                 (1U)
#define DMA_IP_TCD_CH_CSR_EBW(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_CSR_EBW_SHIFT)) & DMA_IP_TCD_CH_CSR_EBW_MASK)
#define DMA_IP_TCD_CH_CSR_SWAP_MASK                 (0xF000U)
#define DMA_IP_TCD_CH_CSR_SWAP_SHIFT                (12U)
#define DMA_IP_TCD_CH_CSR_SWAP_WIDTH                (4U)
#define DMA_IP_TCD_CH_CSR_SWAP(x)                   (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_CSR_SWAP_SHIFT)) & DMA_IP_TCD_CH_CSR_SWAP_MASK)
#define DMA_IP_TCD_CH_CSR_DONE_MASK                 (0x40000000U)
#define DMA_IP_TCD_CH_CSR_DONE_SHIFT                (30U)
#define DMA_IP_TCD_CH_CSR_DONE_WIDTH                (1U)
#define DMA_IP_TCD_CH_CSR_DONE(x)                   (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_CSR_DONE_SHIFT)) & DMA_IP_TCD_CH_CSR_DONE_MASK)
#define DMA_IP_TCD_CH_CSR_ACTIVE_MASK               (0x80000000U)
#define DMA_IP_TCD_CH_CSR_ACTIVE_SHIFT              (31U)
#define DMA_IP_TCD_CH_CSR_ACTIVE_WIDTH              (1U)
#define DMA_IP_TCD_CH_CSR_ACTIVE(x)                 (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_CSR_ACTIVE_SHIFT)) & DMA_IP_TCD_CH_CSR_ACTIVE_MASK)
/*! @} */

/*! reg_CH_ES - Channel Error Status */
/*! @{ */
#define DMA_IP_TCD_CH_ES_DBE_MASK                   (0x1U)
#define DMA_IP_TCD_CH_ES_DBE_SHIFT                  (0U)
#define DMA_IP_TCD_CH_ES_DBE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_DBE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_DBE_SHIFT)) & DMA_IP_TCD_CH_ES_DBE_MASK)
#define DMA_IP_TCD_CH_ES_SBE_MASK                   (0x2U)
#define DMA_IP_TCD_CH_ES_SBE_SHIFT                  (1U)
#define DMA_IP_TCD_CH_ES_SBE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_SBE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_SBE_SHIFT)) & DMA_IP_TCD_CH_ES_SBE_MASK)
#define DMA_IP_TCD_CH_ES_SGE_MASK                   (0x4U)
#define DMA_IP_TCD_CH_ES_SGE_SHIFT                  (2U)
#define DMA_IP_TCD_CH_ES_SGE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_SGE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_SGE_SHIFT)) & DMA_IP_TCD_CH_ES_SGE_MASK)
#define DMA_IP_TCD_CH_ES_NCE_MASK                   (0x8U)
#define DMA_IP_TCD_CH_ES_NCE_SHIFT                  (3U)
#define DMA_IP_TCD_CH_ES_NCE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_NCE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_NCE_SHIFT)) & DMA_IP_TCD_CH_ES_NCE_MASK)
#define DMA_IP_TCD_CH_ES_DOE_MASK                   (0x10U)
#define DMA_IP_TCD_CH_ES_DOE_SHIFT                  (4U)
#define DMA_IP_TCD_CH_ES_DOE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_DOE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_DOE_SHIFT)) & DMA_IP_TCD_CH_ES_DOE_MASK)
#define DMA_IP_TCD_CH_ES_DAE_MASK                   (0x20U)
#define DMA_IP_TCD_CH_ES_DAE_SHIFT                  (5U)
#define DMA_IP_TCD_CH_ES_DAE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_DAE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_DAE_SHIFT)) & DMA_IP_TCD_CH_ES_DAE_MASK)
#define DMA_IP_TCD_CH_ES_SOE_MASK                   (0x40U)
#define DMA_IP_TCD_CH_ES_SOE_SHIFT                  (6U)
#define DMA_IP_TCD_CH_ES_SOE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_SOE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_SOE_SHIFT)) & DMA_IP_TCD_CH_ES_SOE_MASK)
#define DMA_IP_TCD_CH_ES_SAE_MASK                   (0x80U)
#define DMA_IP_TCD_CH_ES_SAE_SHIFT                  (7U)
#define DMA_IP_TCD_CH_ES_SAE_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_SAE(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_SAE_SHIFT)) & DMA_IP_TCD_CH_ES_SAE_MASK)
#define DMA_IP_TCD_CH_ES_ERR_MASK                   (0x80000000U)
#define DMA_IP_TCD_CH_ES_ERR_SHIFT                  (31U)
#define DMA_IP_TCD_CH_ES_ERR_WIDTH                  (1U)
#define DMA_IP_TCD_CH_ES_ERR(x)                     (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_ES_ERR_SHIFT)) & DMA_IP_TCD_CH_ES_ERR_MASK)
/*! @} */

/*! reg_CH_INT - Channel Interrupt Status */
/*! @{ */
#define DMA_IP_TCD_CH_INT_INT_MASK                  (0x1U)
#define DMA_IP_TCD_CH_INT_INT_SHIFT                 (0U)
#define DMA_IP_TCD_CH_INT_INT_WIDTH                 (1U)
#define DMA_IP_TCD_CH_INT_INT(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_INT_INT_SHIFT)) & DMA_IP_TCD_CH_INT_INT_MASK)
/*! @} */

/*! reg_CH_SBR - Channel System Bus */
/*! @{ */
#define DMA_IP_TCD_CH_SBR_MID_MASK                  (0x3FU)
#define DMA_IP_TCD_CH_SBR_MID_SHIFT                 (0U)
#define DMA_IP_TCD_CH_SBR_MID_WIDTH                 (6U)
#define DMA_IP_TCD_CH_SBR_MID(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_SBR_MID_SHIFT)) & DMA_IP_TCD_CH_SBR_MID_MASK)
#define DMA_IP_TCD_CH_SBR_INSTR_MASK                (0x2000U)
#define DMA_IP_TCD_CH_SBR_INSTR_SHIFT               (13U)
#define DMA_IP_TCD_CH_SBR_INSTR_WIDTH               (1U)
#define DMA_IP_TCD_CH_SBR_INSTR(x)                  (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_SBR_INSTR_SHIFT)) & DMA_IP_TCD_CH_SBR_INSTR_MASK)
#define DMA_IP_TCD_CH_SBR_SEC_MASK                  (0x4000U)
#define DMA_IP_TCD_CH_SBR_SEC_SHIFT                 (14U)
#define DMA_IP_TCD_CH_SBR_SEC_WIDTH                 (1U)
#define DMA_IP_TCD_CH_SBR_SEC(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_SBR_SEC_SHIFT)) & DMA_IP_TCD_CH_SBR_SEC_MASK)
#define DMA_IP_TCD_CH_SBR_PAL_MASK                  (0x8000U)
#define DMA_IP_TCD_CH_SBR_PAL_SHIFT                 (15U)
#define DMA_IP_TCD_CH_SBR_PAL_WIDTH                 (1U)
#define DMA_IP_TCD_CH_SBR_PAL(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_SBR_PAL_SHIFT)) & DMA_IP_TCD_CH_SBR_PAL_MASK)
#define DMA_IP_TCD_CH_SBR_EMI_MASK                  (0x10000U)
#define DMA_IP_TCD_CH_SBR_EMI_SHIFT                 (16U)
#define DMA_IP_TCD_CH_SBR_EMI_WIDTH                 (1U)
#define DMA_IP_TCD_CH_SBR_EMI(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_SBR_EMI_SHIFT)) & DMA_IP_TCD_CH_SBR_EMI_MASK)
#define DMA_IP_TCD_CH_SBR_ATTR_MASK                 (0xE0000U)
#define DMA_IP_TCD_CH_SBR_ATTR_SHIFT                (17U)
#define DMA_IP_TCD_CH_SBR_ATTR_WIDTH                (3U)
#define DMA_IP_TCD_CH_SBR_ATTR(x)                   (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_SBR_ATTR_SHIFT)) & DMA_IP_TCD_CH_SBR_ATTR_MASK)
/*! @} */

/*! reg_CH_PRI - Channel Priority */
/*! @{ */
#define DMA_IP_TCD_CH_PRI_APL_MASK                  (0x7U)
#define DMA_IP_TCD_CH_PRI_APL_SHIFT                 (0U)
#define DMA_IP_TCD_CH_PRI_APL_WIDTH                 (3U)
#define DMA_IP_TCD_CH_PRI_APL(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_PRI_APL_SHIFT)) & DMA_IP_TCD_CH_PRI_APL_MASK)
#define DMA_IP_TCD_CH_PRI_DPA_MASK                  (0x40000000U)
#define DMA_IP_TCD_CH_PRI_DPA_SHIFT                 (30U)
#define DMA_IP_TCD_CH_PRI_DPA_WIDTH                 (1U)
#define DMA_IP_TCD_CH_PRI_DPA(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_PRI_DPA_SHIFT)) & DMA_IP_TCD_CH_PRI_DPA_MASK)
#define DMA_IP_TCD_CH_PRI_ECP_MASK                  (0x80000000U)
#define DMA_IP_TCD_CH_PRI_ECP_SHIFT                 (31U)
#define DMA_IP_TCD_CH_PRI_ECP_WIDTH                 (1U)
#define DMA_IP_TCD_CH_PRI_ECP(x)                    (((uint32)(((uint32)(x)) << DMA_IP_TCD_CH_PRI_ECP_SHIFT)) & DMA_IP_TCD_CH_PRI_ECP_MASK)
/*! @} */

/*! reg_SADDR - TCD Source Address */
/*! @{ */
#define DMA_IP_TCD_SADDR_SADDR_MASK                 (0xFFFFFFFFU)
#define DMA_IP_TCD_SADDR_SADDR_SHIFT                (0U)
#define DMA_IP_TCD_SADDR_SADDR_WIDTH                (32U)
#define DMA_IP_TCD_SADDR_SADDR(x)                   (((uint32)(((uint32)(x)) << DMA_IP_TCD_SADDR_SADDR_SHIFT)) & DMA_IP_TCD_SADDR_SADDR_MASK)
/*! @} */

/*! reg_SOFF - TCD Signed Source Address Offset */
/*! @{ */
#define DMA_IP_TCD_SOFF_SOFF_MASK                   (0xFFFFU)
#define DMA_IP_TCD_SOFF_SOFF_SHIFT                  (0U)
#define DMA_IP_TCD_SOFF_SOFF_WIDTH                  (16U)
#define DMA_IP_TCD_SOFF_SOFF(x)                     (((uint16)(((uint16)(x)) << DMA_IP_TCD_SOFF_SOFF_SHIFT)) & DMA_IP_TCD_SOFF_SOFF_MASK)
/*! @} */

/*! reg_ATTR - TCD Transfer Attributes */
/*! @{ */
#define DMA_IP_TCD_ATTR_DSIZE_MASK                  (0x7U)
#define DMA_IP_TCD_ATTR_DSIZE_SHIFT                 (0U)
#define DMA_IP_TCD_ATTR_DSIZE_WIDTH                 (3U)
#define DMA_IP_TCD_ATTR_DSIZE(x)                    (((uint16)(((uint16)(x)) << DMA_IP_TCD_ATTR_DSIZE_SHIFT)) & DMA_IP_TCD_ATTR_DSIZE_MASK)
#define DMA_IP_TCD_ATTR_DMOD_MASK                   (0xF8U)
#define DMA_IP_TCD_ATTR_DMOD_SHIFT                  (3U)
#define DMA_IP_TCD_ATTR_DMOD_WIDTH                  (5U)
#define DMA_IP_TCD_ATTR_DMOD(x)                     (((uint16)(((uint16)(x)) << DMA_IP_TCD_ATTR_DMOD_SHIFT)) & DMA_IP_TCD_ATTR_DMOD_MASK)
#define DMA_IP_TCD_ATTR_SSIZE_MASK                  (0x700U)
#define DMA_IP_TCD_ATTR_SSIZE_SHIFT                 (8U)
#define DMA_IP_TCD_ATTR_SSIZE_WIDTH                 (3U)
#define DMA_IP_TCD_ATTR_SSIZE(x)                    (((uint16)(((uint16)(x)) << DMA_IP_TCD_ATTR_SSIZE_SHIFT)) & DMA_IP_TCD_ATTR_SSIZE_MASK)
#define DMA_IP_TCD_ATTR_SMOD_MASK                   (0xF800U)
#define DMA_IP_TCD_ATTR_SMOD_SHIFT                  (11U)
#define DMA_IP_TCD_ATTR_SMOD_WIDTH                  (5U)
#define DMA_IP_TCD_ATTR_SMOD(x)                     (((uint16)(((uint16)(x)) << DMA_IP_TCD_ATTR_SMOD_SHIFT)) & DMA_IP_TCD_ATTR_SMOD_MASK)
/*! @} */

/*! NBYTES_MLOFFNO - TCD Transfer Size Without Minor Loop Offsets */
/*! @{ */
#define DMA_IP_TCD_NBYTES_MLOFFNO_NBYTES_MASK       (0x3FFFFFFFU)
#define DMA_IP_TCD_NBYTES_MLOFFNO_NBYTES_SHIFT      (0U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_NBYTES_WIDTH      (30U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_NBYTES(x)         (((uint32)(((uint32)(x)) << DMA_IP_TCD_NBYTES_MLOFFNO_NBYTES_SHIFT)) & DMA_IP_TCD_NBYTES_MLOFFNO_NBYTES_MASK)
#define DMA_IP_TCD_NBYTES_MLOFFNO_DMLOE_MASK        (0x40000000U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_DMLOE_SHIFT       (30U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_DMLOE_WIDTH       (1U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_DMLOE(x)          (((uint32)(((uint32)(x)) << DMA_IP_TCD_NBYTES_MLOFFNO_DMLOE_SHIFT)) & DMA_IP_TCD_NBYTES_MLOFFNO_DMLOE_MASK)
#define DMA_IP_TCD_NBYTES_MLOFFNO_SMLOE_MASK        (0x80000000U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_SMLOE_SHIFT       (31U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_SMLOE_WIDTH       (1U)
#define DMA_IP_TCD_NBYTES_MLOFFNO_SMLOE(x)          (((uint32)(((uint32)(x)) << DMA_IP_TCD_NBYTES_MLOFFNO_SMLOE_SHIFT)) & DMA_IP_TCD_NBYTES_MLOFFNO_SMLOE_MASK)
/*! @} */

/*! NBYTES_MLOFFYES - TCD Transfer Size with Minor Loop Offsets */
/*! @{ */
#define DMA_IP_TCD_NBYTES_MLOFFYES_NBYTES_MASK      (0x3FFU)
#define DMA_IP_TCD_NBYTES_MLOFFYES_NBYTES_SHIFT     (0U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_NBYTES_WIDTH     (10U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_NBYTES(x)        (((uint32)(((uint32)(x)) << DMA_IP_TCD_NBYTES_MLOFFYES_NBYTES_SHIFT)) & DMA_IP_TCD_NBYTES_MLOFFYES_NBYTES_MASK)
#define DMA_IP_TCD_NBYTES_MLOFFYES_MLOFF_MASK       (0x3FFFFC00U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_MLOFF_SHIFT      (10U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_MLOFF_WIDTH      (20U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_MLOFF(x)         (((uint32)(((uint32)(x)) << DMA_IP_TCD_NBYTES_MLOFFYES_MLOFF_SHIFT)) & DMA_IP_TCD_NBYTES_MLOFFYES_MLOFF_MASK)
#define DMA_IP_TCD_NBYTES_MLOFFYES_DMLOE_MASK       (0x40000000U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_DMLOE_SHIFT      (30U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_DMLOE_WIDTH      (1U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_DMLOE(x)         (((uint32)(((uint32)(x)) << DMA_IP_TCD_NBYTES_MLOFFYES_DMLOE_SHIFT)) & DMA_IP_TCD_NBYTES_MLOFFYES_DMLOE_MASK)
#define DMA_IP_TCD_NBYTES_MLOFFYES_SMLOE_MASK       (0x80000000U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_SMLOE_SHIFT      (31U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_SMLOE_WIDTH      (1U)
#define DMA_IP_TCD_NBYTES_MLOFFYES_SMLOE(x)         (((uint32)(((uint32)(x)) << DMA_IP_TCD_NBYTES_MLOFFYES_SMLOE_SHIFT)) & DMA_IP_TCD_NBYTES_MLOFFYES_SMLOE_MASK)
/*! @} */

/*! reg_SLAST_SDA - TCD Last Source Address Adjustment / Store reg_DADDR Address */
/*! @{ */
#define DMA_IP_TCD_SLAST_SDA_SLAST_SDA_MASK         (0xFFFFFFFFU)
#define DMA_IP_TCD_SLAST_SDA_SLAST_SDA_SHIFT        (0U)
#define DMA_IP_TCD_SLAST_SDA_SLAST_SDA_WIDTH        (32U)
#define DMA_IP_TCD_SLAST_SDA_SLAST_SDA(x)           (((uint32)(((uint32)(x)) << DMA_IP_TCD_SLAST_SDA_SLAST_SDA_SHIFT)) & DMA_IP_TCD_SLAST_SDA_SLAST_SDA_MASK)
/*! @} */

/*! reg_DADDR - TCD Destination Address */
/*! @{ */
#define DMA_IP_TCD_DADDR_DADDR_MASK                 (0xFFFFFFFFU)
#define DMA_IP_TCD_DADDR_DADDR_SHIFT                (0U)
#define DMA_IP_TCD_DADDR_DADDR_WIDTH                (32U)
#define DMA_IP_TCD_DADDR_DADDR(x)                   (((uint32)(((uint32)(x)) << DMA_IP_TCD_DADDR_DADDR_SHIFT)) & DMA_IP_TCD_DADDR_DADDR_MASK)
/*! @} */

/*! reg_DOFF - TCD Signed Destination Address Offset */
/*! @{ */
#define DMA_IP_TCD_DOFF_DOFF_MASK                   (0xFFFFU)
#define DMA_IP_TCD_DOFF_DOFF_SHIFT                  (0U)
#define DMA_IP_TCD_DOFF_DOFF_WIDTH                  (16U)
#define DMA_IP_TCD_DOFF_DOFF(x)                     (((uint16)(((uint16)(x)) << DMA_IP_TCD_DOFF_DOFF_SHIFT)) & DMA_IP_TCD_DOFF_DOFF_MASK)
/*! @} */

/*! CITER_ELINKNO - TCD Current Major Loop Count (Minor Loop Channel Linking Disabled) */
/*! @{ */
#define DMA_IP_TCD_CITER_ELINKNO_CITER_MASK         (0x7FFFU)
#define DMA_IP_TCD_CITER_ELINKNO_CITER_SHIFT        (0U)
#define DMA_IP_TCD_CITER_ELINKNO_CITER_WIDTH        (15U)
#define DMA_IP_TCD_CITER_ELINKNO_CITER(x)           (((uint16)(((uint16)(x)) << DMA_IP_TCD_CITER_ELINKNO_CITER_SHIFT)) & DMA_IP_TCD_CITER_ELINKNO_CITER_MASK)
#define DMA_IP_TCD_CITER_ELINKNO_ELINK_MASK         (0x8000U)
#define DMA_IP_TCD_CITER_ELINKNO_ELINK_SHIFT        (15U)
#define DMA_IP_TCD_CITER_ELINKNO_ELINK_WIDTH        (1U)
#define DMA_IP_TCD_CITER_ELINKNO_ELINK(x)           (((uint16)(((uint16)(x)) << DMA_IP_TCD_CITER_ELINKNO_ELINK_SHIFT)) & DMA_IP_TCD_CITER_ELINKNO_ELINK_MASK)
/*! @} */

/*! CITER_ELINKYES - TCD Current Major Loop Count (Minor Loop Channel Linking Enabled) */
/*! @{ */
#define DMA_IP_TCD_CITER_ELINKYES_CITER_MASK        (0x1FFU)
#define DMA_IP_TCD_CITER_ELINKYES_CITER_SHIFT       (0U)
#define DMA_IP_TCD_CITER_ELINKYES_CITER_WIDTH       (9U)
#define DMA_IP_TCD_CITER_ELINKYES_CITER(x)          (((uint16)(((uint16)(x)) << DMA_IP_TCD_CITER_ELINKYES_CITER_SHIFT)) & DMA_IP_TCD_CITER_ELINKYES_CITER_MASK)
#define DMA_IP_TCD_CITER_ELINKYES_LINKCH_MASK       (0x3E00U)
#define DMA_IP_TCD_CITER_ELINKYES_LINKCH_SHIFT      (9U)
#define DMA_IP_TCD_CITER_ELINKYES_LINKCH_WIDTH      (5U)
#define DMA_IP_TCD_CITER_ELINKYES_LINKCH(x)         (((uint16)(((uint16)(x)) << DMA_IP_TCD_CITER_ELINKYES_LINKCH_SHIFT)) & DMA_IP_TCD_CITER_ELINKYES_LINKCH_MASK)
#define DMA_IP_TCD_CITER_ELINKYES_ELINK_MASK        (0x8000U)
#define DMA_IP_TCD_CITER_ELINKYES_ELINK_SHIFT       (15U)
#define DMA_IP_TCD_CITER_ELINKYES_ELINK_WIDTH       (1U)
#define DMA_IP_TCD_CITER_ELINKYES_ELINK(x)          (((uint16)(((uint16)(x)) << DMA_IP_TCD_CITER_ELINKYES_ELINK_SHIFT)) & DMA_IP_TCD_CITER_ELINKYES_ELINK_MASK)
/*! @} */

/*! reg_DLAST_SGA - TCD Last Destination Address Adjustment / Scatter Gather Address */
/*! @{ */
#define DMA_IP_TCD_DLAST_SGA_DLAST_SGA_MASK         (0xFFFFFFFFU)
#define DMA_IP_TCD_DLAST_SGA_DLAST_SGA_SHIFT        (0U)
#define DMA_IP_TCD_DLAST_SGA_DLAST_SGA_WIDTH        (32U)
#define DMA_IP_TCD_DLAST_SGA_DLAST_SGA(x)           (((uint32)(((uint32)(x)) << DMA_IP_TCD_DLAST_SGA_DLAST_SGA_SHIFT)) & DMA_IP_TCD_DLAST_SGA_DLAST_SGA_MASK)
/*! @} */

/*! reg_CSR - TCD Control and Status */
/*! @{ */
#define DMA_IP_TCD_CSR_START_MASK                   (0x1U)
#define DMA_IP_TCD_CSR_START_SHIFT                  (0U)
#define DMA_IP_TCD_CSR_START_WIDTH                  (1U)
#define DMA_IP_TCD_CSR_START(x)                     (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_START_SHIFT)) & DMA_IP_TCD_CSR_START_MASK)
#define DMA_IP_TCD_CSR_INTMAJOR_MASK                (0x2U)
#define DMA_IP_TCD_CSR_INTMAJOR_SHIFT               (1U)
#define DMA_IP_TCD_CSR_INTMAJOR_WIDTH               (1U)
#define DMA_IP_TCD_CSR_INTMAJOR(x)                  (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_INTMAJOR_SHIFT)) & DMA_IP_TCD_CSR_INTMAJOR_MASK)
#define DMA_IP_TCD_CSR_INTHALF_MASK                 (0x4U)
#define DMA_IP_TCD_CSR_INTHALF_SHIFT                (2U)
#define DMA_IP_TCD_CSR_INTHALF_WIDTH                (1U)
#define DMA_IP_TCD_CSR_INTHALF(x)                   (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_INTHALF_SHIFT)) & DMA_IP_TCD_CSR_INTHALF_MASK)
#define DMA_IP_TCD_CSR_DREQ_MASK                    (0x8U)
#define DMA_IP_TCD_CSR_DREQ_SHIFT                   (3U)
#define DMA_IP_TCD_CSR_DREQ_WIDTH                   (1U)
#define DMA_IP_TCD_CSR_DREQ(x)                      (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_DREQ_SHIFT)) & DMA_IP_TCD_CSR_DREQ_MASK)
#define DMA_IP_TCD_CSR_ESG_MASK                     (0x10U)
#define DMA_IP_TCD_CSR_ESG_SHIFT                    (4U)
#define DMA_IP_TCD_CSR_ESG_WIDTH                    (1U)
#define DMA_IP_TCD_CSR_ESG(x)                       (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_ESG_SHIFT)) & DMA_IP_TCD_CSR_ESG_MASK)
#define DMA_IP_TCD_CSR_MAJORELINK_MASK              (0x20U)
#define DMA_IP_TCD_CSR_MAJORELINK_SHIFT             (5U)
#define DMA_IP_TCD_CSR_MAJORELINK_WIDTH             (1U)
#define DMA_IP_TCD_CSR_MAJORELINK(x)                (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_MAJORELINK_SHIFT)) & DMA_IP_TCD_CSR_MAJORELINK_MASK)
#define DMA_IP_TCD_CSR_EEOP_MASK                    (0x40U)
#define DMA_IP_TCD_CSR_EEOP_SHIFT                   (6U)
#define DMA_IP_TCD_CSR_EEOP_WIDTH                   (1U)
#define DMA_IP_TCD_CSR_EEOP(x)                      (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_EEOP_SHIFT)) & DMA_IP_TCD_CSR_EEOP_MASK)
#define DMA_IP_TCD_CSR_ESDA_MASK                    (0x80U)
#define DMA_IP_TCD_CSR_ESDA_SHIFT                   (7U)
#define DMA_IP_TCD_CSR_ESDA_WIDTH                   (1U)
#define DMA_IP_TCD_CSR_ESDA(x)                      (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_ESDA_SHIFT)) & DMA_IP_TCD_CSR_ESDA_MASK)
#define DMA_IP_TCD_CSR_MAJORLINKCH_MASK             (0x1F00U)
#define DMA_IP_TCD_CSR_MAJORLINKCH_SHIFT            (8U)
#define DMA_IP_TCD_CSR_MAJORLINKCH_WIDTH            (5U)
#define DMA_IP_TCD_CSR_MAJORLINKCH(x)               (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_MAJORLINKCH_SHIFT)) & DMA_IP_TCD_CSR_MAJORLINKCH_MASK)
#define DMA_IP_TCD_CSR_BWC_MASK                     (0xC000U)
#define DMA_IP_TCD_CSR_BWC_SHIFT                    (14U)
#define DMA_IP_TCD_CSR_BWC_WIDTH                    (2U)
#define DMA_IP_TCD_CSR_BWC(x)                       (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_BWC_SHIFT)) & DMA_IP_TCD_CSR_BWC_MASK)
#define DMA_IP_TCD_CSR_TMC_MASK                     (0xC000U)
#define DMA_IP_TCD_CSR_TMC_SHIFT                    (14U)
#define DMA_IP_TCD_CSR_TMC_WIDTH                    (2U)
#define DMA_IP_TCD_CSR_TMC(x)                       (((uint16)(((uint16)(x)) << DMA_IP_TCD_CSR_TMC_SHIFT)) & DMA_IP_TCD_CSR_TMC_MASK)
/*! @} */

/*! BITER_ELINKNO - TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled) */
/*! @{ */
#define DMA_IP_TCD_BITER_ELINKNO_BITER_MASK         (0x7FFFU)
#define DMA_IP_TCD_BITER_ELINKNO_BITER_SHIFT        (0U)
#define DMA_IP_TCD_BITER_ELINKNO_BITER_WIDTH        (15U)
#define DMA_IP_TCD_BITER_ELINKNO_BITER(x)           (((uint16)(((uint16)(x)) << DMA_IP_TCD_BITER_ELINKNO_BITER_SHIFT)) & DMA_IP_TCD_BITER_ELINKNO_BITER_MASK)
#define DMA_IP_TCD_BITER_ELINKNO_ELINK_MASK         (0x8000U)
#define DMA_IP_TCD_BITER_ELINKNO_ELINK_SHIFT        (15U)
#define DMA_IP_TCD_BITER_ELINKNO_ELINK_WIDTH        (1U)
#define DMA_IP_TCD_BITER_ELINKNO_ELINK(x)           (((uint16)(((uint16)(x)) << DMA_IP_TCD_BITER_ELINKNO_ELINK_SHIFT)) & DMA_IP_TCD_BITER_ELINKNO_ELINK_MASK)
/*! @} */

/*! BITER_ELINKYES - TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled) */
/*! @{ */
#define DMA_IP_TCD_BITER_ELINKYES_BITER_MASK        (0x1FFU)
#define DMA_IP_TCD_BITER_ELINKYES_BITER_SHIFT       (0U)
#define DMA_IP_TCD_BITER_ELINKYES_BITER_WIDTH       (9U)
#define DMA_IP_TCD_BITER_ELINKYES_BITER(x)          (((uint16)(((uint16)(x)) << DMA_IP_TCD_BITER_ELINKYES_BITER_SHIFT)) & DMA_IP_TCD_BITER_ELINKYES_BITER_MASK)
#define DMA_IP_TCD_BITER_ELINKYES_LINKCH_MASK       (0x3E00U)
#define DMA_IP_TCD_BITER_ELINKYES_LINKCH_SHIFT      (9U)
#define DMA_IP_TCD_BITER_ELINKYES_LINKCH_WIDTH      (5U)
#define DMA_IP_TCD_BITER_ELINKYES_LINKCH(x)         (((uint16)(((uint16)(x)) << DMA_IP_TCD_BITER_ELINKYES_LINKCH_SHIFT)) & DMA_IP_TCD_BITER_ELINKYES_LINKCH_MASK)
#define DMA_IP_TCD_BITER_ELINKYES_ELINK_MASK        (0x8000U)
#define DMA_IP_TCD_BITER_ELINKYES_ELINK_SHIFT       (15U)
#define DMA_IP_TCD_BITER_ELINKYES_ELINK_WIDTH       (1U)
#define DMA_IP_TCD_BITER_ELINKYES_ELINK(x)          (((uint16)(((uint16)(x)) << DMA_IP_TCD_BITER_ELINKYES_ELINK_SHIFT)) & DMA_IP_TCD_BITER_ELINKYES_ELINK_MASK)

/*==================================================================================================
DMA MP HWV4 STRUCTURE
==================================================================================================*/
typedef struct {
__IO uint32 reg_CSR;                               /**< @brief Management Page Control, offset: 0x0 */
__I  uint32 reg_ES;                                /**< @brief Management Page Error Status, offset: 0x4 */
__I  uint32 reg_INT;                               /**< @brief Management Page Interrupt Request Status, offset: 0x8 */
__I  uint32 reg_HRS;                               /**< @brief Management Page Hardware Request Status, offset: 0xC */
uint8 Reserved[240];
__IO uint32 reg_CH_GRPRI[DMA_IP_DMA_MP_GRPRI_COUNT];   /**< @brief Channel Arbitration Group, array offset: 0x100, array step: 0x4 */
}Dma_Ip_Hwv3InstRegType;

/*==================================================================================================
DMA TCD STRUCTURE
==================================================================================================*/
typedef struct{
uint32 reg_CH_CSR;                      /**< @brief Channel Control and Status, array offset: 0x0, array step: 0x1000 */
uint32 reg_CH_ES;                       /**< @brief Channel Error Status, array offset: 0x4, array step: 0x1000 */
uint32 reg_CH_INT;                      /**< @brief Channel Interrupt Status, array offset: 0x8, array step: 0x1000 */
uint32 reg_CH_SBR;                      /**< @brief Channel System Bus, array offset: 0xC, array step: 0x1000 */
uint32 reg_CH_PRI;                      /**< @brief Channel Priority, array offset: 0x10, array step: 0x1000 */
}Dma_Ip_ChRegType;

typedef struct {
uint32 reg_SADDR;                       /**< @brief TCD Source Address, array offset: 0x20, array step: 0x1000 */
uint16 reg_SOFF;                        /**< @brief TCD Signed Source Address Offset, array offset: 0x24, array step: 0x1000 */
uint16 reg_ATTR;                        /**< @brief TCD Transfer Attributes, array offset: 0x26, array step: 0x1000 */
union {                             /* offset: 0x28, array step: 0x1000 */
uint32 reg_MLOFFNO;                 /**< @brief TCD Transfer Size without Minor Loop Offsets Register, array offset: 0x28, array step: 0x1000 */
uint32 reg_MLOFFYES;                /**< @brief TCD Transfer Size with Minor Loop Offsets Register, array offset: 0x28, array step: 0x1000 */
} reg_NBYTES;
uint32 reg_SLAST_SDA;                   /**< @brief TCD Last Source Address Adjustment / Store reg_DADDR Address Register, array offset: 0x2C, array step: 0x1000 */
uint32 reg_DADDR;                       /**< @brief TCD Destination Address, array offset: 0x30, array step: 0x1000 */
uint16 reg_DOFF;                        /**< @brief TCD Signed Destination Address Offset, array offset: 0x34, array step: 0x1000 */
union {                             /* offset: 0x36, array step: 0x1000 */
uint16 reg_ELINKNO;                 /**< @brief TCD Current Major Loop Count (Minor Loop Channel Linking Disabled) Register, array offset: 0x36, array step: 0x1000 */
uint16 reg_ELINKYES;                /**< @brief TCD Current Major Loop Count (Minor Loop Channel Linking Enabled) Register, array offset: 0x36, array step: 0x1000 */
} reg_CITER;
uint32 reg_DLAST_SGA;                   /**< @brief TCD Last Destination Address Adjustment / Scatter Gather Address Register, array offset: 0x38, array step: 0x1000 */
uint16 reg_CSR;                         /**< @brief TCD Control and Status Register, array offset: 0x3C, array step: 0x1000 */
union {                             /* offset: 0x3E, array step: 0x1000 */
uint16 reg_ELINKNO;                 /**< @brief TCD Beginning Major Loop Count (Minor Loop Channel Linking Disabled) Register, array offset: 0x3E, array step: 0x1000 */
uint16 reg_ELINKYES;                /**< @brief TCD Beginning Major Loop Count (Minor Loop Channel Linking Enabled) Register, array offset: 0x3E, array step: 0x1000 */
} reg_BITER;
} Dma_Ip_TcdRegType, Dma_Ip_SwTcdRegType;

/*==================================================================================================
DMA HWV3 STRUCTURE
==================================================================================================*/

typedef struct {
Dma_Ip_ChRegType tChReg;
uint8 Reserved[12];
Dma_Ip_TcdRegType tTcdReg;
} Dma_Ip_Hwv3ChTcdRegType;

#if (DMA_IP_TCD_NOT_ALIGNED == STD_OFF)
typedef struct {
struct {
Dma_Ip_Hwv3ChTcdRegType tChTcdReg;
uint8 Reserved[DMA_IP_TCD_RESERVED];
} TCD_RSV[DMA_IP_TCD_NOF_HWV3_CH];
} Dma_Ip_Hwv3TcdArrayType;
#endif


/*==================================================================================================
DMA MP HWV4 STRUCTURE
==================================================================================================*/
typedef struct{
uint32 reg_CH_CSR;                      /**< @brief Channel Control and Status, array offset: 0x0, array step: 0x1000 */
uint32 reg_CH_ES;                       /**< @brief Channel Error Status, array offset: 0x4, array step: 0x1000 */
uint32 reg_CH_INT;                      /**< @brief Channel Interrupt Status, array offset: 0x8, array step: 0x1000 */
uint32 reg_CH_SBR;                      /**< @brief Channel System Bus, array offset: 0xC, array step: 0x1000 */
uint32 reg_CH_PRI;                      /**< @brief Channel Priority, array offset: 0x10, array step: 0x1000 */
uint8 RESERVED_0[4];
uint16 CH_MATTR;                        /**< Memory Attributes Register, array offset: 0x18, array step: 0x10000 */
uint8 Reserved[6];
}Dma_Ip_HWV4_ChRegType;

typedef struct {
__IO uint32 reg_CSR;                               /**< @brief Management Page Control, offset: 0x0 */
__I  uint32 reg_ES;                                /**< @brief Management Page Error Status, offset: 0x4 */
__I  uint32 reg_INT;                               /**< @brief Management Page Interrupt Request Status, offset: 0x8 */
__I  uint32 reg_HRS;                               /**< @brief Management Page Hardware Request Status, offset: 0xC */
uint8 Reserved[240];
__IO uint32 reg_CH_GRPRI[DMA_IP_DMA_MP_GRPRI_COUNT];   /**< @brief Channel Arbitration Group, array offset: 0x100, array step: 0x4 */
}Dma_Ip_Hwv4InstRegType;

/*==================================================================================================
DMA HWV4 STRUCTURE
==================================================================================================*/

typedef struct {
Dma_Ip_HWV4_ChRegType tChReg;
Dma_Ip_TcdRegType tTcdReg;
} Dma_Ip_Hwv4ChTcdRegType;

#if (DMA_IP_TCD_HWV4_NOT_ALIGNED == STD_OFF)
typedef struct {
struct {
Dma_Ip_Hwv4ChTcdRegType tChTcdReg;
uint8 Reserved[DMA_IP_TCD_RESERVED];
} TCD_RSV[DMA_IP_TCD_NOF_HWV4_CH];
} Dma_Ip_Hwv4TcdArrayType;
#endif

/*==================================================================================================
DMA MP HWV2 REGISTER MASKS
==================================================================================================*/
/*! @name CR - Control */
/*! @{ */

#define DMA_CR_EDBG_MASK                       (0x2U)
#define DMA_CR_EDBG_SHIFT                      (1U)
#define DMA_CR_EDBG_WIDTH                      (1U)
#define DMA_CR_EDBG(x)                         (((uint32)(((uint32)(x)) << DMA_CR_EDBG_SHIFT)) & DMA_CR_EDBG_MASK)

#define DMA_CR_ERCA_MASK                       (0x4U)
#define DMA_CR_ERCA_SHIFT                      (2U)
#define DMA_CR_ERCA_WIDTH                      (1U)
#define DMA_CR_ERCA(x)                         (((uint32)(((uint32)(x)) << DMA_CR_ERCA_SHIFT)) & DMA_CR_ERCA_MASK)

#define DMA_CR_HOE_MASK                        (0x10U)
#define DMA_CR_HOE_SHIFT                       (4U)
#define DMA_CR_HOE_WIDTH                       (1U)
#define DMA_CR_HOE(x)                          (((uint32)(((uint32)(x)) << DMA_CR_HOE_SHIFT)) & DMA_CR_HOE_MASK)

#define DMA_CR_HALT_MASK                       (0x20U)
#define DMA_CR_HALT_SHIFT                      (5U)
#define DMA_CR_HALT_WIDTH                      (1U)
#define DMA_CR_HALT(x)                         (((uint32)(((uint32)(x)) << DMA_CR_HALT_SHIFT)) & DMA_CR_HALT_MASK)

#define DMA_CR_CLM_MASK                        (0x40U)
#define DMA_CR_CLM_SHIFT                       (6U)
#define DMA_CR_CLM_WIDTH                       (1U)
#define DMA_CR_CLM(x)                          (((uint32)(((uint32)(x)) << DMA_CR_CLM_SHIFT)) & DMA_CR_CLM_MASK)

#define DMA_CR_EMLM_MASK                       (0x80U)
#define DMA_CR_EMLM_SHIFT                      (7U)
#define DMA_CR_EMLM_WIDTH                      (1U)
#define DMA_CR_EMLM(x)                         (((uint32)(((uint32)(x)) << DMA_CR_EMLM_SHIFT)) & DMA_CR_EMLM_MASK)

#define DMA_CR_ECX_MASK                        (0x10000U)
#define DMA_CR_ECX_SHIFT                       (16U)
#define DMA_CR_ECX_WIDTH                       (1U)
#define DMA_CR_ECX(x)                          (((uint32)(((uint32)(x)) << DMA_CR_ECX_SHIFT)) & DMA_CR_ECX_MASK)

#define DMA_CR_CX_MASK                         (0x20000U)
#define DMA_CR_CX_SHIFT                        (17U)
#define DMA_CR_CX_WIDTH                        (1U)
#define DMA_CR_CX(x)                           (((uint32)(((uint32)(x)) << DMA_CR_CX_SHIFT)) & DMA_CR_CX_MASK)

#define DMA_CR_ACTIVE_MASK                     (0x80000000U)
#define DMA_CR_ACTIVE_SHIFT                    (31U)
#define DMA_CR_ACTIVE_WIDTH                    (1U)
#define DMA_CR_ACTIVE(x)                       (((uint32)(((uint32)(x)) << DMA_CR_ACTIVE_SHIFT)) & DMA_CR_ACTIVE_MASK)
/*! @} */

/*! @name ES - Error Status */
/*! @{ */

#define DMA_ES_DBE_MASK                        (0x1U)
#define DMA_ES_DBE_SHIFT                       (0U)
#define DMA_ES_DBE_WIDTH                       (1U)
#define DMA_ES_DBE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_DBE_SHIFT)) & DMA_ES_DBE_MASK)

#define DMA_ES_SBE_MASK                        (0x2U)
#define DMA_ES_SBE_SHIFT                       (1U)
#define DMA_ES_SBE_WIDTH                       (1U)
#define DMA_ES_SBE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_SBE_SHIFT)) & DMA_ES_SBE_MASK)

#define DMA_ES_SGE_MASK                        (0x4U)
#define DMA_ES_SGE_SHIFT                       (2U)
#define DMA_ES_SGE_WIDTH                       (1U)
#define DMA_ES_SGE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_SGE_SHIFT)) & DMA_ES_SGE_MASK)

#define DMA_ES_NCE_MASK                        (0x8U)
#define DMA_ES_NCE_SHIFT                       (3U)
#define DMA_ES_NCE_WIDTH                       (1U)
#define DMA_ES_NCE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_NCE_SHIFT)) & DMA_ES_NCE_MASK)

#define DMA_ES_DOE_MASK                        (0x10U)
#define DMA_ES_DOE_SHIFT                       (4U)
#define DMA_ES_DOE_WIDTH                       (1U)
#define DMA_ES_DOE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_DOE_SHIFT)) & DMA_ES_DOE_MASK)

#define DMA_ES_DAE_MASK                        (0x20U)
#define DMA_ES_DAE_SHIFT                       (5U)
#define DMA_ES_DAE_WIDTH                       (1U)
#define DMA_ES_DAE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_DAE_SHIFT)) & DMA_ES_DAE_MASK)

#define DMA_ES_SOE_MASK                        (0x40U)
#define DMA_ES_SOE_SHIFT                       (6U)
#define DMA_ES_SOE_WIDTH                       (1U)
#define DMA_ES_SOE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_SOE_SHIFT)) & DMA_ES_SOE_MASK)

#define DMA_ES_SAE_MASK                        (0x80U)
#define DMA_ES_SAE_SHIFT                       (7U)
#define DMA_ES_SAE_WIDTH                       (1U)
#define DMA_ES_SAE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_SAE_SHIFT)) & DMA_ES_SAE_MASK)

#define DMA_ES_ERRCHN_MASK                     (0xF00U)
#define DMA_ES_ERRCHN_SHIFT                    (8U)
#define DMA_ES_ERRCHN_WIDTH                    (4U)
#define DMA_ES_ERRCHN(x)                       (((uint32)(((uint32)(x)) << DMA_ES_ERRCHN_SHIFT)) & DMA_ES_ERRCHN_MASK)

#define DMA_ES_CPE_MASK                        (0x4000U)
#define DMA_ES_CPE_SHIFT                       (14U)
#define DMA_ES_CPE_WIDTH                       (1U)
#define DMA_ES_CPE(x)                          (((uint32)(((uint32)(x)) << DMA_ES_CPE_SHIFT)) & DMA_ES_CPE_MASK)

#define DMA_ES_ECX_MASK                        (0x10000U)
#define DMA_ES_ECX_SHIFT                       (16U)
#define DMA_ES_ECX_WIDTH                       (1U)
#define DMA_ES_ECX(x)                          (((uint32)(((uint32)(x)) << DMA_ES_ECX_SHIFT)) & DMA_ES_ECX_MASK)

#define DMA_ES_VLD_MASK                        (0x80000000U)
#define DMA_ES_VLD_SHIFT                       (31U)
#define DMA_ES_VLD_WIDTH                       (1U)
#define DMA_ES_VLD(x)                          (((uint32)(((uint32)(x)) << DMA_ES_VLD_SHIFT)) & DMA_ES_VLD_MASK)
/*! @} */

/*! @name ERQ - Enable Request */
/*! @{ */

#define DMA_ERQ_ERQ0_MASK                      (0x1U)
#define DMA_ERQ_ERQ0_SHIFT                     (0U)
#define DMA_ERQ_ERQ0_WIDTH                     (1U)
#define DMA_ERQ_ERQ0(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ0_SHIFT)) & DMA_ERQ_ERQ0_MASK)

#define DMA_ERQ_ERQ1_MASK                      (0x2U)
#define DMA_ERQ_ERQ1_SHIFT                     (1U)
#define DMA_ERQ_ERQ1_WIDTH                     (1U)
#define DMA_ERQ_ERQ1(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ1_SHIFT)) & DMA_ERQ_ERQ1_MASK)

#define DMA_ERQ_ERQ2_MASK                      (0x4U)
#define DMA_ERQ_ERQ2_SHIFT                     (2U)
#define DMA_ERQ_ERQ2_WIDTH                     (1U)
#define DMA_ERQ_ERQ2(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ2_SHIFT)) & DMA_ERQ_ERQ2_MASK)

#define DMA_ERQ_ERQ3_MASK                      (0x8U)
#define DMA_ERQ_ERQ3_SHIFT                     (3U)
#define DMA_ERQ_ERQ3_WIDTH                     (1U)
#define DMA_ERQ_ERQ3(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ3_SHIFT)) & DMA_ERQ_ERQ3_MASK)

#define DMA_ERQ_ERQ4_MASK                      (0x10U)
#define DMA_ERQ_ERQ4_SHIFT                     (4U)
#define DMA_ERQ_ERQ4_WIDTH                     (1U)
#define DMA_ERQ_ERQ4(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ4_SHIFT)) & DMA_ERQ_ERQ4_MASK)

#define DMA_ERQ_ERQ5_MASK                      (0x20U)
#define DMA_ERQ_ERQ5_SHIFT                     (5U)
#define DMA_ERQ_ERQ5_WIDTH                     (1U)
#define DMA_ERQ_ERQ5(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ5_SHIFT)) & DMA_ERQ_ERQ5_MASK)

#define DMA_ERQ_ERQ6_MASK                      (0x40U)
#define DMA_ERQ_ERQ6_SHIFT                     (6U)
#define DMA_ERQ_ERQ6_WIDTH                     (1U)
#define DMA_ERQ_ERQ6(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ6_SHIFT)) & DMA_ERQ_ERQ6_MASK)

#define DMA_ERQ_ERQ7_MASK                      (0x80U)
#define DMA_ERQ_ERQ7_SHIFT                     (7U)
#define DMA_ERQ_ERQ7_WIDTH                     (1U)
#define DMA_ERQ_ERQ7(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ7_SHIFT)) & DMA_ERQ_ERQ7_MASK)

#define DMA_ERQ_ERQ8_MASK                      (0x100U)
#define DMA_ERQ_ERQ8_SHIFT                     (8U)
#define DMA_ERQ_ERQ8_WIDTH                     (1U)
#define DMA_ERQ_ERQ8(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ8_SHIFT)) & DMA_ERQ_ERQ8_MASK)

#define DMA_ERQ_ERQ9_MASK                      (0x200U)
#define DMA_ERQ_ERQ9_SHIFT                     (9U)
#define DMA_ERQ_ERQ9_WIDTH                     (1U)
#define DMA_ERQ_ERQ9(x)                        (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ9_SHIFT)) & DMA_ERQ_ERQ9_MASK)

#define DMA_ERQ_ERQ10_MASK                     (0x400U)
#define DMA_ERQ_ERQ10_SHIFT                    (10U)
#define DMA_ERQ_ERQ10_WIDTH                    (1U)
#define DMA_ERQ_ERQ10(x)                       (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ10_SHIFT)) & DMA_ERQ_ERQ10_MASK)

#define DMA_ERQ_ERQ11_MASK                     (0x800U)
#define DMA_ERQ_ERQ11_SHIFT                    (11U)
#define DMA_ERQ_ERQ11_WIDTH                    (1U)
#define DMA_ERQ_ERQ11(x)                       (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ11_SHIFT)) & DMA_ERQ_ERQ11_MASK)

#define DMA_ERQ_ERQ12_MASK                     (0x1000U)
#define DMA_ERQ_ERQ12_SHIFT                    (12U)
#define DMA_ERQ_ERQ12_WIDTH                    (1U)
#define DMA_ERQ_ERQ12(x)                       (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ12_SHIFT)) & DMA_ERQ_ERQ12_MASK)

#define DMA_ERQ_ERQ13_MASK                     (0x2000U)
#define DMA_ERQ_ERQ13_SHIFT                    (13U)
#define DMA_ERQ_ERQ13_WIDTH                    (1U)
#define DMA_ERQ_ERQ13(x)                       (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ13_SHIFT)) & DMA_ERQ_ERQ13_MASK)

#define DMA_ERQ_ERQ14_MASK                     (0x4000U)
#define DMA_ERQ_ERQ14_SHIFT                    (14U)
#define DMA_ERQ_ERQ14_WIDTH                    (1U)
#define DMA_ERQ_ERQ14(x)                       (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ14_SHIFT)) & DMA_ERQ_ERQ14_MASK)

#define DMA_ERQ_ERQ15_MASK                     (0x8000U)
#define DMA_ERQ_ERQ15_SHIFT                    (15U)
#define DMA_ERQ_ERQ15_WIDTH                    (1U)
#define DMA_ERQ_ERQ15(x)                       (((uint32)(((uint32)(x)) << DMA_ERQ_ERQ15_SHIFT)) & DMA_ERQ_ERQ15_MASK)
/*! @} */

/*! @name EEI - Enable Error Interrupt */
/*! @{ */

#define DMA_EEI_EEI0_MASK                      (0x1U)
#define DMA_EEI_EEI0_SHIFT                     (0U)
#define DMA_EEI_EEI0_WIDTH                     (1U)
#define DMA_EEI_EEI0(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI0_SHIFT)) & DMA_EEI_EEI0_MASK)

#define DMA_EEI_EEI1_MASK                      (0x2U)
#define DMA_EEI_EEI1_SHIFT                     (1U)
#define DMA_EEI_EEI1_WIDTH                     (1U)
#define DMA_EEI_EEI1(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI1_SHIFT)) & DMA_EEI_EEI1_MASK)

#define DMA_EEI_EEI2_MASK                      (0x4U)
#define DMA_EEI_EEI2_SHIFT                     (2U)
#define DMA_EEI_EEI2_WIDTH                     (1U)
#define DMA_EEI_EEI2(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI2_SHIFT)) & DMA_EEI_EEI2_MASK)

#define DMA_EEI_EEI3_MASK                      (0x8U)
#define DMA_EEI_EEI3_SHIFT                     (3U)
#define DMA_EEI_EEI3_WIDTH                     (1U)
#define DMA_EEI_EEI3(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI3_SHIFT)) & DMA_EEI_EEI3_MASK)

#define DMA_EEI_EEI4_MASK                      (0x10U)
#define DMA_EEI_EEI4_SHIFT                     (4U)
#define DMA_EEI_EEI4_WIDTH                     (1U)
#define DMA_EEI_EEI4(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI4_SHIFT)) & DMA_EEI_EEI4_MASK)

#define DMA_EEI_EEI5_MASK                      (0x20U)
#define DMA_EEI_EEI5_SHIFT                     (5U)
#define DMA_EEI_EEI5_WIDTH                     (1U)
#define DMA_EEI_EEI5(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI5_SHIFT)) & DMA_EEI_EEI5_MASK)

#define DMA_EEI_EEI6_MASK                      (0x40U)
#define DMA_EEI_EEI6_SHIFT                     (6U)
#define DMA_EEI_EEI6_WIDTH                     (1U)
#define DMA_EEI_EEI6(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI6_SHIFT)) & DMA_EEI_EEI6_MASK)

#define DMA_EEI_EEI7_MASK                      (0x80U)
#define DMA_EEI_EEI7_SHIFT                     (7U)
#define DMA_EEI_EEI7_WIDTH                     (1U)
#define DMA_EEI_EEI7(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI7_SHIFT)) & DMA_EEI_EEI7_MASK)

#define DMA_EEI_EEI8_MASK                      (0x100U)
#define DMA_EEI_EEI8_SHIFT                     (8U)
#define DMA_EEI_EEI8_WIDTH                     (1U)
#define DMA_EEI_EEI8(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI8_SHIFT)) & DMA_EEI_EEI8_MASK)

#define DMA_EEI_EEI9_MASK                      (0x200U)
#define DMA_EEI_EEI9_SHIFT                     (9U)
#define DMA_EEI_EEI9_WIDTH                     (1U)
#define DMA_EEI_EEI9(x)                        (((uint32)(((uint32)(x)) << DMA_EEI_EEI9_SHIFT)) & DMA_EEI_EEI9_MASK)

#define DMA_EEI_EEI10_MASK                     (0x400U)
#define DMA_EEI_EEI10_SHIFT                    (10U)
#define DMA_EEI_EEI10_WIDTH                    (1U)
#define DMA_EEI_EEI10(x)                       (((uint32)(((uint32)(x)) << DMA_EEI_EEI10_SHIFT)) & DMA_EEI_EEI10_MASK)

#define DMA_EEI_EEI11_MASK                     (0x800U)
#define DMA_EEI_EEI11_SHIFT                    (11U)
#define DMA_EEI_EEI11_WIDTH                    (1U)
#define DMA_EEI_EEI11(x)                       (((uint32)(((uint32)(x)) << DMA_EEI_EEI11_SHIFT)) & DMA_EEI_EEI11_MASK)

#define DMA_EEI_EEI12_MASK                     (0x1000U)
#define DMA_EEI_EEI12_SHIFT                    (12U)
#define DMA_EEI_EEI12_WIDTH                    (1U)
#define DMA_EEI_EEI12(x)                       (((uint32)(((uint32)(x)) << DMA_EEI_EEI12_SHIFT)) & DMA_EEI_EEI12_MASK)

#define DMA_EEI_EEI13_MASK                     (0x2000U)
#define DMA_EEI_EEI13_SHIFT                    (13U)
#define DMA_EEI_EEI13_WIDTH                    (1U)
#define DMA_EEI_EEI13(x)                       (((uint32)(((uint32)(x)) << DMA_EEI_EEI13_SHIFT)) & DMA_EEI_EEI13_MASK)

#define DMA_EEI_EEI14_MASK                     (0x4000U)
#define DMA_EEI_EEI14_SHIFT                    (14U)
#define DMA_EEI_EEI14_WIDTH                    (1U)
#define DMA_EEI_EEI14(x)                       (((uint32)(((uint32)(x)) << DMA_EEI_EEI14_SHIFT)) & DMA_EEI_EEI14_MASK)

#define DMA_EEI_EEI15_MASK                     (0x8000U)
#define DMA_EEI_EEI15_SHIFT                    (15U)
#define DMA_EEI_EEI15_WIDTH                    (1U)
#define DMA_EEI_EEI15(x)                       (((uint32)(((uint32)(x)) << DMA_EEI_EEI15_SHIFT)) & DMA_EEI_EEI15_MASK)
/*! @} */

/*! @name CEEI - Clear Enable Error Interrupt */
/*! @{ */

#define DMA_CEEI_CEEI_MASK                     (0xFU)
#define DMA_CEEI_CEEI_SHIFT                    (0U)
#define DMA_CEEI_CEEI_WIDTH                    (4U)
#define DMA_CEEI_CEEI(x)                       (((uint8)(((uint8)(x)) << DMA_CEEI_CEEI_SHIFT)) & DMA_CEEI_CEEI_MASK)

#define DMA_CEEI_CAEE_MASK                     (0x40U)
#define DMA_CEEI_CAEE_SHIFT                    (6U)
#define DMA_CEEI_CAEE_WIDTH                    (1U)
#define DMA_CEEI_CAEE(x)                       (((uint8)(((uint8)(x)) << DMA_CEEI_CAEE_SHIFT)) & DMA_CEEI_CAEE_MASK)

#define DMA_CEEI_NOP_MASK                      (0x80U)
#define DMA_CEEI_NOP_SHIFT                     (7U)
#define DMA_CEEI_NOP_WIDTH                     (1U)
#define DMA_CEEI_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_CEEI_NOP_SHIFT)) & DMA_CEEI_NOP_MASK)
/*! @} */

/*! @name SEEI - Set Enable Error Interrupt */
/*! @{ */

#define DMA_SEEI_SEEI_MASK                     (0xFU)
#define DMA_SEEI_SEEI_SHIFT                    (0U)
#define DMA_SEEI_SEEI_WIDTH                    (4U)
#define DMA_SEEI_SEEI(x)                       (((uint8)(((uint8)(x)) << DMA_SEEI_SEEI_SHIFT)) & DMA_SEEI_SEEI_MASK)

#define DMA_SEEI_SAEE_MASK                     (0x40U)
#define DMA_SEEI_SAEE_SHIFT                    (6U)
#define DMA_SEEI_SAEE_WIDTH                    (1U)
#define DMA_SEEI_SAEE(x)                       (((uint8)(((uint8)(x)) << DMA_SEEI_SAEE_SHIFT)) & DMA_SEEI_SAEE_MASK)

#define DMA_SEEI_NOP_MASK                      (0x80U)
#define DMA_SEEI_NOP_SHIFT                     (7U)
#define DMA_SEEI_NOP_WIDTH                     (1U)
#define DMA_SEEI_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_SEEI_NOP_SHIFT)) & DMA_SEEI_NOP_MASK)
/*! @} */

/*! @name CERQ - Clear Enable Request */
/*! @{ */

#define DMA_CERQ_CERQ_MASK                     (0xFU)
#define DMA_CERQ_CERQ_SHIFT                    (0U)
#define DMA_CERQ_CERQ_WIDTH                    (4U)
#define DMA_CERQ_CERQ(x)                       (((uint8)(((uint8)(x)) << DMA_CERQ_CERQ_SHIFT)) & DMA_CERQ_CERQ_MASK)

#define DMA_CERQ_CAER_MASK                     (0x40U)
#define DMA_CERQ_CAER_SHIFT                    (6U)
#define DMA_CERQ_CAER_WIDTH                    (1U)
#define DMA_CERQ_CAER(x)                       (((uint8)(((uint8)(x)) << DMA_CERQ_CAER_SHIFT)) & DMA_CERQ_CAER_MASK)

#define DMA_CERQ_NOP_MASK                      (0x80U)
#define DMA_CERQ_NOP_SHIFT                     (7U)
#define DMA_CERQ_NOP_WIDTH                     (1U)
#define DMA_CERQ_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_CERQ_NOP_SHIFT)) & DMA_CERQ_NOP_MASK)
/*! @} */

/*! @name SERQ - Set Enable Request */
/*! @{ */

#define DMA_SERQ_SERQ_MASK                     (0xFU)
#define DMA_SERQ_SERQ_SHIFT                    (0U)
#define DMA_SERQ_SERQ_WIDTH                    (4U)
#define DMA_SERQ_SERQ(x)                       (((uint8)(((uint8)(x)) << DMA_SERQ_SERQ_SHIFT)) & DMA_SERQ_SERQ_MASK)

#define DMA_SERQ_SAER_MASK                     (0x40U)
#define DMA_SERQ_SAER_SHIFT                    (6U)
#define DMA_SERQ_SAER_WIDTH                    (1U)
#define DMA_SERQ_SAER(x)                       (((uint8)(((uint8)(x)) << DMA_SERQ_SAER_SHIFT)) & DMA_SERQ_SAER_MASK)

#define DMA_SERQ_NOP_MASK                      (0x80U)
#define DMA_SERQ_NOP_SHIFT                     (7U)
#define DMA_SERQ_NOP_WIDTH                     (1U)
#define DMA_SERQ_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_SERQ_NOP_SHIFT)) & DMA_SERQ_NOP_MASK)
/*! @} */

/*! @name CDNE - Clear DONE Status Bit */
/*! @{ */

#define DMA_CDNE_CDNE_MASK                     (0xFU)
#define DMA_CDNE_CDNE_SHIFT                    (0U)
#define DMA_CDNE_CDNE_WIDTH                    (4U)
#define DMA_CDNE_CDNE(x)                       (((uint8)(((uint8)(x)) << DMA_CDNE_CDNE_SHIFT)) & DMA_CDNE_CDNE_MASK)

#define DMA_CDNE_CADN_MASK                     (0x40U)
#define DMA_CDNE_CADN_SHIFT                    (6U)
#define DMA_CDNE_CADN_WIDTH                    (1U)
#define DMA_CDNE_CADN(x)                       (((uint8)(((uint8)(x)) << DMA_CDNE_CADN_SHIFT)) & DMA_CDNE_CADN_MASK)

#define DMA_CDNE_NOP_MASK                      (0x80U)
#define DMA_CDNE_NOP_SHIFT                     (7U)
#define DMA_CDNE_NOP_WIDTH                     (1U)
#define DMA_CDNE_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_CDNE_NOP_SHIFT)) & DMA_CDNE_NOP_MASK)
/*! @} */

/*! @name SSRT - Set START Bit */
/*! @{ */

#define DMA_SSRT_SSRT_MASK                     (0xFU)
#define DMA_SSRT_SSRT_SHIFT                    (0U)
#define DMA_SSRT_SSRT_WIDTH                    (4U)
#define DMA_SSRT_SSRT(x)                       (((uint8)(((uint8)(x)) << DMA_SSRT_SSRT_SHIFT)) & DMA_SSRT_SSRT_MASK)

#define DMA_SSRT_SAST_MASK                     (0x40U)
#define DMA_SSRT_SAST_SHIFT                    (6U)
#define DMA_SSRT_SAST_WIDTH                    (1U)
#define DMA_SSRT_SAST(x)                       (((uint8)(((uint8)(x)) << DMA_SSRT_SAST_SHIFT)) & DMA_SSRT_SAST_MASK)

#define DMA_SSRT_NOP_MASK                      (0x80U)
#define DMA_SSRT_NOP_SHIFT                     (7U)
#define DMA_SSRT_NOP_WIDTH                     (1U)
#define DMA_SSRT_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_SSRT_NOP_SHIFT)) & DMA_SSRT_NOP_MASK)
/*! @} */

/*! @name CERR - Clear Error */
/*! @{ */

#define DMA_CERR_CERR_MASK                     (0xFU)
#define DMA_CERR_CERR_SHIFT                    (0U)
#define DMA_CERR_CERR_WIDTH                    (4U)
#define DMA_CERR_CERR(x)                       (((uint8)(((uint8)(x)) << DMA_CERR_CERR_SHIFT)) & DMA_CERR_CERR_MASK)

#define DMA_CERR_CAEI_MASK                     (0x40U)
#define DMA_CERR_CAEI_SHIFT                    (6U)
#define DMA_CERR_CAEI_WIDTH                    (1U)
#define DMA_CERR_CAEI(x)                       (((uint8)(((uint8)(x)) << DMA_CERR_CAEI_SHIFT)) & DMA_CERR_CAEI_MASK)

#define DMA_CERR_NOP_MASK                      (0x80U)
#define DMA_CERR_NOP_SHIFT                     (7U)
#define DMA_CERR_NOP_WIDTH                     (1U)
#define DMA_CERR_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_CERR_NOP_SHIFT)) & DMA_CERR_NOP_MASK)
/*! @} */

/*! @name CINT - Clear Interrupt Request */
/*! @{ */

#define DMA_CINT_CINT_MASK                     (0xFU)
#define DMA_CINT_CINT_SHIFT                    (0U)
#define DMA_CINT_CINT_WIDTH                    (4U)
#define DMA_CINT_CINT(x)                       (((uint8)(((uint8)(x)) << DMA_CINT_CINT_SHIFT)) & DMA_CINT_CINT_MASK)

#define DMA_CINT_CAIR_MASK                     (0x40U)
#define DMA_CINT_CAIR_SHIFT                    (6U)
#define DMA_CINT_CAIR_WIDTH                    (1U)
#define DMA_CINT_CAIR(x)                       (((uint8)(((uint8)(x)) << DMA_CINT_CAIR_SHIFT)) & DMA_CINT_CAIR_MASK)

#define DMA_CINT_NOP_MASK                      (0x80U)
#define DMA_CINT_NOP_SHIFT                     (7U)
#define DMA_CINT_NOP_WIDTH                     (1U)
#define DMA_CINT_NOP(x)                        (((uint8)(((uint8)(x)) << DMA_CINT_NOP_SHIFT)) & DMA_CINT_NOP_MASK)
/*! @} */

/*! @name INT - Interrupt Request */
/*! @{ */

#define DMA_INT_INT0_MASK                      (0x1U)
#define DMA_INT_INT0_SHIFT                     (0U)
#define DMA_INT_INT0_WIDTH                     (1U)
#define DMA_INT_INT0(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT0_SHIFT)) & DMA_INT_INT0_MASK)

#define DMA_INT_INT1_MASK                      (0x2U)
#define DMA_INT_INT1_SHIFT                     (1U)
#define DMA_INT_INT1_WIDTH                     (1U)
#define DMA_INT_INT1(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT1_SHIFT)) & DMA_INT_INT1_MASK)

#define DMA_INT_INT2_MASK                      (0x4U)
#define DMA_INT_INT2_SHIFT                     (2U)
#define DMA_INT_INT2_WIDTH                     (1U)
#define DMA_INT_INT2(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT2_SHIFT)) & DMA_INT_INT2_MASK)

#define DMA_INT_INT3_MASK                      (0x8U)
#define DMA_INT_INT3_SHIFT                     (3U)
#define DMA_INT_INT3_WIDTH                     (1U)
#define DMA_INT_INT3(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT3_SHIFT)) & DMA_INT_INT3_MASK)

#define DMA_INT_INT4_MASK                      (0x10U)
#define DMA_INT_INT4_SHIFT                     (4U)
#define DMA_INT_INT4_WIDTH                     (1U)
#define DMA_INT_INT4(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT4_SHIFT)) & DMA_INT_INT4_MASK)

#define DMA_INT_INT5_MASK                      (0x20U)
#define DMA_INT_INT5_SHIFT                     (5U)
#define DMA_INT_INT5_WIDTH                     (1U)
#define DMA_INT_INT5(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT5_SHIFT)) & DMA_INT_INT5_MASK)

#define DMA_INT_INT6_MASK                      (0x40U)
#define DMA_INT_INT6_SHIFT                     (6U)
#define DMA_INT_INT6_WIDTH                     (1U)
#define DMA_INT_INT6(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT6_SHIFT)) & DMA_INT_INT6_MASK)

#define DMA_INT_INT7_MASK                      (0x80U)
#define DMA_INT_INT7_SHIFT                     (7U)
#define DMA_INT_INT7_WIDTH                     (1U)
#define DMA_INT_INT7(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT7_SHIFT)) & DMA_INT_INT7_MASK)

#define DMA_INT_INT8_MASK                      (0x100U)
#define DMA_INT_INT8_SHIFT                     (8U)
#define DMA_INT_INT8_WIDTH                     (1U)
#define DMA_INT_INT8(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT8_SHIFT)) & DMA_INT_INT8_MASK)

#define DMA_INT_INT9_MASK                      (0x200U)
#define DMA_INT_INT9_SHIFT                     (9U)
#define DMA_INT_INT9_WIDTH                     (1U)
#define DMA_INT_INT9(x)                        (((uint32)(((uint32)(x)) << DMA_INT_INT9_SHIFT)) & DMA_INT_INT9_MASK)

#define DMA_INT_INT10_MASK                     (0x400U)
#define DMA_INT_INT10_SHIFT                    (10U)
#define DMA_INT_INT10_WIDTH                    (1U)
#define DMA_INT_INT10(x)                       (((uint32)(((uint32)(x)) << DMA_INT_INT10_SHIFT)) & DMA_INT_INT10_MASK)

#define DMA_INT_INT11_MASK                     (0x800U)
#define DMA_INT_INT11_SHIFT                    (11U)
#define DMA_INT_INT11_WIDTH                    (1U)
#define DMA_INT_INT11(x)                       (((uint32)(((uint32)(x)) << DMA_INT_INT11_SHIFT)) & DMA_INT_INT11_MASK)

#define DMA_INT_INT12_MASK                     (0x1000U)
#define DMA_INT_INT12_SHIFT                    (12U)
#define DMA_INT_INT12_WIDTH                    (1U)
#define DMA_INT_INT12(x)                       (((uint32)(((uint32)(x)) << DMA_INT_INT12_SHIFT)) & DMA_INT_INT12_MASK)

#define DMA_INT_INT13_MASK                     (0x2000U)
#define DMA_INT_INT13_SHIFT                    (13U)
#define DMA_INT_INT13_WIDTH                    (1U)
#define DMA_INT_INT13(x)                       (((uint32)(((uint32)(x)) << DMA_INT_INT13_SHIFT)) & DMA_INT_INT13_MASK)

#define DMA_INT_INT14_MASK                     (0x4000U)
#define DMA_INT_INT14_SHIFT                    (14U)
#define DMA_INT_INT14_WIDTH                    (1U)
#define DMA_INT_INT14(x)                       (((uint32)(((uint32)(x)) << DMA_INT_INT14_SHIFT)) & DMA_INT_INT14_MASK)

#define DMA_INT_INT15_MASK                     (0x8000U)
#define DMA_INT_INT15_SHIFT                    (15U)
#define DMA_INT_INT15_WIDTH                    (1U)
#define DMA_INT_INT15(x)                       (((uint32)(((uint32)(x)) << DMA_INT_INT15_SHIFT)) & DMA_INT_INT15_MASK)
/*! @} */

/*! @name ERR - Error */
/*! @{ */

#define DMA_ERR_ERR0_MASK                      (0x1U)
#define DMA_ERR_ERR0_SHIFT                     (0U)
#define DMA_ERR_ERR0_WIDTH                     (1U)
#define DMA_ERR_ERR0(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR0_SHIFT)) & DMA_ERR_ERR0_MASK)

#define DMA_ERR_ERR1_MASK                      (0x2U)
#define DMA_ERR_ERR1_SHIFT                     (1U)
#define DMA_ERR_ERR1_WIDTH                     (1U)
#define DMA_ERR_ERR1(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR1_SHIFT)) & DMA_ERR_ERR1_MASK)

#define DMA_ERR_ERR2_MASK                      (0x4U)
#define DMA_ERR_ERR2_SHIFT                     (2U)
#define DMA_ERR_ERR2_WIDTH                     (1U)
#define DMA_ERR_ERR2(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR2_SHIFT)) & DMA_ERR_ERR2_MASK)

#define DMA_ERR_ERR3_MASK                      (0x8U)
#define DMA_ERR_ERR3_SHIFT                     (3U)
#define DMA_ERR_ERR3_WIDTH                     (1U)
#define DMA_ERR_ERR3(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR3_SHIFT)) & DMA_ERR_ERR3_MASK)

#define DMA_ERR_ERR4_MASK                      (0x10U)
#define DMA_ERR_ERR4_SHIFT                     (4U)
#define DMA_ERR_ERR4_WIDTH                     (1U)
#define DMA_ERR_ERR4(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR4_SHIFT)) & DMA_ERR_ERR4_MASK)

#define DMA_ERR_ERR5_MASK                      (0x20U)
#define DMA_ERR_ERR5_SHIFT                     (5U)
#define DMA_ERR_ERR5_WIDTH                     (1U)
#define DMA_ERR_ERR5(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR5_SHIFT)) & DMA_ERR_ERR5_MASK)

#define DMA_ERR_ERR6_MASK                      (0x40U)
#define DMA_ERR_ERR6_SHIFT                     (6U)
#define DMA_ERR_ERR6_WIDTH                     (1U)
#define DMA_ERR_ERR6(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR6_SHIFT)) & DMA_ERR_ERR6_MASK)

#define DMA_ERR_ERR7_MASK                      (0x80U)
#define DMA_ERR_ERR7_SHIFT                     (7U)
#define DMA_ERR_ERR7_WIDTH                     (1U)
#define DMA_ERR_ERR7(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR7_SHIFT)) & DMA_ERR_ERR7_MASK)

#define DMA_ERR_ERR8_MASK                      (0x100U)
#define DMA_ERR_ERR8_SHIFT                     (8U)
#define DMA_ERR_ERR8_WIDTH                     (1U)
#define DMA_ERR_ERR8(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR8_SHIFT)) & DMA_ERR_ERR8_MASK)

#define DMA_ERR_ERR9_MASK                      (0x200U)
#define DMA_ERR_ERR9_SHIFT                     (9U)
#define DMA_ERR_ERR9_WIDTH                     (1U)
#define DMA_ERR_ERR9(x)                        (((uint32)(((uint32)(x)) << DMA_ERR_ERR9_SHIFT)) & DMA_ERR_ERR9_MASK)

#define DMA_ERR_ERR10_MASK                     (0x400U)
#define DMA_ERR_ERR10_SHIFT                    (10U)
#define DMA_ERR_ERR10_WIDTH                    (1U)
#define DMA_ERR_ERR10(x)                       (((uint32)(((uint32)(x)) << DMA_ERR_ERR10_SHIFT)) & DMA_ERR_ERR10_MASK)

#define DMA_ERR_ERR11_MASK                     (0x800U)
#define DMA_ERR_ERR11_SHIFT                    (11U)
#define DMA_ERR_ERR11_WIDTH                    (1U)
#define DMA_ERR_ERR11(x)                       (((uint32)(((uint32)(x)) << DMA_ERR_ERR11_SHIFT)) & DMA_ERR_ERR11_MASK)

#define DMA_ERR_ERR12_MASK                     (0x1000U)
#define DMA_ERR_ERR12_SHIFT                    (12U)
#define DMA_ERR_ERR12_WIDTH                    (1U)
#define DMA_ERR_ERR12(x)                       (((uint32)(((uint32)(x)) << DMA_ERR_ERR12_SHIFT)) & DMA_ERR_ERR12_MASK)

#define DMA_ERR_ERR13_MASK                     (0x2000U)
#define DMA_ERR_ERR13_SHIFT                    (13U)
#define DMA_ERR_ERR13_WIDTH                    (1U)
#define DMA_ERR_ERR13(x)                       (((uint32)(((uint32)(x)) << DMA_ERR_ERR13_SHIFT)) & DMA_ERR_ERR13_MASK)

#define DMA_ERR_ERR14_MASK                     (0x4000U)
#define DMA_ERR_ERR14_SHIFT                    (14U)
#define DMA_ERR_ERR14_WIDTH                    (1U)
#define DMA_ERR_ERR14(x)                       (((uint32)(((uint32)(x)) << DMA_ERR_ERR14_SHIFT)) & DMA_ERR_ERR14_MASK)

#define DMA_ERR_ERR15_MASK                     (0x8000U)
#define DMA_ERR_ERR15_SHIFT                    (15U)
#define DMA_ERR_ERR15_WIDTH                    (1U)
#define DMA_ERR_ERR15(x)                       (((uint32)(((uint32)(x)) << DMA_ERR_ERR15_SHIFT)) & DMA_ERR_ERR15_MASK)
/*! @} */

/*! @name HRS - Hardware Request Status */
/*! @{ */

#define DMA_HRS_HRS0_MASK                      (0x1U)
#define DMA_HRS_HRS0_SHIFT                     (0U)
#define DMA_HRS_HRS0_WIDTH                     (1U)
#define DMA_HRS_HRS0(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS0_SHIFT)) & DMA_HRS_HRS0_MASK)

#define DMA_HRS_HRS1_MASK                      (0x2U)
#define DMA_HRS_HRS1_SHIFT                     (1U)
#define DMA_HRS_HRS1_WIDTH                     (1U)
#define DMA_HRS_HRS1(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS1_SHIFT)) & DMA_HRS_HRS1_MASK)

#define DMA_HRS_HRS2_MASK                      (0x4U)
#define DMA_HRS_HRS2_SHIFT                     (2U)
#define DMA_HRS_HRS2_WIDTH                     (1U)
#define DMA_HRS_HRS2(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS2_SHIFT)) & DMA_HRS_HRS2_MASK)

#define DMA_HRS_HRS3_MASK                      (0x8U)
#define DMA_HRS_HRS3_SHIFT                     (3U)
#define DMA_HRS_HRS3_WIDTH                     (1U)
#define DMA_HRS_HRS3(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS3_SHIFT)) & DMA_HRS_HRS3_MASK)

#define DMA_HRS_HRS4_MASK                      (0x10U)
#define DMA_HRS_HRS4_SHIFT                     (4U)
#define DMA_HRS_HRS4_WIDTH                     (1U)
#define DMA_HRS_HRS4(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS4_SHIFT)) & DMA_HRS_HRS4_MASK)

#define DMA_HRS_HRS5_MASK                      (0x20U)
#define DMA_HRS_HRS5_SHIFT                     (5U)
#define DMA_HRS_HRS5_WIDTH                     (1U)
#define DMA_HRS_HRS5(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS5_SHIFT)) & DMA_HRS_HRS5_MASK)

#define DMA_HRS_HRS6_MASK                      (0x40U)
#define DMA_HRS_HRS6_SHIFT                     (6U)
#define DMA_HRS_HRS6_WIDTH                     (1U)
#define DMA_HRS_HRS6(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS6_SHIFT)) & DMA_HRS_HRS6_MASK)

#define DMA_HRS_HRS7_MASK                      (0x80U)
#define DMA_HRS_HRS7_SHIFT                     (7U)
#define DMA_HRS_HRS7_WIDTH                     (1U)
#define DMA_HRS_HRS7(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS7_SHIFT)) & DMA_HRS_HRS7_MASK)

#define DMA_HRS_HRS8_MASK                      (0x100U)
#define DMA_HRS_HRS8_SHIFT                     (8U)
#define DMA_HRS_HRS8_WIDTH                     (1U)
#define DMA_HRS_HRS8(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS8_SHIFT)) & DMA_HRS_HRS8_MASK)

#define DMA_HRS_HRS9_MASK                      (0x200U)
#define DMA_HRS_HRS9_SHIFT                     (9U)
#define DMA_HRS_HRS9_WIDTH                     (1U)
#define DMA_HRS_HRS9(x)                        (((uint32)(((uint32)(x)) << DMA_HRS_HRS9_SHIFT)) & DMA_HRS_HRS9_MASK)

#define DMA_HRS_HRS10_MASK                     (0x400U)
#define DMA_HRS_HRS10_SHIFT                    (10U)
#define DMA_HRS_HRS10_WIDTH                    (1U)
#define DMA_HRS_HRS10(x)                       (((uint32)(((uint32)(x)) << DMA_HRS_HRS10_SHIFT)) & DMA_HRS_HRS10_MASK)

#define DMA_HRS_HRS11_MASK                     (0x800U)
#define DMA_HRS_HRS11_SHIFT                    (11U)
#define DMA_HRS_HRS11_WIDTH                    (1U)
#define DMA_HRS_HRS11(x)                       (((uint32)(((uint32)(x)) << DMA_HRS_HRS11_SHIFT)) & DMA_HRS_HRS11_MASK)

#define DMA_HRS_HRS12_MASK                     (0x1000U)
#define DMA_HRS_HRS12_SHIFT                    (12U)
#define DMA_HRS_HRS12_WIDTH                    (1U)
#define DMA_HRS_HRS12(x)                       (((uint32)(((uint32)(x)) << DMA_HRS_HRS12_SHIFT)) & DMA_HRS_HRS12_MASK)

#define DMA_HRS_HRS13_MASK                     (0x2000U)
#define DMA_HRS_HRS13_SHIFT                    (13U)
#define DMA_HRS_HRS13_WIDTH                    (1U)
#define DMA_HRS_HRS13(x)                       (((uint32)(((uint32)(x)) << DMA_HRS_HRS13_SHIFT)) & DMA_HRS_HRS13_MASK)

#define DMA_HRS_HRS14_MASK                     (0x4000U)
#define DMA_HRS_HRS14_SHIFT                    (14U)
#define DMA_HRS_HRS14_WIDTH                    (1U)
#define DMA_HRS_HRS14(x)                       (((uint32)(((uint32)(x)) << DMA_HRS_HRS14_SHIFT)) & DMA_HRS_HRS14_MASK)

#define DMA_HRS_HRS15_MASK                     (0x8000U)
#define DMA_HRS_HRS15_SHIFT                    (15U)
#define DMA_HRS_HRS15_WIDTH                    (1U)
#define DMA_HRS_HRS15(x)                       (((uint32)(((uint32)(x)) << DMA_HRS_HRS15_SHIFT)) & DMA_HRS_HRS15_MASK)
/*! @} */

/*! @name EARS - Enable Asynchronous Request in Stop */
/*! @{ */

#define DMA_EARS_EDREQ_0_MASK                  (0x1U)
#define DMA_EARS_EDREQ_0_SHIFT                 (0U)
#define DMA_EARS_EDREQ_0_WIDTH                 (1U)
#define DMA_EARS_EDREQ_0(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_0_SHIFT)) & DMA_EARS_EDREQ_0_MASK)

#define DMA_EARS_EDREQ_1_MASK                  (0x2U)
#define DMA_EARS_EDREQ_1_SHIFT                 (1U)
#define DMA_EARS_EDREQ_1_WIDTH                 (1U)
#define DMA_EARS_EDREQ_1(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_1_SHIFT)) & DMA_EARS_EDREQ_1_MASK)

#define DMA_EARS_EDREQ_2_MASK                  (0x4U)
#define DMA_EARS_EDREQ_2_SHIFT                 (2U)
#define DMA_EARS_EDREQ_2_WIDTH                 (1U)
#define DMA_EARS_EDREQ_2(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_2_SHIFT)) & DMA_EARS_EDREQ_2_MASK)

#define DMA_EARS_EDREQ_3_MASK                  (0x8U)
#define DMA_EARS_EDREQ_3_SHIFT                 (3U)
#define DMA_EARS_EDREQ_3_WIDTH                 (1U)
#define DMA_EARS_EDREQ_3(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_3_SHIFT)) & DMA_EARS_EDREQ_3_MASK)

#define DMA_EARS_EDREQ_4_MASK                  (0x10U)
#define DMA_EARS_EDREQ_4_SHIFT                 (4U)
#define DMA_EARS_EDREQ_4_WIDTH                 (1U)
#define DMA_EARS_EDREQ_4(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_4_SHIFT)) & DMA_EARS_EDREQ_4_MASK)

#define DMA_EARS_EDREQ_5_MASK                  (0x20U)
#define DMA_EARS_EDREQ_5_SHIFT                 (5U)
#define DMA_EARS_EDREQ_5_WIDTH                 (1U)
#define DMA_EARS_EDREQ_5(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_5_SHIFT)) & DMA_EARS_EDREQ_5_MASK)

#define DMA_EARS_EDREQ_6_MASK                  (0x40U)
#define DMA_EARS_EDREQ_6_SHIFT                 (6U)
#define DMA_EARS_EDREQ_6_WIDTH                 (1U)
#define DMA_EARS_EDREQ_6(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_6_SHIFT)) & DMA_EARS_EDREQ_6_MASK)

#define DMA_EARS_EDREQ_7_MASK                  (0x80U)
#define DMA_EARS_EDREQ_7_SHIFT                 (7U)
#define DMA_EARS_EDREQ_7_WIDTH                 (1U)
#define DMA_EARS_EDREQ_7(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_7_SHIFT)) & DMA_EARS_EDREQ_7_MASK)

#define DMA_EARS_EDREQ_8_MASK                  (0x100U)
#define DMA_EARS_EDREQ_8_SHIFT                 (8U)
#define DMA_EARS_EDREQ_8_WIDTH                 (1U)
#define DMA_EARS_EDREQ_8(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_8_SHIFT)) & DMA_EARS_EDREQ_8_MASK)

#define DMA_EARS_EDREQ_9_MASK                  (0x200U)
#define DMA_EARS_EDREQ_9_SHIFT                 (9U)
#define DMA_EARS_EDREQ_9_WIDTH                 (1U)
#define DMA_EARS_EDREQ_9(x)                    (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_9_SHIFT)) & DMA_EARS_EDREQ_9_MASK)

#define DMA_EARS_EDREQ_10_MASK                 (0x400U)
#define DMA_EARS_EDREQ_10_SHIFT                (10U)
#define DMA_EARS_EDREQ_10_WIDTH                (1U)
#define DMA_EARS_EDREQ_10(x)                   (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_10_SHIFT)) & DMA_EARS_EDREQ_10_MASK)

#define DMA_EARS_EDREQ_11_MASK                 (0x800U)
#define DMA_EARS_EDREQ_11_SHIFT                (11U)
#define DMA_EARS_EDREQ_11_WIDTH                (1U)
#define DMA_EARS_EDREQ_11(x)                   (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_11_SHIFT)) & DMA_EARS_EDREQ_11_MASK)

#define DMA_EARS_EDREQ_12_MASK                 (0x1000U)
#define DMA_EARS_EDREQ_12_SHIFT                (12U)
#define DMA_EARS_EDREQ_12_WIDTH                (1U)
#define DMA_EARS_EDREQ_12(x)                   (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_12_SHIFT)) & DMA_EARS_EDREQ_12_MASK)

#define DMA_EARS_EDREQ_13_MASK                 (0x2000U)
#define DMA_EARS_EDREQ_13_SHIFT                (13U)
#define DMA_EARS_EDREQ_13_WIDTH                (1U)
#define DMA_EARS_EDREQ_13(x)                   (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_13_SHIFT)) & DMA_EARS_EDREQ_13_MASK)

#define DMA_EARS_EDREQ_14_MASK                 (0x4000U)
#define DMA_EARS_EDREQ_14_SHIFT                (14U)
#define DMA_EARS_EDREQ_14_WIDTH                (1U)
#define DMA_EARS_EDREQ_14(x)                   (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_14_SHIFT)) & DMA_EARS_EDREQ_14_MASK)

#define DMA_EARS_EDREQ_15_MASK                 (0x8000U)
#define DMA_EARS_EDREQ_15_SHIFT                (15U)
#define DMA_EARS_EDREQ_15_WIDTH                (1U)
#define DMA_EARS_EDREQ_15(x)                   (((uint32)(((uint32)(x)) << DMA_EARS_EDREQ_15_SHIFT)) & DMA_EARS_EDREQ_15_MASK)
/*! @} */

/*! @name DCHPRI - Channel Priority */
/*! @{ */

#define DMA_DCHPRI_CHPRI_MASK                  (0xFU)
#define DMA_DCHPRI_CHPRI_SHIFT                 (0U)
#define DMA_DCHPRI_CHPRI_WIDTH                 (4U)
#define DMA_DCHPRI_CHPRI(x)                    (((uint8)(((uint8)(x)) << DMA_DCHPRI_CHPRI_SHIFT)) & DMA_DCHPRI_CHPRI_MASK)

#define DMA_DCHPRI_DPA_MASK                    (0x40U)
#define DMA_DCHPRI_DPA_SHIFT                   (6U)
#define DMA_DCHPRI_DPA_WIDTH                   (1U)
#define DMA_DCHPRI_DPA(x)                      (((uint8)(((uint8)(x)) << DMA_DCHPRI_DPA_SHIFT)) & DMA_DCHPRI_DPA_MASK)

#define DMA_DCHPRI_ECP_MASK                    (0x80U)
#define DMA_DCHPRI_ECP_SHIFT                   (7U)
#define DMA_DCHPRI_ECP_WIDTH                   (1U)
#define DMA_DCHPRI_ECP(x)                      (((uint8)(((uint8)(x)) << DMA_DCHPRI_ECP_SHIFT)) & DMA_DCHPRI_ECP_MASK)
/*! @} */

/*! @name SADDR - TCD Source Address */
/*! @{ */

#define DMA_TCD_SADDR_SADDR_MASK                   (0xFFFFFFFFU)
#define DMA_TCD_SADDR_SADDR_SHIFT                  (0U)
#define DMA_TCD_SADDR_SADDR_WIDTH                  (32U)
#define DMA_TCD_SADDR_SADDR(x)                     (((uint32)(((uint32)(x)) << DMA_TCD_SADDR_SADDR_SHIFT)) & DMA_TCD_SADDR_SADDR_MASK)
/*! @} */

/*! @name SOFF - TCD Signed Source Address Offset */
/*! @{ */

#define DMA_TCD_SOFF_SOFF_MASK                     (0xFFFFU)
#define DMA_TCD_SOFF_SOFF_SHIFT                    (0U)
#define DMA_TCD_SOFF_SOFF_WIDTH                    (16U)
#define DMA_TCD_SOFF_SOFF(x)                       (((uint16)(((uint16)(x)) << DMA_TCD_SOFF_SOFF_SHIFT)) & DMA_TCD_SOFF_SOFF_MASK)
/*! @} */

/*! @name ATTR - TCD Transfer Attributes */
/*! @{ */

#define DMA_TCD_ATTR_DSIZE_MASK                    (0x7U)
#define DMA_TCD_ATTR_DSIZE_SHIFT                   (0U)
#define DMA_TCD_ATTR_DSIZE_WIDTH                   (3U)
#define DMA_TCD_ATTR_DSIZE(x)                      (((uint16)(((uint16)(x)) << DMA_TCD_ATTR_DSIZE_SHIFT)) & DMA_TCD_ATTR_DSIZE_MASK)

#define DMA_TCD_ATTR_DMOD_MASK                     (0xF8U)
#define DMA_TCD_ATTR_DMOD_SHIFT                    (3U)
#define DMA_TCD_ATTR_DMOD_WIDTH                    (5U)
#define DMA_TCD_ATTR_DMOD(x)                       (((uint16)(((uint16)(x)) << DMA_TCD_ATTR_DMOD_SHIFT)) & DMA_TCD_ATTR_DMOD_MASK)

#define DMA_TCD_ATTR_SSIZE_MASK                    (0x700U)
#define DMA_TCD_ATTR_SSIZE_SHIFT                   (8U)
#define DMA_TCD_ATTR_SSIZE_WIDTH                   (3U)
#define DMA_TCD_ATTR_SSIZE(x)                      (((uint16)(((uint16)(x)) << DMA_TCD_ATTR_SSIZE_SHIFT)) & DMA_TCD_ATTR_SSIZE_MASK)

#define DMA_TCD_ATTR_SMOD_MASK                     (0xF800U)
#define DMA_TCD_ATTR_SMOD_SHIFT                    (11U)
#define DMA_TCD_ATTR_SMOD_WIDTH                    (5U)
#define DMA_TCD_ATTR_SMOD(x)                       (((uint16)(((uint16)(x)) << DMA_TCD_ATTR_SMOD_SHIFT)) & DMA_TCD_ATTR_SMOD_MASK)
/*! @} */

/*! @name NBYTES_MLNO - TCD Minor Byte Count (Minor Loop Mapping Disabled) */
/*! @{ */

#define DMA_TCD_NBYTES_MLNO_NBYTES_MASK            (0xFFFFFFFFU)
#define DMA_TCD_NBYTES_MLNO_NBYTES_SHIFT           (0U)
#define DMA_TCD_NBYTES_MLNO_NBYTES_WIDTH           (32U)
#define DMA_TCD_NBYTES_MLNO_NBYTES(x)              (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLNO_NBYTES_SHIFT)) & DMA_TCD_NBYTES_MLNO_NBYTES_MASK)
/*! @} */

/*! @name NBYTES_MLOFFNO - TCD Signed Minor Loop Offset (Minor Loop Mapping Enabled and Offset Disabled) */
/*! @{ */

#define DMA_TCD_NBYTES_MLOFFNO_NBYTES_MASK         (0x3FFFFFFFU)
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES_SHIFT        (0U)
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES_WIDTH        (30U)
#define DMA_TCD_NBYTES_MLOFFNO_NBYTES(x)           (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLOFFNO_NBYTES_SHIFT)) & DMA_TCD_NBYTES_MLOFFNO_NBYTES_MASK)

#define DMA_TCD_NBYTES_MLOFFNO_DMLOE_MASK          (0x40000000U)
#define DMA_TCD_NBYTES_MLOFFNO_DMLOE_SHIFT         (30U)
#define DMA_TCD_NBYTES_MLOFFNO_DMLOE_WIDTH         (1U)
#define DMA_TCD_NBYTES_MLOFFNO_DMLOE(x)            (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLOFFNO_DMLOE_SHIFT)) & DMA_TCD_NBYTES_MLOFFNO_DMLOE_MASK)

#define DMA_TCD_NBYTES_MLOFFNO_SMLOE_MASK          (0x80000000U)
#define DMA_TCD_NBYTES_MLOFFNO_SMLOE_SHIFT         (31U)
#define DMA_TCD_NBYTES_MLOFFNO_SMLOE_WIDTH         (1U)
#define DMA_TCD_NBYTES_MLOFFNO_SMLOE(x)            (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLOFFNO_SMLOE_SHIFT)) & DMA_TCD_NBYTES_MLOFFNO_SMLOE_MASK)
/*! @} */

/*! @name NBYTES_MLOFFYES - TCD Signed Minor Loop Offset (Minor Loop Mapping and Offset Enabled) */
/*! @{ */

#define DMA_TCD_NBYTES_MLOFFYES_NBYTES_MASK        (0x3FFU)
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES_SHIFT       (0U)
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES_WIDTH       (10U)
#define DMA_TCD_NBYTES_MLOFFYES_NBYTES(x)          (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLOFFYES_NBYTES_SHIFT)) & DMA_TCD_NBYTES_MLOFFYES_NBYTES_MASK)

#define DMA_TCD_NBYTES_MLOFFYES_MLOFF_MASK         (0x3FFFFC00U)
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF_SHIFT        (10U)
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF_WIDTH        (20U)
#define DMA_TCD_NBYTES_MLOFFYES_MLOFF(x)           (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLOFFYES_MLOFF_SHIFT)) & DMA_TCD_NBYTES_MLOFFYES_MLOFF_MASK)

#define DMA_TCD_NBYTES_MLOFFYES_DMLOE_MASK         (0x40000000U)
#define DMA_TCD_NBYTES_MLOFFYES_DMLOE_SHIFT        (30U)
#define DMA_TCD_NBYTES_MLOFFYES_DMLOE_WIDTH        (1U)
#define DMA_TCD_NBYTES_MLOFFYES_DMLOE(x)           (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLOFFYES_DMLOE_SHIFT)) & DMA_TCD_NBYTES_MLOFFYES_DMLOE_MASK)

#define DMA_TCD_NBYTES_MLOFFYES_SMLOE_MASK         (0x80000000U)
#define DMA_TCD_NBYTES_MLOFFYES_SMLOE_SHIFT        (31U)
#define DMA_TCD_NBYTES_MLOFFYES_SMLOE_WIDTH        (1U)
#define DMA_TCD_NBYTES_MLOFFYES_SMLOE(x)           (((uint32)(((uint32)(x)) << DMA_TCD_NBYTES_MLOFFYES_SMLOE_SHIFT)) & DMA_TCD_NBYTES_MLOFFYES_SMLOE_MASK)
/*! @} */

/*! @name SLAST - TCD Last Source Address Adjustment */
/*! @{ */

#define DMA_TCD_SLAST_SLAST_MASK                   (0xFFFFFFFFU)
#define DMA_TCD_SLAST_SLAST_SHIFT                  (0U)
#define DMA_TCD_SLAST_SLAST_WIDTH                  (32U)
#define DMA_TCD_SLAST_SLAST(x)                     (((uint32)(((uint32)(x)) << DMA_TCD_SLAST_SLAST_SHIFT)) & DMA_TCD_SLAST_SLAST_MASK)
/*! @} */

/*! @name DADDR - TCD Destination Address */
/*! @{ */

#define DMA_TCD_DADDR_DADDR_MASK                   (0xFFFFFFFFU)
#define DMA_TCD_DADDR_DADDR_SHIFT                  (0U)
#define DMA_TCD_DADDR_DADDR_WIDTH                  (32U)
#define DMA_TCD_DADDR_DADDR(x)                     (((uint32)(((uint32)(x)) << DMA_TCD_DADDR_DADDR_SHIFT)) & DMA_TCD_DADDR_DADDR_MASK)
/*! @} */

/*! @name DOFF - TCD Signed Destination Address Offset */
/*! @{ */

#define DMA_TCD_DOFF_DOFF_MASK                     (0xFFFFU)
#define DMA_TCD_DOFF_DOFF_SHIFT                    (0U)
#define DMA_TCD_DOFF_DOFF_WIDTH                    (16U)
#define DMA_TCD_DOFF_DOFF(x)                       (((uint16)(((uint16)(x)) << DMA_TCD_DOFF_DOFF_SHIFT)) & DMA_TCD_DOFF_DOFF_MASK)
/*! @} */

/*! @name CITER_ELINKNO - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
/*! @{ */

#define DMA_TCD_CITER_ELINKNO_CITER_MASK           (0x7FFFU)
#define DMA_TCD_CITER_ELINKNO_CITER_SHIFT          (0U)
#define DMA_TCD_CITER_ELINKNO_CITER_WIDTH          (15U)
#define DMA_TCD_CITER_ELINKNO_CITER(x)             (((uint16)(((uint16)(x)) << DMA_TCD_CITER_ELINKNO_CITER_SHIFT)) & DMA_TCD_CITER_ELINKNO_CITER_MASK)

#define DMA_TCD_CITER_ELINKNO_ELINK_MASK           (0x8000U)
#define DMA_TCD_CITER_ELINKNO_ELINK_SHIFT          (15U)
#define DMA_TCD_CITER_ELINKNO_ELINK_WIDTH          (1U)
#define DMA_TCD_CITER_ELINKNO_ELINK(x)             (((uint16)(((uint16)(x)) << DMA_TCD_CITER_ELINKNO_ELINK_SHIFT)) & DMA_TCD_CITER_ELINKNO_ELINK_MASK)
/*! @} */

/*! @name CITER_ELINKYES - TCD Current Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
/*! @{ */

#define DMA_TCD_CITER_ELINKYES_CITER_MASK          (0x1FFU)
#define DMA_TCD_CITER_ELINKYES_CITER_SHIFT         (0U)
#define DMA_TCD_CITER_ELINKYES_CITER_WIDTH         (9U)
#define DMA_TCD_CITER_ELINKYES_CITER(x)            (((uint16)(((uint16)(x)) << DMA_TCD_CITER_ELINKYES_CITER_SHIFT)) & DMA_TCD_CITER_ELINKYES_CITER_MASK)

#define DMA_TCD_CITER_ELINKYES_LINKCH_MASK         (0x1E00U)
#define DMA_TCD_CITER_ELINKYES_LINKCH_SHIFT        (9U)
#define DMA_TCD_CITER_ELINKYES_LINKCH_WIDTH        (4U)
#define DMA_TCD_CITER_ELINKYES_LINKCH(x)           (((uint16)(((uint16)(x)) << DMA_TCD_CITER_ELINKYES_LINKCH_SHIFT)) & DMA_TCD_CITER_ELINKYES_LINKCH_MASK)

#define DMA_TCD_CITER_ELINKYES_ELINK_MASK          (0x8000U)
#define DMA_TCD_CITER_ELINKYES_ELINK_SHIFT         (15U)
#define DMA_TCD_CITER_ELINKYES_ELINK_WIDTH         (1U)
#define DMA_TCD_CITER_ELINKYES_ELINK(x)            (((uint16)(((uint16)(x)) << DMA_TCD_CITER_ELINKYES_ELINK_SHIFT)) & DMA_TCD_CITER_ELINKYES_ELINK_MASK)
/*! @} */

/*! @name DLASTSGA - TCD Last Destination Address Adjustment/Scatter Gather Address */
/*! @{ */

#define DMA_TCD_DLASTSGA_DLASTSGA_MASK             (0xFFFFFFFFU)
#define DMA_TCD_DLASTSGA_DLASTSGA_SHIFT            (0U)
#define DMA_TCD_DLASTSGA_DLASTSGA_WIDTH            (32U)
#define DMA_TCD_DLASTSGA_DLASTSGA(x)               (((uint32)(((uint32)(x)) << DMA_TCD_DLASTSGA_DLASTSGA_SHIFT)) & DMA_TCD_DLASTSGA_DLASTSGA_MASK)
/*! @} */

/*! @name CSR - TCD Control and Status */
/*! @{ */

#define DMA_TCD_CSR_START_MASK                     (0x1U)
#define DMA_TCD_CSR_START_SHIFT                    (0U)
#define DMA_TCD_CSR_START_WIDTH                    (1U)
#define DMA_TCD_CSR_START(x)                       (((uint16)(((uint16)(x)) << DMA_TCD_CSR_START_SHIFT)) & DMA_TCD_CSR_START_MASK)

#define DMA_TCD_CSR_INTMAJOR_MASK                  (0x2U)
#define DMA_TCD_CSR_INTMAJOR_SHIFT                 (1U)
#define DMA_TCD_CSR_INTMAJOR_WIDTH                 (1U)
#define DMA_TCD_CSR_INTMAJOR(x)                    (((uint16)(((uint16)(x)) << DMA_TCD_CSR_INTMAJOR_SHIFT)) & DMA_TCD_CSR_INTMAJOR_MASK)

#define DMA_TCD_CSR_INTHALF_MASK                   (0x4U)
#define DMA_TCD_CSR_INTHALF_SHIFT                  (2U)
#define DMA_TCD_CSR_INTHALF_WIDTH                  (1U)
#define DMA_TCD_CSR_INTHALF(x)                     (((uint16)(((uint16)(x)) << DMA_TCD_CSR_INTHALF_SHIFT)) & DMA_TCD_CSR_INTHALF_MASK)

#define DMA_TCD_CSR_DREQ_MASK                      (0x8U)
#define DMA_TCD_CSR_DREQ_SHIFT                     (3U)
#define DMA_TCD_CSR_DREQ_WIDTH                     (1U)
#define DMA_TCD_CSR_DREQ(x)                        (((uint16)(((uint16)(x)) << DMA_TCD_CSR_DREQ_SHIFT)) & DMA_TCD_CSR_DREQ_MASK)

#define DMA_TCD_CSR_ESG_MASK                       (0x10U)
#define DMA_TCD_CSR_ESG_SHIFT                      (4U)
#define DMA_TCD_CSR_ESG_WIDTH                      (1U)
#define DMA_TCD_CSR_ESG(x)                         (((uint16)(((uint16)(x)) << DMA_TCD_CSR_ESG_SHIFT)) & DMA_TCD_CSR_ESG_MASK)

#define DMA_TCD_CSR_MAJORELINK_MASK                (0x20U)
#define DMA_TCD_CSR_MAJORELINK_SHIFT               (5U)
#define DMA_TCD_CSR_MAJORELINK_WIDTH               (1U)
#define DMA_TCD_CSR_MAJORELINK(x)                  (((uint16)(((uint16)(x)) << DMA_TCD_CSR_MAJORELINK_SHIFT)) & DMA_TCD_CSR_MAJORELINK_MASK)

#define DMA_TCD_CSR_ACTIVE_MASK                    (0x40U)
#define DMA_TCD_CSR_ACTIVE_SHIFT                   (6U)
#define DMA_TCD_CSR_ACTIVE_WIDTH                   (1U)
#define DMA_TCD_CSR_ACTIVE(x)                      (((uint16)(((uint16)(x)) << DMA_TCD_CSR_ACTIVE_SHIFT)) & DMA_TCD_CSR_ACTIVE_MASK)

#define DMA_TCD_CSR_DONE_MASK                      (0x80U)
#define DMA_TCD_CSR_DONE_SHIFT                     (7U)
#define DMA_TCD_CSR_DONE_WIDTH                     (1U)
#define DMA_TCD_CSR_DONE(x)                        (((uint16)(((uint16)(x)) << DMA_TCD_CSR_DONE_SHIFT)) & DMA_TCD_CSR_DONE_MASK)

#define DMA_TCD_CSR_MAJORLINKCH_MASK               (0xF00U)
#define DMA_TCD_CSR_MAJORLINKCH_SHIFT              (8U)
#define DMA_TCD_CSR_MAJORLINKCH_WIDTH              (4U)
#define DMA_TCD_CSR_MAJORLINKCH(x)                 (((uint16)(((uint16)(x)) << DMA_TCD_CSR_MAJORLINKCH_SHIFT)) & DMA_TCD_CSR_MAJORLINKCH_MASK)

#define DMA_TCD_CSR_BWC_MASK                       (0xC000U)
#define DMA_TCD_CSR_BWC_SHIFT                      (14U)
#define DMA_TCD_CSR_BWC_WIDTH                      (2U)
#define DMA_TCD_CSR_BWC(x)                         (((uint16)(((uint16)(x)) << DMA_TCD_CSR_BWC_SHIFT)) & DMA_TCD_CSR_BWC_MASK)
/*! @} */

/*! @name BITER_ELINKNO - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Disabled) */
/*! @{ */

#define DMA_TCD_BITER_ELINKNO_BITER_MASK           (0x7FFFU)
#define DMA_TCD_BITER_ELINKNO_BITER_SHIFT          (0U)
#define DMA_TCD_BITER_ELINKNO_BITER_WIDTH          (15U)
#define DMA_TCD_BITER_ELINKNO_BITER(x)             (((uint16)(((uint16)(x)) << DMA_TCD_BITER_ELINKNO_BITER_SHIFT)) & DMA_TCD_BITER_ELINKNO_BITER_MASK)

#define DMA_TCD_BITER_ELINKNO_ELINK_MASK           (0x8000U)
#define DMA_TCD_BITER_ELINKNO_ELINK_SHIFT          (15U)
#define DMA_TCD_BITER_ELINKNO_ELINK_WIDTH          (1U)
#define DMA_TCD_BITER_ELINKNO_ELINK(x)             (((uint16)(((uint16)(x)) << DMA_TCD_BITER_ELINKNO_ELINK_SHIFT)) & DMA_TCD_BITER_ELINKNO_ELINK_MASK)
/*! @} */

/*! @name BITER_ELINKYES - TCD Beginning Minor Loop Link, Major Loop Count (Channel Linking Enabled) */
/*! @{ */

#define DMA_TCD_BITER_ELINKYES_BITER_MASK          (0x1FFU)
#define DMA_TCD_BITER_ELINKYES_BITER_SHIFT         (0U)
#define DMA_TCD_BITER_ELINKYES_BITER_WIDTH         (9U)
#define DMA_TCD_BITER_ELINKYES_BITER(x)            (((uint16)(((uint16)(x)) << DMA_TCD_BITER_ELINKYES_BITER_SHIFT)) & DMA_TCD_BITER_ELINKYES_BITER_MASK)

#define DMA_TCD_BITER_ELINKYES_LINKCH_MASK         (0x1E00U)
#define DMA_TCD_BITER_ELINKYES_LINKCH_SHIFT        (9U)
#define DMA_TCD_BITER_ELINKYES_LINKCH_WIDTH        (4U)
#define DMA_TCD_BITER_ELINKYES_LINKCH(x)           (((uint16)(((uint16)(x)) << DMA_TCD_BITER_ELINKYES_LINKCH_SHIFT)) & DMA_TCD_BITER_ELINKYES_LINKCH_MASK)

#define DMA_TCD_BITER_ELINKYES_ELINK_MASK          (0x8000U)
#define DMA_TCD_BITER_ELINKYES_ELINK_SHIFT         (15U)
#define DMA_TCD_BITER_ELINKYES_ELINK_WIDTH         (1U)
#define DMA_TCD_BITER_ELINKYES_ELINK(x)            (((uint16)(((uint16)(x)) << DMA_TCD_BITER_ELINKYES_ELINK_SHIFT)) & DMA_TCD_BITER_ELINKYES_ELINK_MASK)
/*! @} */

/*==================================================================================================
DMA MP HWV2 STRUCTURE
==================================================================================================*/
typedef struct {
__IO uint32 reg_CR;                                /**< Control Register, offset: 0x0 */
__I  uint32 reg_ES;                                /**< Error Status Register, offset: 0x4 */
uint8 RESERVED_0[4];
__IO uint32 reg_ERQ;                               /**< Enable Request Register, offset: 0xC */
uint8 RESERVED_1[4];
__IO uint32 reg_EEI;                               /**< Enable Error Interrupt Register, offset: 0x14 */
__O  uint8  reg_CEEI;                               /**< Clear Enable Error Interrupt Register, offset: 0x18 */
__O  uint8  reg_SEEI;                               /**< Set Enable Error Interrupt Register, offset: 0x19 */
__O  uint8  reg_CERQ;                               /**< Clear Enable Request Register, offset: 0x1A */
__O  uint8  reg_SERQ;                               /**< Set Enable Request Register, offset: 0x1B */
__O  uint8  reg_CDNE;                               /**< Clear DONE Status Bit Register, offset: 0x1C */
__O  uint8  reg_SSRT;                               /**< Set START Bit Register, offset: 0x1D */
__O  uint8  reg_CERR;                               /**< Clear Error Register, offset: 0x1E */
__O  uint8  reg_CINT;                               /**< Clear Interrupt Request Register, offset: 0x1F */
uint8 RESERVED_2[4];
__IO uint32 reg_INT;                               /**< Interrupt Request Register, offset: 0x24 */
uint8 RESERVED_3[4];
__IO uint32 reg_ERR;                               /**< Error Register, offset: 0x2C */
uint8 RESERVED_4[4];
__I  uint32 reg_HRS;                               /**< Hardware Request Status Register, offset: 0x34 */
uint8 RESERVED_5[12];
__IO uint32 reg_EARS;                              /**< Enable Asynchronous Request in Stop Register, offset: 0x44 */
uint8 RESERVED_6[184];
__IO uint8  reg_DCHPRI[EDMA2_DCHPRI_COUNT];        /**< Channel n Priority Register, array offset: 0x100, array step: 0x1 */
uint8 RESERVED_7[3824];
} Dma_Ip_Hwv2InstRegType;

/*==================================================================================================
DMA HWV2 STRUCTURE
==================================================================================================*/

typedef struct {
Dma_Ip_TcdRegType tTcdReg;
} Dma_Ip_Hwv2ChTcdRegType;

#if (DMA_IP_TCD_NOT_ALIGNED == STD_OFF)
typedef struct {
struct {
Dma_Ip_Hwv2ChTcdRegType tChTcdReg;
} TCD_RSV[DMA_IP_HWV2_TCD_NOF_CH];
} Dma_Ip_Hwv2TcdArrayType;
#endif



#ifdef __cplusplus
}
#endif
/** @} */

#endif  /* #ifndef DMA_IP_CFG_DEVICE_REGISTERS_H_ */
