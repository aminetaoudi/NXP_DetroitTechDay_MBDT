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

#ifndef INTCTRL_IP_CFG_DEFINES_H_
#define INTCTRL_IP_CFG_DEFINES_H_

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "Std_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_PLATFORM_INTCTRL_IP_CFG_DEFINES_VENDOR_ID                          43
#define CDD_PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MAJOR_VERSION                   2
#define CDD_PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MINOR_VERSION                   0
#define CDD_PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_PATCH_VERSION                   0
#define CDD_PLATFORM_INTCTRL_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION           4
#define CDD_PLATFORM_INTCTRL_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION           7
#define CDD_PLATFORM_INTCTRL_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION        0
/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
 /* IntCtrl settings */
/* CPU to CPU interrupt (MSI) routing through MSCM */

        #include "S32E2_COMMON.h"
        #include "S32E2_GIC.h"
        #include "S32E2_MPU.h"
        #include "S32E2_SCB.h"
        #include "S32E2_MSCM.h"
        #include "S32E2_NVIC.h"
            #define IRQn_Type RTU_IRQn_Type
        #define INT_CTRL_CORE_SPECIFIC_VTABLE (STD_ON)
        #define INT_CTRL_MSCM_MAP_GICID         60
        #define INT_CTRL_IP_GIC500_MIN_SPI_ID   (32U)
        #define INT_CTRL_NUM_CORE_IN_RTU         (4U)
            
 /* IntCtrl settings */

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/
 /* IntCtrl settings */
/* Development error detection */
#define INT_CTRL_IP_DEV_ERROR_DETECT  (STD_ON)


/* VTOR address configuration enable */
#define INT_CTRL_IP_ENABLE_VTOR_CONFIG             (STD_OFF)

/* System interrupt routing through MSCM */
#define INT_CTRL_IP_MSCM_SYSTEM_INTERRUPT_ROUTER  (STD_OFF)

/* INCT CTRL IP standalone APIs */
#define INT_CTRL_IP_STANDALONE_APIS               (STD_ON)
        /* First implemented interrupt vector */
#define INT_CTRL_IP_IRQ_MIN                       (RTU_SGI0_IRQn)
    
/* Number of gic priority bits implemented */
#define INT_CTRL_IP_GIC_PRIO_BITS                 (5U)
/* Last implemented interrupt vector */
#define INT_CTRL_IP_IRQ_MAX                       (RTU_NoC_IRQn)
/* The interrupt counter value */
#define INT_CTRL_IP_IRQ_COUNT                     (802U)
/* Arm Cortex M */
#define INT_CTRL_IP_CORTEXM             (STD_OFF)
/* Arm Cortex M0+ */
#define INT_CTRL_IP_CORTEXM0PLUS        STD_OFF
/* Arm Cortex R */
#define INT_CTRL_IP_CORTEXR             STD_ON
/* Arm Cortex A */
#define INT_CTRL_IP_CORTEXA             STD_OFF
    /* Number of nvic priority bits implemented */
#define INT_CTRL_IP_NVIC_PRIO_BITS                (4U)

/*Interrupt Router Shared Peripheral Routing Control Register*/
#define INT_CTRL_IP_ROUTING_CONTROL_REGISTER      (STD_ON)

/* This instruction invalidates the entire instruction cache or caches */
#define INT_CTRL_IP_INVALIDATE_CACHE              (STD_OFF)

/* User mode support */

#define INTCTRL_PLATFORM_ENABLE_USER_MODE_SUPPORT   (STD_OFF)


/**
* @brief Interrupt Controller feature enablement.
*/
#define PLATFORM_IP_ENABLE_INT_CTRL (STD_ON)

 /* IntCtrl settings */
#endif /* INTCTRL_IP_CFG_DEFINES_H_ */

