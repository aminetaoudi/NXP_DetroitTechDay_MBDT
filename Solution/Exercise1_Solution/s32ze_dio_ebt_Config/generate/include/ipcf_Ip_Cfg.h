/*==============================================================================
*   Project              : Ipcf
*   Platform             : CORTEXM
*   Peripheral           : none
*   Dependencies         : none
*
*   Autosar Version      : 4.7.0
*   Autosar Revision     : ASR_REL_4_7_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32ZE_RTD_1_0_0_D2309_ASR_REL_4_7_REV_0000_20230928
*
*   Copyright 2023 NXP
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be 
*   used strictly in accordance with the applicable license terms.  By expressly 
*   accepting such terms or by downloading, installing, activating and/or otherwise 
*   using the software, you are agreeing that you have read, and that you agree to 
*   comply with and are bound by, such license terms.  If you do not agree to be 
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==============================================================================*/
#ifndef IPCF_IP_CFG_H
#define IPCF_IP_CFG_H

#if defined(__cplusplus)
extern "C"{
#endif

#include "Mru_Ip.h"

/**
 * SOURCE FILE VERSION INFORMATION
 */
#define IPCF_IP_CFG_VENDOR_ID                    43
#define IPCF_IP_CFG_MODULE_ID                    255
#define IPCF_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define IPCF_IP_CFG_AR_RELEASE_MINOR_VERSION     7
#define IPCF_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define IPCF_IP_CFG_SW_MAJOR_VERSION             1
#define IPCF_IP_CFG_SW_MINOR_VERSION             0
#define IPCF_IP_CFG_SW_PATCH_VERSION             0

/**
 * FILE VERSION CHECKS
 */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
#if ((IPCF_IP_CFG_AR_RELEASE_MAJOR_VERSION != CDD_PLATFORM_MRU_IP_AR_RELEASE_MAJOR_VERSION) || \
     (IPCF_IP_CFG_AR_RELEASE_MINOR_VERSION != CDD_PLATFORM_MRU_IP_AR_RELEASE_MINOR_VERSION) \
    )
#error "AutoSar Version Numbers of ipcf_Ip_Cfg.h and Mru_Ip.h are different"
#endif
#endif

/*
* @brief            IPCF configuration IPCF_MruTransmitChannelType
*
*/
typedef struct
{
	const Mru_Ip_TransmitChannelType *MruTransmitChCfg;
} IPCF_MruTransmitChannelType;

/* IPCF MRU configuration for all instances */
extern const IPCF_MruTransmitChannelType Ipcf_Mru_TransmitChannelCfg[];

/*
* @brief            IPCF configuration for all instances
*
*/
extern struct ipc_shm_instances_cfg ipcf_shm_instances_cfg;

/* Unmanaged channel callback functions */


/* Mananged channel callback functions */
void data_chan_rx_cb(void *arg, const uint8 instance, uint8 chan_id, void *buf, uint32 size);

#ifdef USING_OS_AUTOSAROS
#define IPCF_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ipcf_MemMap.h"
#endif


/* Unmanaged channel callback function arguments */


/* Managed channel callback functions arguments */
extern const void* rx_cb_arg;

#ifdef USING_OS_AUTOSAROS
#define IPCF_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Ipcf_MemMap.h"
#endif

#if defined(__cplusplus)
}
#endif

#endif /* CDD_IPCF_CFG_H */
