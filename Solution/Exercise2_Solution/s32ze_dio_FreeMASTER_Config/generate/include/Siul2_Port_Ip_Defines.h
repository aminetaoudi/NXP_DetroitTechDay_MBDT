/*==================================================================================================
*   Project              : RTD AUTOSAR 4.7
*   Platform             : CORTEXM
*   Peripheral           : SIUL2
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

#ifndef SIUL2_PORT_IP_DEFINES
#define SIUL2_PORT_IP_DEFINES

/**
*   @file    Siul2_Port_Ip_Defines.h
*
*   @addtogroup Port_CFG
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
#include "S32E2_SIUL2.h"
#include "S32E2_SIUL2_AE.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define SIUL2_PORT_IP_DEFINES_VENDOR_ID_H                       43
#define SIUL2_PORT_IP_DEFINES_AR_RELEASE_MAJOR_VERSION_H        4
#define SIUL2_PORT_IP_DEFINES_AR_RELEASE_MINOR_VERSION_H        7
#define SIUL2_PORT_IP_DEFINES_AR_RELEASE_REVISION_VERSION_H     0
#define SIUL2_PORT_IP_DEFINES_SW_MAJOR_VERSION_H                2
#define SIUL2_PORT_IP_DEFINES_SW_MINOR_VERSION_H                0
#define SIUL2_PORT_IP_DEFINES_SW_PATCH_VERSION_H                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/* S32ZE */
#define SIUL2_PORT_IP_MULTIPLE_SIUL2_INSTANCES

/**
* @brief Number of SIUL2 instances present on the subderivative
*/
#define SIUL2_NUM_SIUL2_INSTANCES_U8   (6)

/**
* @brief Macros defined for the SIUL2 IPV that are protected.
*/
#define MCAL_SIUL2_REG_PROT_AVAILABLE   (STD_ON)

#define PORT_ENABLE_USER_MODE_SUPPORT   (STD_OFF)

/**
* @brief Support for REG_PROT in SIUL2 IP.
*        If the current platform implements REG_PROT for SIUL2 IP, this parameter will be defined, and will enable REG_PROT configuration for SIUL2 IP in PORT drvier
*/
#define PORT_SIUL2_REG_PROT_AVAILABLE   (STD_OFF)

#ifndef MCAL_ENABLE_USER_MODE_SUPPORT
    #ifdef PORT_ENABLE_USER_MODE_SUPPORT
        #if (STD_ON == PORT_ENABLE_USER_MODE_SUPPORT)
            #error MCAL_ENABLE_USER_MODE_SUPPORT is not enabled. For running Port in user mode the MCAL_ENABLE_USER_MODE_SUPPORT needs to be defined
        #endif /* (STD_ON == PORT_ENABLE_USER_MODE_SUPPORT) */
    #endif /* ifdef PORT_ENABLE_USER_MODE_SUPPORT*/
#endif /* ifndef MCAL_ENABLE_USER_MODE_SUPPORT */

/* Pre-processor switch to enable/disable development error detection for Siul2 Ip API */
#define SIUL2_PORT_IP_DEV_ERROR_DETECT                         (STD_ON)

/**
* @brief Defines specifying number of IMCRs for each of the SIUL2 instances on the platform
*/
#define PORT_SIUL2_0_IMCRS_IDX_END_U16     ((uint16)89)
#define PORT_SIUL2_1_IMCRS_IDX_END_U16     ((uint16)209)
#define PORT_SIUL2_3_IMCRS_IDX_END_U16     ((uint16)23)
#define PORT_SIUL2_4_IMCRS_IDX_END_U16     ((uint16)371)
#define PORT_SIUL2_5_IMCRS_IDX_END_U16     ((uint16)474)
#define PORT_SIUL2_AE_IMCRS_IDX_END_U16     ((uint16)287)

/* Virtual wrapper support */
#ifndef PORT_SIUL2_AE_U8
#define PORT_VIRTWRAPPER_SUPPORT                      (STD_OFF)
#else
#define PORT_VIRTWRAPPER_SUPPORT                      (STD_OFF)
#endif /* PORT_SIUL2_AE_U8 */

/*! @brief SIUL2 module has RCVR bit */
#define FEATURE_SIUL2_PORT_IP_HAS_RECEIVER_SELECT             (STD_ON)
/*! @brief SIUL2 module has ODE bit */
#define FEATURE_SIUL2_PORT_IP_HAS_OPEN_DRAIN                  (STD_ON)
/*! @brief SIUL2 module has TRC bit */
#define FEATURE_SIUL2_PORT_IP_HAS_TERMINATION_RESISTOR        (STD_ON)
/*! @brief SIUL2 module has CREF bit */
#define FEATURE_SIUL2_PORT_IP_HAS_CURRENT_REFERENCE_CONTROL   (STD_ON)
/*! @brief SIUL2 module has RXCB bit */
#define FEATURE_SIUL2_PORT_IP_HAS_RX_CURRENT_BOOST            (STD_ON)
/*! @brief SIUL2 module has HYS bit */
#define FEATURE_SIUL2_PORT_IP_HAS_HYSTERESIS                  (STD_ON)
/*! @brief SIUL2 module has APC bit */
#define FEATURE_SIUL2_PORT_IP_HAS_ANALOG_PAD_CONTROL          (STD_ON)

