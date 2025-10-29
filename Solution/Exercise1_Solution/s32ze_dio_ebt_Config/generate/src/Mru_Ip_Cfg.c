/**
*   @file    Mru_Ip_Cfg.c
*   @version 2.0.0
*
*   @brief   AUTOSAR Platform - Pre-Compile(PC) configuration file code template.
*   @details Code template for Pre-Compile(PC) configuration file generation.
*
*   @addtogroup MRU_IP_DRIVER_CONFIGURATION Mru Ip Driver Configuration
*   @{
*/
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
#include "Mru_Ip.h"
/*==================================================================================================
*                                    SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define CDD_PLATFORM_MRU_IP_VENDOR_ID_CFG_C                        43
#define CDD_PLATFORM_MRU_IP_AR_RELEASE_MAJOR_VERSION_CFG_C         4
#define CDD_PLATFORM_MRU_IP_AR_RELEASE_MINOR_VERSION_CFG_C         7
#define CDD_PLATFORM_MRU_IP_AR_RELEASE_REVISION_VERSION_CFG_C      0
#define CDD_PLATFORM_MRU_IP_SW_MAJOR_VERSION_CFG_C                 2
#define CDD_PLATFORM_MRU_IP_SW_MINOR_VERSION_CFG_C                 0
#define CDD_PLATFORM_MRU_IP_SW_PATCH_VERSION_CFG_C                 0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Mru_Ip.h and Mru_Ip_Cfg.c are of the same vendor */
#if (CDD_PLATFORM_MRU_IP_VENDOR_ID != CDD_PLATFORM_MRU_IP_VENDOR_ID_CFG_C)
    #error "Mru_Ip.h and Mru_Ip_Cfg.c have different vendor ids"
#endif
/* Check if Mru_Ip.h file and Mru_Ip_Cfg.c file are of the same Autosar version */
#if ((CDD_PLATFORM_MRU_IP_AR_RELEASE_MAJOR_VERSION != CDD_PLATFORM_MRU_IP_AR_RELEASE_MAJOR_VERSION_CFG_C) || \
     (CDD_PLATFORM_MRU_IP_AR_RELEASE_MINOR_VERSION != CDD_PLATFORM_MRU_IP_AR_RELEASE_MINOR_VERSION_CFG_C) || \
     (CDD_PLATFORM_MRU_IP_AR_RELEASE_REVISION_VERSION != CDD_PLATFORM_MRU_IP_AR_RELEASE_REVISION_VERSION_CFG_C))
#error "AutoSar Version Numbers of Mru_Ip.h and Mru_Ip_Cfg.c are different"
#endif
#if ((CDD_PLATFORM_MRU_IP_SW_MAJOR_VERSION != CDD_PLATFORM_MRU_IP_SW_MAJOR_VERSION_CFG_C) || \
     (CDD_PLATFORM_MRU_IP_SW_MINOR_VERSION != CDD_PLATFORM_MRU_IP_SW_MINOR_VERSION_CFG_C) || \
     (CDD_PLATFORM_MRU_IP_SW_PATCH_VERSION != CDD_PLATFORM_MRU_IP_SW_PATCH_VERSION_CFG_C))
#error "Software Version Numbers of Mru_Ip.h and Mru_Ip_Cfg.c are different"
#endif
/*==================================================================================================
*                                        LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
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
#define PLATFORM_START_SEC_CODE
#include "Platform_MemMap.h"
/* List of interrupt notification functions */
extern void OPENAMP_MRU_NOTIFICATION(uint8 RxChannelId, const uint32 * RxBuffer, uint8 BufferSize); /* Interrupt Notification for the receiving channel PlatformMruReceivingChannel_0 */
extern void ipc_shm_mru_notification(uint8 RxChannelId, const uint32 * RxBuffer, uint8 BufferSize); /* Interrupt Notification for the receiving channel PlatformMruReceivingChannel_1 */
extern void ipc_shm_mru_notification(uint8 RxChannelId, const uint32 * RxBuffer, uint8 BufferSize); /* Interrupt Notification for the receiving channel PlatformMruReceivingChannel_2 */
extern void ipc_shm_mru_notification(uint8 RxChannelId, const uint32 * RxBuffer, uint8 BufferSize); /* Interrupt Notification for the receiving channel PlatformMruReceivingChannel_3 */
extern void ipc_shm_mru_notification(uint8 RxChannelId, const uint32 * RxBuffer, uint8 BufferSize); /* Interrupt Notification for the receiving channel PlatformMruReceivingChannel_4 */

