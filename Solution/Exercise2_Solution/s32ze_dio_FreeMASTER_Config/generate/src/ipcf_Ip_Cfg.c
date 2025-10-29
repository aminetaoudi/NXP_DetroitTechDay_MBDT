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
#if defined(__cplusplus)
extern "C"{
#endif

#include "ipc-types.h"
#include "ipcf_Ip_Cfg.h"

/**
 * SOURCE FILE VERSION INFORMATION
 */
#define IPCF_IP_CFG_VENDOR_ID_C                    43
#define IPCF_IP_CFG_MODULE_ID_C                    255
#define IPCF_IP_CFG_AR_RELEASE_MAJOR_VERSION_C     4
#define IPCF_IP_CFG_AR_RELEASE_MINOR_VERSION_C     7
#define IPCF_IP_CFG_AR_RELEASE_REVISION_VERSION_C  0
#define IPCF_IP_CFG_SW_MAJOR_VERSION_C             1
#define IPCF_IP_CFG_SW_MINOR_VERSION_C             0
#define IPCF_IP_CFG_SW_PATCH_VERSION_C             0

/**
 * FILE VERSION CHECKS
 */
#if (IPCF_IP_CFG_VENDOR_ID_C != IPC_TYPES_VENDOR_ID)
	#error "ipcf_Ip_Cfg.c and ipc-types.h have different vendor ids"
#endif
#if ((IPCF_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != IPC_TYPES_AR_RELEASE_MAJOR_VERSION) || \
	(IPCF_IP_CFG_AR_RELEASE_MINOR_VERSION_C != IPC_TYPES_AR_RELEASE_MINOR_VERSION) || \
	(IPCF_IP_CFG_AR_RELEASE_REVISION_VERSION_C != IPC_TYPES_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of ipcf_Ip_Cfg.c and ipc-types.h are different"
#endif
#if ((IPCF_IP_CFG_SW_MAJOR_VERSION_C != IPC_TYPES_SW_MAJOR_VERSION) || \
	(IPCF_IP_CFG_SW_MINOR_VERSION_C != IPC_TYPES_SW_MINOR_VERSION) || \
	(IPCF_IP_CFG_SW_PATCH_VERSION_C != IPC_TYPES_SW_PATCH_VERSION))
#error "Software Version Numbers of ipcf_Ip_Cfg.c and ipc-types.h are different"
#endif

#if (IPCF_IP_CFG_VENDOR_ID_C != IPCF_IP_CFG_VENDOR_ID)
	#error "ipcf_Ip_Cfg.c and ipcf_Ip_Cfg.h have different vendor ids"
#endif
#if ((IPCF_IP_CFG_AR_RELEASE_MAJOR_VERSION_C != IPCF_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
	(IPCF_IP_CFG_AR_RELEASE_MINOR_VERSION_C != IPCF_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
	(IPCF_IP_CFG_AR_RELEASE_REVISION_VERSION_C != IPCF_IP_CFG_AR_RELEASE_REVISION_VERSION))
#error "AutoSar Version Numbers of ipcf_Ip_Cfg.c and ipcf_Ip_Cfg.h are different"
#endif
#if ((IPCF_IP_CFG_SW_MAJOR_VERSION_C != IPCF_IP_CFG_SW_MAJOR_VERSION) || \
	(IPCF_IP_CFG_SW_MINOR_VERSION_C != IPCF_IP_CFG_SW_MINOR_VERSION) || \
	(IPCF_IP_CFG_SW_PATCH_VERSION_C != IPCF_IP_CFG_SW_PATCH_VERSION))
#error "Software Version Numbers of ipcf_Ip_Cfg.c and ipcf_Ip_Cfg.h are different"
#endif

const IPCF_MruTransmitChannelType Ipcf_Mru_TransmitChannelCfg[1] = {
    {
      &Mru_Ip_TransmitChCfg_PlatformMruTransmittingChannel_2
    },
};

/*  Buffer pools are sorted in ascending order according to buffer size.	*/

/* IpcfInstance_0  ManagedChannel_0 buffers configuration */
static struct ipc_shm_pool_cfg ipcf_shm_ipcfinstance_0_cfg_buf_pools0[1] = {

/* IpcfBuffer_0 configuration */
{
	.num_bufs = 8,
	.buf_size = 64,
},

};


static struct ipc_shm_channel_cfg ipcf_shm_cfg_channels0[1] = {
{
	.type = IPC_SHM_MANAGED,
	.ch = {
		.managed = {
			.num_pools = 1,
			.pools = ipcf_shm_ipcfinstance_0_cfg_buf_pools0,
			.rx_cb = data_chan_rx_cb,
			.cb_arg = &rx_cb_arg,
		},
	},
},
};

struct ipc_shm_cfg ipcf_shm_cfg_instances[1] = {
{
	.local_shm_addr = 0x31800000,
	.remote_shm_addr = 0x31810000,
	.shm_size = 0x400,
	.inter_core_tx_irq = IPC_IRQ_MRU,
	.inter_core_rx_irq = RTU_MRU0_INT0_IRQn,
	.mru_tx_channel_id = 2U,
	.mru_rx_channel_id = 1U,
	.local_core = {
		.type = IPC_CORE_R52,
		.index = IPC_CORE_INDEX_0,
	},
	.remote_core = {
		.type = IPC_CORE_R52,
		.index = IPC_CORE_INDEX_1,
	},
	.num_channels = 1U,
	.channels = ipcf_shm_cfg_channels0,
},
};


struct ipc_shm_instances_cfg ipcf_shm_instances_cfg = {
	.num_instances = 1U,
	.shm_cfg = ipcf_shm_cfg_instances
};


#if defined(__cplusplus)
}
#endif
