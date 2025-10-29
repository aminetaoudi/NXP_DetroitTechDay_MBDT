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
extern "C" {
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "IntCtrl_Ip_Cfg.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CDD_PLATFORM_INTCTRL_IP_CFG_VENDOR_ID_C                          43
#define CDD_PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION_C                   2
#define CDD_PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION_C                   0
#define CDD_PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION_C                   0
#define CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_MAJOR_VERSION_C           4
#define CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_MINOR_VERSION_C           7
#define CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_REVISION_VERSION_C        0
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_Cfg header file are of the same vendor */
#if (CDD_PLATFORM_INTCTRL_IP_CFG_VENDOR_ID_C != CDD_PLATFORM_INTCTRL_IP_CFG_VENDOR_ID)
    #error "IntCtrl_Ip_Cfg.c and IntCtrl_Ip_Cfg.h have different vendor ids"
#endif
/* Check if current file and IntCtrl_Ip_Cfg header file are of the same Autosar version */
#if ((CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_MAJOR_VERSION_C    != CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_MINOR_VERSION_C    != CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_REVISION_VERSION_C != CDD_PLATFORM_INTCTRL_IP_CFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of IntCtrl_Ip_Cfg.C and IntCtrl_Ip_Cfg.h are different"
#endif
/* Check if current file and IntCtrl_Ip_Cfg header file are of the same Software version */
#if ((CDD_PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION_C != CDD_PLATFORM_INTCTRL_IP_CFG_SW_MAJOR_VERSION) || \
     (CDD_PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION_C != CDD_PLATFORM_INTCTRL_IP_CFG_SW_MINOR_VERSION) || \
     (CDD_PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION_C != CDD_PLATFORM_INTCTRL_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip_Cfg.c and IntCtrl_Ip_Cfg.h are different"
#endif
/*==================================================================================================
                                       GLOBAL VARIABLES
==================================================================================================*/
extern uint32 DEFAULT_VECTOR_0[1U];
extern uint32 DEFAULT_VECTOR_1[1U];
extern uint32 DEFAULT_VECTOR_2[1U];
extern uint32 DEFAULT_VECTOR_3[1U];

#define PLATFORM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#ifdef  PLATFORM_IP_ENABLE_INT_CTRL
#if  (PLATFORM_IP_ENABLE_INT_CTRL == STD_ON)
    #if ((INT_CTRL_IP_CORTEXR == STD_ON) || (INT_CTRL_IP_CORTEXA == STD_ON))
    #if (defined(INT_CTRL_CORE_SPECIFIC_VTABLE) && (INT_CTRL_CORE_SPECIFIC_VTABLE == STD_ON))
IntCtrl_Ip_IrqHandlerType *const R52VtabeRefArray[INT_CTRL_NUM_CORE_IN_RTU] =
{
    (IntCtrl_Ip_IrqHandlerType *)DEFAULT_VECTOR_0,
    (IntCtrl_Ip_IrqHandlerType *)DEFAULT_VECTOR_1,
    (IntCtrl_Ip_IrqHandlerType *)DEFAULT_VECTOR_2,
    (IntCtrl_Ip_IrqHandlerType *)DEFAULT_VECTOR_3
};
    #endif
    #endif
#endif /* PLATFORM_IP_ENABLE_INT_CTRL == STD_ON */
#endif /* PLATFORM_IP_ENABLE_INT_CTRL*/

    
/* List of configurations for interrupts */
static const IntCtrl_Ip_IrqConfigType aIrqConfiguration[] = {
    {RTU_EL1_TIM_IRQn, (boolean)TRUE, 9U, MBDT_Step_Handler},
    {RTU_PIT0_IRQn, (boolean)TRUE, 7U, PIT_0_ISR},
    {RTU_ADC0_EOC_IRQn, (boolean)TRUE, 1U, Adc_Sar_0_Isr},
    {RTU_ADC1_EOC_IRQn, (boolean)TRUE, 2U, Adc_Sar_1_Isr},
    {RTU_LINFLEXD9_IRQn, (boolean)TRUE, 5U, LINFLEXD9_UART_IRQHandler},
    {RTU_CTU_FIFO_3_0_IRQn, (boolean)TRUE, 3U, Ctu_0_FIFO_Isr},
    {RTU_EMIOS1_CH16_IRQn, (boolean)TRUE, 10U, EMIOS1_CH16_IRQ},
    {RTU_EMIOS1_CH19_IRQn, (boolean)TRUE, 10U, EMIOS1_CH19_IRQ},
    {RTU_CE_CAN0_INIT_OR_ERROR_IRQn, (boolean)TRUE, 5U, CAN0_ORED_IRQHandler},
    {RTU_CE_CAN0_RXFIFO_DATA_IRQn, (boolean)TRUE, 5U, CAN0_EnhancedData_IRQHandler},
    {RTU_CE_CAN0_MB_31_0_IRQn, (boolean)TRUE, 5U, CAN0_ORED_0_31_MB_IRQHandler},
    {RTU_CE_CAN0_MB_63_32_IRQn, (boolean)TRUE, 5U, CAN0_ORED_32_63_MB_IRQHandler},
    {RTU_CE_CAN0_MB_95_64_IRQn, (boolean)TRUE, 5U, CAN0_ORED_64_95_MB_IRQHandler},
    {RTU_CE_CAN0_MB_127_96_IRQn, (boolean)TRUE, 5U, CAN0_ORED_96_127_MB_IRQHandler},
    {RTU_MRU0_INT0_IRQn, (boolean)TRUE, 5U, MBDT_RTU_MRU_INT0_Handler},
    {RTU_MRU0_INT1_IRQn, (boolean)TRUE, 5U, MBDT_RTU_MRU_INT1_Handler},
};

/* Configuration structure for interrupt controller */
const IntCtrl_Ip_CtrlConfigType intCtrlConfig = {
    16U,
    
    
    aIrqConfiguration
    
};
    
#define PLATFORM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Platform_MemMap.h"

#ifdef __cplusplus
}
#endif