#define PLATFORM_STOP_SEC_CODE
#include "Platform_MemMap.h"

#define PLATFORM_START_SEC_CONST_UNSPECIFIED
#include "Platform_MemMap.h"

RTU_MRU_Type* const Mru_Ip_apxRTU_Bases[RTU_MRU_INSTANCE_COUNT] = IP_RTU_MRU_BASE_PTRS;
#define PLATFORM_STOP_SEC_CONST_UNSPECIFIED
#include "Platform_MemMap.h"

#define PLATFORM_START_SEC_VAR_CLEARED_32_NO_CACHEABLE
#include "Platform_MemMap.h"
/* the buffer for the receiving channel PlatformMruReceivingChannel_0 */
static uint32 Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_0[1U];
/* the buffer for the receiving channel PlatformMruReceivingChannel_1 */
static uint32 Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_1[1U];
/* the buffer for the receiving channel PlatformMruReceivingChannel_2 */
static uint32 Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_2[1U];
/* the buffer for the receiving channel PlatformMruReceivingChannel_3 */
static uint32 Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_3[1U];
/* the buffer for the receiving channel PlatformMruReceivingChannel_4 */
static uint32 Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_4[1U];
#define PLATFORM_STOP_SEC_VAR_CLEARED_32_NO_CACHEABLE
#include "Platform_MemMap.h"

#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

