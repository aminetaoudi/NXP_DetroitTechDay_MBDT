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
*   Copyright 2023-2024 NXP
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
#ifndef IPCF_IP_CFG_DEFINES_H
#define IPCF_IP_CFG_DEFINES_H

#if defined(__cplusplus)
extern "C"{
#endif

/**
 * SOURCE FILE VERSION INFORMATION
 */
#define IPCF_IP_CFG_DEFINES_VENDOR_ID                    43
#define IPCF_IP_CFG_DEFINES_MODULE_ID                    255
#define IPCF_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define IPCF_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     7
#define IPCF_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define IPCF_IP_CFG_DEFINES_SW_MAJOR_VERSION             1
#define IPCF_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define IPCF_IP_CFG_DEFINES_SW_PATCH_VERSION             0

/*
* @brief            Pre-processor switch for enabling the default error detection and reporting to the DET.
*                   The detection of default errors is configurable (ON / OFF) at pre-compile time.
*/
#define IPCF_DEV_ERROR_DETECT	(STD_OFF)

/*
* @brief          Enable/Disable the API for reporting the Dem Error.
*/
#define IPCF_DEM_ERROR_REPORT_STATUS	(STD_OFF)

/*
* @brief          Support for version info API.
* @details        Switches the Ipcf_GetVersionInfo() API ON or OFF.
*/
#define IPCF_VERSION_INFO_API	(STD_OFF)

/*
* @brief			Unmanaged Channels IDs
*/

/*
* @brief			Managed Channels IDs
*/
#define IPCFINSTANCE_0_MANAGEDCHANNEL_0       0U

/*
* @brief			IPCF instances names
*/
#define IpcfInstance_0       0U

/*
* @brief			IPCF instances maximum number defined in configuration
*/
#define IPC_SHM_MAX_INSTANCES       1U

/*
* @brief			IPCF memory size per instance
*/
#define IPC_SHM_MEM_SIZE_IpcfInstance_0       0x000002b0

/*
* @brief			Maximum number of shared memory channels defined in configuration
*/
#define IPC_SHM_MAX_CHANNELS       1U

/*
* @brief			Maximum number of buffer pools that can be configured for a managed channel
*/
#define IPC_SHM_MAX_POOLS       1U

/*
* @brief			Maximum number of buffers per pool
*/
#define IPC_SHM_MAX_BUFS_PER_POOL       8U

#if defined(__cplusplus)
}
#endif

#endif /* IPCF_IP_CFG_DEFINES_H */