#define SIUL2_0_MSCR_BASE                (IP_SIUL2_0->MSCR)
#define SIUL2_1_MSCR_BASE                (IP_SIUL2_1->MSCR)
#define SIUL2_3_MSCR_BASE                (IP_SIUL2_3->MSCR)
#define SIUL2_4_MSCR_BASE                (IP_SIUL2_4->MSCR)
#define SIUL2_5_MSCR_BASE                (IP_SIUL2_5->MSCR)
#define SIUL2_AE_MSCR_BASE               (IP_SIUL2_AE->MSCR)

/** SIUL2_0 */
/** Peripheral PORTA base pointer. Pins start from PAD_000 to PAD_015. */
#define PORTA                            ((Siul2_Port_Ip_PortType *)(SIUL2_0_MSCR_BASE + 0x00))
/** Peripheral PORTB base pointer. Pins start from PAD_016 to PAD_030. */
#define PORTB                            ((Siul2_Port_Ip_PortType *)(SIUL2_0_MSCR_BASE + 0x10))
/** SIUL2_1 */
/** Peripheral PORTC base pointer. Pins: PAD_031. */
#define PORTC                            ((Siul2_Port_Ip_PortType *)(SIUL2_1_MSCR_BASE + 0x10))
/** Peripheral PORTD base pointer. Pins start from PAD_032 to PAD_047. */
#define PORTD                            ((Siul2_Port_Ip_PortType *)(SIUL2_1_MSCR_BASE + 0x20))
/** Peripheral PORTE base pointer. Pins start from PAD_048 to PAD_063. */
#define PORTE                            ((Siul2_Port_Ip_PortType *)(SIUL2_1_MSCR_BASE + 0x30))
/** Peripheral PORTF base pointer. Pins start from PAD_064 to PAD_079. */
#define PORTF                            ((Siul2_Port_Ip_PortType *)(SIUL2_1_MSCR_BASE + 0x40))
/** Peripheral PORTG base pointer. Pins start from PAD_080 to PAD_091. */
#define PORTG                            ((Siul2_Port_Ip_PortType *)(SIUL2_1_MSCR_BASE + 0x50))
/** SIUL2_4 */
/** Peripheral PORTH base pointer. Pins start from PAD_092 to PAD_095. */
#define PORTH                            ((Siul2_Port_Ip_PortType *)(SIUL2_4_MSCR_BASE + 0x50))
/** Peripheral PORTI base pointer. Pins start from PAD_096 to PAD_111. */
#define PORTI                            ((Siul2_Port_Ip_PortType *)(SIUL2_4_MSCR_BASE + 0x60))
/** Peripheral PORTJ base pointer. Pins start from PAD_112 to PAD_127. */
#define PORTJ                            ((Siul2_Port_Ip_PortType *)(SIUL2_4_MSCR_BASE + 0x70))
/** Peripheral PORTK base pointer. Pins start from PAD_128 to PAD_143. */
#define PORTK                            ((Siul2_Port_Ip_PortType *)(SIUL2_4_MSCR_BASE + 0x80))
/** Peripheral PORTL base pointer. Pins start from PAD_144 to PAD_145. */
#define PORTL                            ((Siul2_Port_Ip_PortType *)(SIUL2_4_MSCR_BASE + 0x90))
/** SIUL2_5 */
/** Peripheral PORTM base pointer. Pins start from PAD_146 to PAD_159. */
#define PORTM                            ((Siul2_Port_Ip_PortType *)(SIUL2_5_MSCR_BASE + 0x90))
/** Peripheral PORTN base pointer. Pins start from PAD_160 to PAD_169. */
#define PORTN                            ((Siul2_Port_Ip_PortType *)(SIUL2_5_MSCR_BASE + 0xA0))
/** SIUL2_0 */
/** Peripheral PORTO base pointer. Pins start from PAD_170 to PAD_173. */
#define PORTO                            ((Siul2_Port_Ip_PortType *)(SIUL2_0_MSCR_BASE + 0xA0))
/** SIUL2_AE */
/** Peripheral PORTAB base pointer. Pins start from PBA_00 to PBB_07 */
#define PORTAB                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x00))
/** Peripheral PORTBD base pointer. Pins start from PBB_08 to PBD_05 */
#define PORTBD                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x10))
/** Peripheral PORTDE base pointer. Pins start from PBD_06 to PBE_07 */
#define PORTDE                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x20))
/** Peripheral PORTYZ base pointer. Pins start from PBY_00 to PBZ_07 */
#define PORTYZ                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x100))
/** Peripheral PORTZX base pointer. Pins start from PBZ_08 to PBX_07 */
#define PORTZX                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x110))
/** Peripheral PORTXV base pointer. Pins start from PBX_08 to PBV_01 */
#define PORTXV                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x120))
/** Peripheral PORTVU base pointer. Pins start from PBV_02 to PBU_06 */
#define PORTVU                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x130))
/** Peripheral PORTU base pointer. Pins start from PBU_07 to PBU_10 */
#define PORTU                            ((Siul2_Port_Ip_PortType *)(SIUL2_AE_MSCR_BASE + 0x140))

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

#endif /* SIUL2_PORT_IP_DEFINES */