/* List of MailBox address used on the receiving channel PlatformMruReceivingChannel_0 */
static volatile const uint32 * const Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_0[] = 
{
    (volatile const uint32 *)&IP_RTU0__MRU_0->CH1_MB0
};
/* List of MailBox ID used on the receiving channel PlatformMruReceivingChannel_0 */
static const uint8 Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_0[1U] =
{
            
            0U
};
/* Configuration for the receiving channel PlatformMruReceivingChannel_0 */
const Mru_Ip_ReceiveChannelType Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_0 =
{
    0U, /* Channel Id */
    MRU_IP_RTU0_MRU0_ID, /* Instance Id */
    0U, /* Channel Index */
    1U, /* Number of MB used */
    Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_0, /* List of MB used */
    (volatile const uint32 * const *)&Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_0[0], /* List of MB address */
    Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_0,
    &OPENAMP_MRU_NOTIFICATION
};
/* List of MailBox address used on the receiving channel PlatformMruReceivingChannel_1 */
static volatile const uint32 * const Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_1[] = 
{
    (volatile const uint32 *)&IP_RTU0__MRU_0->CH2_MB0
};
/* List of MailBox ID used on the receiving channel PlatformMruReceivingChannel_1 */
static const uint8 Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_1[1U] =
{
            
            0U
};
/* Configuration for the receiving channel PlatformMruReceivingChannel_1 */
const Mru_Ip_ReceiveChannelType Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_1 =
{
    1U, /* Channel Id */
    MRU_IP_RTU0_MRU0_ID, /* Instance Id */
    1U, /* Channel Index */
    1U, /* Number of MB used */
    Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_1, /* List of MB used */
    (volatile const uint32 * const *)&Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_1[0], /* List of MB address */
    Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_1,
    &ipc_shm_mru_notification
};
/* List of MailBox address used on the receiving channel PlatformMruReceivingChannel_2 */
static volatile const uint32 * const Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_2[] = 
{
    (volatile const uint32 *)&IP_RTU0__MRU_1->CH1_MB0
};
/* List of MailBox ID used on the receiving channel PlatformMruReceivingChannel_2 */
static const uint8 Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_2[1U] =
{
            
            0U
};
/* Configuration for the receiving channel PlatformMruReceivingChannel_2 */
const Mru_Ip_ReceiveChannelType Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_2 =
{
    2U, /* Channel Id */
    MRU_IP_RTU0_MRU1_ID, /* Instance Id */
    0U, /* Channel Index */
    1U, /* Number of MB used */
    Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_2, /* List of MB used */
    (volatile const uint32 * const *)&Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_2[0], /* List of MB address */
    Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_2,
    &ipc_shm_mru_notification
};
/* List of MailBox address used on the receiving channel PlatformMruReceivingChannel_3 */
static volatile const uint32 * const Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_3[] = 
{
    (volatile const uint32 *)&IP_RTU0__MRU_1->CH2_MB0
};
/* List of MailBox ID used on the receiving channel PlatformMruReceivingChannel_3 */
static const uint8 Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_3[1U] =
{
            
            0U
};
/* Configuration for the receiving channel PlatformMruReceivingChannel_3 */
const Mru_Ip_ReceiveChannelType Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_3 =
{
    3U, /* Channel Id */
    MRU_IP_RTU0_MRU1_ID, /* Instance Id */
    1U, /* Channel Index */
    1U, /* Number of MB used */
    Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_3, /* List of MB used */
    (volatile const uint32 * const *)&Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_3[0], /* List of MB address */
    Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_3,
    &ipc_shm_mru_notification
};
/* List of MailBox address used on the receiving channel PlatformMruReceivingChannel_4 */
static volatile const uint32 * const Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_4[] = 
{
    (volatile const uint32 *)&IP_RTU0__MRU_2->CH1_MB0
};
/* List of MailBox ID used on the receiving channel PlatformMruReceivingChannel_4 */
static const uint8 Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_4[1U] =
{
            
            0U
};
/* Configuration for the receiving channel PlatformMruReceivingChannel_4 */
const Mru_Ip_ReceiveChannelType Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_4 =
{
    4U, /* Channel Id */
    MRU_IP_RTU0_MRU2_ID, /* Instance Id */
    0U, /* Channel Index */
    1U, /* Number of MB used */
    Mru_Ip_ReceiveMBList_PlatformMruReceivingChannel_4, /* List of MB used */
    (volatile const uint32 * const *)&Mru_Ip_ReceiveMBAddList_PlatformMruReceivingChannel_4[0], /* List of MB address */
    Mru_Ip_ReceiveBuffer_PlatformMruReceivingChannel_4,
    &ipc_shm_mru_notification
};
/* Link MailBox to receiving channel configuration for RTU0_MRU0_CH1 */
static const Mru_Ip_MBLinkReceiveChannelType Mru_Ip_MBLinkRevCHCfg_RTU0_MRU0_CH1[2U][NOTIFY_STATUS_COUNT] =
{
    {
            {&Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_0},
            {NULL_PTR}
        },
    {
            {NULL_PTR},
            {NULL_PTR}
        }
};
/* Link MailBox to receiving channel configuration for RTU0_MRU0_CH2 */
static const Mru_Ip_MBLinkReceiveChannelType Mru_Ip_MBLinkRevCHCfg_RTU0_MRU0_CH2[2U][NOTIFY_STATUS_COUNT] =
{
    {
            {&Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_1},
            {NULL_PTR}
        },
    {
            {NULL_PTR},
            {NULL_PTR}
        }
};
/* The receiving channel configuration for RTU0_MRU0 */
static const Mru_Ip_ChannelCfgType Mru_Ip_ChannelCfg_RTU0_MRU0[12U] =
{
    /* Configuration for the channel RTU0_MRU0_CH1 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[0U].CH_CFG0, /* ChCFG0Add */
        RTU_MRU_CH_CFG0_IE_MASK|RTU_MRU_CH_CFG0_MBE0_MASK, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[0U].CH_CFG1, /* ChCFG1Add */
        RTU_MRU_CH_CFG1_MBIC0(INTERRUPT_GROUP_0), /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[0U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        Mru_Ip_MBLinkRevCHCfg_RTU0_MRU0_CH1 /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH2 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[1U].CH_CFG0, /* ChCFG0Add */
        RTU_MRU_CH_CFG0_IE_MASK|RTU_MRU_CH_CFG0_MBE0_MASK, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[1U].CH_CFG1, /* ChCFG1Add */
        RTU_MRU_CH_CFG1_MBIC0(INTERRUPT_GROUP_0), /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[1U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        Mru_Ip_MBLinkRevCHCfg_RTU0_MRU0_CH2 /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH3 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[2U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[2U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[2U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH4 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[3U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[3U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[3U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH5 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[4U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[4U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[4U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH6 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[5U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[5U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[5U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH7 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[6U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[6U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[6U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH8 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[7U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[7U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[7U].CH_MBSTAT, /* ChMBSTATAdd */
        8U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH9 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[8U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[8U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[8U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH10 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[9U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[9U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[9U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH11 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[10U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[10U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[10U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU0_CH12 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[11U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[11U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[11U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    }
};
/* The Hw Unit configuration structure for RTU0_MRU0 */
const Mru_Ip_ConfigType Mru_Ip_HWUnitConfig_RTU0_MRU0 =
{
    MRU_IP_RTU0_MRU0_ID,  /* Instance Id */
    12U,  /* NumChannel */
    Mru_Ip_ChannelCfg_RTU0_MRU0, /* ChannelCfg */
    {
                (volatile const uint32 *)&IP_RTU0__MRU_0->NOTIFY[0], /* NOTIFY[0] Status */
                (volatile const uint32 *)&IP_RTU0__MRU_0->NOTIFY[1] /* NOTIFY[1] Status */
            },
    0U  /* State index */
};
/* Link MailBox to receiving channel configuration for RTU0_MRU1_CH1 */
static const Mru_Ip_MBLinkReceiveChannelType Mru_Ip_MBLinkRevCHCfg_RTU0_MRU1_CH1[2U][NOTIFY_STATUS_COUNT] =
{
    {
            {&Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_2},
            {NULL_PTR}
        },
    {
            {NULL_PTR},
            {NULL_PTR}
        }
};
/* Link MailBox to receiving channel configuration for RTU0_MRU1_CH2 */
static const Mru_Ip_MBLinkReceiveChannelType Mru_Ip_MBLinkRevCHCfg_RTU0_MRU1_CH2[2U][NOTIFY_STATUS_COUNT] =
{
    {
            {&Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_3},
            {NULL_PTR}
        },
    {
            {NULL_PTR},
            {NULL_PTR}
        }
};
/* The receiving channel configuration for RTU0_MRU1 */
static const Mru_Ip_ChannelCfgType Mru_Ip_ChannelCfg_RTU0_MRU1[12U] =
{
    /* Configuration for the channel RTU0_MRU1_CH1 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[0U].CH_CFG0, /* ChCFG0Add */
        RTU_MRU_CH_CFG0_IE_MASK|RTU_MRU_CH_CFG0_MBE0_MASK, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[0U].CH_CFG1, /* ChCFG1Add */
        RTU_MRU_CH_CFG1_MBIC0(INTERRUPT_GROUP_0), /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[0U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        Mru_Ip_MBLinkRevCHCfg_RTU0_MRU1_CH1 /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH2 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[1U].CH_CFG0, /* ChCFG0Add */
        RTU_MRU_CH_CFG0_IE_MASK|RTU_MRU_CH_CFG0_MBE0_MASK, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[1U].CH_CFG1, /* ChCFG1Add */
        RTU_MRU_CH_CFG1_MBIC0(INTERRUPT_GROUP_0), /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[1U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        Mru_Ip_MBLinkRevCHCfg_RTU0_MRU1_CH2 /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH3 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[2U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[2U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[2U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH4 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[3U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[3U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[3U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH5 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[4U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[4U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[4U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH6 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[5U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[5U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[5U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH7 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[6U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[6U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[6U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH8 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[7U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[7U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[7U].CH_MBSTAT, /* ChMBSTATAdd */
        8U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH9 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[8U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[8U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[8U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH10 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[9U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[9U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[9U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH11 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[10U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[10U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[10U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU1_CH12 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[11U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[11U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[11U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    }
};
/* The Hw Unit configuration structure for RTU0_MRU1 */
const Mru_Ip_ConfigType Mru_Ip_HWUnitConfig_RTU0_MRU1 =
{
    MRU_IP_RTU0_MRU1_ID,  /* Instance Id */
    12U,  /* NumChannel */
    Mru_Ip_ChannelCfg_RTU0_MRU1, /* ChannelCfg */
    {
                (volatile const uint32 *)&IP_RTU0__MRU_1->NOTIFY[0], /* NOTIFY[0] Status */
                (volatile const uint32 *)&IP_RTU0__MRU_1->NOTIFY[1] /* NOTIFY[1] Status */
            },
    1U  /* State index */
};
/* Link MailBox to receiving channel configuration for RTU0_MRU2_CH1 */
static const Mru_Ip_MBLinkReceiveChannelType Mru_Ip_MBLinkRevCHCfg_RTU0_MRU2_CH1[2U][NOTIFY_STATUS_COUNT] =
{
    {
            {&Mru_Ip_ReceiveChCfg_PlatformMruReceivingChannel_4},
            {NULL_PTR}
        },
    {
            {NULL_PTR},
            {NULL_PTR}
        }
};
/* The receiving channel configuration for RTU0_MRU2 */
static const Mru_Ip_ChannelCfgType Mru_Ip_ChannelCfg_RTU0_MRU2[12U] =
{
    /* Configuration for the channel RTU0_MRU2_CH1 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[0U].CH_CFG0, /* ChCFG0Add */
        RTU_MRU_CH_CFG0_IE_MASK|RTU_MRU_CH_CFG0_MBE0_MASK, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[0U].CH_CFG1, /* ChCFG1Add */
        RTU_MRU_CH_CFG1_MBIC0(INTERRUPT_GROUP_0), /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[0U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        Mru_Ip_MBLinkRevCHCfg_RTU0_MRU2_CH1 /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH2 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[1U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[1U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[1U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH3 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[2U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[2U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[2U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH4 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[3U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[3U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[3U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH5 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[4U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[4U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[4U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH6 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[5U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[5U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[5U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH7 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[6U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[6U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[6U].CH_MBSTAT, /* ChMBSTATAdd */
        2U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH8 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[7U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[7U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[7U].CH_MBSTAT, /* ChMBSTATAdd */
        8U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH9 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[8U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[8U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[8U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH10 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[9U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[9U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[9U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH11 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[10U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[10U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[10U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    },
    /* Configuration for the channel RTU0_MRU2_CH12 */
    {
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[11U].CH_CFG0, /* ChCFG0Add */
        0U, /* ChCFG0 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[11U].CH_CFG1, /* ChCFG1Add */
        0U, /* ChCFG1 */
        (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[11U].CH_MBSTAT, /* ChMBSTATAdd */
        4U,  /* NumMailbox */
        ((boolean)FALSE), /* bSkipInitChannel */
        NULL_PTR /* ReceiveChCfg */
    }
};
/* The Hw Unit configuration structure for RTU0_MRU2 */
const Mru_Ip_ConfigType Mru_Ip_HWUnitConfig_RTU0_MRU2 =
{
    MRU_IP_RTU0_MRU2_ID,  /* Instance Id */
    12U,  /* NumChannel */
    Mru_Ip_ChannelCfg_RTU0_MRU2, /* ChannelCfg */
    {
                (volatile const uint32 *)&IP_RTU0__MRU_2->NOTIFY[0], /* NOTIFY[0] Status */
                (volatile const uint32 *)&IP_RTU0__MRU_2->NOTIFY[1] /* NOTIFY[1] Status */
            },
    2U  /* State index */
};
/* List of MailBox ID used on the transmitting channel PlatformMruTransmittingChannel_0 */
static const uint8 Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_0[1U] =
{
    0U
};
/* List of MailBox address used on the transmitting channel PlatformMruTransmittingChannel_0 */
static volatile uint32 * const Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_0[] =
{
    (volatile uint32 *)&IP_RTU0__MRU_0->CH1_MB0
};
/* Configuration for the transmitting channel PlatformMruTransmittingChannel_0 */
const Mru_Ip_TransmitChannelType Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_0 =
{
    1U, /* Number of MB used */
    (volatile uint32 * const *)Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_0, /* List of MB address */
    Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_0, /* List of Tx MB */
    (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[0U].CH_MBSTAT, /* ChMBSTATAdd */
    0U, /* LastTxMBIndex */
    ((boolean)FALSE) /* Allow overwriting mailbox */
};
/* List of MailBox ID used on the transmitting channel PlatformMruTransmittingChannel_1 */
static const uint8 Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_1[1U] =
{
    0U
};
/* List of MailBox address used on the transmitting channel PlatformMruTransmittingChannel_1 */
static volatile uint32 * const Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_1[] =
{
    (volatile uint32 *)&IP_RTU0__MRU_0->CH2_MB0
};
/* Configuration for the transmitting channel PlatformMruTransmittingChannel_1 */
const Mru_Ip_TransmitChannelType Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_1 =
{
    1U, /* Number of MB used */
    (volatile uint32 * const *)Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_1, /* List of MB address */
    Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_1, /* List of Tx MB */
    (volatile uint32 *)&IP_RTU0__MRU_0->CHXCONFIG[1U].CH_MBSTAT, /* ChMBSTATAdd */
    0U, /* LastTxMBIndex */
    ((boolean)FALSE) /* Allow overwriting mailbox */
};
/* List of MailBox ID used on the transmitting channel PlatformMruTransmittingChannel_2 */
static const uint8 Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_2[1U] =
{
    0U
};
/* List of MailBox address used on the transmitting channel PlatformMruTransmittingChannel_2 */
static volatile uint32 * const Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_2[] =
{
    (volatile uint32 *)&IP_RTU0__MRU_1->CH1_MB0
};
/* Configuration for the transmitting channel PlatformMruTransmittingChannel_2 */
const Mru_Ip_TransmitChannelType Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_2 =
{
    1U, /* Number of MB used */
    (volatile uint32 * const *)Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_2, /* List of MB address */
    Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_2, /* List of Tx MB */
    (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[0U].CH_MBSTAT, /* ChMBSTATAdd */
    0U, /* LastTxMBIndex */
    ((boolean)FALSE) /* Allow overwriting mailbox */
};
/* List of MailBox ID used on the transmitting channel PlatformMruTransmittingChannel_3 */
static const uint8 Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_3[1U] =
{
    0U
};
/* List of MailBox address used on the transmitting channel PlatformMruTransmittingChannel_3 */
static volatile uint32 * const Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_3[] =
{
    (volatile uint32 *)&IP_RTU0__MRU_1->CH2_MB0
};
/* Configuration for the transmitting channel PlatformMruTransmittingChannel_3 */
const Mru_Ip_TransmitChannelType Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_3 =
{
    1U, /* Number of MB used */
    (volatile uint32 * const *)Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_3, /* List of MB address */
    Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_3, /* List of Tx MB */
    (volatile uint32 *)&IP_RTU0__MRU_1->CHXCONFIG[1U].CH_MBSTAT, /* ChMBSTATAdd */
    0U, /* LastTxMBIndex */
    ((boolean)FALSE) /* Allow overwriting mailbox */
};
/* List of MailBox ID used on the transmitting channel PlatformMruTransmittingChannel_4 */
static const uint8 Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_4[1U] =
{
    0U
};
/* List of MailBox address used on the transmitting channel PlatformMruTransmittingChannel_4 */
static volatile uint32 * const Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_4[] =
{
    (volatile uint32 *)&IP_RTU0__MRU_2->CH1_MB0
};
/* Configuration for the transmitting channel PlatformMruTransmittingChannel_4 */
const Mru_Ip_TransmitChannelType Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_4 =
{
    1U, /* Number of MB used */
    (volatile uint32 * const *)Mru_Ip_TransmitMBAddList_PlatformMruTransmittingChannel_4, /* List of MB address */
    Mru_Ip_TransmitMBList_PlatformMruTransmittingChannel_4, /* List of Tx MB */
    (volatile uint32 *)&IP_RTU0__MRU_2->CHXCONFIG[0U].CH_MBSTAT, /* ChMBSTATAdd */
    0U, /* LastTxMBIndex */
    ((boolean)FALSE) /* Allow overwriting mailbox */
};
#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"
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
