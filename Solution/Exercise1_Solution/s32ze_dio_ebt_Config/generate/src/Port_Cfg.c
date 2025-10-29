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

/**
*   @file    Port_Cfg.c
*
*   @addtogroup Port_CFG
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif


/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/
#include "Port.h"

/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/
#define PORT_VENDOR_ID_CFG_C                       43
#define PORT_AR_RELEASE_MAJOR_VERSION_CFG_C        4
#define PORT_AR_RELEASE_MINOR_VERSION_CFG_C        7
#define PORT_AR_RELEASE_REVISION_VERSION_CFG_C     0
#define PORT_SW_MAJOR_VERSION_CFG_C                2
#define PORT_SW_MINOR_VERSION_CFG_C                0
#define PORT_SW_PATCH_VERSION_CFG_C                0

/*=================================================================================================
                                      FILE VERSION CHECKS
=================================================================================================*/
/* Check if Port_Cfg.c and Port.h are of the same Autosar version */
#if (PORT_VENDOR_ID_CFG_C != PORT_VENDOR_ID)
    #error "Port_Cfg.c and Port.h have different vendor ids"
#endif
/* Check if Port_Cfg.c and Port.h are of the same Autosar version */
#if ((PORT_AR_RELEASE_MAJOR_VERSION_CFG_C    != PORT_AR_RELEASE_MAJOR_VERSION) || \
     (PORT_AR_RELEASE_MINOR_VERSION_CFG_C    != PORT_AR_RELEASE_MINOR_VERSION) || \
     (PORT_AR_RELEASE_REVISION_VERSION_CFG_C != PORT_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Port_Cfg.c and Port.h are different"
#endif
/* Check if Port_Cfg.c and Port.h are of the same Software version */
#if ((PORT_SW_MAJOR_VERSION_CFG_C != PORT_SW_MAJOR_VERSION) || \
     (PORT_SW_MINOR_VERSION_CFG_C != PORT_SW_MINOR_VERSION) || \
     (PORT_SW_PATCH_VERSION_CFG_C != PORT_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Port_Cfg.c and Port.h are different"
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/

/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/
#if (STD_ON == PORT_SET_PIN_MODE_API)

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

/**
* @brief Array of elements storing indexes in Port_<SIUL2 Instance>_aInMuxSettings table where IN settings for each pad reside on first SIUL2 instance
*/
static const uint16 Port_SIUL2_0_au16InMuxSettingsIndex[174] =
{
    /* Index to address the input settings for pad 0 */
    (uint16)1, 
    /* Index to address the input settings for pad 1 */
    (uint16)4, 
    /* Index to address the input settings for pad 2 */
    (uint16)9, 
    /* Index to address the input settings for pad 3 */
    (uint16)14, 
    /* Index to address the input settings for pad 4 */
    (uint16)19, 
    /* Index to address the input settings for pad 5 */
    (uint16)22, 
    /* Index to address the input settings for pad 6 */
    (uint16)27, 
    /* Index to address the input settings for pad 7 */
    (uint16)32, 
    /* Index to address the input settings for pad 8 */
    (uint16)36, 
    /* Index to address the input settings for pad 9 */
    (uint16)40, 
    /* Index to address the input settings for pad 10 */
    (uint16)42, 
    /* Index to address the input settings for pad 11 */
    (uint16)43, 
    /* Index to address the input settings for pad 12 */
    (uint16)45, 
    /* Index to address the input settings for pad 13 */
    (uint16)49, 
    /* Index to address the input settings for pad 14 */
    (uint16)54, 
    /* Index to address the input settings for pad 15 */
    (uint16)58, 
    /* Index to address the input settings for pad 16 */
    (uint16)62, 
    /* Index to address the input settings for pad 17 */
    (uint16)66, 
    /* Index to address the input settings for pad 18 */
    (uint16)69, 
    /* Index to address the input settings for pad 19 */
    (uint16)73, 
    /* Index to address the input settings for pad 20 */
    (uint16)76, 
    /* Index to address the input settings for pad 21 */
    (uint16)80, 
    /* Index to address the input settings for pad 22 */
    (uint16)83, 
    /* Index to address the input settings for pad 23 */
    (uint16)87, 
    /* Index to address the input settings for pad 24 */
    (uint16)92, 
    /* Index to address the input settings for pad 25 */
    (uint16)98, 
    /* Index to address the input settings for pad 26 */
    (uint16)103, 
    /* Index to address the input settings for pad 27 */
    (uint16)107, 
    /* Index to address the input settings for pad 28 */
    (uint16)111, 
    /* Index to address the input settings for pad 29 */
    (uint16)115, 
    /* Index to address the input settings for pad 30 */
    (uint16)120, 
    /* Index to address the input settings for pad 31 */
    (uint16)0, 
    /* Index to address the input settings for pad 32 */
    (uint16)0, 
    /* Index to address the input settings for pad 33 */
    (uint16)0, 
    /* Index to address the input settings for pad 34 */
    (uint16)0, 
    /* Index to address the input settings for pad 35 */
    (uint16)0, 
    /* Index to address the input settings for pad 36 */
    (uint16)0, 
    /* Index to address the input settings for pad 37 */
    (uint16)0, 
    /* Index to address the input settings for pad 38 */
    (uint16)0, 
    /* Index to address the input settings for pad 39 */
    (uint16)0, 
    /* Index to address the input settings for pad 40 */
    (uint16)0, 
    /* Index to address the input settings for pad 41 */
    (uint16)0, 
    /* Index to address the input settings for pad 42 */
    (uint16)0, 
    /* Index to address the input settings for pad 43 */
    (uint16)0, 
    /* Index to address the input settings for pad 44 */
    (uint16)0, 
    /* Index to address the input settings for pad 45 */
    (uint16)0, 
    /* Index to address the input settings for pad 46 */
    (uint16)0, 
    /* Index to address the input settings for pad 47 */
    (uint16)0, 
    /* Index to address the input settings for pad 48 */
    (uint16)0, 
    /* Index to address the input settings for pad 49 */
    (uint16)0, 
    /* Index to address the input settings for pad 50 */
    (uint16)0, 
    /* Index to address the input settings for pad 51 */
    (uint16)0, 
    /* Index to address the input settings for pad 52 */
    (uint16)0, 
    /* Index to address the input settings for pad 53 */
    (uint16)0, 
    /* Index to address the input settings for pad 54 */
    (uint16)0, 
    /* Index to address the input settings for pad 55 */
    (uint16)0, 
    /* Index to address the input settings for pad 56 */
    (uint16)0, 
    /* Index to address the input settings for pad 57 */
    (uint16)0, 
    /* Index to address the input settings for pad 58 */
    (uint16)0, 
    /* Index to address the input settings for pad 59 */
    (uint16)0, 
    /* Index to address the input settings for pad 60 */
    (uint16)0, 
    /* Index to address the input settings for pad 61 */
    (uint16)0, 
    /* Index to address the input settings for pad 62 */
    (uint16)0, 
    /* Index to address the input settings for pad 63 */
    (uint16)0, 
    /* Index to address the input settings for pad 64 */
    (uint16)0, 
    /* Index to address the input settings for pad 65 */
    (uint16)0, 
    /* Index to address the input settings for pad 66 */
    (uint16)0, 
    /* Index to address the input settings for pad 67 */
    (uint16)0, 
    /* Index to address the input settings for pad 68 */
    (uint16)0, 
    /* Index to address the input settings for pad 69 */
    (uint16)0, 
    /* Index to address the input settings for pad 70 */
    (uint16)0, 
    /* Index to address the input settings for pad 71 */
    (uint16)0, 
    /* Index to address the input settings for pad 72 */
    (uint16)0, 
    /* Index to address the input settings for pad 73 */
    (uint16)0, 
    /* Index to address the input settings for pad 74 */
    (uint16)0, 
    /* Index to address the input settings for pad 75 */
    (uint16)0, 
    /* Index to address the input settings for pad 76 */
    (uint16)0, 
    /* Index to address the input settings for pad 77 */
    (uint16)0, 
    /* Index to address the input settings for pad 78 */
    (uint16)0, 
    /* Index to address the input settings for pad 79 */
    (uint16)0, 
    /* Index to address the input settings for pad 80 */
    (uint16)0, 
    /* Index to address the input settings for pad 81 */
    (uint16)0, 
    /* Index to address the input settings for pad 82 */
    (uint16)0, 
    /* Index to address the input settings for pad 83 */
    (uint16)0, 
    /* Index to address the input settings for pad 84 */
    (uint16)0, 
    /* Index to address the input settings for pad 85 */
    (uint16)0, 
    /* Index to address the input settings for pad 86 */
    (uint16)0, 
    /* Index to address the input settings for pad 87 */
    (uint16)0, 
    /* Index to address the input settings for pad 88 */
    (uint16)0, 
    /* Index to address the input settings for pad 89 */
    (uint16)0, 
    /* Index to address the input settings for pad 90 */
    (uint16)0, 
    /* Index to address the input settings for pad 91 */
    (uint16)0, 
    /* Index to address the input settings for pad 92 */
    (uint16)0, 
    /* Index to address the input settings for pad 93 */
    (uint16)0, 
    /* Index to address the input settings for pad 94 */
    (uint16)0, 
    /* Index to address the input settings for pad 95 */
    (uint16)0, 
    /* Index to address the input settings for pad 96 */
    (uint16)0, 
    /* Index to address the input settings for pad 97 */
    (uint16)0, 
    /* Index to address the input settings for pad 98 */
    (uint16)0, 
    /* Index to address the input settings for pad 99 */
    (uint16)0, 
    /* Index to address the input settings for pad 100 */
    (uint16)0, 
    /* Index to address the input settings for pad 101 */
    (uint16)0, 
    /* Index to address the input settings for pad 102 */
    (uint16)0, 
    /* Index to address the input settings for pad 103 */
    (uint16)0, 
    /* Index to address the input settings for pad 104 */
    (uint16)0, 
    /* Index to address the input settings for pad 105 */
    (uint16)0, 
    /* Index to address the input settings for pad 106 */
    (uint16)0, 
    /* Index to address the input settings for pad 107 */
    (uint16)0, 
    /* Index to address the input settings for pad 108 */
    (uint16)0, 
    /* Index to address the input settings for pad 109 */
    (uint16)0, 
    /* Index to address the input settings for pad 110 */
    (uint16)0, 
    /* Index to address the input settings for pad 111 */
    (uint16)0, 
    /* Index to address the input settings for pad 112 */
    (uint16)0, 
    /* Index to address the input settings for pad 113 */
    (uint16)0, 
    /* Index to address the input settings for pad 114 */
    (uint16)0, 
    /* Index to address the input settings for pad 115 */
    (uint16)0, 
    /* Index to address the input settings for pad 116 */
    (uint16)0, 
    /* Index to address the input settings for pad 117 */
    (uint16)0, 
    /* Index to address the input settings for pad 118 */
    (uint16)0, 
    /* Index to address the input settings for pad 119 */
    (uint16)0, 
    /* Index to address the input settings for pad 120 */
    (uint16)0, 
    /* Index to address the input settings for pad 121 */
    (uint16)0, 
    /* Index to address the input settings for pad 122 */
    (uint16)0, 
    /* Index to address the input settings for pad 123 */
    (uint16)0, 
    /* Index to address the input settings for pad 124 */
    (uint16)0, 
    /* Index to address the input settings for pad 125 */
    (uint16)0, 
    /* Index to address the input settings for pad 126 */
    (uint16)0, 
    /* Index to address the input settings for pad 127 */
    (uint16)0, 
    /* Index to address the input settings for pad 128 */
    (uint16)0, 
    /* Index to address the input settings for pad 129 */
    (uint16)0, 
    /* Index to address the input settings for pad 130 */
    (uint16)0, 
    /* Index to address the input settings for pad 131 */
    (uint16)0, 
    /* Index to address the input settings for pad 132 */
    (uint16)0, 
    /* Index to address the input settings for pad 133 */
    (uint16)0, 
    /* Index to address the input settings for pad 134 */
    (uint16)0, 
    /* Index to address the input settings for pad 135 */
    (uint16)0, 
    /* Index to address the input settings for pad 136 */
    (uint16)0, 
    /* Index to address the input settings for pad 137 */
    (uint16)0, 
    /* Index to address the input settings for pad 138 */
    (uint16)0, 
    /* Index to address the input settings for pad 139 */
    (uint16)0, 
    /* Index to address the input settings for pad 140 */
    (uint16)0, 
    /* Index to address the input settings for pad 141 */
    (uint16)0, 
    /* Index to address the input settings for pad 142 */
    (uint16)0, 
    /* Index to address the input settings for pad 143 */
    (uint16)0, 
    /* Index to address the input settings for pad 144 */
    (uint16)0, 
    /* Index to address the input settings for pad 145 */
    (uint16)0, 
    /* Index to address the input settings for pad 146 */
    (uint16)0, 
    /* Index to address the input settings for pad 147 */
    (uint16)0, 
    /* Index to address the input settings for pad 148 */
    (uint16)0, 
    /* Index to address the input settings for pad 149 */
    (uint16)0, 
    /* Index to address the input settings for pad 150 */
    (uint16)0, 
    /* Index to address the input settings for pad 151 */
    (uint16)0, 
    /* Index to address the input settings for pad 152 */
    (uint16)0, 
    /* Index to address the input settings for pad 153 */
    (uint16)0, 
    /* Index to address the input settings for pad 154 */
    (uint16)0, 
    /* Index to address the input settings for pad 155 */
    (uint16)0, 
    /* Index to address the input settings for pad 156 */
    (uint16)0, 
    /* Index to address the input settings for pad 157 */
    (uint16)0, 
    /* Index to address the input settings for pad 158 */
    (uint16)0, 
    /* Index to address the input settings for pad 159 */
    (uint16)0, 
    /* Index to address the input settings for pad 160 */
    (uint16)0, 
    /* Index to address the input settings for pad 161 */
    (uint16)0, 
    /* Index to address the input settings for pad 162 */
    (uint16)0, 
    /* Index to address the input settings for pad 163 */
    (uint16)0, 
    /* Index to address the input settings for pad 164 */
    (uint16)0, 
    /* Index to address the input settings for pad 165 */
    (uint16)0, 
    /* Index to address the input settings for pad 166 */
    (uint16)0, 
    /* Index to address the input settings for pad 167 */
    (uint16)0, 
    /* Index to address the input settings for pad 168 */
    (uint16)0, 
    /* Index to address the input settings for pad 169 */
    (uint16)0, 
    /* Index to address the input settings for pad 170 */
    (uint16)124, 
    /* Index to address the input settings for pad 171 */
    (uint16)0, 
    /* Index to address the input settings for pad 172 */
    (uint16)125, 
    /* Index to address the input settings for pad 173 */
    (uint16)126
};

/**
* @brief Array of elements storing indexes in Port_<SIUL2 Instance>_aInMuxSettings table where IN settings for each pad reside on other SIUL2 instance
*/
static const uint16 Port_SIUL2_1_au16InMuxSettingsIndex[92] =
{
    /* Index to address the input settings for pad 0 */
    (uint16)0, 
    /* Index to address the input settings for pad 1 */
    (uint16)0, 
    /* Index to address the input settings for pad 2 */
    (uint16)0, 
    /* Index to address the input settings for pad 3 */
    (uint16)0, 
    /* Index to address the input settings for pad 4 */
    (uint16)0, 
    /* Index to address the input settings for pad 5 */
    (uint16)0, 
    /* Index to address the input settings for pad 6 */
    (uint16)0, 
    /* Index to address the input settings for pad 7 */
    (uint16)0, 
    /* Index to address the input settings for pad 8 */
    (uint16)0, 
    /* Index to address the input settings for pad 9 */
    (uint16)0, 
    /* Index to address the input settings for pad 10 */
    (uint16)0, 
    /* Index to address the input settings for pad 11 */
    (uint16)0, 
    /* Index to address the input settings for pad 12 */
    (uint16)0, 
    /* Index to address the input settings for pad 13 */
    (uint16)0, 
    /* Index to address the input settings for pad 14 */
    (uint16)0, 
    /* Index to address the input settings for pad 15 */
    (uint16)0, 
    /* Index to address the input settings for pad 16 */
    (uint16)0, 
    /* Index to address the input settings for pad 17 */
    (uint16)0, 
    /* Index to address the input settings for pad 18 */
    (uint16)0, 
    /* Index to address the input settings for pad 19 */
    (uint16)0, 
    /* Index to address the input settings for pad 20 */
    (uint16)0, 
    /* Index to address the input settings for pad 21 */
    (uint16)0, 
    /* Index to address the input settings for pad 22 */
    (uint16)0, 
    /* Index to address the input settings for pad 23 */
    (uint16)0, 
    /* Index to address the input settings for pad 24 */
    (uint16)0, 
    /* Index to address the input settings for pad 25 */
    (uint16)0, 
    /* Index to address the input settings for pad 26 */
    (uint16)0, 
    /* Index to address the input settings for pad 27 */
    (uint16)0, 
    /* Index to address the input settings for pad 28 */
    (uint16)0, 
    /* Index to address the input settings for pad 29 */
    (uint16)0, 
    /* Index to address the input settings for pad 30 */
    (uint16)0, 
    /* Index to address the input settings for pad 31 */
    (uint16)1, 
    /* Index to address the input settings for pad 32 */
    (uint16)4, 
    /* Index to address the input settings for pad 33 */
    (uint16)0, 
    /* Index to address the input settings for pad 34 */
    (uint16)8, 
    /* Index to address the input settings for pad 35 */
    (uint16)9, 
    /* Index to address the input settings for pad 36 */
    (uint16)0, 
    /* Index to address the input settings for pad 37 */
    (uint16)11, 
    /* Index to address the input settings for pad 38 */
    (uint16)14, 
    /* Index to address the input settings for pad 39 */
    (uint16)15, 
    /* Index to address the input settings for pad 40 */
    (uint16)0, 
    /* Index to address the input settings for pad 41 */
    (uint16)16, 
    /* Index to address the input settings for pad 42 */
    (uint16)18, 
    /* Index to address the input settings for pad 43 */
    (uint16)19, 
    /* Index to address the input settings for pad 44 */
    (uint16)22, 
    /* Index to address the input settings for pad 45 */
    (uint16)25, 
    /* Index to address the input settings for pad 46 */
    (uint16)28, 
    /* Index to address the input settings for pad 47 */
    (uint16)29, 
    /* Index to address the input settings for pad 48 */
    (uint16)31, 
    /* Index to address the input settings for pad 49 */
    (uint16)33, 
    /* Index to address the input settings for pad 50 */
    (uint16)34, 
    /* Index to address the input settings for pad 51 */
    (uint16)37, 
    /* Index to address the input settings for pad 52 */
    (uint16)39, 
    /* Index to address the input settings for pad 53 */
    (uint16)41, 
    /* Index to address the input settings for pad 54 */
    (uint16)45, 
    /* Index to address the input settings for pad 55 */
    (uint16)49, 
    /* Index to address the input settings for pad 56 */
    (uint16)52, 
    /* Index to address the input settings for pad 57 */
    (uint16)56, 
    /* Index to address the input settings for pad 58 */
    (uint16)60, 
    /* Index to address the input settings for pad 59 */
    (uint16)61, 
    /* Index to address the input settings for pad 60 */
    (uint16)62, 
    /* Index to address the input settings for pad 61 */
    (uint16)63, 
    /* Index to address the input settings for pad 62 */
    (uint16)64, 
    /* Index to address the input settings for pad 63 */
    (uint16)65, 
    /* Index to address the input settings for pad 64 */
    (uint16)66, 
    /* Index to address the input settings for pad 65 */
    (uint16)67, 
    /* Index to address the input settings for pad 66 */
    (uint16)68, 
    /* Index to address the input settings for pad 67 */
    (uint16)69, 
    /* Index to address the input settings for pad 68 */
    (uint16)72, 
    /* Index to address the input settings for pad 69 */
    (uint16)75, 
    /* Index to address the input settings for pad 70 */
    (uint16)78, 
    /* Index to address the input settings for pad 71 */
    (uint16)81, 
    /* Index to address the input settings for pad 72 */
    (uint16)84, 
    /* Index to address the input settings for pad 73 */
    (uint16)85, 
    /* Index to address the input settings for pad 74 */
    (uint16)88, 
    /* Index to address the input settings for pad 75 */
    (uint16)90, 
    /* Index to address the input settings for pad 76 */
    (uint16)92, 
    /* Index to address the input settings for pad 77 */
    (uint16)93, 
    /* Index to address the input settings for pad 78 */
    (uint16)95, 
    /* Index to address the input settings for pad 79 */
    (uint16)97, 
    /* Index to address the input settings for pad 80 */
    (uint16)100, 
    /* Index to address the input settings for pad 81 */
    (uint16)102, 
    /* Index to address the input settings for pad 82 */
    (uint16)105, 
    /* Index to address the input settings for pad 83 */
    (uint16)106, 
    /* Index to address the input settings for pad 84 */
    (uint16)108, 
    /* Index to address the input settings for pad 85 */
    (uint16)111, 
    /* Index to address the input settings for pad 86 */
    (uint16)114, 
    /* Index to address the input settings for pad 87 */
    (uint16)116, 
    /* Index to address the input settings for pad 88 */
    (uint16)118, 
    /* Index to address the input settings for pad 89 */
    (uint16)120, 
    /* Index to address the input settings for pad 90 */
    (uint16)123, 
    /* Index to address the input settings for pad 91 */
    (uint16)125
};
static const uint16 Port_SIUL2_3_au16InMuxSettingsIndex[1] =
{
    /* Index to address the input settings for pad 0 */
    (uint16)0
};
static const uint16 Port_SIUL2_4_au16InMuxSettingsIndex[146] =
{
    /* Index to address the input settings for pad 0 */
    (uint16)0, 
    /* Index to address the input settings for pad 1 */
    (uint16)0, 
    /* Index to address the input settings for pad 2 */
    (uint16)0, 
    /* Index to address the input settings for pad 3 */
    (uint16)0, 
    /* Index to address the input settings for pad 4 */
    (uint16)0, 
    /* Index to address the input settings for pad 5 */
    (uint16)0, 
    /* Index to address the input settings for pad 6 */
    (uint16)0, 
    /* Index to address the input settings for pad 7 */
    (uint16)0, 
    /* Index to address the input settings for pad 8 */
    (uint16)0, 
    /* Index to address the input settings for pad 9 */
    (uint16)0, 
    /* Index to address the input settings for pad 10 */
    (uint16)0, 
    /* Index to address the input settings for pad 11 */
    (uint16)0, 
    /* Index to address the input settings for pad 12 */
    (uint16)0, 
    /* Index to address the input settings for pad 13 */
    (uint16)0, 
    /* Index to address the input settings for pad 14 */
    (uint16)0, 
    /* Index to address the input settings for pad 15 */
    (uint16)0, 
    /* Index to address the input settings for pad 16 */
    (uint16)0, 
    /* Index to address the input settings for pad 17 */
    (uint16)0, 
    /* Index to address the input settings for pad 18 */
    (uint16)0, 
    /* Index to address the input settings for pad 19 */
    (uint16)0, 
    /* Index to address the input settings for pad 20 */
    (uint16)0, 
    /* Index to address the input settings for pad 21 */
    (uint16)0, 
    /* Index to address the input settings for pad 22 */
    (uint16)0, 
    /* Index to address the input settings for pad 23 */
    (uint16)0, 
    /* Index to address the input settings for pad 24 */
    (uint16)0, 
    /* Index to address the input settings for pad 25 */
    (uint16)0, 
    /* Index to address the input settings for pad 26 */
    (uint16)0, 
    /* Index to address the input settings for pad 27 */
    (uint16)0, 
    /* Index to address the input settings for pad 28 */
    (uint16)0, 
    /* Index to address the input settings for pad 29 */
    (uint16)0, 
    /* Index to address the input settings for pad 30 */
    (uint16)0, 
    /* Index to address the input settings for pad 31 */
    (uint16)0, 
    /* Index to address the input settings for pad 32 */
    (uint16)0, 
    /* Index to address the input settings for pad 33 */
    (uint16)0, 
    /* Index to address the input settings for pad 34 */
    (uint16)0, 
    /* Index to address the input settings for pad 35 */
    (uint16)0, 
    /* Index to address the input settings for pad 36 */
    (uint16)0, 
    /* Index to address the input settings for pad 37 */
    (uint16)0, 
    /* Index to address the input settings for pad 38 */
    (uint16)0, 
    /* Index to address the input settings for pad 39 */
    (uint16)0, 
    /* Index to address the input settings for pad 40 */
    (uint16)0, 
    /* Index to address the input settings for pad 41 */
    (uint16)0, 
    /* Index to address the input settings for pad 42 */
    (uint16)0, 
    /* Index to address the input settings for pad 43 */
    (uint16)0, 
    /* Index to address the input settings for pad 44 */
    (uint16)0, 
    /* Index to address the input settings for pad 45 */
    (uint16)0, 
    /* Index to address the input settings for pad 46 */
    (uint16)0, 
    /* Index to address the input settings for pad 47 */
    (uint16)0, 
    /* Index to address the input settings for pad 48 */
    (uint16)0, 
    /* Index to address the input settings for pad 49 */
    (uint16)0, 
    /* Index to address the input settings for pad 50 */
    (uint16)0, 
    /* Index to address the input settings for pad 51 */
    (uint16)0, 
    /* Index to address the input settings for pad 52 */
    (uint16)0, 
    /* Index to address the input settings for pad 53 */
    (uint16)0, 
    /* Index to address the input settings for pad 54 */
    (uint16)0, 
    /* Index to address the input settings for pad 55 */
    (uint16)0, 
    /* Index to address the input settings for pad 56 */
    (uint16)0, 
    /* Index to address the input settings for pad 57 */
    (uint16)0, 
    /* Index to address the input settings for pad 58 */
    (uint16)0, 
    /* Index to address the input settings for pad 59 */
    (uint16)0, 
    /* Index to address the input settings for pad 60 */
    (uint16)0, 
    /* Index to address the input settings for pad 61 */
    (uint16)0, 
    /* Index to address the input settings for pad 62 */
    (uint16)0, 
    /* Index to address the input settings for pad 63 */
    (uint16)0, 
    /* Index to address the input settings for pad 64 */
    (uint16)0, 
    /* Index to address the input settings for pad 65 */
    (uint16)0, 
    /* Index to address the input settings for pad 66 */
    (uint16)0, 
    /* Index to address the input settings for pad 67 */
    (uint16)0, 
    /* Index to address the input settings for pad 68 */
    (uint16)0, 
    /* Index to address the input settings for pad 69 */
    (uint16)0, 
    /* Index to address the input settings for pad 70 */
    (uint16)0, 
    /* Index to address the input settings for pad 71 */
    (uint16)0, 
    /* Index to address the input settings for pad 72 */
    (uint16)0, 
    /* Index to address the input settings for pad 73 */
    (uint16)0, 
    /* Index to address the input settings for pad 74 */
    (uint16)0, 
    /* Index to address the input settings for pad 75 */
    (uint16)0, 
    /* Index to address the input settings for pad 76 */
    (uint16)0, 
    /* Index to address the input settings for pad 77 */
    (uint16)0, 
    /* Index to address the input settings for pad 78 */
    (uint16)0, 
    /* Index to address the input settings for pad 79 */
    (uint16)0, 
    /* Index to address the input settings for pad 80 */
    (uint16)0, 
    /* Index to address the input settings for pad 81 */
    (uint16)0, 
    /* Index to address the input settings for pad 82 */
    (uint16)0, 
    /* Index to address the input settings for pad 83 */
    (uint16)0, 
    /* Index to address the input settings for pad 84 */
    (uint16)0, 
    /* Index to address the input settings for pad 85 */
    (uint16)0, 
    /* Index to address the input settings for pad 86 */
    (uint16)0, 
    /* Index to address the input settings for pad 87 */
    (uint16)0, 
    /* Index to address the input settings for pad 88 */
    (uint16)0, 
    /* Index to address the input settings for pad 89 */
    (uint16)0, 
    /* Index to address the input settings for pad 90 */
    (uint16)0, 
    /* Index to address the input settings for pad 91 */
    (uint16)0, 
    /* Index to address the input settings for pad 92 */
    (uint16)1, 
    /* Index to address the input settings for pad 93 */
    (uint16)0, 
    /* Index to address the input settings for pad 94 */
    (uint16)0, 
    /* Index to address the input settings for pad 95 */
    (uint16)0, 
    /* Index to address the input settings for pad 96 */
    (uint16)0, 
    /* Index to address the input settings for pad 97 */
    (uint16)0, 
    /* Index to address the input settings for pad 98 */
    (uint16)0, 
    /* Index to address the input settings for pad 99 */
    (uint16)0, 
    /* Index to address the input settings for pad 100 */
    (uint16)0, 
    /* Index to address the input settings for pad 101 */
    (uint16)0, 
    /* Index to address the input settings for pad 102 */
    (uint16)0, 
    /* Index to address the input settings for pad 103 */
    (uint16)0, 
    /* Index to address the input settings for pad 104 */
    (uint16)0, 
    /* Index to address the input settings for pad 105 */
    (uint16)0, 
    /* Index to address the input settings for pad 106 */
    (uint16)2, 
    /* Index to address the input settings for pad 107 */
    (uint16)4, 
    /* Index to address the input settings for pad 108 */
    (uint16)7, 
    /* Index to address the input settings for pad 109 */
    (uint16)8, 
    /* Index to address the input settings for pad 110 */
    (uint16)0, 
    /* Index to address the input settings for pad 111 */
    (uint16)11, 
    /* Index to address the input settings for pad 112 */
    (uint16)16, 
    /* Index to address the input settings for pad 113 */
    (uint16)18, 
    /* Index to address the input settings for pad 114 */
    (uint16)22, 
    /* Index to address the input settings for pad 115 */
    (uint16)25, 
    /* Index to address the input settings for pad 116 */
    (uint16)30, 
    /* Index to address the input settings for pad 117 */
    (uint16)32, 
    /* Index to address the input settings for pad 118 */
    (uint16)0, 
    /* Index to address the input settings for pad 119 */
    (uint16)36, 
    /* Index to address the input settings for pad 120 */
    (uint16)38, 
    /* Index to address the input settings for pad 121 */
    (uint16)41, 
    /* Index to address the input settings for pad 122 */
    (uint16)46, 
    /* Index to address the input settings for pad 123 */
    (uint16)48, 
    /* Index to address the input settings for pad 124 */
    (uint16)53, 
    /* Index to address the input settings for pad 125 */
    (uint16)57, 
    /* Index to address the input settings for pad 126 */
    (uint16)61, 
    /* Index to address the input settings for pad 127 */
    (uint16)66, 
    /* Index to address the input settings for pad 128 */
    (uint16)69, 
    /* Index to address the input settings for pad 129 */
    (uint16)75, 
    /* Index to address the input settings for pad 130 */
    (uint16)79, 
    /* Index to address the input settings for pad 131 */
    (uint16)84, 
    /* Index to address the input settings for pad 132 */
    (uint16)89, 
    /* Index to address the input settings for pad 133 */
    (uint16)95, 
    /* Index to address the input settings for pad 134 */
    (uint16)98, 
    /* Index to address the input settings for pad 135 */
    (uint16)102, 
    /* Index to address the input settings for pad 136 */
    (uint16)106, 
    /* Index to address the input settings for pad 137 */
    (uint16)110, 
    /* Index to address the input settings for pad 138 */
    (uint16)114, 
    /* Index to address the input settings for pad 139 */
    (uint16)118, 
    /* Index to address the input settings for pad 140 */
    (uint16)125, 
    /* Index to address the input settings for pad 141 */
    (uint16)129, 
    /* Index to address the input settings for pad 142 */
    (uint16)135, 
    /* Index to address the input settings for pad 143 */
    (uint16)138, 
    /* Index to address the input settings for pad 144 */
    (uint16)143, 
    /* Index to address the input settings for pad 145 */
    (uint16)146
};
static const uint16 Port_SIUL2_5_au16InMuxSettingsIndex[168] =
{
    /* Index to address the input settings for pad 0 */
    (uint16)0, 
    /* Index to address the input settings for pad 1 */
    (uint16)0, 
    /* Index to address the input settings for pad 2 */
    (uint16)0, 
    /* Index to address the input settings for pad 3 */
    (uint16)0, 
    /* Index to address the input settings for pad 4 */
    (uint16)0, 
    /* Index to address the input settings for pad 5 */
    (uint16)0, 
    /* Index to address the input settings for pad 6 */
    (uint16)0, 
    /* Index to address the input settings for pad 7 */
    (uint16)0, 
    /* Index to address the input settings for pad 8 */
    (uint16)0, 
    /* Index to address the input settings for pad 9 */
    (uint16)0, 
    /* Index to address the input settings for pad 10 */
    (uint16)0, 
    /* Index to address the input settings for pad 11 */
    (uint16)0, 
    /* Index to address the input settings for pad 12 */
    (uint16)0, 
    /* Index to address the input settings for pad 13 */
    (uint16)0, 
    /* Index to address the input settings for pad 14 */
    (uint16)0, 
    /* Index to address the input settings for pad 15 */
    (uint16)0, 
    /* Index to address the input settings for pad 16 */
    (uint16)0, 
    /* Index to address the input settings for pad 17 */
    (uint16)0, 
    /* Index to address the input settings for pad 18 */
    (uint16)0, 
    /* Index to address the input settings for pad 19 */
    (uint16)0, 
    /* Index to address the input settings for pad 20 */
    (uint16)0, 
    /* Index to address the input settings for pad 21 */
    (uint16)0, 
    /* Index to address the input settings for pad 22 */
    (uint16)0, 
    /* Index to address the input settings for pad 23 */
    (uint16)0, 
    /* Index to address the input settings for pad 24 */
    (uint16)0, 
    /* Index to address the input settings for pad 25 */
    (uint16)0, 
    /* Index to address the input settings for pad 26 */
    (uint16)0, 
    /* Index to address the input settings for pad 27 */
    (uint16)0, 
    /* Index to address the input settings for pad 28 */
    (uint16)0, 
    /* Index to address the input settings for pad 29 */
    (uint16)0, 
    /* Index to address the input settings for pad 30 */
    (uint16)0, 
    /* Index to address the input settings for pad 31 */
    (uint16)0, 
    /* Index to address the input settings for pad 32 */
    (uint16)0, 
    /* Index to address the input settings for pad 33 */
    (uint16)0, 
    /* Index to address the input settings for pad 34 */
    (uint16)0, 
    /* Index to address the input settings for pad 35 */
    (uint16)0, 
    /* Index to address the input settings for pad 36 */
    (uint16)0, 
    /* Index to address the input settings for pad 37 */
    (uint16)0, 
    /* Index to address the input settings for pad 38 */
    (uint16)0, 
    /* Index to address the input settings for pad 39 */
    (uint16)0, 
    /* Index to address the input settings for pad 40 */
    (uint16)0, 
    /* Index to address the input settings for pad 41 */
    (uint16)0, 
    /* Index to address the input settings for pad 42 */
    (uint16)0, 
    /* Index to address the input settings for pad 43 */
    (uint16)0, 
    /* Index to address the input settings for pad 44 */
    (uint16)0, 
    /* Index to address the input settings for pad 45 */
    (uint16)0, 
    /* Index to address the input settings for pad 46 */
    (uint16)0, 
    /* Index to address the input settings for pad 47 */
    (uint16)0, 
    /* Index to address the input settings for pad 48 */
    (uint16)0, 
    /* Index to address the input settings for pad 49 */
    (uint16)0, 
    /* Index to address the input settings for pad 50 */
    (uint16)0, 
    /* Index to address the input settings for pad 51 */
    (uint16)0, 
    /* Index to address the input settings for pad 52 */
    (uint16)0, 
    /* Index to address the input settings for pad 53 */
    (uint16)0, 
    /* Index to address the input settings for pad 54 */
    (uint16)0, 
    /* Index to address the input settings for pad 55 */
    (uint16)0, 
    /* Index to address the input settings for pad 56 */
    (uint16)0, 
    /* Index to address the input settings for pad 57 */
    (uint16)0, 
    /* Index to address the input settings for pad 58 */
    (uint16)0, 
    /* Index to address the input settings for pad 59 */
    (uint16)0, 
    /* Index to address the input settings for pad 60 */
    (uint16)0, 
    /* Index to address the input settings for pad 61 */
    (uint16)0, 
    /* Index to address the input settings for pad 62 */
    (uint16)0, 
    /* Index to address the input settings for pad 63 */
    (uint16)0, 
    /* Index to address the input settings for pad 64 */
    (uint16)0, 
    /* Index to address the input settings for pad 65 */
    (uint16)0, 
    /* Index to address the input settings for pad 66 */
    (uint16)0, 
    /* Index to address the input settings for pad 67 */
    (uint16)0, 
    /* Index to address the input settings for pad 68 */
    (uint16)0, 
    /* Index to address the input settings for pad 69 */
    (uint16)0, 
    /* Index to address the input settings for pad 70 */
    (uint16)0, 
    /* Index to address the input settings for pad 71 */
    (uint16)0, 
    /* Index to address the input settings for pad 72 */
    (uint16)0, 
    /* Index to address the input settings for pad 73 */
    (uint16)0, 
    /* Index to address the input settings for pad 74 */
    (uint16)0, 
    /* Index to address the input settings for pad 75 */
    (uint16)0, 
    /* Index to address the input settings for pad 76 */
    (uint16)0, 
    /* Index to address the input settings for pad 77 */
    (uint16)0, 
    /* Index to address the input settings for pad 78 */
    (uint16)0, 
    /* Index to address the input settings for pad 79 */
    (uint16)0, 
    /* Index to address the input settings for pad 80 */
    (uint16)0, 
    /* Index to address the input settings for pad 81 */
    (uint16)0, 
    /* Index to address the input settings for pad 82 */
    (uint16)0, 
    /* Index to address the input settings for pad 83 */
    (uint16)0, 
    /* Index to address the input settings for pad 84 */
    (uint16)0, 
    /* Index to address the input settings for pad 85 */
    (uint16)0, 
    /* Index to address the input settings for pad 86 */
    (uint16)0, 
    /* Index to address the input settings for pad 87 */
    (uint16)0, 
    /* Index to address the input settings for pad 88 */
    (uint16)0, 
    /* Index to address the input settings for pad 89 */
    (uint16)0, 
    /* Index to address the input settings for pad 90 */
    (uint16)0, 
    /* Index to address the input settings for pad 91 */
    (uint16)0, 
    /* Index to address the input settings for pad 92 */
    (uint16)0, 
    /* Index to address the input settings for pad 93 */
    (uint16)0, 
    /* Index to address the input settings for pad 94 */
    (uint16)0, 
    /* Index to address the input settings for pad 95 */
    (uint16)0, 
    /* Index to address the input settings for pad 96 */
    (uint16)0, 
    /* Index to address the input settings for pad 97 */
    (uint16)0, 
    /* Index to address the input settings for pad 98 */
    (uint16)0, 
    /* Index to address the input settings for pad 99 */
    (uint16)0, 
    /* Index to address the input settings for pad 100 */
    (uint16)0, 
    /* Index to address the input settings for pad 101 */
    (uint16)0, 
    /* Index to address the input settings for pad 102 */
    (uint16)0, 
    /* Index to address the input settings for pad 103 */
    (uint16)0, 
    /* Index to address the input settings for pad 104 */
    (uint16)0, 
    /* Index to address the input settings for pad 105 */
    (uint16)0, 
    /* Index to address the input settings for pad 106 */
    (uint16)0, 
    /* Index to address the input settings for pad 107 */
    (uint16)0, 
    /* Index to address the input settings for pad 108 */
    (uint16)0, 
    /* Index to address the input settings for pad 109 */
    (uint16)0, 
    /* Index to address the input settings for pad 110 */
    (uint16)0, 
    /* Index to address the input settings for pad 111 */
    (uint16)0, 
    /* Index to address the input settings for pad 112 */
    (uint16)0, 
    /* Index to address the input settings for pad 113 */
    (uint16)0, 
    /* Index to address the input settings for pad 114 */
    (uint16)0, 
    /* Index to address the input settings for pad 115 */
    (uint16)0, 
    /* Index to address the input settings for pad 116 */
    (uint16)0, 
    /* Index to address the input settings for pad 117 */
    (uint16)0, 
    /* Index to address the input settings for pad 118 */
    (uint16)0, 
    /* Index to address the input settings for pad 119 */
    (uint16)0, 
    /* Index to address the input settings for pad 120 */
    (uint16)0, 
    /* Index to address the input settings for pad 121 */
    (uint16)0, 
    /* Index to address the input settings for pad 122 */
    (uint16)0, 
    /* Index to address the input settings for pad 123 */
    (uint16)0, 
    /* Index to address the input settings for pad 124 */
    (uint16)0, 
    /* Index to address the input settings for pad 125 */
    (uint16)0, 
    /* Index to address the input settings for pad 126 */
    (uint16)0, 
    /* Index to address the input settings for pad 127 */
    (uint16)0, 
    /* Index to address the input settings for pad 128 */
    (uint16)0, 
    /* Index to address the input settings for pad 129 */
    (uint16)0, 
    /* Index to address the input settings for pad 130 */
    (uint16)0, 
    /* Index to address the input settings for pad 131 */
    (uint16)0, 
    /* Index to address the input settings for pad 132 */
    (uint16)0, 
    /* Index to address the input settings for pad 133 */
    (uint16)0, 
    /* Index to address the input settings for pad 134 */
    (uint16)0, 
    /* Index to address the input settings for pad 135 */
    (uint16)0, 
    /* Index to address the input settings for pad 136 */
    (uint16)0, 
    /* Index to address the input settings for pad 137 */
    (uint16)0, 
    /* Index to address the input settings for pad 138 */
    (uint16)0, 
    /* Index to address the input settings for pad 139 */
    (uint16)0, 
    /* Index to address the input settings for pad 140 */
    (uint16)0, 
    /* Index to address the input settings for pad 141 */
    (uint16)0, 
    /* Index to address the input settings for pad 142 */
    (uint16)0, 
    /* Index to address the input settings for pad 143 */
    (uint16)0, 
    /* Index to address the input settings for pad 144 */
    (uint16)0, 
    /* Index to address the input settings for pad 145 */
    (uint16)0, 
    /* Index to address the input settings for pad 146 */
    (uint16)0, 
    /* Index to address the input settings for pad 147 */
    (uint16)1, 
    /* Index to address the input settings for pad 148 */
    (uint16)0, 
    /* Index to address the input settings for pad 149 */
    (uint16)3, 
    /* Index to address the input settings for pad 150 */
    (uint16)6, 
    /* Index to address the input settings for pad 151 */
    (uint16)7, 
    /* Index to address the input settings for pad 152 */
    (uint16)10, 
    /* Index to address the input settings for pad 153 */
    (uint16)11, 
    /* Index to address the input settings for pad 154 */
    (uint16)0, 
    /* Index to address the input settings for pad 155 */
    (uint16)16, 
    /* Index to address the input settings for pad 156 */
    (uint16)18, 
    /* Index to address the input settings for pad 157 */
    (uint16)19, 
    /* Index to address the input settings for pad 158 */
    (uint16)20, 
    /* Index to address the input settings for pad 159 */
    (uint16)0, 
    /* Index to address the input settings for pad 160 */
    (uint16)22, 
    /* Index to address the input settings for pad 161 */
    (uint16)24, 
    /* Index to address the input settings for pad 162 */
    (uint16)25, 
    /* Index to address the input settings for pad 163 */
    (uint16)0, 
    /* Index to address the input settings for pad 164 */
    (uint16)30, 
    /* Index to address the input settings for pad 165 */
    (uint16)31, 
    /* Index to address the input settings for pad 166 */
    (uint16)34, 
    /* Index to address the input settings for pad 167 */
    (uint16)36
};
static const uint16 Port_SIUL2_AE_au16InMuxSettingsIndex[44] =
{
    /* Index to address the input settings for pad 0 */
    (uint16)1, 
    /* Index to address the input settings for pad 1 */
    (uint16)5, 
    /* Index to address the input settings for pad 2 */
    (uint16)8, 
    /* Index to address the input settings for pad 3 */
    (uint16)12, 
    /* Index to address the input settings for pad 4 */
    (uint16)0, 
    /* Index to address the input settings for pad 5 */
    (uint16)0, 
    /* Index to address the input settings for pad 6 */
    (uint16)0, 
    /* Index to address the input settings for pad 7 */
    (uint16)0, 
    /* Index to address the input settings for pad 8 */
    (uint16)0, 
    /* Index to address the input settings for pad 9 */
    (uint16)0, 
    /* Index to address the input settings for pad 10 */
    (uint16)0, 
    /* Index to address the input settings for pad 11 */
    (uint16)0, 
    /* Index to address the input settings for pad 12 */
    (uint16)0, 
    /* Index to address the input settings for pad 13 */
    (uint16)0, 
    /* Index to address the input settings for pad 14 */
    (uint16)0, 
    /* Index to address the input settings for pad 15 */
    (uint16)0, 
    /* Index to address the input settings for pad 16 */
    (uint16)16, 
    /* Index to address the input settings for pad 17 */
    (uint16)17, 
    /* Index to address the input settings for pad 18 */
    (uint16)19, 
    /* Index to address the input settings for pad 19 */
    (uint16)20, 
    /* Index to address the input settings for pad 20 */
    (uint16)21, 
    /* Index to address the input settings for pad 21 */
    (uint16)23, 
    /* Index to address the input settings for pad 22 */
    (uint16)25, 
    /* Index to address the input settings for pad 23 */
    (uint16)28, 
    /* Index to address the input settings for pad 24 */
    (uint16)31, 
    /* Index to address the input settings for pad 25 */
    (uint16)33, 
    /* Index to address the input settings for pad 26 */
    (uint16)0, 
    /* Index to address the input settings for pad 27 */
    (uint16)0, 
    /* Index to address the input settings for pad 28 */
    (uint16)0, 
    /* Index to address the input settings for pad 29 */
    (uint16)0, 
    /* Index to address the input settings for pad 30 */
    (uint16)0, 
    /* Index to address the input settings for pad 31 */
    (uint16)0, 
    /* Index to address the input settings for pad 32 */
    (uint16)0, 
    /* Index to address the input settings for pad 33 */
    (uint16)0, 
    /* Index to address the input settings for pad 34 */
    (uint16)35, 
    /* Index to address the input settings for pad 35 */
    (uint16)36, 
    /* Index to address the input settings for pad 36 */
    (uint16)37, 
    /* Index to address the input settings for pad 37 */
    (uint16)38, 
    /* Index to address the input settings for pad 38 */
    (uint16)39, 
    /* Index to address the input settings for pad 39 */
    (uint16)41, 
    /* Index to address the input settings for pad 40 */
    (uint16)43, 
    /* Index to address the input settings for pad 41 */
    (uint16)46, 
    /* Index to address the input settings for pad 42 */
    (uint16)49, 
    /* Index to address the input settings for pad 43 */
    (uint16)51
};

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"

#define PORT_START_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief Array of bits storing availability of PortPinModes for MSCRs on first SIUL2 instance
*/
static const Port_PinModeAvailabilityArrayType Port_SIUL2_0_au16PinModeAvailability =
{
    /*  Mode PORT_GPIO_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_GPIO |
        SIUL2_0_PORT1_GPIO |
        SIUL2_0_PORT2_GPIO |
        SIUL2_0_PORT3_GPIO |
        SIUL2_0_PORT4_GPIO |
        SIUL2_0_PORT5_GPIO |
        SIUL2_0_PORT6_GPIO |
        SIUL2_0_PORT7_GPIO |
        SIUL2_0_PORT8_GPIO |
        SIUL2_0_PORT9_GPIO |
        SIUL2_0_PORT10_GPIO |
        SIUL2_0_PORT11_GPIO |
        SIUL2_0_PORT12_GPIO |
        SIUL2_0_PORT13_GPIO |
        SIUL2_0_PORT14_GPIO |
        SIUL2_0_PORT15_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_GPIO |
        SIUL2_0_PORT17_GPIO |
        SIUL2_0_PORT18_GPIO |
        SIUL2_0_PORT19_GPIO |
        SIUL2_0_PORT20_GPIO |
        SIUL2_0_PORT21_GPIO |
        SIUL2_0_PORT22_GPIO |
        SIUL2_0_PORT23_GPIO |
        SIUL2_0_PORT24_GPIO |
        SIUL2_0_PORT25_GPIO |
        SIUL2_0_PORT26_GPIO |
        SIUL2_0_PORT27_GPIO |
        SIUL2_0_PORT28_GPIO |
        SIUL2_0_PORT29_GPIO |
        SIUL2_0_PORT30_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT170_GPIO |
        SIUL2_0_PORT171_GPIO |
        SIUL2_0_PORT172_GPIO |
        SIUL2_0_PORT173_GPIO */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT1_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_LINFLEX_0_LIN_0_TX_OUT |
        SIUL2_0_PORT1_GTM_GTM_001_OUT |
        SIUL2_0_PORT2_LINFLEX_1_LIN_1_TX_OUT |
        SIUL2_0_PORT3_GTM_GTM_003_OUT |
        SIUL2_0_PORT4_CAN_HUB_CAN_0_TX_OUT |
        SIUL2_0_PORT5_GTM_GTM_005_OUT |
        SIUL2_0_PORT6_FR_0_FR_0_TXE_A_B_OUT |
        SIUL2_0_PORT7_FR_0_FR_0_TXD_A_OUT |
        SIUL2_0_PORT8_GTM_GTM_008_OUT |
        SIUL2_0_PORT9_GTM_GTM_009_OUT |
        SIUL2_0_PORT10_GTM_GTM_010_OUT |
        SIUL2_0_PORT11_MSC_0_DSPI_DSPI_10_PCS0_OUT |
        SIUL2_0_PORT12_MSC_0_DSPI_DSPI_10_PCS1_OUT |
        SIUL2_0_PORT13_GTM_GTM_013_OUT |
        SIUL2_0_PORT14_MSC_0_LIN_LIN_12_TX_OUT |
        SIUL2_0_PORT15_FR_1_FR_1_TXE_A_B_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_FR_1_FR_1_TXD_A_OUT |
        SIUL2_0_PORT17_GTM_GTM_017_OUT |
        SIUL2_0_PORT18_GTM_GTM_018_OUT |
        SIUL2_0_PORT19_GTM_GTM_019_OUT |
        SIUL2_0_PORT20_GTM_GTM_020_OUT |
        SIUL2_0_PORT21_GTM_GTM_021_OUT |
        SIUL2_0_PORT22_CAN_HUB_CAN_1_TX_OUT |
        SIUL2_0_PORT23_GTM_GTM_023_OUT |
        SIUL2_0_PORT24_CAN_HUB_CAN_2_TX_OUT |
        SIUL2_0_PORT25_GTM_GTM_025_OUT |
        SIUL2_0_PORT26_GTM_GTM_026_OUT |
        SIUL2_0_PORT27_GTM_GTM_027_OUT |
        SIUL2_0_PORT28_GTM_GTM_028_OUT |
        SIUL2_0_PORT29_GTM_GTM_029_OUT |
        SIUL2_0_PORT30_GTM_GTM_030_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT171_JTAGC_TDO_OUT |
        SIUL2_0_PORT172_JTAGC_TMS_OUT */
        (uint16)( SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT2_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_GTM_GTM_000_OUT |
        SIUL2_0_PORT1_FR_0_FR_0_TXD_B_OUT |
        SIUL2_0_PORT2_GTM_GTM_002_OUT |
        SIUL2_0_PORT3_SPI_0_DSPI_0_PCS1_OUT |
        SIUL2_0_PORT4_GTM_GTM_004_OUT |
        SIUL2_0_PORT5_PSI5_S_0_PSI5_S_0_TXCLK_OUT |
        SIUL2_0_PORT6_GTM_GTM_006_OUT |
        SIUL2_0_PORT7_GTM_GTM_007_OUT |
        SIUL2_0_PORT8_SPI_0_DSPI_0_SOUT_OUT |
        SIUL2_0_PORT9_SPI_0_DSPI_0_PCS4_OUT |
        SIUL2_0_PORT10_FR_0_FR_0_DBG3_OUT |
        SIUL2_0_PORT11_GTM_GTM_011_OUT |
        SIUL2_0_PORT12_GTM_GTM_012_OUT |
        SIUL2_0_PORT13_FR_1_FR_1_DBG2_OUT |
        SIUL2_0_PORT14_GTM_GTM_014_OUT |
        SIUL2_0_PORT15_GTM_GTM_015_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_GTM_GTM_016_OUT |
        SIUL2_0_PORT17_GTM_GTM_A1_0_1_HR_OUT |
        SIUL2_0_PORT18_FR_1_FR_1_TXE_B_B_OUT |
        SIUL2_0_PORT19_FR_1_FR_1_TXD_B_OUT |
        SIUL2_0_PORT20_GTM_GTM_A2_2_1_HR_OUT |
        SIUL2_0_PORT21_GTM_GTM_A2_1_0_HR_OUT |
        SIUL2_0_PORT22_GTM_GTM_022_OUT |
        SIUL2_0_PORT23_GTM_GTM_A1_2_0_HR_OUT |
        SIUL2_0_PORT24_GTM_GTM_024_OUT |
        SIUL2_0_PORT25_GTM_GTM_A1_3_0_HR_OUT |
        SIUL2_0_PORT26_LINFLEX_0_LIN_0_TX_OUT |
        SIUL2_0_PORT27_GTM_GTM_A2_0_0_HR_OUT |
        SIUL2_0_PORT28_LINFLEX_1_LIN_1_TX_OUT |
        SIUL2_0_PORT29_GTM_GTM_A1_1_1_HR_OUT |
        SIUL2_0_PORT30_FR_1_FR_1_DBG3_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT171_MISC_TAMPER_OUT_OUT */
        (uint16)( SHL_PAD_U32(11U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT3_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_FR_0_FR_0_TXE_B_B_OUT |
        SIUL2_0_PORT1_SPI_0_DSPI_0_PCS3_OUT |
        SIUL2_0_PORT2_SPI_0_DSPI_0_PCS0_OUT |
        SIUL2_0_PORT3_PSI5_0_PSI5_0_SDOUT_0_OUT |
        SIUL2_0_PORT4_FR_0_FR_0_DBG0_OUT |
        SIUL2_0_PORT5_FR_0_FR_0_DBG1_OUT |
        SIUL2_0_PORT6_FR_1_FR_1_TXE_B_B_OUT |
        SIUL2_0_PORT7_FR_1_FR_1_TXD_B_OUT |
        SIUL2_0_PORT8_I3C_0_I3C_0_PUR_OUT |
        SIUL2_0_PORT9_FR_0_FR_0_DBG2_OUT |
        SIUL2_0_PORT10_SINC_SINC_MCLK_OUT_2_OUT |
        SIUL2_0_PORT11_FR_1_FR_1_DBG0_OUT |
        SIUL2_0_PORT12_CAN_HUB_CAN_0_TX_OUT |
        SIUL2_0_PORT13_EMIOS_1_EMIOS_1_CH22_OUT |
        SIUL2_0_PORT14_GTM_GTM_A2_3_0_HR_OUT |
        SIUL2_0_PORT15_GTM_GTM_A1_1_0_HR_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_GTM_GTM_A1_0_0_HR_OUT |
        SIUL2_0_PORT17_LCU_1_LCU_1_OUT_3_OUT |
        SIUL2_0_PORT18_GTM_GTM_A2_3_1_HR_OUT |
        SIUL2_0_PORT19_GTM_GTM_A2_2_0_HR_OUT |
        SIUL2_0_PORT20_LCU_1_LCU_1_OUT_6_OUT |
        SIUL2_0_PORT21_LCU_1_LCU_1_OUT_7_OUT |
        SIUL2_0_PORT22_GTM_GTM_A1_2_1_HR_OUT |
        SIUL2_0_PORT23_LCU_1_LCU_1_OUT_9_OUT |
        SIUL2_0_PORT24_GTM_GTM_A1_3_1_HR_OUT |
        SIUL2_0_PORT25_LCU_1_LCU_1_OUT_10_OUT |
        SIUL2_0_PORT26_GTM_GTM_A2_1_1_HR_OUT |
        SIUL2_0_PORT27_LCU_1_LCU_1_OUT_11_OUT |
        SIUL2_0_PORT28_GTM_GTM_A2_0_1_HR_OUT |
        SIUL2_0_PORT29_EMIOS_1_EMIOS_1_CH21_OUT |
        SIUL2_0_PORT30_EMIOS_1_EMIOS_1_CH14_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT4_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_SPI_0_DSPI_0_PCS2_OUT |
        SIUL2_0_PORT1_I3C_0_I3C_0_SDA_3_OUT |
        SIUL2_0_PORT2_PSI5_S_0_PSI5_S_0_TX_OUT |
        SIUL2_0_PORT3_EMIOS_1_EMIOS_1_CH2_OUT |
        SIUL2_0_PORT4_I3C_0_I3C_0_SDA_2_OUT |
        SIUL2_0_PORT5_I3C_0_I3C_0_SDA_1_OUT |
        SIUL2_0_PORT6_SPI_0_DSPI_0_SCK_OUT |
        SIUL2_0_PORT7_PSI5_0_PSI5_0_SDOUT_1_OUT |
        SIUL2_0_PORT9_DEBUG_EVTO_B_0_OUT |
        SIUL2_0_PORT11_EMIOS_1_EMIOS_1_CH16_OUT |
        SIUL2_0_PORT12_FR_1_FR_1_DBG1_OUT |
        SIUL2_0_PORT13_LINFLEX_2_LIN_2_TX_OUT |
        SIUL2_0_PORT14_LCU_1_LCU_1_OUT_0_OUT |
        SIUL2_0_PORT15_LCU_1_LCU_1_OUT_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_LCU_1_LCU_1_OUT_2_OUT |
        SIUL2_0_PORT17_EMIOS_1_EMIOS_1_CH28_OUT |
        SIUL2_0_PORT18_LCU_1_LCU_1_OUT_4_OUT |
        SIUL2_0_PORT19_LCU_1_LCU_1_OUT_5_OUT |
        SIUL2_0_PORT20_EMIOS_1_EMIOS_1_CH25_OUT |
        SIUL2_0_PORT21_EMIOS_1_EMIOS_1_CH24_OUT |
        SIUL2_0_PORT22_LCU_1_LCU_1_OUT_8_OUT |
        SIUL2_0_PORT23_EMIOS_1_EMIOS_1_CH19_OUT |
        SIUL2_0_PORT24_EMIOS_1_EMIOS_1_CH8_OUT |
        SIUL2_0_PORT25_EMIOS_1_EMIOS_1_CH17_OUT |
        SIUL2_0_PORT26_EMIOS_1_EMIOS_1_CH10_OUT |
        SIUL2_0_PORT27_EMIOS_1_EMIOS_1_CH20_OUT |
        SIUL2_0_PORT28_EMIOS_1_EMIOS_1_CH12_OUT |
        SIUL2_0_PORT29_SPI_1_DSPI_1_PCS2_OUT |
        SIUL2_0_PORT30_SINC_SINC_MCLK_OUT_0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT5_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_EMIOS_1_EMIOS_1_CH6_OUT |
        SIUL2_0_PORT1_EMIOS_1_EMIOS_1_CH7_OUT |
        SIUL2_0_PORT2_EMIOS_1_EMIOS_1_CH1_OUT |
        SIUL2_0_PORT4_EMIOS_1_EMIOS_1_CH5_OUT |
        SIUL2_0_PORT5_EMIOS_1_EMIOS_1_CH0_OUT |
        SIUL2_0_PORT6_I3C_0_I3C_0_SDA_0_OUT |
        SIUL2_0_PORT7_I3C_0_I3C_0_SCL_OUT |
        SIUL2_0_PORT9_MC_CGM_0_CLKOUT_0_OUT |
        SIUL2_0_PORT11_SPI_1_DSPI_1_PCS4_OUT |
        SIUL2_0_PORT12_EMIOS_1_EMIOS_1_CH23_OUT |
        SIUL2_0_PORT14_EMIOS_1_EMIOS_1_CH31_OUT |
        SIUL2_0_PORT15_EMIOS_1_EMIOS_1_CH30_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_EMIOS_1_EMIOS_1_CH29_OUT |
        SIUL2_0_PORT17_PSI5_0_PSI5_0_SDOUT_1_OUT |
        SIUL2_0_PORT18_EMIOS_1_EMIOS_1_CH27_OUT |
        SIUL2_0_PORT19_EMIOS_1_EMIOS_1_CH26_OUT |
        SIUL2_0_PORT20_SPI_1_DSPI_1_SOUT_OUT |
        SIUL2_0_PORT21_PSI5_0_PSI5_0_SDOUT_3_OUT |
        SIUL2_0_PORT22_EMIOS_1_EMIOS_1_CH18_OUT |
        SIUL2_0_PORT23_PSI5_S_0_PSI5_S_0_TX_OUT |
        SIUL2_0_PORT24_SINC_SINC_MCLK_OUT_0_OUT |
        SIUL2_0_PORT25_PSI5_S_0_PSI5_S_0_TXCLK_OUT |
        SIUL2_0_PORT26_SINC_SINC_MCLK_OUT_2_OUT |
        SIUL2_0_PORT27_SPI_1_DSPI_1_PCS3_OUT |
        SIUL2_0_PORT28_SINC_SINC_MCLK_OUT_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT6_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT6_EMIOS_1_EMIOS_1_CH3_OUT |
        SIUL2_0_PORT7_EMIOS_1_EMIOS_1_CH4_OUT |
        SIUL2_0_PORT11_SINC_SINC_MCLK_OUT_0_OUT |
        SIUL2_0_PORT15_PSI5_0_PSI5_0_SDOUT_0_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_SPI_1_DSPI_1_PCS1_OUT |
        SIUL2_0_PORT18_SPI_1_DSPI_1_SCK_OUT |
        SIUL2_0_PORT19_PSI5_0_PSI5_0_SDOUT_2_OUT |
        SIUL2_0_PORT21_SPI_1_DSPI_1_PCS0_OUT |
        SIUL2_0_PORT22_MSC_0_DSPI_DSPI_10_PCS2_OUT |
        SIUL2_0_PORT26_SINC_SINC_MCLK_OUT_0_OUT |
        SIUL2_0_PORT28_SINC_SINC_MCLK_OUT_0_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT7_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT11_SINC_SINC_MCLK_OUT_1_OUT */
        (uint16)( SHL_PAD_U32(11U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_OUTPUT_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_C_VFCCU_ERR_1_0_OUT |
        SIUL2_0_PORT11_C_VFCCU_ERR_1_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT21_C_VFCCU_ERR_3_0_OUT |
        SIUL2_0_PORT30_C_VFCCU_ERR_2_0_OUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511
        SIUL2_0_PORT501_MSC_0_DSPI_DSPI_10_SOUT_OUT |
        SIUL2_0_PORT502_MSC_0_DSPI_DSPI_10_SCK_OUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U)
                )
    }
    ,
    /*  Mode PORT_ONLY_INPUT_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_C_VFCCU_ERR_1_0_IN |
        SIUL2_0_PORT0_GTM_GTM_000_IN |
        SIUL2_0_PORT1_GTM_GTM_001_IN |
        SIUL2_0_PORT2_GTM_GTM_002_IN |
        SIUL2_0_PORT3_GTM_GTM_003_IN |
        SIUL2_0_PORT4_GTM_GTM_004_IN |
        SIUL2_0_PORT5_GTM_GTM_005_IN |
        SIUL2_0_PORT6_GTM_GTM_006_IN |
        SIUL2_0_PORT7_GTM_GTM_007_IN |
        SIUL2_0_PORT8_GTM_GTM_008_IN |
        SIUL2_0_PORT9_GTM_GTM_009_IN |
        SIUL2_0_PORT10_GTM_GTM_010_IN |
        SIUL2_0_PORT11_C_VFCCU_ERR_1_1_IN |
        SIUL2_0_PORT11_GTM_GTM_011_IN |
        SIUL2_0_PORT12_GTM_GTM_012_IN |
        SIUL2_0_PORT13_GTM_GTM_013_IN |
        SIUL2_0_PORT14_GTM_GTM_014_IN |
        SIUL2_0_PORT15_GTM_GTM_015_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_GTM_GTM_016_IN |
        SIUL2_0_PORT17_GTM_GTM_017_IN |
        SIUL2_0_PORT18_GTM_GTM_018_IN |
        SIUL2_0_PORT19_GTM_GTM_019_IN |
        SIUL2_0_PORT20_GTM_GTM_020_IN |
        SIUL2_0_PORT21_C_VFCCU_ERR_3_0_IN |
        SIUL2_0_PORT21_GTM_GTM_021_IN |
        SIUL2_0_PORT22_GTM_GTM_022_IN |
        SIUL2_0_PORT23_GTM_GTM_023_IN |
        SIUL2_0_PORT24_GTM_GTM_024_IN |
        SIUL2_0_PORT25_GTM_GTM_025_IN |
        SIUL2_0_PORT26_GTM_GTM_026_IN |
        SIUL2_0_PORT27_GTM_GTM_027_IN |
        SIUL2_0_PORT28_GTM_GTM_028_IN |
        SIUL2_0_PORT29_GTM_GTM_029_IN |
        SIUL2_0_PORT30_C_VFCCU_ERR_2_0_IN |
        SIUL2_0_PORT30_GTM_GTM_030_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511
        SIUL2_0_PORT500_MSC_0_DSPI_DSPI_10_SIN_IN */
        (uint16)( SHL_PAD_U32(4U)
                )
    }
    ,
    /*  Mode PORT_INPUT1_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_CTU_CTU_EXT_IN_IN |
        SIUL2_0_PORT1_LINFLEX_0_LIN_0_RX_IN |
        SIUL2_0_PORT2_FR_0_FR_0_RXD_B_IN |
        SIUL2_0_PORT3_LINFLEX_1_LIN_1_RX_IN |
        SIUL2_0_PORT4_I3C_0_I3C_0_SDA_2_IN |
        SIUL2_0_PORT5_SIUL2_0_EIRQ_2_IN |
        SIUL2_0_PORT6_SPI_0_DSPI_0_SCK_IN |
        SIUL2_0_PORT7_I3C_0_I3C_0_SCL_IN |
        SIUL2_0_PORT8_FR_0_FR_0_RXD_A_IN |
        SIUL2_0_PORT9_BOOT_BOOTMOD_0_IN |
        SIUL2_0_PORT10_BOOT_BOOTMOD_1_IN |
        SIUL2_0_PORT11_EMIOS_1_EMIOS_1_CH16_IN |
        SIUL2_0_PORT12_PSI5_0_PSI5_0_SDIN_0_IN |
        SIUL2_0_PORT13_MSC_0_LIN_LIN_12_RX_IN |
        SIUL2_0_PORT14_LINFLEX_2_LIN_2_RX_IN |
        SIUL2_0_PORT15_SIUL2_0_EIRQ_6_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_PSI5_0_PSI5_0_SDIN_1_IN |
        SIUL2_0_PORT17_FR_1_FR_1_RXD_A_IN |
        SIUL2_0_PORT18_PSI5_0_PSI5_0_SDIN_2_IN |
        SIUL2_0_PORT19_SPI_1_DSPI_1_SIN_IN |
        SIUL2_0_PORT20_FR_1_FR_1_RXD_B_IN |
        SIUL2_0_PORT21_SPI_1_DSPI_1_PCS0_IN |
        SIUL2_0_PORT22_TRGMUX_1_TRGMUX_1_XIN_5_IN |
        SIUL2_0_PORT23_SINC_SINC_MBIT_3_IN |
        SIUL2_0_PORT24_TRGMUX_1_TRGMUX_1_XIN_1_IN |
        SIUL2_0_PORT25_SINC_SINC_MBIT_2_IN |
        SIUL2_0_PORT26_TRGMUX_1_TRGMUX_1_XIN_2_IN |
        SIUL2_0_PORT27_LINFLEX_0_LIN_0_RX_IN |
        SIUL2_0_PORT28_TRGMUX_1_TRGMUX_1_XIN_3_IN |
        SIUL2_0_PORT29_LINFLEX_1_LIN_1_RX_IN |
        SIUL2_0_PORT30_TRGMUX_1_TRGMUX_1_XIN_4_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT170_JTAGC_TDI_IN |
        SIUL2_0_PORT172_JTAGC_TMS_IN |
        SIUL2_0_PORT173_JTAGC_TCK_IN */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT2_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_EMIOS_1_EMIOS_1_CH6_IN |
        SIUL2_0_PORT1_SIUL2_0_EIRQ_1_IN |
        SIUL2_0_PORT2_SPI_0_DSPI_0_PCS0_IN |
        SIUL2_0_PORT3_SIUL2_0_EIRQ_0_IN |
        SIUL2_0_PORT4_EMIOS_1_EMIOS_1_CH5_IN |
        SIUL2_0_PORT5_I3C_0_I3C_0_SDA_1_IN |
        SIUL2_0_PORT6_PSI5_0_PSI5_0_SDIN_1_IN |
        SIUL2_0_PORT7_SPI_0_DSPI_0_SIN_IN |
        SIUL2_0_PORT8_FR_1_FR_1_RXD_B_IN |
        SIUL2_0_PORT9_MISC_TAMPER_IN_IN |
        SIUL2_0_PORT11_EMIOS_0_EMIOS_0_CH16_IN |
        SIUL2_0_PORT12_SIUL2_0_EIRQ_3_IN |
        SIUL2_0_PORT13_SIUL2_0_EIRQ_4_IN |
        SIUL2_0_PORT14_SIUL2_0_EIRQ_5_IN |
        SIUL2_0_PORT15_EMIOS_1_EMIOS_1_CH30_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_SIUL2_0_EIRQ_7_IN |
        SIUL2_0_PORT17_EMIOS_1_EMIOS_1_CH28_IN |
        SIUL2_0_PORT18_SPI_1_DSPI_1_SCK_IN |
        SIUL2_0_PORT19_EMIOS_1_EMIOS_1_CH26_IN |
        SIUL2_0_PORT20_PSI5_0_PSI5_0_SDIN_3_IN |
        SIUL2_0_PORT21_EMIOS_1_EMIOS_1_CH24_IN |
        SIUL2_0_PORT22_ADC_0_ADCSAR0_TRG_IN |
        SIUL2_0_PORT23_ADC_0_ADCSAR0_INJ_TRG_IN |
        SIUL2_0_PORT24_SINC_SINC_MCLK_3_IN |
        SIUL2_0_PORT25_ADC_1_ADCSAR1_INJ_TRG_IN |
        SIUL2_0_PORT26_SINC_SINC_MCLK_2_IN |
        SIUL2_0_PORT27_SINC_SINC_MBIT_1_IN |
        SIUL2_0_PORT28_SINC_SINC_MCLK_1_IN |
        SIUL2_0_PORT29_TRGMUX_1_TRGMUX_1_XIN_0_IN |
        SIUL2_0_PORT30_SINC_SINC_MCLK_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT3_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_EMIOS_0_EMIOS_0_CH6_IN |
        SIUL2_0_PORT1_I3C_0_I3C_0_SDA_3_IN |
        SIUL2_0_PORT2_PSI5_0_PSI5_0_SDIN_0_IN |
        SIUL2_0_PORT3_PSI5_S_0_PSI5_S_0_RX_IN |
        SIUL2_0_PORT4_EMIOS_0_EMIOS_0_CH5_IN |
        SIUL2_0_PORT5_EMIOS_1_EMIOS_1_CH0_IN |
        SIUL2_0_PORT6_I3C_0_I3C_0_SDA_0_IN |
        SIUL2_0_PORT7_EMIOS_1_EMIOS_1_CH4_IN |
        SIUL2_0_PORT8_CTU_CTU_EXT_IN_IN |
        SIUL2_0_PORT12_EMIOS_1_EMIOS_1_CH23_IN |
        SIUL2_0_PORT13_EMIOS_1_EMIOS_1_CH22_IN |
        SIUL2_0_PORT14_EMIOS_1_EMIOS_1_CH31_IN |
        SIUL2_0_PORT15_EMIOS_0_EMIOS_0_CH30_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_EMIOS_1_EMIOS_1_CH29_IN |
        SIUL2_0_PORT17_EMIOS_0_EMIOS_0_CH28_IN |
        SIUL2_0_PORT18_EMIOS_1_EMIOS_1_CH27_IN |
        SIUL2_0_PORT19_EMIOS_0_EMIOS_0_CH26_IN |
        SIUL2_0_PORT20_EMIOS_1_EMIOS_1_CH25_IN |
        SIUL2_0_PORT21_EMIOS_0_EMIOS_0_CH24_IN |
        SIUL2_0_PORT22_EMIOS_1_EMIOS_1_CH18_IN |
        SIUL2_0_PORT23_EMIOS_1_EMIOS_1_CH19_IN |
        SIUL2_0_PORT24_PSI5_S_0_PSI5_S_0_RX_IN |
        SIUL2_0_PORT25_EMIOS_1_EMIOS_1_CH17_IN |
        SIUL2_0_PORT26_EMIOS_1_EMIOS_1_CH10_IN |
        SIUL2_0_PORT27_EMIOS_1_EMIOS_1_CH20_IN |
        SIUL2_0_PORT28_EMIOS_1_EMIOS_1_CH12_IN |
        SIUL2_0_PORT29_SINC_SINC_MBIT_0_IN |
        SIUL2_0_PORT30_EMIOS_1_EMIOS_1_CH14_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT4_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT1_EMIOS_1_EMIOS_1_CH7_IN |
        SIUL2_0_PORT2_EMIOS_1_EMIOS_1_CH1_IN |
        SIUL2_0_PORT3_EMIOS_1_EMIOS_1_CH2_IN |
        SIUL2_0_PORT5_EMIOS_0_EMIOS_0_CH0_IN |
        SIUL2_0_PORT6_EMIOS_1_EMIOS_1_CH3_IN |
        SIUL2_0_PORT7_EMIOS_0_EMIOS_0_CH4_IN |
        SIUL2_0_PORT8_DEBUG_EVTI_B_0_IN |
        SIUL2_0_PORT12_EMIOS_0_EMIOS_0_CH23_IN |
        SIUL2_0_PORT13_EMIOS_0_EMIOS_0_CH22_IN |
        SIUL2_0_PORT14_EMIOS_0_EMIOS_0_CH31_IN |
        SIUL2_0_PORT15_NETC_TMR_1588_TRIG2_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_EMIOS_0_EMIOS_0_CH29_IN |
        SIUL2_0_PORT18_EMIOS_0_EMIOS_0_CH27_IN |
        SIUL2_0_PORT20_EMIOS_0_EMIOS_0_CH25_IN |
        SIUL2_0_PORT22_EMIOS_0_EMIOS_0_CH18_IN |
        SIUL2_0_PORT23_EMIOS_0_EMIOS_0_CH19_IN |
        SIUL2_0_PORT24_ADC_1_ADCSAR1_TRG_IN |
        SIUL2_0_PORT25_EMIOS_0_EMIOS_0_CH17_IN |
        SIUL2_0_PORT26_EMIOS_0_EMIOS_0_CH10_IN |
        SIUL2_0_PORT27_EMIOS_0_EMIOS_0_CH20_IN |
        SIUL2_0_PORT28_EMIOS_0_EMIOS_0_CH12_IN |
        SIUL2_0_PORT29_EMIOS_1_EMIOS_1_CH21_IN |
        SIUL2_0_PORT30_EMIOS_0_EMIOS_0_CH14_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT5_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT1_EMIOS_0_EMIOS_0_CH7_IN |
        SIUL2_0_PORT2_EMIOS_0_EMIOS_0_CH1_IN |
        SIUL2_0_PORT3_EMIOS_0_EMIOS_0_CH2_IN |
        SIUL2_0_PORT5_CAN_HUB_CAN_0_RX_IN |
        SIUL2_0_PORT6_EMIOS_0_EMIOS_0_CH3_IN |
        SIUL2_0_PORT13_CAN_HUB_CAN_0_RX_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT23_CAN_HUB_CAN_1_RX_IN |
        SIUL2_0_PORT24_EMIOS_1_EMIOS_1_CH8_IN |
        SIUL2_0_PORT25_CAN_HUB_CAN_2_RX_IN |
        SIUL2_0_PORT29_EMIOS_0_EMIOS_0_CH21_IN */
        (uint16)( SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_0_PORT24_EMIOS_0_EMIOS_0_CH8_IN */
        (uint16)( SHL_PAD_U32(8U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT7_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT1_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT1_GTM_GTM_001_INOUT |
        SIUL2_0_PORT3_GTM_GTM_003_INOUT |
        SIUL2_0_PORT5_GTM_GTM_005_INOUT |
        SIUL2_0_PORT8_GTM_GTM_008_INOUT |
        SIUL2_0_PORT9_GTM_GTM_009_INOUT |
        SIUL2_0_PORT10_GTM_GTM_010_INOUT |
        SIUL2_0_PORT13_GTM_GTM_013_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_GTM_GTM_017_INOUT |
        SIUL2_0_PORT18_GTM_GTM_018_INOUT |
        SIUL2_0_PORT19_GTM_GTM_019_INOUT |
        SIUL2_0_PORT20_GTM_GTM_020_INOUT |
        SIUL2_0_PORT21_GTM_GTM_021_INOUT |
        SIUL2_0_PORT23_GTM_GTM_023_INOUT |
        SIUL2_0_PORT25_GTM_GTM_025_INOUT |
        SIUL2_0_PORT26_GTM_GTM_026_INOUT |
        SIUL2_0_PORT27_GTM_GTM_027_INOUT |
        SIUL2_0_PORT28_GTM_GTM_028_INOUT |
        SIUL2_0_PORT29_GTM_GTM_029_INOUT |
        SIUL2_0_PORT30_GTM_GTM_030_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_0_PORT172_JTAGC_TMS_INOUT */
        (uint16)( SHL_PAD_U32(12U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT2_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_GTM_GTM_000_INOUT |
        SIUL2_0_PORT2_GTM_GTM_002_INOUT |
        SIUL2_0_PORT4_GTM_GTM_004_INOUT |
        SIUL2_0_PORT6_GTM_GTM_006_INOUT |
        SIUL2_0_PORT7_GTM_GTM_007_INOUT |
        SIUL2_0_PORT11_GTM_GTM_011_INOUT |
        SIUL2_0_PORT12_GTM_GTM_012_INOUT |
        SIUL2_0_PORT14_GTM_GTM_014_INOUT |
        SIUL2_0_PORT15_GTM_GTM_015_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_GTM_GTM_016_INOUT |
        SIUL2_0_PORT22_GTM_GTM_022_INOUT |
        SIUL2_0_PORT24_GTM_GTM_024_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT3_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT2_SPI_0_DSPI_0_PCS0_INOUT |
        SIUL2_0_PORT13_EMIOS_1_EMIOS_1_CH22_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT29_EMIOS_1_EMIOS_1_CH21_INOUT |
        SIUL2_0_PORT30_EMIOS_1_EMIOS_1_CH14_INOUT */
        (uint16)( SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT4_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT1_I3C_0_I3C_0_SDA_3_INOUT |
        SIUL2_0_PORT3_EMIOS_1_EMIOS_1_CH2_INOUT |
        SIUL2_0_PORT4_I3C_0_I3C_0_SDA_2_INOUT |
        SIUL2_0_PORT5_I3C_0_I3C_0_SDA_1_INOUT |
        SIUL2_0_PORT6_SPI_0_DSPI_0_SCK_INOUT |
        SIUL2_0_PORT11_EMIOS_1_EMIOS_1_CH16_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT17_EMIOS_1_EMIOS_1_CH28_INOUT |
        SIUL2_0_PORT20_EMIOS_1_EMIOS_1_CH25_INOUT |
        SIUL2_0_PORT21_EMIOS_1_EMIOS_1_CH24_INOUT |
        SIUL2_0_PORT23_EMIOS_1_EMIOS_1_CH19_INOUT |
        SIUL2_0_PORT24_EMIOS_1_EMIOS_1_CH8_INOUT |
        SIUL2_0_PORT25_EMIOS_1_EMIOS_1_CH17_INOUT |
        SIUL2_0_PORT26_EMIOS_1_EMIOS_1_CH10_INOUT |
        SIUL2_0_PORT27_EMIOS_1_EMIOS_1_CH20_INOUT |
        SIUL2_0_PORT28_EMIOS_1_EMIOS_1_CH12_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT5_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_EMIOS_1_EMIOS_1_CH6_INOUT |
        SIUL2_0_PORT1_EMIOS_1_EMIOS_1_CH7_INOUT |
        SIUL2_0_PORT2_EMIOS_1_EMIOS_1_CH1_INOUT |
        SIUL2_0_PORT4_EMIOS_1_EMIOS_1_CH5_INOUT |
        SIUL2_0_PORT5_EMIOS_1_EMIOS_1_CH0_INOUT |
        SIUL2_0_PORT6_I3C_0_I3C_0_SDA_0_INOUT |
        SIUL2_0_PORT7_I3C_0_I3C_0_SCL_INOUT |
        SIUL2_0_PORT12_EMIOS_1_EMIOS_1_CH23_INOUT |
        SIUL2_0_PORT14_EMIOS_1_EMIOS_1_CH31_INOUT |
        SIUL2_0_PORT15_EMIOS_1_EMIOS_1_CH30_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT16_EMIOS_1_EMIOS_1_CH29_INOUT |
        SIUL2_0_PORT18_EMIOS_1_EMIOS_1_CH27_INOUT |
        SIUL2_0_PORT19_EMIOS_1_EMIOS_1_CH26_INOUT |
        SIUL2_0_PORT22_EMIOS_1_EMIOS_1_CH18_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT6_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT6_EMIOS_1_EMIOS_1_CH3_INOUT |
        SIUL2_0_PORT7_EMIOS_1_EMIOS_1_CH4_INOUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT18_SPI_1_DSPI_1_SCK_INOUT |
        SIUL2_0_PORT21_SPI_1_DSPI_1_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INOUT_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_0_PORT0_C_VFCCU_ERR_1_0_INOUT |
        SIUL2_0_PORT11_C_VFCCU_ERR_1_1_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 16 - 31
        SIUL2_0_PORT21_C_VFCCU_ERR_3_0_INOUT |
        SIUL2_0_PORT30_C_VFCCU_ERR_2_0_INOUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
};

/**
* @brief Array of bits storing availability of PortPinModes for MSCRs on the other SIUL2 instance
*/
static const Port_PinModeAvailabilityArrayType Port_SIUL2_1_au16PinModeAvailability =
{
    /*  Mode PORT_GPIO_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_GPIO */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_GPIO |
        SIUL2_1_PORT33_GPIO |
        SIUL2_1_PORT34_GPIO |
        SIUL2_1_PORT35_GPIO |
        SIUL2_1_PORT36_GPIO |
        SIUL2_1_PORT37_GPIO |
        SIUL2_1_PORT38_GPIO |
        SIUL2_1_PORT39_GPIO |
        SIUL2_1_PORT40_GPIO |
        SIUL2_1_PORT41_GPIO |
        SIUL2_1_PORT42_GPIO |
        SIUL2_1_PORT43_GPIO |
        SIUL2_1_PORT44_GPIO |
        SIUL2_1_PORT45_GPIO |
        SIUL2_1_PORT46_GPIO |
        SIUL2_1_PORT47_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_GPIO |
        SIUL2_1_PORT49_GPIO |
        SIUL2_1_PORT50_GPIO |
        SIUL2_1_PORT51_GPIO |
        SIUL2_1_PORT52_GPIO |
        SIUL2_1_PORT53_GPIO |
        SIUL2_1_PORT54_GPIO |
        SIUL2_1_PORT55_GPIO |
        SIUL2_1_PORT56_GPIO |
        SIUL2_1_PORT57_GPIO |
        SIUL2_1_PORT58_GPIO |
        SIUL2_1_PORT59_GPIO |
        SIUL2_1_PORT60_GPIO |
        SIUL2_1_PORT61_GPIO |
        SIUL2_1_PORT62_GPIO |
        SIUL2_1_PORT63_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_GPIO |
        SIUL2_1_PORT65_GPIO |
        SIUL2_1_PORT66_GPIO |
        SIUL2_1_PORT67_GPIO |
        SIUL2_1_PORT68_GPIO |
        SIUL2_1_PORT69_GPIO |
        SIUL2_1_PORT70_GPIO |
        SIUL2_1_PORT71_GPIO |
        SIUL2_1_PORT72_GPIO |
        SIUL2_1_PORT73_GPIO |
        SIUL2_1_PORT74_GPIO |
        SIUL2_1_PORT75_GPIO |
        SIUL2_1_PORT76_GPIO |
        SIUL2_1_PORT77_GPIO |
        SIUL2_1_PORT78_GPIO |
        SIUL2_1_PORT79_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_GPIO |
        SIUL2_1_PORT81_GPIO |
        SIUL2_1_PORT82_GPIO |
        SIUL2_1_PORT83_GPIO |
        SIUL2_1_PORT84_GPIO |
        SIUL2_1_PORT85_GPIO |
        SIUL2_1_PORT86_GPIO |
        SIUL2_1_PORT87_GPIO |
        SIUL2_1_PORT88_GPIO |
        SIUL2_1_PORT89_GPIO |
        SIUL2_1_PORT90_GPIO |
        SIUL2_1_PORT91_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT1_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_GTM_GTM_031_OUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_GTM_GTM_032_OUT |
        SIUL2_1_PORT33_GTM_GTM_033_OUT |
        SIUL2_1_PORT34_CAN_HUB_CAN_3_TX_OUT |
        SIUL2_1_PORT35_GTM_GTM_035_OUT |
        SIUL2_1_PORT36_CAN_HUB_CAN_4_TX_OUT |
        SIUL2_1_PORT37_GTM_GTM_037_OUT |
        SIUL2_1_PORT38_GTM_GTM_038_OUT |
        SIUL2_1_PORT39_GTM_GTM_039_OUT |
        SIUL2_1_PORT40_MC_CGM_3_CLKOUT_4_OUT |
        SIUL2_1_PORT41_MC_CGM_1_CLKOUT_1_OUT |
        SIUL2_1_PORT42_NETC_ETH_1_MII_TXER_OUT |
        SIUL2_1_PORT43_GTM_GTM_042_OUT |
        SIUL2_1_PORT44_NETC_TMR_1588_ALARM1_OUT |
        SIUL2_1_PORT45_GTM_GTM_044_OUT |
        SIUL2_1_PORT46_NETC_ETH_1_RGMII_TXC_OUT |
        SIUL2_1_PORT47_NETC_ETH_1_RGMII_TXCTL_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_NETC_ETH_1_RGMII_TXD_0_OUT |
        SIUL2_1_PORT49_NETC_ETH_1_RGMII_TXD_1_OUT |
        SIUL2_1_PORT50_NETC_ETH_1_RGMII_TXD_2_OUT |
        SIUL2_1_PORT51_NETC_ETH_1_RGMII_TXD_3_OUT |
        SIUL2_1_PORT52_NETC_ETH_1_RGMII_TST_TXC_OUT |
        SIUL2_1_PORT53_NETC_ETH_1_RGMII_TST_TXCTL_OUT |
        SIUL2_1_PORT54_NETC_ETH_1_RGMII_TST_TXD_0_OUT |
        SIUL2_1_PORT55_NETC_ETH_1_RGMII_TST_TXD_1_OUT |
        SIUL2_1_PORT56_NETC_ETH_1_RGMII_TST_TXD_2_OUT |
        SIUL2_1_PORT57_NETC_ETH_1_RGMII_TST_TXD_3_OUT |
        SIUL2_1_PORT58_NETC_ETH_MDC_OUT |
        SIUL2_1_PORT59_NETC_ETH_MDIO_OUT |
        SIUL2_1_PORT60_NETC_ETH_0_RGMII_TXC_OUT |
        SIUL2_1_PORT61_NETC_ETH_0_RGMII_TXCTL_OUT |
        SIUL2_1_PORT62_NETC_ETH_0_RGMII_TXD_0_OUT |
        SIUL2_1_PORT63_NETC_ETH_0_RGMII_TXD_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_NETC_ETH_0_RGMII_TXD_2_OUT |
        SIUL2_1_PORT65_NETC_ETH_0_RGMII_TXD_3_OUT |
        SIUL2_1_PORT66_NETC_ETH_0_RGMII_TST_TXC_OUT |
        SIUL2_1_PORT67_NETC_ETH_0_RGMII_TST_TXCTL_OUT |
        SIUL2_1_PORT68_NETC_ETH_0_RGMII_TST_TXD_0_OUT |
        SIUL2_1_PORT69_NETC_ETH_0_RGMII_TST_TXD_1_OUT |
        SIUL2_1_PORT70_NETC_ETH_0_RGMII_TST_TXD_2_OUT |
        SIUL2_1_PORT71_NETC_ETH_0_RGMII_TST_TXD_3_OUT |
        SIUL2_1_PORT72_NETC_ETH_0_MII_TXER_OUT |
        SIUL2_1_PORT73_GTM_GTM_072_OUT |
        SIUL2_1_PORT74_GTM_GTM_073_OUT |
        SIUL2_1_PORT75_GTM_GTM_074_OUT |
        SIUL2_1_PORT76_CAN_HUB_CAN_5_TX_OUT |
        SIUL2_1_PORT77_GTM_GTM_076_OUT |
        SIUL2_1_PORT78_GTM_GTM_077_OUT |
        SIUL2_1_PORT79_GTM_GTM_078_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_GTM_GTM_079_OUT |
        SIUL2_1_PORT81_GTM_GTM_080_OUT |
        SIUL2_1_PORT82_GTM_GTM_081_OUT |
        SIUL2_1_PORT83_GTM_GTM_082_OUT |
        SIUL2_1_PORT84_GTM_GTM_083_OUT |
        SIUL2_1_PORT85_GTM_GTM_084_OUT |
        SIUL2_1_PORT86_SPI_2_DSPI_2_SCK_OUT |
        SIUL2_1_PORT87_GTM_GTM_086_OUT |
        SIUL2_1_PORT88_SPI_2_DSPI_2_SOUT_OUT |
        SIUL2_1_PORT89_SPI_2_DSPI_2_PCS0_OUT |
        SIUL2_1_PORT90_SPI_2_DSPI_2_PCS1_OUT |
        SIUL2_1_PORT91_SPI_2_DSPI_2_PCS2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT2_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_SPI_3_DSPI_3_SCK_OUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_LPI2C_1_I2C_1_SCL_OUT |
        SIUL2_1_PORT33_SPI_3_DSPI_3_SOUT_OUT |
        SIUL2_1_PORT34_GTM_GTM_034_OUT |
        SIUL2_1_PORT35_SPI_3_DSPI_3_PCS1_OUT |
        SIUL2_1_PORT36_GTM_GTM_036_OUT |
        SIUL2_1_PORT37_SPI_3_DSPI_3_PCS3_OUT |
        SIUL2_1_PORT38_SPI_3_DSPI_3_PCS4_OUT |
        SIUL2_1_PORT39_MC_CGM_1_LFAST_0_EXT_REF_CLK_OUT |
        SIUL2_1_PORT41_GTM_GTM_040_OUT |
        SIUL2_1_PORT42_GTM_GTM_041_OUT |
        SIUL2_1_PORT43_SPI_3_DSPI_3_PCS3_OUT |
        SIUL2_1_PORT44_GTM_GTM_043_OUT |
        SIUL2_1_PORT45_NETC_TMR_1588_PP2_OUT |
        SIUL2_1_PORT46_GTM_GTM_045_OUT |
        SIUL2_1_PORT47_NETC_ETH_1_MII_TXEN_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_NETC_ETH_1_MII_TXD_0_OUT |
        SIUL2_1_PORT49_NETC_ETH_1_MII_TXD_1_OUT |
        SIUL2_1_PORT50_NETC_ETH_1_MII_TXD_2_OUT |
        SIUL2_1_PORT51_NETC_ETH_1_MII_TXD_3_OUT |
        SIUL2_1_PORT52_GTM_GTM_051_OUT |
        SIUL2_1_PORT53_GTM_GTM_052_OUT |
        SIUL2_1_PORT54_GTM_GTM_053_OUT |
        SIUL2_1_PORT55_GTM_GTM_054_OUT |
        SIUL2_1_PORT56_GTM_GTM_055_OUT |
        SIUL2_1_PORT57_GTM_GTM_056_OUT |
        SIUL2_1_PORT58_GTM_GTM_057_OUT |
        SIUL2_1_PORT59_GTM_GTM_058_OUT |
        SIUL2_1_PORT60_GTM_GTM_059_OUT |
        SIUL2_1_PORT61_NETC_ETH_0_MII_TXEN_OUT |
        SIUL2_1_PORT62_NETC_ETH_0_MII_TXD_0_OUT |
        SIUL2_1_PORT63_NETC_ETH_0_MII_TXD_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_NETC_ETH_0_MII_TXD_2_OUT |
        SIUL2_1_PORT65_NETC_ETH_0_MII_TXD_3_OUT |
        SIUL2_1_PORT66_GTM_GTM_065_OUT |
        SIUL2_1_PORT67_GTM_GTM_066_OUT |
        SIUL2_1_PORT68_GTM_GTM_067_OUT |
        SIUL2_1_PORT69_GTM_GTM_068_OUT |
        SIUL2_1_PORT70_GTM_GTM_069_OUT |
        SIUL2_1_PORT71_GTM_GTM_070_OUT |
        SIUL2_1_PORT72_GTM_GTM_071_OUT |
        SIUL2_1_PORT74_NETC_TMR_1588_ALARM1_OUT |
        SIUL2_1_PORT75_NETC_TMR_1588_PP2_OUT |
        SIUL2_1_PORT76_GTM_GTM_075_OUT |
        SIUL2_1_PORT77_SPI_2_DSPI_2_PCS4_OUT |
        SIUL2_1_PORT78_SPI_4_DSPI_4_SCK_OUT |
        SIUL2_1_PORT79_NETC_TMR_1588_ALARM2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_SPI_4_DSPI_4_SOUT_OUT |
        SIUL2_1_PORT81_SPI_4_DSPI_4_PCS0_OUT |
        SIUL2_1_PORT82_SPI_4_DSPI_4_PCS1_OUT |
        SIUL2_1_PORT83_SPI_4_DSPI_4_PCS2_OUT |
        SIUL2_1_PORT84_SPI_4_DSPI_4_PCS3_OUT |
        SIUL2_1_PORT85_SPI_4_DSPI_4_PCS4_OUT |
        SIUL2_1_PORT86_GTM_GTM_085_OUT |
        SIUL2_1_PORT87_NETC_TMR_1588_PP2_OUT |
        SIUL2_1_PORT88_GTM_GTM_087_OUT |
        SIUL2_1_PORT89_GTM_GTM_088_OUT |
        SIUL2_1_PORT90_GTM_GTM_089_OUT |
        SIUL2_1_PORT91_GTM_GTM_090_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT3_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_LPI2C_1_I2C_1_SDA_OUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_DEBUG_EVTO_B_1_OUT |
        SIUL2_1_PORT34_SPI_3_DSPI_3_PCS0_OUT |
        SIUL2_1_PORT36_SPI_3_DSPI_3_PCS2_OUT |
        SIUL2_1_PORT38_MC_CGM_1_LFAST_1_EXT_REF_CLK_OUT |
        SIUL2_1_PORT41_NETC_TMR_1588_CLK_OUT |
        SIUL2_1_PORT42_NETC_TMR_1588_CLK_OUT |
        SIUL2_1_PORT44_SPI_3_DSPI_3_SCK_OUT |
        SIUL2_1_PORT45_NETC_TMR_1588_CLK_OUT |
        SIUL2_1_PORT46_SPI_3_DSPI_3_SOUT_OUT |
        SIUL2_1_PORT47_NETC_ETH_1_RMII_TXEN_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_NETC_ETH_1_RMII_TXD_0_OUT |
        SIUL2_1_PORT49_NETC_ETH_1_RMII_TXD_1_OUT |
        SIUL2_1_PORT50_GTM_GTM_049_OUT |
        SIUL2_1_PORT51_GTM_GTM_050_OUT |
        SIUL2_1_PORT52_SPI_4_DSPI_4_SOUT_OUT |
        SIUL2_1_PORT53_SPI_4_DSPI_4_PCS0_OUT |
        SIUL2_1_PORT54_SPI_4_DSPI_4_PCS1_OUT |
        SIUL2_1_PORT55_SPI_4_DSPI_4_PCS2_OUT |
        SIUL2_1_PORT56_LPI2C_1_I2C_1_SCL_OUT |
        SIUL2_1_PORT57_LPI2C_1_I2C_1_SDA_OUT |
        SIUL2_1_PORT61_NETC_ETH_0_RMII_TXEN_OUT |
        SIUL2_1_PORT62_NETC_ETH_0_RMII_TXD_0_OUT |
        SIUL2_1_PORT63_NETC_ETH_0_RMII_TXD_1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_GTM_GTM_063_OUT |
        SIUL2_1_PORT65_GTM_GTM_064_OUT |
        SIUL2_1_PORT66_MC_CGM_1_ETH_0_REF_RMII_CLK_OUT |
        SIUL2_1_PORT70_NETC_TMR_1588_ALARM2_OUT |
        SIUL2_1_PORT71_NETC_TMR_1588_ALARM1_OUT |
        SIUL2_1_PORT72_NETC_TMR_1588_CLK_OUT |
        SIUL2_1_PORT74_NETC_TMR_1588_PP1_OUT |
        SIUL2_1_PORT75_NETC_TMR_1588_CLK_OUT |
        SIUL2_1_PORT76_SPI_2_DSPI_2_PCS3_OUT |
        SIUL2_1_PORT78_NETC_TMR_1588_PP1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT83_LPI2C_1_I2C_1_SDA_OUT |
        SIUL2_1_PORT84_LPI2C_1_I2C_1_SCL_OUT |
        SIUL2_1_PORT86_NETC_TMR_1588_PP1_OUT |
        SIUL2_1_PORT89_MC_CGM_1_CLKOUT_1_OUT |
        SIUL2_1_PORT90_LINFLEX_3_LIN_3_TX_OUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT4_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_LINFLEX_4_LIN_4_TX_OUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT44_NETC_TMR_1588_PP1_OUT |
        SIUL2_1_PORT47_GTM_GTM_046_OUT */
        (uint16)( SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_GTM_GTM_047_OUT |
        SIUL2_1_PORT49_GTM_GTM_048_OUT |
        SIUL2_1_PORT50_NETC_TMR_1588_PP2_OUT |
        SIUL2_1_PORT51_CAN_HUB_CAN_4_TX_OUT |
        SIUL2_1_PORT52_MC_CGM_1_ETH_1_REF_RMII_CLK_OUT |
        SIUL2_1_PORT53_LINFLEX_5_LIN_5_TX_OUT |
        SIUL2_1_PORT61_GTM_GTM_060_OUT |
        SIUL2_1_PORT62_GTM_GTM_061_OUT |
        SIUL2_1_PORT63_GTM_GTM_062_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_NETC_TMR_1588_PP1_OUT |
        SIUL2_1_PORT65_NETC_TMR_1588_PP2_OUT |
        SIUL2_1_PORT78_NETC_TMR_1588_ALARM1_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_NETC_TMR_1588_PP1_OUT |
        SIUL2_1_PORT81_NETC_TMR_1588_PP2_OUT |
        SIUL2_1_PORT83_NETC_TMR_1588_ALARM2_OUT |
        SIUL2_1_PORT84_CAN_HUB_CAN_3_TX_OUT |
        SIUL2_1_PORT90_CAN_HUB_CAN_4_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT5_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_CAN_HUB_CAN_14_TX_OUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT36_LINFLEX_5_LIN_5_TX_OUT |
        SIUL2_1_PORT47_SPI_3_DSPI_3_PCS0_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_SPI_3_DSPI_3_PCS1_OUT |
        SIUL2_1_PORT49_SPI_3_DSPI_3_PCS2_OUT |
        SIUL2_1_PORT50_SPI_4_DSPI_4_SCK_OUT |
        SIUL2_1_PORT51_NETC_TMR_1588_PP2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_NETC_TMR_1588_ALARM1_OUT |
        SIUL2_1_PORT65_NETC_TMR_1588_ALARM2_OUT |
        SIUL2_1_PORT78_CAN_HUB_CAN_15_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_NETC_TMR_1588_ALARM1_OUT |
        SIUL2_1_PORT90_CAN_HUB_CAN_16_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT6_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_1_PORT47_LINFLEX_4_LIN_4_TX_OUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT49_CAN_HUB_CAN_3_TX_OUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT7_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_OUTPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_1_PORT41_C_VFCCU_ERR_2_1_OUT |
        SIUL2_1_PORT42_C_VFCCU_ERR_3_1_OUT */
        (uint16)( SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511
        SIUL2_1_PORT500_ZIPWIRE_0_LFAST_0_TXD_OUT |
        SIUL2_1_PORT502_ZIPWIRE_1_LFAST_1_TXD_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U)
                )
    }
    ,
    /*  Mode PORT_ONLY_INPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_GTM_GTM_031_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_GTM_GTM_032_IN |
        SIUL2_1_PORT33_GTM_GTM_033_IN |
        SIUL2_1_PORT34_GTM_GTM_034_IN |
        SIUL2_1_PORT35_GTM_GTM_035_IN |
        SIUL2_1_PORT36_GTM_GTM_036_IN |
        SIUL2_1_PORT37_GTM_GTM_037_IN |
        SIUL2_1_PORT38_GTM_GTM_038_IN |
        SIUL2_1_PORT39_GTM_GTM_039_IN |
        SIUL2_1_PORT41_C_VFCCU_ERR_2_1_IN |
        SIUL2_1_PORT41_GTM_GTM_040_IN |
        SIUL2_1_PORT42_C_VFCCU_ERR_3_1_IN |
        SIUL2_1_PORT42_GTM_GTM_041_IN |
        SIUL2_1_PORT43_GTM_GTM_042_IN |
        SIUL2_1_PORT44_GTM_GTM_043_IN |
        SIUL2_1_PORT45_GTM_GTM_044_IN |
        SIUL2_1_PORT46_GTM_GTM_045_IN |
        SIUL2_1_PORT47_GTM_GTM_046_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_GTM_GTM_047_IN |
        SIUL2_1_PORT49_GTM_GTM_048_IN |
        SIUL2_1_PORT50_GTM_GTM_049_IN |
        SIUL2_1_PORT51_GTM_GTM_050_IN |
        SIUL2_1_PORT52_GTM_GTM_051_IN |
        SIUL2_1_PORT53_GTM_GTM_052_IN |
        SIUL2_1_PORT54_GTM_GTM_053_IN |
        SIUL2_1_PORT55_GTM_GTM_054_IN |
        SIUL2_1_PORT56_GTM_GTM_055_IN |
        SIUL2_1_PORT57_GTM_GTM_056_IN |
        SIUL2_1_PORT58_BOOT_RCON16_IN |
        SIUL2_1_PORT58_GTM_GTM_057_IN |
        SIUL2_1_PORT59_BOOT_RCON17_IN |
        SIUL2_1_PORT59_GTM_GTM_058_IN |
        SIUL2_1_PORT60_BOOT_RCON18_IN |
        SIUL2_1_PORT60_GTM_GTM_059_IN |
        SIUL2_1_PORT61_BOOT_RCON19_IN |
        SIUL2_1_PORT61_GTM_GTM_060_IN |
        SIUL2_1_PORT62_BOOT_RCON20_IN |
        SIUL2_1_PORT62_GTM_GTM_061_IN |
        SIUL2_1_PORT63_BOOT_RCON21_IN |
        SIUL2_1_PORT63_GTM_GTM_062_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_BOOT_RCON22_IN |
        SIUL2_1_PORT64_GTM_GTM_063_IN |
        SIUL2_1_PORT65_BOOT_RCON23_IN |
        SIUL2_1_PORT65_GTM_GTM_064_IN |
        SIUL2_1_PORT66_BOOT_RCON24_IN |
        SIUL2_1_PORT66_GTM_GTM_065_IN |
        SIUL2_1_PORT67_BOOT_RCON25_IN |
        SIUL2_1_PORT67_GTM_GTM_066_IN |
        SIUL2_1_PORT68_BOOT_RCON26_IN |
        SIUL2_1_PORT68_GTM_GTM_067_IN |
        SIUL2_1_PORT69_BOOT_RCON27_IN |
        SIUL2_1_PORT69_GTM_GTM_068_IN |
        SIUL2_1_PORT70_GTM_GTM_069_IN |
        SIUL2_1_PORT71_GTM_GTM_070_IN |
        SIUL2_1_PORT72_BOOT_RCON28_IN |
        SIUL2_1_PORT72_GTM_GTM_071_IN |
        SIUL2_1_PORT73_BOOT_RCON29_IN |
        SIUL2_1_PORT73_GTM_GTM_072_IN |
        SIUL2_1_PORT74_BOOT_RCON30_IN |
        SIUL2_1_PORT74_GTM_GTM_073_IN |
        SIUL2_1_PORT75_BOOT_RCON31_IN |
        SIUL2_1_PORT75_GTM_GTM_074_IN |
        SIUL2_1_PORT76_GTM_GTM_075_IN |
        SIUL2_1_PORT77_GTM_GTM_076_IN |
        SIUL2_1_PORT78_GTM_GTM_077_IN |
        SIUL2_1_PORT79_GTM_GTM_078_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_GTM_GTM_079_IN |
        SIUL2_1_PORT81_GTM_GTM_080_IN |
        SIUL2_1_PORT82_GTM_GTM_081_IN |
        SIUL2_1_PORT83_GTM_GTM_082_IN |
        SIUL2_1_PORT84_GTM_GTM_083_IN |
        SIUL2_1_PORT85_GTM_GTM_084_IN |
        SIUL2_1_PORT86_GTM_GTM_085_IN |
        SIUL2_1_PORT87_GTM_GTM_086_IN |
        SIUL2_1_PORT88_GTM_GTM_087_IN |
        SIUL2_1_PORT89_GTM_GTM_088_IN |
        SIUL2_1_PORT90_GTM_GTM_089_IN |
        SIUL2_1_PORT91_GTM_GTM_090_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511
        SIUL2_1_PORT501_ZIPWIRE_0_LFAST_0_RXD_IN |
        SIUL2_1_PORT503_ZIPWIRE_1_LFAST_1_RXD_IN */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U)
                )
    }
    ,
    /*  Mode PORT_INPUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_SPI_3_DSPI_3_SCK_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_LPI2C_1_I2C_1_SCL_IN |
        SIUL2_1_PORT34_SPI_3_DSPI_3_PCS0_IN |
        SIUL2_1_PORT35_SIUL2_1_EIRQ_0_IN |
        SIUL2_1_PORT37_LINFLEX_5_LIN_5_RX_IN |
        SIUL2_1_PORT38_MC_CGM_1_LFAST_1_EXT_REF_CLK_IN |
        SIUL2_1_PORT39_MC_CGM_1_LFAST_0_EXT_REF_CLK_IN |
        SIUL2_1_PORT41_MC_CGM_1_TMR_1588_CLK_IN |
        SIUL2_1_PORT42_MC_CGM_1_TMR_1588_CLK_IN |
        SIUL2_1_PORT43_NETC_TMR_1588_TRIG1_IN |
        SIUL2_1_PORT44_MC_CGM_1_TMR_1588_CLK_IN |
        SIUL2_1_PORT45_NETC_ETH_1_MII_COL_IN |
        SIUL2_1_PORT46_MC_CGM_1_ETH_1_TX_CLK_IN |
        SIUL2_1_PORT47_SPI_3_DSPI_3_PCS0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_LINFLEX_4_LIN_4_RX_IN |
        SIUL2_1_PORT49_NETC_ETH_1_RGMII_RXD_1_IN |
        SIUL2_1_PORT50_SPI_4_DSPI_4_SCK_IN |
        SIUL2_1_PORT51_SPI_4_DSPI_4_SIN_IN |
        SIUL2_1_PORT52_MC_CGM_1_ETH_1_RX_CLK_IN |
        SIUL2_1_PORT53_NETC_ETH_1_MII_RXDV_IN |
        SIUL2_1_PORT54_NETC_ETH_1_MII_RXD_0_IN |
        SIUL2_1_PORT55_NETC_ETH_1_MII_RXD_1_IN |
        SIUL2_1_PORT56_LPI2C_1_I2C_1_SCL_IN |
        SIUL2_1_PORT57_NETC_TMR_1588_TRIG2_IN |
        SIUL2_1_PORT58_NETC_ETH_MDC_IN |
        SIUL2_1_PORT59_NETC_ETH_MDIO_IN |
        SIUL2_1_PORT60_MC_CGM_1_ETH_0_TX_CLK_IN |
        SIUL2_1_PORT61_NETC_ETH_0_RGMII_RXCTL_IN |
        SIUL2_1_PORT62_NETC_ETH_0_RGMII_RXD_0_IN |
        SIUL2_1_PORT63_NETC_ETH_0_RGMII_RXD_1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_NETC_ETH_0_RGMII_RXD_2_IN |
        SIUL2_1_PORT65_NETC_ETH_0_RGMII_RXD_3_IN |
        SIUL2_1_PORT66_MC_CGM_1_ETH_0_RX_CLK_IN |
        SIUL2_1_PORT67_NETC_ETH_0_MII_RXDV_IN |
        SIUL2_1_PORT68_NETC_ETH_0_MII_RXD_0_IN |
        SIUL2_1_PORT69_NETC_ETH_0_MII_RXD_1_IN |
        SIUL2_1_PORT70_NETC_TMR_1588_TRIG1_IN |
        SIUL2_1_PORT71_NETC_ETH_0_MII_RXD_3_IN |
        SIUL2_1_PORT72_MC_CGM_1_TMR_1588_CLK_IN |
        SIUL2_1_PORT73_NETC_TMR_1588_TRIG1_IN |
        SIUL2_1_PORT74_MC_CGM_1_TMR_1588_CLK_IN |
        SIUL2_1_PORT75_NETC_ETH_0_MII_COL_IN |
        SIUL2_1_PORT76_SRX_0_SENT_0_CH0_IN |
        SIUL2_1_PORT77_SRX_0_SENT_0_CH1_IN |
        SIUL2_1_PORT78_SRX_0_SENT_0_CH0_IN |
        SIUL2_1_PORT79_SPI_4_DSPI_4_SIN_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_SIUL2_1_EIRQ_2_IN |
        SIUL2_1_PORT81_SIUL2_1_EIRQ_3_IN |
        SIUL2_1_PORT82_SRX_0_SENT_0_CH4_IN |
        SIUL2_1_PORT83_SRX_0_SENT_0_CH5_IN |
        SIUL2_1_PORT84_LPI2C_1_I2C_1_SCL_IN |
        SIUL2_1_PORT85_SIUL2_1_EIRQ_5_IN |
        SIUL2_1_PORT86_SPI_2_DSPI_2_SCK_IN |
        SIUL2_1_PORT87_SPI_2_DSPI_2_SIN_IN |
        SIUL2_1_PORT88_NETC_TMR_1588_TRIG1_IN |
        SIUL2_1_PORT89_NETC_TMR_1588_TRIG2_IN |
        SIUL2_1_PORT90_SIUL2_1_EIRQ_6_IN |
        SIUL2_1_PORT91_LINFLEX_3_LIN_3_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_LPI2C_1_I2C_1_SDA_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_SPI_3_DSPI_3_SIN_IN |
        SIUL2_1_PORT35_CAN_HUB_CAN_3_RX_IN |
        SIUL2_1_PORT37_SIUL2_1_EIRQ_1_IN |
        SIUL2_1_PORT41_MC_CGM_1_ETH_RGMII_REF_CLK_IN |
        SIUL2_1_PORT43_NETC_ETH_1_MII_RXER_IN |
        SIUL2_1_PORT44_NETC_ETH_1_MII_CRS_IN |
        SIUL2_1_PORT45_NETC_TMR_1588_TRIG2_IN |
        SIUL2_1_PORT47_NETC_ETH_1_RGMII_RXCTL_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_NETC_ETH_1_RGMII_RXD_0_IN |
        SIUL2_1_PORT50_CAN_HUB_CAN_3_RX_IN |
        SIUL2_1_PORT51_NETC_ETH_1_RGMII_RXD_3_IN |
        SIUL2_1_PORT52_CAN_HUB_CAN_4_RX_IN |
        SIUL2_1_PORT53_NETC_ETH_1_RGMII_RXCTL_IN |
        SIUL2_1_PORT54_NETC_ETH_1_RGMII_RXD_0_IN |
        SIUL2_1_PORT55_NETC_ETH_1_RGMII_RXD_1_IN |
        SIUL2_1_PORT56_NETC_TMR_1588_TRIG1_IN |
        SIUL2_1_PORT57_NETC_ETH_1_MII_RXD_3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT67_NETC_ETH_0_RGMII_RXCTL_IN |
        SIUL2_1_PORT68_NETC_ETH_0_RGMII_RXD_0_IN |
        SIUL2_1_PORT69_NETC_ETH_0_RGMII_RXD_1_IN |
        SIUL2_1_PORT70_NETC_ETH_0_MII_RXD_2_IN |
        SIUL2_1_PORT71_NETC_ETH_0_RGMII_RXD_3_IN |
        SIUL2_1_PORT73_NETC_ETH_0_MII_RXER_IN |
        SIUL2_1_PORT74_NETC_ETH_0_MII_CRS_IN |
        SIUL2_1_PORT75_NETC_TMR_1588_TRIG2_IN |
        SIUL2_1_PORT77_CAN_HUB_CAN_5_RX_IN |
        SIUL2_1_PORT78_SPI_4_DSPI_4_SCK_IN |
        SIUL2_1_PORT79_SRX_0_SENT_0_CH1_IN */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_SRX_0_SENT_0_CH2_IN |
        SIUL2_1_PORT81_SRX_0_SENT_0_CH3_IN |
        SIUL2_1_PORT83_LPI2C_1_I2C_1_SDA_IN |
        SIUL2_1_PORT84_SIUL2_1_EIRQ_4_IN |
        SIUL2_1_PORT85_SRX_0_SENT_0_CH7_IN |
        SIUL2_1_PORT86_SRX_0_SENT_0_CH2_IN |
        SIUL2_1_PORT87_SRX_0_SENT_0_CH3_IN |
        SIUL2_1_PORT88_SRX_0_SENT_0_CH4_IN |
        SIUL2_1_PORT89_SPI_2_DSPI_2_PCS0_IN |
        SIUL2_1_PORT90_SRX_0_SENT_0_CH6_IN |
        SIUL2_1_PORT91_SIUL2_1_EIRQ_7_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_DEBUG_EVTI_B_1_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_LINFLEX_4_LIN_4_RX_IN |
        SIUL2_1_PORT37_CAN_HUB_CAN_4_RX_IN |
        SIUL2_1_PORT43_NETC_ETH_1_RMII_RXER_IN |
        SIUL2_1_PORT44_SPI_3_DSPI_3_SCK_IN |
        SIUL2_1_PORT45_SPI_3_DSPI_3_SIN_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT50_NETC_ETH_1_RGMII_RXD_2_IN |
        SIUL2_1_PORT53_NETC_ETH_1_RMII_CRS_DV_IN |
        SIUL2_1_PORT54_LINFLEX_5_LIN_5_RX_IN |
        SIUL2_1_PORT55_NETC_ETH_1_RMII_RXD_1_IN |
        SIUL2_1_PORT56_NETC_ETH_1_MII_RXD_2_IN |
        SIUL2_1_PORT57_NETC_ETH_1_RGMII_RXD_3_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT67_NETC_ETH_0_RMII_CRS_DV_IN |
        SIUL2_1_PORT68_NETC_ETH_0_RMII_RXD_0_IN |
        SIUL2_1_PORT69_NETC_ETH_0_RMII_RXD_1_IN |
        SIUL2_1_PORT70_NETC_ETH_0_RGMII_RXD_2_IN |
        SIUL2_1_PORT71_NETC_TMR_1588_TRIG2_IN |
        SIUL2_1_PORT73_NETC_ETH_0_RMII_RXER_IN |
        SIUL2_1_PORT79_CAN_HUB_CAN_15_RX_IN */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT81_SPI_4_DSPI_4_PCS0_IN |
        SIUL2_1_PORT84_SRX_0_SENT_0_CH6_IN |
        SIUL2_1_PORT85_CAN_HUB_CAN_3_RX_IN |
        SIUL2_1_PORT89_SRX_0_SENT_0_CH5_IN |
        SIUL2_1_PORT91_SRX_0_SENT_0_CH7_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_1_PORT32_CAN_HUB_CAN_14_RX_IN */
        (uint16)( SHL_PAD_U32(0U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT53_SPI_4_DSPI_4_PCS0_IN |
        SIUL2_1_PORT54_NETC_ETH_1_RMII_RXD_0_IN |
        SIUL2_1_PORT56_NETC_ETH_1_RGMII_RXD_2_IN |
        SIUL2_1_PORT57_LPI2C_1_I2C_1_SDA_IN */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_1_PORT91_CAN_HUB_CAN_4_RX_IN */
        (uint16)( SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_1_PORT91_CAN_HUB_CAN_16_RX_IN */
        (uint16)( SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT7_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_GTM_GTM_031_INOUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_GTM_GTM_032_INOUT |
        SIUL2_1_PORT33_GTM_GTM_033_INOUT |
        SIUL2_1_PORT35_GTM_GTM_035_INOUT |
        SIUL2_1_PORT37_GTM_GTM_037_INOUT |
        SIUL2_1_PORT38_GTM_GTM_038_INOUT |
        SIUL2_1_PORT39_GTM_GTM_039_INOUT |
        SIUL2_1_PORT43_GTM_GTM_042_INOUT |
        SIUL2_1_PORT45_GTM_GTM_044_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT58_NETC_ETH_MDC_INOUT |
        SIUL2_1_PORT59_NETC_ETH_MDIO_INOUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT73_GTM_GTM_072_INOUT |
        SIUL2_1_PORT74_GTM_GTM_073_INOUT |
        SIUL2_1_PORT75_GTM_GTM_074_INOUT |
        SIUL2_1_PORT77_GTM_GTM_076_INOUT |
        SIUL2_1_PORT78_GTM_GTM_077_INOUT |
        SIUL2_1_PORT79_GTM_GTM_078_INOUT */
        (uint16)( SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT80_GTM_GTM_079_INOUT |
        SIUL2_1_PORT81_GTM_GTM_080_INOUT |
        SIUL2_1_PORT82_GTM_GTM_081_INOUT |
        SIUL2_1_PORT83_GTM_GTM_082_INOUT |
        SIUL2_1_PORT84_GTM_GTM_083_INOUT |
        SIUL2_1_PORT85_GTM_GTM_084_INOUT |
        SIUL2_1_PORT86_SPI_2_DSPI_2_SCK_INOUT |
        SIUL2_1_PORT87_GTM_GTM_086_INOUT |
        SIUL2_1_PORT89_SPI_2_DSPI_2_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_SPI_3_DSPI_3_SCK_INOUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT32_LPI2C_1_I2C_1_SCL_INOUT |
        SIUL2_1_PORT34_GTM_GTM_034_INOUT |
        SIUL2_1_PORT36_GTM_GTM_036_INOUT |
        SIUL2_1_PORT39_MC_CGM_1_LFAST_0_EXT_REF_CLK_INOUT |
        SIUL2_1_PORT41_GTM_GTM_040_INOUT |
        SIUL2_1_PORT42_GTM_GTM_041_INOUT |
        SIUL2_1_PORT44_GTM_GTM_043_INOUT |
        SIUL2_1_PORT46_GTM_GTM_045_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT52_GTM_GTM_051_INOUT |
        SIUL2_1_PORT53_GTM_GTM_052_INOUT |
        SIUL2_1_PORT54_GTM_GTM_053_INOUT |
        SIUL2_1_PORT55_GTM_GTM_054_INOUT |
        SIUL2_1_PORT56_GTM_GTM_055_INOUT |
        SIUL2_1_PORT57_GTM_GTM_056_INOUT |
        SIUL2_1_PORT58_GTM_GTM_057_INOUT |
        SIUL2_1_PORT59_GTM_GTM_058_INOUT |
        SIUL2_1_PORT60_GTM_GTM_059_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT66_GTM_GTM_065_INOUT |
        SIUL2_1_PORT67_GTM_GTM_066_INOUT |
        SIUL2_1_PORT68_GTM_GTM_067_INOUT |
        SIUL2_1_PORT69_GTM_GTM_068_INOUT |
        SIUL2_1_PORT70_GTM_GTM_069_INOUT |
        SIUL2_1_PORT71_GTM_GTM_070_INOUT |
        SIUL2_1_PORT72_GTM_GTM_071_INOUT |
        SIUL2_1_PORT76_GTM_GTM_075_INOUT |
        SIUL2_1_PORT78_SPI_4_DSPI_4_SCK_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT81_SPI_4_DSPI_4_PCS0_INOUT |
        SIUL2_1_PORT86_GTM_GTM_085_INOUT |
        SIUL2_1_PORT88_GTM_GTM_087_INOUT |
        SIUL2_1_PORT89_GTM_GTM_088_INOUT |
        SIUL2_1_PORT90_GTM_GTM_089_INOUT |
        SIUL2_1_PORT91_GTM_GTM_090_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_1_PORT31_LPI2C_1_I2C_1_SDA_INOUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_1_PORT34_SPI_3_DSPI_3_PCS0_INOUT |
        SIUL2_1_PORT38_MC_CGM_1_LFAST_1_EXT_REF_CLK_INOUT |
        SIUL2_1_PORT44_SPI_3_DSPI_3_SCK_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(12U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT50_GTM_GTM_049_INOUT |
        SIUL2_1_PORT51_GTM_GTM_050_INOUT |
        SIUL2_1_PORT53_SPI_4_DSPI_4_PCS0_INOUT |
        SIUL2_1_PORT56_LPI2C_1_I2C_1_SCL_INOUT |
        SIUL2_1_PORT57_LPI2C_1_I2C_1_SDA_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 64 - 79
        SIUL2_1_PORT64_GTM_GTM_063_INOUT |
        SIUL2_1_PORT65_GTM_GTM_064_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 80 - 95
        SIUL2_1_PORT83_LPI2C_1_I2C_1_SDA_INOUT |
        SIUL2_1_PORT84_LPI2C_1_I2C_1_SCL_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U)
                ),
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_1_PORT47_GTM_GTM_046_INOUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT48_GTM_GTM_047_INOUT |
        SIUL2_1_PORT49_GTM_GTM_048_INOUT |
        SIUL2_1_PORT61_GTM_GTM_060_INOUT |
        SIUL2_1_PORT62_GTM_GTM_061_INOUT |
        SIUL2_1_PORT63_GTM_GTM_062_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_1_PORT47_SPI_3_DSPI_3_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 48 - 63
        SIUL2_1_PORT50_SPI_4_DSPI_4_SCK_INOUT */
        (uint16)( SHL_PAD_U32(2U)
                ),
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INOUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47
        SIUL2_1_PORT41_C_VFCCU_ERR_2_1_INOUT |
        SIUL2_1_PORT42_C_VFCCU_ERR_3_1_INOUT */
        (uint16)( SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
};
static const Port_PinModeAvailabilityArrayType Port_SIUL2_3_au16PinModeAvailability =
{
    /*  Mode PORT_GPIO_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT1_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT2_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT3_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT4_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT5_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT6_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT7_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_OUTPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT7_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INOUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
};
static const Port_PinModeAvailabilityArrayType Port_SIUL2_4_au16PinModeAvailability =
{
    /*  Mode PORT_GPIO_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_4_PORT92_GPIO |
        SIUL2_4_PORT93_GPIO |
        SIUL2_4_PORT94_GPIO |
        SIUL2_4_PORT95_GPIO */
        (uint16)( SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_4_PORT96_GPIO |
        SIUL2_4_PORT97_GPIO |
        SIUL2_4_PORT98_GPIO |
        SIUL2_4_PORT99_GPIO |
        SIUL2_4_PORT100_GPIO |
        SIUL2_4_PORT101_GPIO |
        SIUL2_4_PORT102_GPIO |
        SIUL2_4_PORT103_GPIO |
        SIUL2_4_PORT104_GPIO |
        SIUL2_4_PORT105_GPIO |
        SIUL2_4_PORT106_GPIO |
        SIUL2_4_PORT107_GPIO |
        SIUL2_4_PORT108_GPIO |
        SIUL2_4_PORT109_GPIO |
        SIUL2_4_PORT110_GPIO |
        SIUL2_4_PORT111_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_GPIO |
        SIUL2_4_PORT113_GPIO |
        SIUL2_4_PORT114_GPIO |
        SIUL2_4_PORT115_GPIO |
        SIUL2_4_PORT116_GPIO |
        SIUL2_4_PORT117_GPIO |
        SIUL2_4_PORT118_GPIO |
        SIUL2_4_PORT119_GPIO |
        SIUL2_4_PORT120_GPIO |
        SIUL2_4_PORT121_GPIO |
        SIUL2_4_PORT122_GPIO |
        SIUL2_4_PORT123_GPIO |
        SIUL2_4_PORT124_GPIO |
        SIUL2_4_PORT125_GPIO |
        SIUL2_4_PORT126_GPIO |
        SIUL2_4_PORT127_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_GPIO |
        SIUL2_4_PORT129_GPIO |
        SIUL2_4_PORT130_GPIO |
        SIUL2_4_PORT131_GPIO |
        SIUL2_4_PORT132_GPIO |
        SIUL2_4_PORT133_GPIO |
        SIUL2_4_PORT134_GPIO |
        SIUL2_4_PORT135_GPIO |
        SIUL2_4_PORT136_GPIO |
        SIUL2_4_PORT137_GPIO |
        SIUL2_4_PORT138_GPIO |
        SIUL2_4_PORT139_GPIO |
        SIUL2_4_PORT140_GPIO |
        SIUL2_4_PORT141_GPIO |
        SIUL2_4_PORT142_GPIO |
        SIUL2_4_PORT143_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_GPIO |
        SIUL2_4_PORT145_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT1_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_4_PORT92_GTM_GTM_091_OUT |
        SIUL2_4_PORT93_QUADSPI_0_QSPI_0_CS_A0_OUT |
        SIUL2_4_PORT94_QUADSPI_0_QSPI_0_DATA_A_1_OUT |
        SIUL2_4_PORT95_QUADSPI_0_QSPI_0_DATA_A_5_OUT */
        (uint16)( SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_4_PORT96_QUADSPI_0_QSPI_0_DATA_A_7_OUT |
        SIUL2_4_PORT97_QUADSPI_0_QSPI_0_DATA_A_3_OUT |
        SIUL2_4_PORT98_QUADSPI_0_QSPI_0_CK_A_B_OUT |
        SIUL2_4_PORT99_QUADSPI_0_QSPI_0_CK_A_OUT |
        SIUL2_4_PORT100_QUADSPI_0_QSPI_0_DATA_A_0_OUT |
        SIUL2_4_PORT101_QUADSPI_0_QSPI_0_DATA_A_4_OUT |
        SIUL2_4_PORT102_QUADSPI_0_QSPI_0_DQS_A_OUT |
        SIUL2_4_PORT103_QUADSPI_0_QSPI_0_DATA_A_6_OUT |
        SIUL2_4_PORT104_QUADSPI_0_QSPI_0_DATA_A_2_OUT |
        SIUL2_4_PORT105_QUADSPI_0_QSPI_0_CS_A1_OUT |
        SIUL2_4_PORT106_QUADSPI_1_QSPI_1_DATA_A_0_OUT |
        SIUL2_4_PORT107_QUADSPI_1_QSPI_1_DATA_A_3_OUT |
        SIUL2_4_PORT108_QUADSPI_1_QSPI_1_CS_A0_OUT |
        SIUL2_4_PORT109_QUADSPI_1_QSPI_1_DATA_A_4_OUT |
        SIUL2_4_PORT110_QUADSPI_1_QSPI_1_DATA_A_1_OUT |
        SIUL2_4_PORT111_USDHC_SD_0_CLK_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_QUADSPI_1_QSPI_1_DATA_A_7_OUT |
        SIUL2_4_PORT113_QUADSPI_1_QSPI_1_CK_A_OUT |
        SIUL2_4_PORT114_QUADSPI_1_QSPI_1_CK_A_B_OUT |
        SIUL2_4_PORT115_QUADSPI_1_QSPI_1_DATA_A_5_OUT |
        SIUL2_4_PORT116_QUADSPI_1_QSPI_1_DATA_A_2_OUT |
        SIUL2_4_PORT117_QUADSPI_1_QSPI_1_DATA_A_6_OUT |
        SIUL2_4_PORT118_QUADSPI_1_QSPI_1_CS_A1_OUT |
        SIUL2_4_PORT119_GTM_GTM_118_OUT |
        SIUL2_4_PORT120_LINFLEX_6_LIN_6_TX_OUT |
        SIUL2_4_PORT121_GTM_GTM_120_OUT |
        SIUL2_4_PORT122_GTM_GTM_121_OUT |
        SIUL2_4_PORT123_LINFLEX_7_LIN_7_TX_OUT |
        SIUL2_4_PORT124_GTM_GTM_123_OUT |
        SIUL2_4_PORT125_LINFLEX_8_LIN_8_TX_OUT |
        SIUL2_4_PORT126_GTM_GTM_125_OUT |
        SIUL2_4_PORT127_CAN_HUB_CAN_12_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_GTM_GTM_127_OUT |
        SIUL2_4_PORT129_GTM_GTM_128_OUT |
        SIUL2_4_PORT130_GTM_GTM_129_OUT |
        SIUL2_4_PORT131_GTM_GTM_130_OUT |
        SIUL2_4_PORT132_GTM_GTM_131_OUT |
        SIUL2_4_PORT133_GTM_GTM_132_OUT |
        SIUL2_4_PORT134_GTM_GTM_133_OUT |
        SIUL2_4_PORT135_GTM_GTM_134_OUT |
        SIUL2_4_PORT136_GTM_GTM_135_OUT |
        SIUL2_4_PORT137_GTM_GTM_136_OUT |
        SIUL2_4_PORT138_GTM_GTM_137_OUT |
        SIUL2_4_PORT139_GTM_GTM_138_OUT |
        SIUL2_4_PORT140_QUADSPI_1_QSPI_1_DATA_B_3_OUT |
        SIUL2_4_PORT141_QUADSPI_1_QSPI_1_DATA_B_2_OUT |
        SIUL2_4_PORT142_QUADSPI_1_QSPI_1_CK_B_OUT |
        SIUL2_4_PORT143_QUADSPI_1_QSPI_1_CS_B0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_QUADSPI_1_QSPI_1_DATA_B_1_OUT |
        SIUL2_4_PORT145_QUADSPI_1_QSPI_1_DATA_B_0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT2_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_4_PORT93_GTM_GTM_092_OUT |
        SIUL2_4_PORT94_GTM_GTM_093_OUT |
        SIUL2_4_PORT95_GTM_GTM_094_OUT */
        (uint16)( SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_4_PORT96_GTM_GTM_095_OUT |
        SIUL2_4_PORT97_GTM_GTM_096_OUT |
        SIUL2_4_PORT98_GTM_GTM_097_OUT |
        SIUL2_4_PORT99_GTM_GTM_098_OUT |
        SIUL2_4_PORT100_GTM_GTM_099_OUT |
        SIUL2_4_PORT101_GTM_GTM_100_OUT |
        SIUL2_4_PORT102_GTM_GTM_101_OUT |
        SIUL2_4_PORT103_GTM_GTM_102_OUT |
        SIUL2_4_PORT104_GTM_GTM_103_OUT |
        SIUL2_4_PORT105_GTM_GTM_104_OUT |
        SIUL2_4_PORT106_USDHC_SD_0_CMD_OUT |
        SIUL2_4_PORT107_USDHC_SD_0_D_0_OUT |
        SIUL2_4_PORT108_USDHC_SD_0_D_1_OUT |
        SIUL2_4_PORT109_USDHC_SD_0_D_2_OUT |
        SIUL2_4_PORT110_USDHC_SD_0_D_3_OUT |
        SIUL2_4_PORT111_GTM_GTM_110_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_USDHC_SD_0_D_5_OUT |
        SIUL2_4_PORT113_USDHC_SD_0_D_4_OUT |
        SIUL2_4_PORT114_USDHC_SD_0_D_6_OUT |
        SIUL2_4_PORT115_USDHC_SD_0_D_7_OUT |
        SIUL2_4_PORT116_USDHC_SD_0_RST_OUT |
        SIUL2_4_PORT117_USDHC_SD_0_VSELECT_OUT |
        SIUL2_4_PORT118_GTM_GTM_117_OUT |
        SIUL2_4_PORT119_SPI_5_DSPI_5_PCS4_OUT |
        SIUL2_4_PORT120_GTM_GTM_119_OUT |
        SIUL2_4_PORT121_LCU_0_LCU_0_OUT_1_OUT |
        SIUL2_4_PORT122_PSI5_S_1_PSI5_S_1_TXCLK_OUT |
        SIUL2_4_PORT123_GTM_GTM_122_OUT |
        SIUL2_4_PORT124_LCU_0_LCU_0_OUT_3_OUT |
        SIUL2_4_PORT125_CAN_HUB_CAN_2_TX_OUT |
        SIUL2_4_PORT126_LCU_0_LCU_0_OUT_5_OUT |
        SIUL2_4_PORT127_GTM_GTM_126_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_EMIOS_0_EMIOS_0_CH24_OUT |
        SIUL2_4_PORT129_EMIOS_0_EMIOS_0_CH23_OUT |
        SIUL2_4_PORT130_EMIOS_0_EMIOS_0_CH22_OUT |
        SIUL2_4_PORT131_EMIOS_0_EMIOS_0_CH8_OUT |
        SIUL2_4_PORT132_EMIOS_0_EMIOS_0_CH17_OUT |
        SIUL2_4_PORT133_LCU_0_LCU_0_OUT_7_OUT |
        SIUL2_4_PORT134_LCU_0_LCU_0_OUT_8_OUT |
        SIUL2_4_PORT135_LCU_0_LCU_0_OUT_9_OUT |
        SIUL2_4_PORT136_LCU_0_LCU_0_OUT_10_OUT |
        SIUL2_4_PORT137_LCU_0_LCU_0_OUT_11_OUT |
        SIUL2_4_PORT138_CAN_HUB_CAN_12_TX_OUT |
        SIUL2_4_PORT139_EMIOS_0_EMIOS_0_CH1_OUT |
        SIUL2_4_PORT140_SPI_6_DSPI_6_SCK_OUT |
        SIUL2_4_PORT141_GTM_GTM_140_OUT |
        SIUL2_4_PORT142_SPI_6_DSPI_6_SOUT_OUT |
        SIUL2_4_PORT143_SPI_6_DSPI_6_PCS0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_SPI_6_DSPI_6_PCS1_OUT |
        SIUL2_4_PORT145_SPI_6_DSPI_6_PCS2_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT3_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_GTM_GTM_105_OUT |
        SIUL2_4_PORT107_GTM_GTM_106_OUT |
        SIUL2_4_PORT108_CAN_HUB_CAN_7_TX_OUT |
        SIUL2_4_PORT109_GTM_GTM_108_OUT |
        SIUL2_4_PORT110_CAN_HUB_CAN_8_TX_OUT |
        SIUL2_4_PORT111_SPI_6_DSPI_6_PCS2_OUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_SPI_5_DSPI_5_SOUT_OUT |
        SIUL2_4_PORT113_GTM_GTM_112_OUT |
        SIUL2_4_PORT114_SPI_5_DSPI_5_SCK_OUT |
        SIUL2_4_PORT115_SPI_5_DSPI_5_PCS0_OUT |
        SIUL2_4_PORT116_SPI_5_DSPI_5_PCS1_OUT |
        SIUL2_4_PORT117_SPI_5_DSPI_5_PCS2_OUT |
        SIUL2_4_PORT118_SPI_5_DSPI_5_PCS3_OUT |
        SIUL2_4_PORT119_SPI_6_DSPI_6_PCS4_OUT |
        SIUL2_4_PORT120_CAN_HUB_CAN_12_TX_OUT |
        SIUL2_4_PORT121_EMIOS_0_EMIOS_0_CH30_OUT |
        SIUL2_4_PORT122_CAN_HUB_CAN_17_TX_OUT |
        SIUL2_4_PORT123_LCU_0_LCU_0_OUT_2_OUT |
        SIUL2_4_PORT124_EMIOS_0_EMIOS_0_CH28_OUT |
        SIUL2_4_PORT125_GTM_GTM_124_OUT |
        SIUL2_4_PORT126_EMIOS_0_EMIOS_0_CH26_OUT |
        SIUL2_4_PORT127_LCU_0_LCU_0_OUT_6_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_PSI5_1_PSI5_1_SDOUT_3_OUT |
        SIUL2_4_PORT129_PSI5_S_1_PSI5_S_1_TXCLK_OUT |
        SIUL2_4_PORT130_PSI5_S_1_PSI5_S_1_TX_OUT |
        SIUL2_4_PORT131_CAN_HUB_CAN_20_TX_OUT |
        SIUL2_4_PORT132_SPI_7_DSPI_7_PCS4_OUT |
        SIUL2_4_PORT133_EMIOS_0_EMIOS_0_CH10_OUT |
        SIUL2_4_PORT134_EMIOS_0_EMIOS_0_CH20_OUT |
        SIUL2_4_PORT135_EMIOS_0_EMIOS_0_CH12_OUT |
        SIUL2_4_PORT136_EMIOS_0_EMIOS_0_CH21_OUT |
        SIUL2_4_PORT137_EMIOS_0_EMIOS_0_CH14_OUT |
        SIUL2_4_PORT138_EMIOS_0_EMIOS_0_CH0_OUT |
        SIUL2_4_PORT140_GTM_GTM_139_OUT |
        SIUL2_4_PORT141_EMIOS_0_EMIOS_0_CH3_OUT |
        SIUL2_4_PORT142_GTM_GTM_141_OUT |
        SIUL2_4_PORT143_GTM_GTM_142_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_GTM_GTM_143_OUT |
        SIUL2_4_PORT145_GTM_GTM_144_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT4_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_CAN_HUB_CAN_6_TX_OUT |
        SIUL2_4_PORT108_SPI_6_DSPI_6_SOUT_OUT |
        SIUL2_4_PORT109_SPI_6_DSPI_6_PCS0_OUT |
        SIUL2_4_PORT110_GTM_GTM_109_OUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_CAN_HUB_CAN_3_TX_OUT |
        SIUL2_4_PORT113_EMIOS_0_EMIOS_0_CH21_OUT |
        SIUL2_4_PORT114_CAN_HUB_CAN_4_TX_OUT |
        SIUL2_4_PORT115_GTM_GTM_114_OUT |
        SIUL2_4_PORT116_GTM_GTM_115_OUT |
        SIUL2_4_PORT117_GTM_GTM_116_OUT |
        SIUL2_4_PORT118_SPI_6_DSPI_6_PCS3_OUT |
        SIUL2_4_PORT120_LCU_0_LCU_0_OUT_0_OUT |
        SIUL2_4_PORT121_PSI5_1_PSI5_1_SDOUT_0_OUT |
        SIUL2_4_PORT122_LPI2C_2_I2C_2_SCL_OUT |
        SIUL2_4_PORT123_EMIOS_0_EMIOS_0_CH29_OUT |
        SIUL2_4_PORT124_PSI5_1_PSI5_1_SDOUT_1_OUT |
        SIUL2_4_PORT125_LCU_0_LCU_0_OUT_4_OUT |
        SIUL2_4_PORT126_PSI5_1_PSI5_1_SDOUT_2_OUT |
        SIUL2_4_PORT127_EMIOS_0_EMIOS_0_CH25_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_SPI_7_DSPI_7_PCS0_OUT |
        SIUL2_4_PORT129_CAN_HUB_CAN_19_TX_OUT |
        SIUL2_4_PORT133_CAN_HUB_CAN_21_TX_OUT |
        SIUL2_4_PORT134_CAN_HUB_CAN_1_TX_OUT |
        SIUL2_4_PORT136_SPI_7_DSPI_7_PCS2_OUT |
        SIUL2_4_PORT138_CAN_HUB_CAN_6_TX_OUT |
        SIUL2_4_PORT140_EMIOS_0_EMIOS_0_CH2_OUT |
        SIUL2_4_PORT142_EMIOS_0_EMIOS_0_CH4_OUT |
        SIUL2_4_PORT143_EMIOS_0_EMIOS_0_CH5_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_EMIOS_0_EMIOS_0_CH6_OUT |
        SIUL2_4_PORT145_EMIOS_0_EMIOS_0_CH7_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT5_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_SPI_6_DSPI_6_SCK_OUT |
        SIUL2_4_PORT108_LPI2C_2_I2C_2_SDA_OUT |
        SIUL2_4_PORT110_SPI_6_DSPI_6_PCS1_OUT |
        SIUL2_4_PORT111_EMIOS_0_EMIOS_0_CH16_OUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_GTM_GTM_111_OUT |
        SIUL2_4_PORT114_GTM_GTM_113_OUT |
        SIUL2_4_PORT115_EMIOS_0_EMIOS_0_CH19_OUT |
        SIUL2_4_PORT116_CAN_HUB_CAN_6_TX_OUT |
        SIUL2_4_PORT117_EMIOS_0_EMIOS_0_CH17_OUT |
        SIUL2_4_PORT118_CAN_HUB_CAN_7_TX_OUT |
        SIUL2_4_PORT120_EMIOS_0_EMIOS_0_CH31_OUT |
        SIUL2_4_PORT123_LPI2C_2_I2C_2_SDA_OUT |
        SIUL2_4_PORT124_SPI_7_DSPI_7_PCS1_OUT |
        SIUL2_4_PORT125_EMIOS_0_EMIOS_0_CH27_OUT |
        SIUL2_4_PORT127_SPI_7_DSPI_7_SOUT_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT134_SPI_7_DSPI_7_PCS3_OUT |
        SIUL2_4_PORT140_CAN_HUB_CAN_7_TX_OUT |
        SIUL2_4_PORT142_CAN_HUB_CAN_8_TX_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT6_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_LPI2C_2_I2C_2_SCL_OUT |
        SIUL2_4_PORT108_GTM_GTM_107_OUT |
        SIUL2_4_PORT111_QUADSPI_1_QSPI_1_DQS_A_OUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_EMIOS_0_EMIOS_0_CH23_OUT |
        SIUL2_4_PORT114_EMIOS_0_EMIOS_0_CH20_OUT |
        SIUL2_4_PORT116_EMIOS_0_EMIOS_0_CH18_OUT |
        SIUL2_4_PORT118_PSI5_1_PSI5_1_SDOUT_1_OUT |
        SIUL2_4_PORT125_SPI_7_DSPI_7_SCK_OUT |
        SIUL2_4_PORT127_CAN_HUB_CAN_18_TX_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT7_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127
        SIUL2_4_PORT114_MC_CGM_4_CLKOUT_2_OUT |
        SIUL2_4_PORT116_PSI5_1_PSI5_1_SDOUT_0_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_OUTPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143
        SIUL2_4_PORT129_C_VFCCU_ERR_2_2_OUT |
        SIUL2_4_PORT137_C_VFCCU_ERR_3_2_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_4_PORT92_GTM_GTM_091_IN |
        SIUL2_4_PORT93_GTM_GTM_092_IN |
        SIUL2_4_PORT94_GTM_GTM_093_IN |
        SIUL2_4_PORT94_QUADSPI_0_QSPI_0_DATA_A_1_IN |
        SIUL2_4_PORT95_GTM_GTM_094_IN |
        SIUL2_4_PORT95_QUADSPI_0_QSPI_0_DATA_A_5_IN */
        (uint16)( SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_4_PORT96_GTM_GTM_095_IN |
        SIUL2_4_PORT96_QUADSPI_0_QSPI_0_DATA_A_7_IN |
        SIUL2_4_PORT97_GTM_GTM_096_IN |
        SIUL2_4_PORT97_QUADSPI_0_QSPI_0_DATA_A_3_IN |
        SIUL2_4_PORT98_GTM_GTM_097_IN |
        SIUL2_4_PORT99_GTM_GTM_098_IN |
        SIUL2_4_PORT100_GTM_GTM_099_IN |
        SIUL2_4_PORT100_QUADSPI_0_QSPI_0_DATA_A_0_IN |
        SIUL2_4_PORT101_GTM_GTM_100_IN |
        SIUL2_4_PORT101_QUADSPI_0_QSPI_0_DATA_A_4_IN |
        SIUL2_4_PORT102_GTM_GTM_101_IN |
        SIUL2_4_PORT102_QUADSPI_0_QSPI_0_DQS_A_IN |
        SIUL2_4_PORT103_GTM_GTM_102_IN |
        SIUL2_4_PORT103_QUADSPI_0_QSPI_0_DATA_A_6_IN |
        SIUL2_4_PORT104_GTM_GTM_103_IN |
        SIUL2_4_PORT104_QUADSPI_0_QSPI_0_DATA_A_2_IN |
        SIUL2_4_PORT105_GTM_GTM_104_IN |
        SIUL2_4_PORT106_GTM_GTM_105_IN |
        SIUL2_4_PORT106_QUADSPI_1_QSPI_1_DATA_A_0_IN |
        SIUL2_4_PORT106_USDHC_SD_0_CMD_IN |
        SIUL2_4_PORT107_GTM_GTM_106_IN |
        SIUL2_4_PORT107_QUADSPI_1_QSPI_1_DATA_A_3_IN |
        SIUL2_4_PORT107_USDHC_SD_0_D_0_IN |
        SIUL2_4_PORT108_GTM_GTM_107_IN |
        SIUL2_4_PORT108_USDHC_SD_0_D_1_IN |
        SIUL2_4_PORT109_GTM_GTM_108_IN |
        SIUL2_4_PORT109_QUADSPI_1_QSPI_1_DATA_A_4_IN |
        SIUL2_4_PORT109_USDHC_SD_0_D_2_IN |
        SIUL2_4_PORT110_GTM_GTM_109_IN |
        SIUL2_4_PORT110_QUADSPI_1_QSPI_1_DATA_A_1_IN |
        SIUL2_4_PORT110_USDHC_SD_0_D_3_IN |
        SIUL2_4_PORT111_GTM_GTM_110_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_GTM_GTM_111_IN |
        SIUL2_4_PORT112_QUADSPI_1_QSPI_1_DATA_A_7_IN |
        SIUL2_4_PORT112_USDHC_SD_0_D_5_IN |
        SIUL2_4_PORT113_GTM_GTM_112_IN |
        SIUL2_4_PORT113_USDHC_SD_0_D_4_IN |
        SIUL2_4_PORT114_GTM_GTM_113_IN |
        SIUL2_4_PORT114_USDHC_SD_0_D_6_IN |
        SIUL2_4_PORT115_GTM_GTM_114_IN |
        SIUL2_4_PORT115_QUADSPI_1_QSPI_1_DATA_A_5_IN |
        SIUL2_4_PORT115_USDHC_SD_0_D_7_IN |
        SIUL2_4_PORT116_GTM_GTM_115_IN |
        SIUL2_4_PORT116_QUADSPI_1_QSPI_1_DATA_A_2_IN |
        SIUL2_4_PORT117_GTM_GTM_116_IN |
        SIUL2_4_PORT117_QUADSPI_1_QSPI_1_DATA_A_6_IN |
        SIUL2_4_PORT118_GTM_GTM_117_IN |
        SIUL2_4_PORT118_USDHC_SD_0_DQS_IN |
        SIUL2_4_PORT119_GTM_GTM_118_IN |
        SIUL2_4_PORT120_GTM_GTM_119_IN |
        SIUL2_4_PORT121_GTM_GTM_120_IN |
        SIUL2_4_PORT122_GTM_GTM_121_IN |
        SIUL2_4_PORT122_BOOT_RCON8_IN |
        SIUL2_4_PORT123_GTM_GTM_122_IN |
        SIUL2_4_PORT123_BOOT_RCON7_IN |
        SIUL2_4_PORT124_GTM_GTM_123_IN |
        SIUL2_4_PORT125_GTM_GTM_124_IN |
        SIUL2_4_PORT126_GTM_GTM_125_IN |
        SIUL2_4_PORT127_GTM_GTM_126_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_GTM_GTM_127_IN |
        SIUL2_4_PORT129_C_VFCCU_ERR_2_2_IN |
        SIUL2_4_PORT129_GTM_GTM_128_IN |
        SIUL2_4_PORT130_GTM_GTM_129_IN |
        SIUL2_4_PORT131_GTM_GTM_130_IN |
        SIUL2_4_PORT132_GTM_GTM_131_IN |
        SIUL2_4_PORT133_GTM_GTM_132_IN |
        SIUL2_4_PORT134_GTM_GTM_133_IN |
        SIUL2_4_PORT135_GTM_GTM_134_IN |
        SIUL2_4_PORT136_GTM_GTM_135_IN |
        SIUL2_4_PORT137_C_VFCCU_ERR_3_2_IN |
        SIUL2_4_PORT137_GTM_GTM_136_IN |
        SIUL2_4_PORT138_GTM_GTM_137_IN |
        SIUL2_4_PORT139_GTM_GTM_138_IN |
        SIUL2_4_PORT140_GTM_GTM_139_IN |
        SIUL2_4_PORT140_QUADSPI_1_QSPI_1_DATA_B_3_IN |
        SIUL2_4_PORT141_GTM_GTM_140_IN |
        SIUL2_4_PORT141_QUADSPI_1_QSPI_1_DATA_B_2_IN |
        SIUL2_4_PORT142_GTM_GTM_141_IN |
        SIUL2_4_PORT143_GTM_GTM_142_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_BOOT_RCON14_IN |
        SIUL2_4_PORT144_GTM_GTM_143_IN |
        SIUL2_4_PORT144_QUADSPI_1_QSPI_1_DATA_B_1_IN |
        SIUL2_4_PORT145_BOOT_RCON15_IN |
        SIUL2_4_PORT145_GTM_GTM_144_IN |
        SIUL2_4_PORT145_QUADSPI_1_QSPI_1_DATA_B_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_4_PORT92_QUADSPI_0_QSPI_0_INTA_B_IN */
        (uint16)( SHL_PAD_U32(12U)
                ),
        /* Pads 96 - 111
        SIUL2_4_PORT106_SPI_6_DSPI_6_SCK_IN |
        SIUL2_4_PORT107_SPI_6_DSPI_6_SIN_IN |
        SIUL2_4_PORT108_LPI2C_2_I2C_2_SDA_IN |
        SIUL2_4_PORT109_SPI_6_DSPI_6_PCS0_IN |
        SIUL2_4_PORT111_USDHC_SD_0_CLK_IN */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_EMIOS_0_EMIOS_0_CH23_IN |
        SIUL2_4_PORT113_SPI_5_DSPI_5_SIN_IN |
        SIUL2_4_PORT114_SPI_5_DSPI_5_SCK_IN |
        SIUL2_4_PORT115_SPI_5_DSPI_5_PCS0_IN |
        SIUL2_4_PORT116_EMIOS_0_EMIOS_0_CH18_IN |
        SIUL2_4_PORT117_PSI5_1_PSI5_1_SDIN_1_IN |
        SIUL2_4_PORT119_QUADSPI_1_QSPI_1_INTA_B_IN |
        SIUL2_4_PORT120_PSI5_1_PSI5_1_SDIN_0_IN |
        SIUL2_4_PORT121_LINFLEX_6_LIN_6_RX_IN |
        SIUL2_4_PORT122_TRGMUX_0_TRGMUX_0_XIN_5_IN |
        SIUL2_4_PORT123_PSI5_1_PSI5_1_SDIN_1_IN |
        SIUL2_4_PORT124_LINFLEX_7_LIN_7_RX_IN |
        SIUL2_4_PORT125_PSI5_1_PSI5_1_SDIN_2_IN |
        SIUL2_4_PORT126_LINFLEX_8_LIN_8_RX_IN |
        SIUL2_4_PORT127_PSI5_1_PSI5_1_SDIN_3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_TRGMUX_0_TRGMUX_0_XIN_0_IN |
        SIUL2_4_PORT129_SRX_1_SENT_1_CH0_IN |
        SIUL2_4_PORT130_SRX_1_SENT_1_CH1_IN |
        SIUL2_4_PORT131_SRX_1_SENT_1_CH2_IN |
        SIUL2_4_PORT132_SRX_1_SENT_1_CH3_IN |
        SIUL2_4_PORT133_SRX_1_SENT_1_CH4_IN |
        SIUL2_4_PORT134_SRX_1_SENT_1_CH5_IN |
        SIUL2_4_PORT135_SRX_1_SENT_1_CH6_IN |
        SIUL2_4_PORT136_SRX_1_SENT_1_CH7_IN |
        SIUL2_4_PORT137_SIUL2_4_EIRQ_5_IN |
        SIUL2_4_PORT138_TRGMUX_0_TRGMUX_0_XIN_5_IN |
        SIUL2_4_PORT139_QUADSPI_1_QSPI_1_INTB_B_IN |
        SIUL2_4_PORT140_SPI_6_DSPI_6_SCK_IN |
        SIUL2_4_PORT141_SPI_6_DSPI_6_SIN_IN |
        SIUL2_4_PORT142_SRX_1_SENT_1_CH4_IN |
        SIUL2_4_PORT143_SPI_6_DSPI_6_PCS0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_SRX_1_SENT_1_CH6_IN |
        SIUL2_4_PORT145_SRX_1_SENT_1_CH7_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_LPI2C_2_I2C_2_SCL_IN |
        SIUL2_4_PORT107_SIUL2_4_EIRQ_0_IN |
        SIUL2_4_PORT109_SIUL2_4_EIRQ_1_IN |
        SIUL2_4_PORT111_QUADSPI_1_QSPI_1_DQS_A_IN */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_EMIOS_1_EMIOS_1_CH23_IN |
        SIUL2_4_PORT113_EMIOS_0_EMIOS_0_CH21_IN |
        SIUL2_4_PORT114_EMIOS_0_EMIOS_0_CH20_IN |
        SIUL2_4_PORT115_PSI5_1_PSI5_1_SDIN_0_IN |
        SIUL2_4_PORT116_EMIOS_1_EMIOS_1_CH18_IN |
        SIUL2_4_PORT117_EMIOS_0_EMIOS_0_CH17_IN |
        SIUL2_4_PORT119_CAN_HUB_CAN_7_RX_IN |
        SIUL2_4_PORT120_EMIOS_0_EMIOS_0_CH31_IN |
        SIUL2_4_PORT121_EMIOS_0_EMIOS_0_CH30_IN |
        SIUL2_4_PORT122_LPI2C_2_I2C_2_SCL_IN |
        SIUL2_4_PORT123_EMIOS_0_EMIOS_0_CH29_IN |
        SIUL2_4_PORT124_SIUL2_4_EIRQ_2_IN |
        SIUL2_4_PORT125_SPI_7_DSPI_7_SCK_IN |
        SIUL2_4_PORT126_SPI_7_DSPI_7_SIN_IN |
        SIUL2_4_PORT127_EMIOS_0_EMIOS_0_CH25_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_SPI_7_DSPI_7_PCS0_IN |
        SIUL2_4_PORT129_TRGMUX_0_TRGMUX_0_XIN_1_IN |
        SIUL2_4_PORT130_TRGMUX_0_TRGMUX_0_XIN_2_IN |
        SIUL2_4_PORT131_TRGMUX_0_TRGMUX_0_XIN_3_IN |
        SIUL2_4_PORT132_SIUL2_4_EIRQ_3_IN |
        SIUL2_4_PORT133_EMIOS_0_EMIOS_0_CH10_IN |
        SIUL2_4_PORT134_SIUL2_4_EIRQ_4_IN |
        SIUL2_4_PORT135_EMIOS_0_EMIOS_0_CH12_IN |
        SIUL2_4_PORT136_TRGMUX_0_TRGMUX_0_XIN_5_IN |
        SIUL2_4_PORT137_EMIOS_0_EMIOS_0_CH14_IN |
        SIUL2_4_PORT138_SRX_1_SENT_1_CH0_IN |
        SIUL2_4_PORT139_SRX_1_SENT_1_CH1_IN |
        SIUL2_4_PORT140_EMIOS_0_EMIOS_0_CH2_IN |
        SIUL2_4_PORT141_SRX_1_SENT_1_CH3_IN |
        SIUL2_4_PORT142_EMIOS_0_EMIOS_0_CH4_IN |
        SIUL2_4_PORT143_SRX_1_SENT_1_CH5_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_EMIOS_0_EMIOS_0_CH6_IN |
        SIUL2_4_PORT145_EMIOS_0_EMIOS_0_CH7_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT107_CAN_HUB_CAN_6_RX_IN |
        SIUL2_4_PORT109_CAN_HUB_CAN_7_RX_IN |
        SIUL2_4_PORT111_EMIOS_0_EMIOS_0_CH16_IN */
        (uint16)( SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT113_EMIOS_1_EMIOS_1_CH21_IN |
        SIUL2_4_PORT114_EMIOS_1_EMIOS_1_CH20_IN |
        SIUL2_4_PORT115_EMIOS_0_EMIOS_0_CH19_IN |
        SIUL2_4_PORT117_EMIOS_1_EMIOS_1_CH17_IN |
        SIUL2_4_PORT120_EMIOS_1_EMIOS_1_CH31_IN |
        SIUL2_4_PORT121_EMIOS_1_EMIOS_1_CH30_IN |
        SIUL2_4_PORT123_LPI2C_2_I2C_2_SDA_IN |
        SIUL2_4_PORT124_EMIOS_0_EMIOS_0_CH28_IN |
        SIUL2_4_PORT125_EMIOS_0_EMIOS_0_CH27_IN |
        SIUL2_4_PORT126_EMIOS_0_EMIOS_0_CH26_IN |
        SIUL2_4_PORT127_EMIOS_1_EMIOS_1_CH25_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_EMIOS_0_EMIOS_0_CH24_IN |
        SIUL2_4_PORT129_EMIOS_0_EMIOS_0_CH23_IN |
        SIUL2_4_PORT130_EMIOS_0_EMIOS_0_CH22_IN |
        SIUL2_4_PORT131_PSI5_S_1_PSI5_S_1_RX_IN |
        SIUL2_4_PORT132_TRGMUX_0_TRGMUX_0_XIN_4_IN |
        SIUL2_4_PORT133_EMIOS_1_EMIOS_1_CH10_IN |
        SIUL2_4_PORT134_EMIOS_0_EMIOS_0_CH20_IN |
        SIUL2_4_PORT135_EMIOS_1_EMIOS_1_CH12_IN |
        SIUL2_4_PORT136_EMIOS_0_EMIOS_0_CH21_IN |
        SIUL2_4_PORT137_EMIOS_1_EMIOS_1_CH14_IN |
        SIUL2_4_PORT138_EMIOS_0_EMIOS_0_CH0_IN |
        SIUL2_4_PORT139_SIUL2_4_EIRQ_6_IN |
        SIUL2_4_PORT140_EMIOS_1_EMIOS_1_CH2_IN |
        SIUL2_4_PORT141_SIUL2_4_EIRQ_7_IN |
        SIUL2_4_PORT142_EMIOS_1_EMIOS_1_CH4_IN |
        SIUL2_4_PORT143_EMIOS_0_EMIOS_0_CH5_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_EMIOS_1_EMIOS_1_CH6_IN |
        SIUL2_4_PORT145_EMIOS_1_EMIOS_1_CH7_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT111_EMIOS_1_EMIOS_1_CH16_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT113_CAN_HUB_CAN_3_RX_IN |
        SIUL2_4_PORT115_EMIOS_1_EMIOS_1_CH19_IN |
        SIUL2_4_PORT117_CAN_HUB_CAN_6_RX_IN |
        SIUL2_4_PORT121_CAN_HUB_CAN_12_RX_IN |
        SIUL2_4_PORT123_EMIOS_1_EMIOS_1_CH29_IN |
        SIUL2_4_PORT124_EMIOS_1_EMIOS_1_CH28_IN |
        SIUL2_4_PORT125_EMIOS_1_EMIOS_1_CH27_IN |
        SIUL2_4_PORT126_EMIOS_1_EMIOS_1_CH26_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_EMIOS_1_EMIOS_1_CH24_IN |
        SIUL2_4_PORT129_EMIOS_1_EMIOS_1_CH23_IN |
        SIUL2_4_PORT130_EMIOS_1_EMIOS_1_CH22_IN |
        SIUL2_4_PORT131_EMIOS_0_EMIOS_0_CH8_IN |
        SIUL2_4_PORT132_EMIOS_0_EMIOS_0_CH17_IN |
        SIUL2_4_PORT134_EMIOS_1_EMIOS_1_CH20_IN |
        SIUL2_4_PORT135_CAN_HUB_CAN_1_RX_IN |
        SIUL2_4_PORT136_EMIOS_1_EMIOS_1_CH21_IN |
        SIUL2_4_PORT137_CAN_HUB_CAN_21_RX_IN |
        SIUL2_4_PORT138_EMIOS_1_EMIOS_1_CH0_IN |
        SIUL2_4_PORT139_EMIOS_0_EMIOS_0_CH1_IN |
        SIUL2_4_PORT140_SRX_1_SENT_1_CH2_IN |
        SIUL2_4_PORT141_EMIOS_0_EMIOS_0_CH3_IN |
        SIUL2_4_PORT143_EMIOS_1_EMIOS_1_CH5_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT111_CAN_HUB_CAN_8_RX_IN */
        (uint16)( SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT115_CAN_HUB_CAN_4_RX_IN |
        SIUL2_4_PORT121_NETC_TMR_1588_TRIG1_IN |
        SIUL2_4_PORT123_CAN_HUB_CAN_17_RX_IN |
        SIUL2_4_PORT126_CAN_HUB_CAN_2_RX_IN */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_CAN_HUB_CAN_12_RX_IN |
        SIUL2_4_PORT130_CAN_HUB_CAN_19_RX_IN |
        SIUL2_4_PORT131_EMIOS_1_EMIOS_1_CH8_IN |
        SIUL2_4_PORT132_EMIOS_1_EMIOS_1_CH17_IN |
        SIUL2_4_PORT139_EMIOS_1_EMIOS_1_CH1_IN |
        SIUL2_4_PORT141_EMIOS_1_EMIOS_1_CH3_IN |
        SIUL2_4_PORT143_CAN_HUB_CAN_8_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143
        SIUL2_4_PORT128_CAN_HUB_CAN_18_RX_IN |
        SIUL2_4_PORT132_CAN_HUB_CAN_20_RX_IN |
        SIUL2_4_PORT139_CAN_HUB_CAN_6_RX_IN |
        SIUL2_4_PORT141_CAN_HUB_CAN_7_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT7_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143
        SIUL2_4_PORT139_CAN_HUB_CAN_12_RX_IN */
        (uint16)( SHL_PAD_U32(11U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_4_PORT92_GTM_GTM_091_INOUT |
        SIUL2_4_PORT94_QUADSPI_0_QSPI_0_DATA_A_1_INOUT |
        SIUL2_4_PORT95_QUADSPI_0_QSPI_0_DATA_A_5_INOUT */
        (uint16)( SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_4_PORT96_QUADSPI_0_QSPI_0_DATA_A_7_INOUT |
        SIUL2_4_PORT97_QUADSPI_0_QSPI_0_DATA_A_3_INOUT |
        SIUL2_4_PORT100_QUADSPI_0_QSPI_0_DATA_A_0_INOUT |
        SIUL2_4_PORT101_QUADSPI_0_QSPI_0_DATA_A_4_INOUT |
        SIUL2_4_PORT102_QUADSPI_0_QSPI_0_DQS_A_INOUT |
        SIUL2_4_PORT103_QUADSPI_0_QSPI_0_DATA_A_6_INOUT |
        SIUL2_4_PORT104_QUADSPI_0_QSPI_0_DATA_A_2_INOUT |
        SIUL2_4_PORT106_QUADSPI_1_QSPI_1_DATA_A_0_INOUT |
        SIUL2_4_PORT107_QUADSPI_1_QSPI_1_DATA_A_3_INOUT |
        SIUL2_4_PORT109_QUADSPI_1_QSPI_1_DATA_A_4_INOUT |
        SIUL2_4_PORT110_QUADSPI_1_QSPI_1_DATA_A_1_INOUT |
        SIUL2_4_PORT111_USDHC_SD_0_CLK_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_QUADSPI_1_QSPI_1_DATA_A_7_INOUT |
        SIUL2_4_PORT115_QUADSPI_1_QSPI_1_DATA_A_5_INOUT |
        SIUL2_4_PORT116_QUADSPI_1_QSPI_1_DATA_A_2_INOUT |
        SIUL2_4_PORT117_QUADSPI_1_QSPI_1_DATA_A_6_INOUT |
        SIUL2_4_PORT119_GTM_GTM_118_INOUT |
        SIUL2_4_PORT121_GTM_GTM_120_INOUT |
        SIUL2_4_PORT122_GTM_GTM_121_INOUT |
        SIUL2_4_PORT124_GTM_GTM_123_INOUT |
        SIUL2_4_PORT126_GTM_GTM_125_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_GTM_GTM_127_INOUT |
        SIUL2_4_PORT129_GTM_GTM_128_INOUT |
        SIUL2_4_PORT130_GTM_GTM_129_INOUT |
        SIUL2_4_PORT131_GTM_GTM_130_INOUT |
        SIUL2_4_PORT132_GTM_GTM_131_INOUT |
        SIUL2_4_PORT133_GTM_GTM_132_INOUT |
        SIUL2_4_PORT134_GTM_GTM_133_INOUT |
        SIUL2_4_PORT135_GTM_GTM_134_INOUT |
        SIUL2_4_PORT136_GTM_GTM_135_INOUT |
        SIUL2_4_PORT137_GTM_GTM_136_INOUT |
        SIUL2_4_PORT138_GTM_GTM_137_INOUT |
        SIUL2_4_PORT139_GTM_GTM_138_INOUT |
        SIUL2_4_PORT140_QUADSPI_1_QSPI_1_DATA_B_3_INOUT |
        SIUL2_4_PORT141_QUADSPI_1_QSPI_1_DATA_B_2_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_QUADSPI_1_QSPI_1_DATA_B_1_INOUT |
        SIUL2_4_PORT145_QUADSPI_1_QSPI_1_DATA_B_0_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95
        SIUL2_4_PORT93_GTM_GTM_092_INOUT |
        SIUL2_4_PORT94_GTM_GTM_093_INOUT |
        SIUL2_4_PORT95_GTM_GTM_094_INOUT */
        (uint16)( SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 96 - 111
        SIUL2_4_PORT96_GTM_GTM_095_INOUT |
        SIUL2_4_PORT97_GTM_GTM_096_INOUT |
        SIUL2_4_PORT98_GTM_GTM_097_INOUT |
        SIUL2_4_PORT99_GTM_GTM_098_INOUT |
        SIUL2_4_PORT100_GTM_GTM_099_INOUT |
        SIUL2_4_PORT101_GTM_GTM_100_INOUT |
        SIUL2_4_PORT102_GTM_GTM_101_INOUT |
        SIUL2_4_PORT103_GTM_GTM_102_INOUT |
        SIUL2_4_PORT104_GTM_GTM_103_INOUT |
        SIUL2_4_PORT105_GTM_GTM_104_INOUT |
        SIUL2_4_PORT106_USDHC_SD_0_CMD_INOUT |
        SIUL2_4_PORT107_USDHC_SD_0_D_0_INOUT |
        SIUL2_4_PORT108_USDHC_SD_0_D_1_INOUT |
        SIUL2_4_PORT109_USDHC_SD_0_D_2_INOUT |
        SIUL2_4_PORT110_USDHC_SD_0_D_3_INOUT |
        SIUL2_4_PORT111_GTM_GTM_110_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_USDHC_SD_0_D_5_INOUT |
        SIUL2_4_PORT113_USDHC_SD_0_D_4_INOUT |
        SIUL2_4_PORT114_USDHC_SD_0_D_6_INOUT |
        SIUL2_4_PORT115_USDHC_SD_0_D_7_INOUT |
        SIUL2_4_PORT118_GTM_GTM_117_INOUT |
        SIUL2_4_PORT120_GTM_GTM_119_INOUT |
        SIUL2_4_PORT123_GTM_GTM_122_INOUT |
        SIUL2_4_PORT127_GTM_GTM_126_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_EMIOS_0_EMIOS_0_CH24_INOUT |
        SIUL2_4_PORT129_EMIOS_0_EMIOS_0_CH23_INOUT |
        SIUL2_4_PORT130_EMIOS_0_EMIOS_0_CH22_INOUT |
        SIUL2_4_PORT131_EMIOS_0_EMIOS_0_CH8_INOUT |
        SIUL2_4_PORT132_EMIOS_0_EMIOS_0_CH17_INOUT |
        SIUL2_4_PORT139_EMIOS_0_EMIOS_0_CH1_INOUT |
        SIUL2_4_PORT140_SPI_6_DSPI_6_SCK_INOUT |
        SIUL2_4_PORT141_GTM_GTM_140_INOUT |
        SIUL2_4_PORT143_SPI_6_DSPI_6_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_GTM_GTM_105_INOUT |
        SIUL2_4_PORT107_GTM_GTM_106_INOUT |
        SIUL2_4_PORT109_GTM_GTM_108_INOUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT113_GTM_GTM_112_INOUT |
        SIUL2_4_PORT114_SPI_5_DSPI_5_SCK_INOUT |
        SIUL2_4_PORT115_SPI_5_DSPI_5_PCS0_INOUT |
        SIUL2_4_PORT121_EMIOS_0_EMIOS_0_CH30_INOUT |
        SIUL2_4_PORT124_EMIOS_0_EMIOS_0_CH28_INOUT |
        SIUL2_4_PORT125_GTM_GTM_124_INOUT |
        SIUL2_4_PORT126_EMIOS_0_EMIOS_0_CH26_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT133_EMIOS_0_EMIOS_0_CH10_INOUT |
        SIUL2_4_PORT134_EMIOS_0_EMIOS_0_CH20_INOUT |
        SIUL2_4_PORT135_EMIOS_0_EMIOS_0_CH12_INOUT |
        SIUL2_4_PORT136_EMIOS_0_EMIOS_0_CH21_INOUT |
        SIUL2_4_PORT137_EMIOS_0_EMIOS_0_CH14_INOUT |
        SIUL2_4_PORT138_EMIOS_0_EMIOS_0_CH0_INOUT |
        SIUL2_4_PORT140_GTM_GTM_139_INOUT |
        SIUL2_4_PORT141_EMIOS_0_EMIOS_0_CH3_INOUT |
        SIUL2_4_PORT142_GTM_GTM_141_INOUT |
        SIUL2_4_PORT143_GTM_GTM_142_INOUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_GTM_GTM_143_INOUT |
        SIUL2_4_PORT145_GTM_GTM_144_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT109_SPI_6_DSPI_6_PCS0_INOUT |
        SIUL2_4_PORT110_GTM_GTM_109_INOUT */
        (uint16)( SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT113_EMIOS_0_EMIOS_0_CH21_INOUT |
        SIUL2_4_PORT115_GTM_GTM_114_INOUT |
        SIUL2_4_PORT116_GTM_GTM_115_INOUT |
        SIUL2_4_PORT117_GTM_GTM_116_INOUT |
        SIUL2_4_PORT122_LPI2C_2_I2C_2_SCL_INOUT |
        SIUL2_4_PORT123_EMIOS_0_EMIOS_0_CH29_INOUT |
        SIUL2_4_PORT127_EMIOS_0_EMIOS_0_CH25_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 128 - 143
        SIUL2_4_PORT128_SPI_7_DSPI_7_PCS0_INOUT |
        SIUL2_4_PORT140_EMIOS_0_EMIOS_0_CH2_INOUT |
        SIUL2_4_PORT142_EMIOS_0_EMIOS_0_CH4_INOUT |
        SIUL2_4_PORT143_EMIOS_0_EMIOS_0_CH5_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 144 - 159
        SIUL2_4_PORT144_EMIOS_0_EMIOS_0_CH6_INOUT |
        SIUL2_4_PORT145_EMIOS_0_EMIOS_0_CH7_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U)
                ),
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_SPI_6_DSPI_6_SCK_INOUT |
        SIUL2_4_PORT108_LPI2C_2_I2C_2_SDA_INOUT |
        SIUL2_4_PORT111_EMIOS_0_EMIOS_0_CH16_INOUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_GTM_GTM_111_INOUT |
        SIUL2_4_PORT114_GTM_GTM_113_INOUT |
        SIUL2_4_PORT115_EMIOS_0_EMIOS_0_CH19_INOUT |
        SIUL2_4_PORT117_EMIOS_0_EMIOS_0_CH17_INOUT |
        SIUL2_4_PORT120_EMIOS_0_EMIOS_0_CH31_INOUT |
        SIUL2_4_PORT123_LPI2C_2_I2C_2_SDA_INOUT |
        SIUL2_4_PORT125_EMIOS_0_EMIOS_0_CH27_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111
        SIUL2_4_PORT106_LPI2C_2_I2C_2_SCL_INOUT |
        SIUL2_4_PORT108_GTM_GTM_107_INOUT |
        SIUL2_4_PORT111_QUADSPI_1_QSPI_1_DQS_A_INOUT */
        (uint16)( SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 112 - 127
        SIUL2_4_PORT112_EMIOS_0_EMIOS_0_CH23_INOUT |
        SIUL2_4_PORT114_EMIOS_0_EMIOS_0_CH20_INOUT |
        SIUL2_4_PORT116_EMIOS_0_EMIOS_0_CH18_INOUT |
        SIUL2_4_PORT125_SPI_7_DSPI_7_SCK_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INOUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143
        SIUL2_4_PORT129_C_VFCCU_ERR_2_2_INOUT |
        SIUL2_4_PORT137_C_VFCCU_ERR_3_2_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
};
static const Port_PinModeAvailabilityArrayType Port_SIUL2_5_au16PinModeAvailability =
{
    /*  Mode PORT_GPIO_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT146_GPIO |
        SIUL2_5_PORT147_GPIO |
        SIUL2_5_PORT148_GPIO |
        SIUL2_5_PORT149_GPIO |
        SIUL2_5_PORT150_GPIO |
        SIUL2_5_PORT151_GPIO |
        SIUL2_5_PORT152_GPIO |
        SIUL2_5_PORT153_GPIO |
        SIUL2_5_PORT154_GPIO |
        SIUL2_5_PORT155_GPIO |
        SIUL2_5_PORT156_GPIO |
        SIUL2_5_PORT157_GPIO |
        SIUL2_5_PORT158_GPIO |
        SIUL2_5_PORT159_GPIO */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT160_GPIO |
        SIUL2_5_PORT161_GPIO |
        SIUL2_5_PORT162_GPIO |
        SIUL2_5_PORT163_GPIO |
        SIUL2_5_PORT164_GPIO |
        SIUL2_5_PORT165_GPIO |
        SIUL2_5_PORT166_GPIO |
        SIUL2_5_PORT167_GPIO |
        SIUL2_5_PORT168_GPIO |
        SIUL2_5_PORT169_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT1_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT146_CAN_HUB_CAN_10_TX_OUT |
        SIUL2_5_PORT147_GTM_GTM_146_OUT |
        SIUL2_5_PORT148_CAN_HUB_CAN_11_TX_OUT |
        SIUL2_5_PORT149_GTM_GTM_148_OUT |
        SIUL2_5_PORT150_LINFLEX_9_LIN_9_TX_OUT |
        SIUL2_5_PORT151_GTM_GTM_150_OUT |
        SIUL2_5_PORT152_LINFLEX_10_LIN_10_TX_OUT |
        SIUL2_5_PORT153_GTM_GTM_152_OUT |
        SIUL2_5_PORT154_CAN_HUB_CAN_13_TX_OUT |
        SIUL2_5_PORT155_GTM_GTM_154_OUT |
        SIUL2_5_PORT156_GTM_GTM_155_OUT |
        SIUL2_5_PORT157_LINFLEX_11_LIN_11_TX_OUT |
        SIUL2_5_PORT158_GTM_GTM_157_OUT |
        SIUL2_5_PORT159_CAN_HUB_CAN_9_TX_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT160_GTM_GTM_159_OUT |
        SIUL2_5_PORT161_CAN_HUB_CAN_5_TX_OUT |
        SIUL2_5_PORT162_GTM_GTM_161_OUT |
        SIUL2_5_PORT163_GTM_GTM_162_OUT |
        SIUL2_5_PORT164_GTM_GTM_163_OUT |
        SIUL2_5_PORT165_GTM_GTM_164_OUT |
        SIUL2_5_PORT166_GTM_GTM_165_OUT |
        SIUL2_5_PORT167_GTM_GTM_166_OUT |
        SIUL2_5_PORT168_GTM_GTM_167_OUT |
        SIUL2_5_PORT169_GTM_GTM_168_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT2_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT146_GTM_GTM_145_OUT |
        SIUL2_5_PORT148_GTM_GTM_147_OUT |
        SIUL2_5_PORT149_SPI_9_DSPI_9_PCS3_OUT |
        SIUL2_5_PORT150_GTM_GTM_149_OUT |
        SIUL2_5_PORT151_SPI_8_DSPI_8_SOUT_OUT |
        SIUL2_5_PORT152_GTM_GTM_151_OUT |
        SIUL2_5_PORT153_SPI_8_DSPI_8_PCS0_OUT |
        SIUL2_5_PORT154_GTM_GTM_153_OUT |
        SIUL2_5_PORT156_MC_CGM_5_CLKOUT_3_OUT |
        SIUL2_5_PORT157_GTM_GTM_156_OUT |
        SIUL2_5_PORT158_SPI_9_DSPI_9_SOUT_OUT |
        SIUL2_5_PORT159_GTM_GTM_158_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT160_SPI_8_DSPI_8_PCS2_OUT |
        SIUL2_5_PORT161_GTM_GTM_160_OUT |
        SIUL2_5_PORT162_SPI_8_DSPI_8_PCS4_OUT |
        SIUL2_5_PORT163_SPI_8_DSPI_8_SOUT_OUT |
        SIUL2_5_PORT164_SPI_8_DSPI_8_SCK_OUT |
        SIUL2_5_PORT166_SPI_8_DSPI_8_PCS0_OUT |
        SIUL2_5_PORT167_SPI_8_DSPI_8_PCS1_OUT |
        SIUL2_5_PORT168_SPI_8_DSPI_8_PCS2_OUT |
        SIUL2_5_PORT169_SPI_8_DSPI_8_PCS3_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT3_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT148_SPI_9_DSPI_9_PCS4_OUT |
        SIUL2_5_PORT149_SPI_8_DSPI_8_PCS0_OUT |
        SIUL2_5_PORT150_SPI_8_DSPI_8_SCK_OUT |
        SIUL2_5_PORT151_SPI_9_DSPI_9_PCS1_OUT |
        SIUL2_5_PORT152_CANXL_0_CANXL_0_TX_OUT |
        SIUL2_5_PORT154_CANXL_1_CANXL_1_TX_OUT |
        SIUL2_5_PORT157_SPI_9_DSPI_9_SCK_OUT |
        SIUL2_5_PORT159_SPI_8_DSPI_8_PCS1_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT161_SPI_8_DSPI_8_PCS3_OUT |
        SIUL2_5_PORT162_SPI_9_DSPI_9_PCS0_OUT |
        SIUL2_5_PORT164_CAN_HUB_CAN_1_TX_OUT |
        SIUL2_5_PORT166_CAN_HUB_CAN_2_TX_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT4_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT150_SPI_9_DSPI_9_PCS2_OUT |
        SIUL2_5_PORT152_CAN_HUB_CAN_22_TX_OUT |
        SIUL2_5_PORT157_CAN_HUB_CAN_2_TX_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT161_CANXL_0_CANXL_0_TX_OUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT5_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT150_CAN_HUB_CAN_1_TX_OUT */
        (uint16)( SHL_PAD_U32(6U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT161_CAN_HUB_CAN_23_TX_OUT */
        (uint16)( SHL_PAD_U32(1U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT6_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT7_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_OUTPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175
        SIUL2_5_PORT169_MC_RGM_AE_RESET_B_OUT */
        (uint16)( SHL_PAD_U32(9U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT146_BOOT_RCON0_IN |
        SIUL2_5_PORT146_GTM_GTM_145_IN |
        SIUL2_5_PORT147_BOOT_RCON1_IN |
        SIUL2_5_PORT147_GTM_GTM_146_IN |
        SIUL2_5_PORT148_BOOT_RCON2_IN |
        SIUL2_5_PORT148_GTM_GTM_147_IN |
        SIUL2_5_PORT149_BOOT_RCON3_IN |
        SIUL2_5_PORT149_GTM_GTM_148_IN |
        SIUL2_5_PORT150_BOOT_RCON4_IN |
        SIUL2_5_PORT150_GTM_GTM_149_IN |
        SIUL2_5_PORT151_GTM_GTM_150_IN |
        SIUL2_5_PORT152_GTM_GTM_151_IN |
        SIUL2_5_PORT153_GTM_GTM_152_IN |
        SIUL2_5_PORT153_MC_RGM_AE_OUT_OF_RESET_IN |
        SIUL2_5_PORT154_BOOT_RCON5_IN |
        SIUL2_5_PORT154_GTM_GTM_153_IN |
        SIUL2_5_PORT155_BOOT_RCON6_IN |
        SIUL2_5_PORT155_GTM_GTM_154_IN |
        SIUL2_5_PORT156_BOOT_RCON9_IN |
        SIUL2_5_PORT156_GTM_GTM_155_IN |
        SIUL2_5_PORT157_BOOT_RCON10_IN |
        SIUL2_5_PORT157_GTM_GTM_156_IN |
        SIUL2_5_PORT158_BOOT_RCON11_IN |
        SIUL2_5_PORT158_GTM_GTM_157_IN |
        SIUL2_5_PORT159_BOOT_RCON12_IN |
        SIUL2_5_PORT159_GTM_GTM_158_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT160_BOOT_RCON13_IN |
        SIUL2_5_PORT160_GTM_GTM_159_IN |
        SIUL2_5_PORT161_GTM_GTM_160_IN |
        SIUL2_5_PORT162_GTM_GTM_161_IN |
        SIUL2_5_PORT163_GTM_GTM_162_IN |
        SIUL2_5_PORT164_GTM_GTM_163_IN |
        SIUL2_5_PORT165_GTM_GTM_164_IN |
        SIUL2_5_PORT166_GTM_GTM_165_IN |
        SIUL2_5_PORT167_GTM_GTM_166_IN |
        SIUL2_5_PORT168_GTM_GTM_167_IN |
        SIUL2_5_PORT169_GTM_GTM_168_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT147_SIUL2_5_EIRQ_0_IN |
        SIUL2_5_PORT149_SIUL2_5_EIRQ_1_IN |
        SIUL2_5_PORT150_SPI_8_DSPI_8_SCK_IN |
        SIUL2_5_PORT151_LINFLEX_9_LIN_9_RX_IN |
        SIUL2_5_PORT152_SPI_8_DSPI_8_SIN_IN |
        SIUL2_5_PORT153_LINFLEX_10_LIN_10_RX_IN |
        SIUL2_5_PORT155_CANXL_1_CANXL_1_RX_IN |
        SIUL2_5_PORT156_CANXL_0_CANXL_0_RX_IN |
        SIUL2_5_PORT157_SPI_9_DSPI_9_SCK_IN |
        SIUL2_5_PORT158_LINFLEX_11_LIN_11_RX_IN */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT160_SIUL2_5_EIRQ_4_IN |
        SIUL2_5_PORT161_SPI_9_DSPI_9_SIN_IN |
        SIUL2_5_PORT162_SPI_9_DSPI_9_PCS0_IN |
        SIUL2_5_PORT164_SPI_8_DSPI_8_SCK_IN |
        SIUL2_5_PORT165_SPI_8_DSPI_8_SIN_IN |
        SIUL2_5_PORT166_SPI_8_DSPI_8_PCS0_IN |
        SIUL2_5_PORT167_CAN_HUB_CAN_2_RX_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT147_CAN_HUB_CAN_10_RX_IN |
        SIUL2_5_PORT149_CAN_HUB_CAN_11_RX_IN |
        SIUL2_5_PORT151_SIUL2_5_EIRQ_2_IN |
        SIUL2_5_PORT153_SPI_8_DSPI_8_PCS0_IN |
        SIUL2_5_PORT155_CAN_HUB_CAN_13_RX_IN |
        SIUL2_5_PORT158_CAN_HUB_CAN_2_RX_IN */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT160_CAN_HUB_CAN_9_RX_IN |
        SIUL2_5_PORT162_SIUL2_5_EIRQ_5_IN |
        SIUL2_5_PORT165_SIUL2_5_EIRQ_6_IN |
        SIUL2_5_PORT166_SIUL2_5_EIRQ_7_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT149_SPI_8_DSPI_8_PCS0_IN |
        SIUL2_5_PORT151_CAN_HUB_CAN_1_RX_IN |
        SIUL2_5_PORT153_CANXL_0_CANXL_0_RX_IN */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT162_CANXL_0_CANXL_0_RX_IN |
        SIUL2_5_PORT165_CAN_HUB_CAN_1_RX_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(5U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT153_SIUL2_5_EIRQ_3_IN */
        (uint16)( SHL_PAD_U32(9U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT162_CAN_HUB_CAN_5_RX_IN */
        (uint16)( SHL_PAD_U32(2U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT153_CAN_HUB_CAN_22_RX_IN */
        (uint16)( SHL_PAD_U32(9U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT162_CAN_HUB_CAN_23_RX_IN */
        (uint16)( SHL_PAD_U32(2U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT7_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT1_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT147_GTM_GTM_146_INOUT |
        SIUL2_5_PORT149_GTM_GTM_148_INOUT |
        SIUL2_5_PORT151_GTM_GTM_150_INOUT |
        SIUL2_5_PORT153_GTM_GTM_152_INOUT |
        SIUL2_5_PORT155_GTM_GTM_154_INOUT |
        SIUL2_5_PORT156_GTM_GTM_155_INOUT |
        SIUL2_5_PORT158_GTM_GTM_157_INOUT */
        (uint16)( SHL_PAD_U32(3U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(14U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT160_GTM_GTM_159_INOUT |
        SIUL2_5_PORT162_GTM_GTM_161_INOUT |
        SIUL2_5_PORT163_GTM_GTM_162_INOUT |
        SIUL2_5_PORT164_GTM_GTM_163_INOUT |
        SIUL2_5_PORT165_GTM_GTM_164_INOUT |
        SIUL2_5_PORT166_GTM_GTM_165_INOUT |
        SIUL2_5_PORT167_GTM_GTM_166_INOUT |
        SIUL2_5_PORT168_GTM_GTM_167_INOUT |
        SIUL2_5_PORT169_GTM_GTM_168_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT2_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT146_GTM_GTM_145_INOUT |
        SIUL2_5_PORT148_GTM_GTM_147_INOUT |
        SIUL2_5_PORT150_GTM_GTM_149_INOUT |
        SIUL2_5_PORT152_GTM_GTM_151_INOUT |
        SIUL2_5_PORT153_SPI_8_DSPI_8_PCS0_INOUT |
        SIUL2_5_PORT154_GTM_GTM_153_INOUT |
        SIUL2_5_PORT157_GTM_GTM_156_INOUT |
        SIUL2_5_PORT159_GTM_GTM_158_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT161_GTM_GTM_160_INOUT |
        SIUL2_5_PORT164_SPI_8_DSPI_8_SCK_INOUT |
        SIUL2_5_PORT166_SPI_8_DSPI_8_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(6U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159
        SIUL2_5_PORT149_SPI_8_DSPI_8_PCS0_INOUT |
        SIUL2_5_PORT150_SPI_8_DSPI_8_SCK_INOUT |
        SIUL2_5_PORT157_SPI_9_DSPI_9_SCK_INOUT */
        (uint16)( SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(13U)
                ),
        /* Pads 160 - 175
        SIUL2_5_PORT162_SPI_9_DSPI_9_PCS0_INOUT */
        (uint16)( SHL_PAD_U32(2U)
                ),
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INOUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
};
static const Port_PinModeAvailabilityArrayType Port_SIUL2_AE_au16PinModeAvailability =
{
    /*  Mode PORT_GPIO_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_GPIO |
        SIUL2_AE_PORT1_GPIO |
        SIUL2_AE_PORT2_GPIO |
        SIUL2_AE_PORT3_GPIO |
        SIUL2_AE_PORT8_GPIO |
        SIUL2_AE_PORT9_GPIO |
        SIUL2_AE_PORT10_GPIO |
        SIUL2_AE_PORT11_GPIO |
        SIUL2_AE_PORT12_GPIO |
        SIUL2_AE_PORT13_GPIO |
        SIUL2_AE_PORT14_GPIO |
        SIUL2_AE_PORT15_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT16_GPIO |
        SIUL2_AE_PORT17_GPIO |
        SIUL2_AE_PORT18_GPIO |
        SIUL2_AE_PORT19_GPIO |
        SIUL2_AE_PORT20_GPIO |
        SIUL2_AE_PORT21_GPIO |
        SIUL2_AE_PORT22_GPIO |
        SIUL2_AE_PORT23_GPIO |
        SIUL2_AE_PORT24_GPIO |
        SIUL2_AE_PORT25_GPIO |
        SIUL2_AE_PORT26_GPIO |
        SIUL2_AE_PORT27_GPIO |
        SIUL2_AE_PORT28_GPIO |
        SIUL2_AE_PORT29_GPIO |
        SIUL2_AE_PORT30_GPIO |
        SIUL2_AE_PORT31_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT32_GPIO |
        SIUL2_AE_PORT33_GPIO |
        SIUL2_AE_PORT34_GPIO |
        SIUL2_AE_PORT35_GPIO |
        SIUL2_AE_PORT36_GPIO |
        SIUL2_AE_PORT37_GPIO |
        SIUL2_AE_PORT38_GPIO |
        SIUL2_AE_PORT39_GPIO |
        SIUL2_AE_PORT40_GPIO |
        SIUL2_AE_PORT41_GPIO |
        SIUL2_AE_PORT42_GPIO |
        SIUL2_AE_PORT43_GPIO */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT1_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_FLEXPWM_AE_1_PWM1_X_0_OUT |
        SIUL2_AE_PORT1_FLEXPWM_AE_1_PWM1_X_1_OUT |
        SIUL2_AE_PORT2_FLEXPWM_AE_1_PWM1_X_2_OUT |
        SIUL2_AE_PORT3_FLEXPWM_AE_1_PWM1_X_3_OUT |
        SIUL2_AE_PORT8_FLEXPWM_AE_1_PWM1_A_0_OUT |
        SIUL2_AE_PORT9_FLEXPWM_AE_1_PWM1_A_1_OUT |
        SIUL2_AE_PORT10_FLEXPWM_AE_1_PWM1_A_2_OUT |
        SIUL2_AE_PORT11_FLEXPWM_AE_1_PWM1_A_3_OUT |
        SIUL2_AE_PORT12_FLEXPWM_AE_1_PWM1_B_0_OUT |
        SIUL2_AE_PORT13_FLEXPWM_AE_1_PWM1_B_1_OUT |
        SIUL2_AE_PORT14_FLEXPWM_AE_1_PWM1_B_2_OUT |
        SIUL2_AE_PORT15_FLEXPWM_AE_1_PWM1_B_3_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT18_ETIMER_AE_1_0_ET1_0_CH_0_OUT |
        SIUL2_AE_PORT19_ETIMER_AE_1_0_ET1_0_CH_1_OUT |
        SIUL2_AE_PORT20_ETIMER_AE_1_0_ET1_0_CH_2_OUT |
        SIUL2_AE_PORT21_ETIMER_AE_1_0_ET1_0_CH_3_OUT |
        SIUL2_AE_PORT22_ETIMER_AE_1_0_ET1_0_CH_4_OUT |
        SIUL2_AE_PORT23_ETIMER_AE_1_0_ET1_0_CH_5_OUT |
        SIUL2_AE_PORT24_FLEXPWM_AE_1_PWM1_X_1_OUT |
        SIUL2_AE_PORT25_FLEXPWM_AE_1_PWM1_X_0_OUT |
        SIUL2_AE_PORT26_FLEXPWM_AE_2_PWM2_A_0_OUT |
        SIUL2_AE_PORT27_FLEXPWM_AE_2_PWM2_A_1_OUT |
        SIUL2_AE_PORT28_FLEXPWM_AE_2_PWM2_A_2_OUT |
        SIUL2_AE_PORT29_FLEXPWM_AE_2_PWM2_A_3_OUT |
        SIUL2_AE_PORT30_FLEXPWM_AE_2_PWM2_B_0_OUT |
        SIUL2_AE_PORT31_FLEXPWM_AE_2_PWM2_B_1_OUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT32_FLEXPWM_AE_2_PWM2_B_2_OUT |
        SIUL2_AE_PORT33_FLEXPWM_AE_2_PWM2_B_3_OUT |
        SIUL2_AE_PORT36_ETIMER_AE_2_0_ET2_0_CH_0_OUT |
        SIUL2_AE_PORT37_ETIMER_AE_2_0_ET2_0_CH_1_OUT |
        SIUL2_AE_PORT38_ETIMER_AE_2_0_ET2_0_CH_2_OUT |
        SIUL2_AE_PORT39_ETIMER_AE_2_0_ET2_0_CH_3_OUT |
        SIUL2_AE_PORT40_ETIMER_AE_2_0_ET2_0_CH_4_OUT |
        SIUL2_AE_PORT41_ETIMER_AE_2_0_ET2_0_CH_5_OUT |
        SIUL2_AE_PORT42_FLEXPWM_AE_2_PWM2_X_1_OUT |
        SIUL2_AE_PORT43_FLEXPWM_AE_2_PWM2_X_0_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT2_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_ETIMER_AE_1_1_ET1_1_CH_0_OUT |
        SIUL2_AE_PORT1_ETIMER_AE_1_1_ET1_1_CH_1_OUT |
        SIUL2_AE_PORT2_ETIMER_AE_1_1_ET1_1_CH_2_OUT |
        SIUL2_AE_PORT3_ETIMER_AE_1_1_ET1_1_CH_3_OUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT20_ETIMER_AE_1_1_ET1_1_CH_0_OUT |
        SIUL2_AE_PORT21_ETIMER_AE_1_1_ET1_1_CH_1_OUT |
        SIUL2_AE_PORT22_ETIMER_AE_1_1_ET1_1_CH_2_OUT |
        SIUL2_AE_PORT23_ETIMER_AE_1_1_ET1_1_CH_3_OUT |
        SIUL2_AE_PORT24_ETIMER_AE_1_1_ET1_1_CH_4_OUT |
        SIUL2_AE_PORT25_ETIMER_AE_1_1_ET1_1_CH_5_OUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT38_ETIMER_AE_2_1_ET2_1_CH_0_OUT |
        SIUL2_AE_PORT39_ETIMER_AE_2_1_ET2_1_CH_1_OUT |
        SIUL2_AE_PORT40_ETIMER_AE_2_1_ET2_1_CH_2_OUT |
        SIUL2_AE_PORT41_ETIMER_AE_2_1_ET2_1_CH_3_OUT |
        SIUL2_AE_PORT42_ETIMER_AE_2_1_ET2_1_CH_4_OUT |
        SIUL2_AE_PORT43_ETIMER_AE_2_1_ET2_1_CH_5_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT3_FUNC_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT1_CTU_AE_1_CTU_AE_1_EXT_OUT_0_OUT |
        SIUL2_AE_PORT2_CTU_AE_2_CTU_AE_2_EXT_OUT_0_OUT */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT22_FLEXPWM_AE_1_PWM1_X_3_OUT |
        SIUL2_AE_PORT23_FLEXPWM_AE_1_PWM1_X_2_OUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT40_FLEXPWM_AE_2_PWM2_X_3_OUT |
        SIUL2_AE_PORT41_FLEXPWM_AE_2_PWM2_X_2_OUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT4_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT5_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT6_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ALT7_FUNC_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_OUTPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INPUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271
        SIUL2_AE_PORT256_SAR_ADC_AE_0_0_SAR0_0_AN_0_IN |
        SIUL2_AE_PORT257_SAR_ADC_AE_0_0_SAR0_0_AN_1_IN |
        SIUL2_AE_PORT258_SAR_ADC_AE_0_0_SAR0_0_AN_2_IN |
        SIUL2_AE_PORT259_SAR_ADC_AE_0_0_SAR0_0_AN_3_IN |
        SIUL2_AE_PORT260_SAR_ADC_AE_0_0_SAR0_0_AN_4_IN |
        SIUL2_AE_PORT261_SAR_ADC_AE_0_0_SAR0_0_AN_5_IN |
        SIUL2_AE_PORT262_SAR_ADC_AE_0_0_SAR0_0_AN_6_IN |
        SIUL2_AE_PORT263_SAR_ADC_AE_0_0_SAR0_0_AN_7_IN |
        SIUL2_AE_PORT264_SAR_ADC_AE_0_0_SAR0_0_AN_8_IN |
        SIUL2_AE_PORT265_SAR_ADC_AE_0_0_SAR0_0_AN_9_IN |
        SIUL2_AE_PORT266_SAR_ADC_AE_0_0_SAR0_0_AN_10_IN |
        SIUL2_AE_PORT267_SAR_ADC_AE_0_0_SAR0_0_AN_11_IN |
        SIUL2_AE_PORT268_SAR_ADC_AE_0_0_SAR0_0_AN_12_IN |
        SIUL2_AE_PORT269_SAR_ADC_AE_0_0_SAR0_0_AN_13_IN |
        SIUL2_AE_PORT270_SAR_ADC_AE_0_0_SAR0_0_AN_14_IN |
        SIUL2_AE_PORT271_SAR_ADC_AE_0_0_SAR0_0_AN_15_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 272 - 287
        SIUL2_AE_PORT272_SAR_ADC_AE_0_0_SAR0_0_AN_16_IN |
        SIUL2_AE_PORT273_SAR_ADC_AE_0_0_SAR0_0_AN_17_IN |
        SIUL2_AE_PORT274_SAR_ADC_AE_0_0_SAR0_0_AN_18_IN |
        SIUL2_AE_PORT275_SAR_ADC_AE_0_0_SAR0_0_AN_19_IN |
        SIUL2_AE_PORT276_SAR_ADC_AE_0_0_SAR0_0_AN_20_IN |
        SIUL2_AE_PORT277_SAR_ADC_AE_0_0_SAR0_0_AN_21_IN |
        SIUL2_AE_PORT278_SAR_ADC_AE_0_0_SAR0_0_AN_22_IN |
        SIUL2_AE_PORT279_SAR_ADC_AE_0_0_SAR0_0_AN_23_IN |
        SIUL2_AE_PORT280_SAR_ADC_AE_1_0_SAR1_0_AN_0_IN |
        SIUL2_AE_PORT281_SAR_ADC_AE_1_0_SAR1_0_AN_1_IN |
        SIUL2_AE_PORT282_SAR_ADC_AE_1_0_SAR1_0_AN_2_IN |
        SIUL2_AE_PORT283_SAR_ADC_AE_1_0_SAR1_0_AN_3_IN |
        SIUL2_AE_PORT284_SAR_ADC_AE_1_0_SAR1_0_AN_4_IN |
        SIUL2_AE_PORT285_SAR_ADC_AE_1_0_SAR1_0_AN_5_IN |
        SIUL2_AE_PORT286_SAR_ADC_AE_1_0_SAR1_0_AN_6_IN |
        SIUL2_AE_PORT287_SAR_ADC_AE_1_0_SAR1_0_AN_7_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 288 - 303
        SIUL2_AE_PORT288_SAR_ADC_AE_1_0_SAR1_0_AN_8_IN |
        SIUL2_AE_PORT289_SAR_ADC_AE_1_0_SAR1_0_AN_9_AND_SAR1_1_AN_9_IN |
        SIUL2_AE_PORT290_SAR_ADC_AE_1_0_SAR1_0_AN_10_AND_SAR1_1_AN_10_IN |
        SIUL2_AE_PORT291_SAR_ADC_AE_1_1_SAR1_1_AN_0_IN |
        SIUL2_AE_PORT292_SAR_ADC_AE_1_1_SAR1_1_AN_1_IN |
        SIUL2_AE_PORT293_SAR_ADC_AE_1_1_SAR1_1_AN_2_IN |
        SIUL2_AE_PORT294_SAR_ADC_AE_1_1_SAR1_1_AN_3_IN |
        SIUL2_AE_PORT295_SAR_ADC_AE_1_1_SAR1_1_AN_4_IN |
        SIUL2_AE_PORT296_SAR_ADC_AE_1_1_SAR1_1_AN_5_IN |
        SIUL2_AE_PORT297_SAR_ADC_AE_1_1_SAR1_1_AN_6_IN |
        SIUL2_AE_PORT298_SAR_ADC_AE_1_1_SAR1_1_AN_7_IN |
        SIUL2_AE_PORT299_SAR_ADC_AE_1_1_SAR1_1_AN_8_IN |
        SIUL2_AE_PORT300_SAR_ADC_AE_1_0_SAR1_0_AN_11_AND_SAR1_1_AN_11_IN |
        SIUL2_AE_PORT301_SAR_ADC_AE_1_0_SAR1_0_AN_12_AND_SAR1_1_AN_12_IN |
        SIUL2_AE_PORT302_SAR_ADC_AE_2_0_SAR2_0_AN_0_IN |
        SIUL2_AE_PORT303_SAR_ADC_AE_2_0_SAR2_0_AN_1_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 304 - 319
        SIUL2_AE_PORT304_SAR_ADC_AE_2_0_SAR2_0_AN_2_IN |
        SIUL2_AE_PORT305_SAR_ADC_AE_2_0_SAR2_0_AN_3_IN |
        SIUL2_AE_PORT306_SAR_ADC_AE_2_0_SAR2_0_AN_4_IN |
        SIUL2_AE_PORT307_SAR_ADC_AE_2_0_SAR2_0_AN_5_IN |
        SIUL2_AE_PORT308_SAR_ADC_AE_2_0_SAR2_0_AN_6_IN |
        SIUL2_AE_PORT309_SAR_ADC_AE_2_0_SAR2_0_AN_7_IN |
        SIUL2_AE_PORT310_SAR_ADC_AE_2_0_SAR2_0_AN_8_IN |
        SIUL2_AE_PORT311_SAR_ADC_AE_2_0_SAR2_0_AN_9_AND_SAR2_1_AN_9_IN |
        SIUL2_AE_PORT312_SAR_ADC_AE_2_0_SAR2_0_AN_10_AND_SAR2_1_AN_10_IN |
        SIUL2_AE_PORT313_SAR_ADC_AE_2_1_SAR2_1_AN_0_IN |
        SIUL2_AE_PORT314_SAR_ADC_AE_2_1_SAR2_1_AN_1_IN |
        SIUL2_AE_PORT315_SAR_ADC_AE_2_1_SAR2_1_AN_2_IN |
        SIUL2_AE_PORT316_SAR_ADC_AE_2_1_SAR2_1_AN_3_IN |
        SIUL2_AE_PORT317_SAR_ADC_AE_2_1_SAR2_1_AN_4_IN |
        SIUL2_AE_PORT318_SAR_ADC_AE_2_1_SAR2_1_AN_5_IN |
        SIUL2_AE_PORT319_SAR_ADC_AE_2_1_SAR2_1_AN_6_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U) |
                  SHL_PAD_U32(12U) |
                  SHL_PAD_U32(13U) |
                  SHL_PAD_U32(14U) |
                  SHL_PAD_U32(15U)
                ),
        /* Pads 320 - 335
        SIUL2_AE_PORT320_SAR_ADC_AE_2_1_SAR2_1_AN_7_IN |
        SIUL2_AE_PORT321_SAR_ADC_AE_2_1_SAR2_1_AN_8_IN |
        SIUL2_AE_PORT322_SAR_ADC_AE_2_0_SAR2_0_AN_11_AND_SAR2_1_AN_11_IN |
        SIUL2_AE_PORT323_SAR_ADC_AE_2_0_SAR2_0_AN_12_AND_SAR2_1_AN_12_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT1_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_FLEXPWM_AE_1_PWM1_X_0_IN |
        SIUL2_AE_PORT1_FLEXPWM_AE_1_PWM1_X_1_IN |
        SIUL2_AE_PORT2_FLEXPWM_AE_1_PWM1_X_2_IN |
        SIUL2_AE_PORT3_FLEXPWM_AE_1_PWM1_X_3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT16_FLEXPWM_AE_1_PWM1_FAULT_0_IN |
        SIUL2_AE_PORT17_FLEXPWM_AE_1_PWM1_EXTSYNC_IN |
        SIUL2_AE_PORT18_ETIMER_AE_1_0_ET1_0_CH_0_IN |
        SIUL2_AE_PORT19_ETIMER_AE_1_0_ET1_0_CH_1_IN |
        SIUL2_AE_PORT20_ETIMER_AE_1_0_ET1_0_CH_2_IN |
        SIUL2_AE_PORT21_ETIMER_AE_1_0_ET1_0_CH_3_IN |
        SIUL2_AE_PORT22_FLEXPWM_AE_1_PWM1_X_3_IN |
        SIUL2_AE_PORT23_FLEXPWM_AE_1_PWM1_X_2_IN |
        SIUL2_AE_PORT24_FLEXPWM_AE_1_PWM1_X_1_IN |
        SIUL2_AE_PORT25_FLEXPWM_AE_1_PWM1_X_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT34_FLEXPWM_AE_2_PWM2_FAULT_0_IN |
        SIUL2_AE_PORT35_FLEXPWM_AE_2_PWM2_FAULT_1_IN |
        SIUL2_AE_PORT36_ETIMER_AE_2_0_ET2_0_CH_0_IN |
        SIUL2_AE_PORT37_ETIMER_AE_2_0_ET2_0_CH_1_IN |
        SIUL2_AE_PORT38_ETIMER_AE_2_0_ET2_0_CH_2_IN |
        SIUL2_AE_PORT39_ETIMER_AE_2_0_ET2_0_CH_3_IN |
        SIUL2_AE_PORT40_FLEXPWM_AE_2_PWM2_X_3_IN |
        SIUL2_AE_PORT41_FLEXPWM_AE_2_PWM2_X_2_IN |
        SIUL2_AE_PORT42_ETIMER_AE_2_1_ET2_1_CH_4_IN |
        SIUL2_AE_PORT43_ETIMER_AE_2_1_ET2_1_CH_5_IN */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT2_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_SIUL2_AE_EIRQ_0_IN |
        SIUL2_AE_PORT1_ETIMER_AE_1_1_ET1_1_CH_1_IN |
        SIUL2_AE_PORT2_FLEXPWM_AE_1_PWM1_EXTSYNC_IN |
        SIUL2_AE_PORT3_SIUL2_AE_EIRQ_3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT17_FLEXPWM_AE_1_PWM1_FAULT_1_IN |
        SIUL2_AE_PORT20_ETIMER_AE_1_1_ET1_1_CH_0_IN |
        SIUL2_AE_PORT21_ETIMER_AE_1_1_ET1_1_CH_1_IN |
        SIUL2_AE_PORT22_ETIMER_AE_1_1_ET1_1_CH_2_IN |
        SIUL2_AE_PORT23_ETIMER_AE_1_1_ET1_1_CH_3_IN |
        SIUL2_AE_PORT24_ETIMER_AE_1_1_ET1_1_CH_4_IN |
        SIUL2_AE_PORT25_ETIMER_AE_1_1_ET1_1_CH_5_IN */
        (uint16)( SHL_PAD_U32(1U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT38_ETIMER_AE_2_1_ET2_1_CH_0_IN |
        SIUL2_AE_PORT39_ETIMER_AE_2_1_ET2_1_CH_1_IN |
        SIUL2_AE_PORT40_ETIMER_AE_2_1_ET2_1_CH_2_IN |
        SIUL2_AE_PORT41_ETIMER_AE_2_1_ET2_1_CH_3_IN |
        SIUL2_AE_PORT42_FLEXPWM_AE_2_PWM2_X_1_IN |
        SIUL2_AE_PORT43_FLEXPWM_AE_2_PWM2_X_0_IN */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT3_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_ETIMER_AE_1_1_ET1_1_CH_0_IN |
        SIUL2_AE_PORT1_SIUL2_AE_EIRQ_1_IN |
        SIUL2_AE_PORT2_SIUL2_AE_EIRQ_2_IN |
        SIUL2_AE_PORT3_ETIMER_AE_1_1_ET1_1_CH_3_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT22_ETIMER_AE_1_0_ET1_0_CH_4_IN |
        SIUL2_AE_PORT23_ETIMER_AE_1_0_ET1_0_CH_5_IN */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT40_ETIMER_AE_2_0_ET2_0_CH_4_IN |
        SIUL2_AE_PORT41_ETIMER_AE_2_0_ET2_0_CH_5_IN */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT4_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_CTU_AE_1_CTU_AE_1_EXT_IN_0_IN |
        SIUL2_AE_PORT2_ETIMER_AE_1_1_ET1_1_CH_2_IN |
        SIUL2_AE_PORT3_CTU_AE_2_CTU_AE_2_EXT_IN_0_IN */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INPUT7_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT1_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_FLEXPWM_AE_1_PWM1_X_0_INOUT |
        SIUL2_AE_PORT1_FLEXPWM_AE_1_PWM1_X_1_INOUT |
        SIUL2_AE_PORT2_FLEXPWM_AE_1_PWM1_X_2_INOUT |
        SIUL2_AE_PORT3_FLEXPWM_AE_1_PWM1_X_3_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT18_ETIMER_AE_1_0_ET1_0_CH_0_INOUT |
        SIUL2_AE_PORT19_ETIMER_AE_1_0_ET1_0_CH_1_INOUT |
        SIUL2_AE_PORT20_ETIMER_AE_1_0_ET1_0_CH_2_INOUT |
        SIUL2_AE_PORT21_ETIMER_AE_1_0_ET1_0_CH_3_INOUT |
        SIUL2_AE_PORT22_ETIMER_AE_1_0_ET1_0_CH_4_INOUT |
        SIUL2_AE_PORT23_ETIMER_AE_1_0_ET1_0_CH_5_INOUT |
        SIUL2_AE_PORT24_FLEXPWM_AE_1_PWM1_X_1_INOUT |
        SIUL2_AE_PORT25_FLEXPWM_AE_1_PWM1_X_0_INOUT */
        (uint16)( SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U) |
                  SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT36_ETIMER_AE_2_0_ET2_0_CH_0_INOUT |
        SIUL2_AE_PORT37_ETIMER_AE_2_0_ET2_0_CH_1_INOUT |
        SIUL2_AE_PORT38_ETIMER_AE_2_0_ET2_0_CH_2_INOUT |
        SIUL2_AE_PORT39_ETIMER_AE_2_0_ET2_0_CH_3_INOUT |
        SIUL2_AE_PORT40_ETIMER_AE_2_0_ET2_0_CH_4_INOUT |
        SIUL2_AE_PORT41_ETIMER_AE_2_0_ET2_0_CH_5_INOUT |
        SIUL2_AE_PORT42_FLEXPWM_AE_2_PWM2_X_1_INOUT |
        SIUL2_AE_PORT43_FLEXPWM_AE_2_PWM2_X_0_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT2_MODE: */
    {
        /* Pads 0 - 15
        SIUL2_AE_PORT0_ETIMER_AE_1_1_ET1_1_CH_0_INOUT |
        SIUL2_AE_PORT1_ETIMER_AE_1_1_ET1_1_CH_1_INOUT |
        SIUL2_AE_PORT2_ETIMER_AE_1_1_ET1_1_CH_2_INOUT |
        SIUL2_AE_PORT3_ETIMER_AE_1_1_ET1_1_CH_3_INOUT */
        (uint16)( SHL_PAD_U32(0U) |
                  SHL_PAD_U32(1U) |
                  SHL_PAD_U32(2U) |
                  SHL_PAD_U32(3U)
                ),
        /* Pads 16 - 31
        SIUL2_AE_PORT20_ETIMER_AE_1_1_ET1_1_CH_0_INOUT |
        SIUL2_AE_PORT21_ETIMER_AE_1_1_ET1_1_CH_1_INOUT |
        SIUL2_AE_PORT22_ETIMER_AE_1_1_ET1_1_CH_2_INOUT |
        SIUL2_AE_PORT23_ETIMER_AE_1_1_ET1_1_CH_3_INOUT |
        SIUL2_AE_PORT24_ETIMER_AE_1_1_ET1_1_CH_4_INOUT |
        SIUL2_AE_PORT25_ETIMER_AE_1_1_ET1_1_CH_5_INOUT */
        (uint16)( SHL_PAD_U32(4U) |
                  SHL_PAD_U32(5U) |
                  SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT38_ETIMER_AE_2_1_ET2_1_CH_0_INOUT |
        SIUL2_AE_PORT39_ETIMER_AE_2_1_ET2_1_CH_1_INOUT |
        SIUL2_AE_PORT40_ETIMER_AE_2_1_ET2_1_CH_2_INOUT |
        SIUL2_AE_PORT41_ETIMER_AE_2_1_ET2_1_CH_3_INOUT |
        SIUL2_AE_PORT42_ETIMER_AE_2_1_ET2_1_CH_4_INOUT |
        SIUL2_AE_PORT43_ETIMER_AE_2_1_ET2_1_CH_5_INOUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U) |
                  SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U) |
                  SHL_PAD_U32(10U) |
                  SHL_PAD_U32(11U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT3_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31
        SIUL2_AE_PORT22_FLEXPWM_AE_1_PWM1_X_3_INOUT |
        SIUL2_AE_PORT23_FLEXPWM_AE_1_PWM1_X_2_INOUT */
        (uint16)( SHL_PAD_U32(6U) |
                  SHL_PAD_U32(7U)
                ),
        /* Pads 32 - 47
        SIUL2_AE_PORT40_FLEXPWM_AE_2_PWM2_X_3_INOUT |
        SIUL2_AE_PORT41_FLEXPWM_AE_2_PWM2_X_2_INOUT */
        (uint16)( SHL_PAD_U32(8U) |
                  SHL_PAD_U32(9U)
                ),
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT4_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT5_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_INOUT6_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
    ,
    /*  Mode PORT_ONLY_INOUT_MODE: */
    {
        /* Pads 0 - 15 */
        (uint16)0x0000,
        /* Pads 16 - 31 */
        (uint16)0x0000,
        /* Pads 32 - 47 */
        (uint16)0x0000,
        /* Pads 48 - 63 */
        (uint16)0x0000,
        /* Pads 64 - 79 */
        (uint16)0x0000,
        /* Pads 80 - 95 */
        (uint16)0x0000,
        /* Pads 96 - 111 */
        (uint16)0x0000,
        /* Pads 112 - 127 */
        (uint16)0x0000,
        /* Pads 128 - 143 */
        (uint16)0x0000,
        /* Pads 144 - 159 */
        (uint16)0x0000,
        /* Pads 160 - 175 */
        (uint16)0x0000,
        /* Pads 176 - 191 */
        (uint16)0x0000,
        /* Pads 192 - 207 */
        (uint16)0x0000,
        /* Pads 208 - 223 */
        (uint16)0x0000,
        /* Pads 224 - 239 */
        (uint16)0x0000,
        /* Pads 240 - 255 */
        (uint16)0x0000,
        /* Pads 256 - 271 */
        (uint16)0x0000,
        /* Pads 272 - 287 */
        (uint16)0x0000,
        /* Pads 288 - 303 */
        (uint16)0x0000,
        /* Pads 304 - 319 */
        (uint16)0x0000,
        /* Pads 320 - 335 */
        (uint16)0x0000,
        /* Pads 336 - 351 */
        (uint16)0x0000,
        /* Pads 352 - 367 */
        (uint16)0x0000,
        /* Pads 368 - 383 */
        (uint16)0x0000,
        /* Pads 384 - 399 */
        (uint16)0x0000,
        /* Pads 400 - 415 */
        (uint16)0x0000,
        /* Pads 416 - 431 */
        (uint16)0x0000,
        /* Pads 432 - 447 */
        (uint16)0x0000,
        /* Pads 448 - 463 */
        (uint16)0x0000,
        /* Pads 464 - 479 */
        (uint16)0x0000,
        /* Pads 480 - 495 */
        (uint16)0x0000,
        /* Pads 496 - 511 */
        (uint16)0x0000
    }
};

/**
* @brief Array of elements storing information about IN functionalities on the first SIUL2 instance
*/
static const Port_InMuxSettingType Port_SIUL2_0_aInMuxSettings[127] =
{
    /* INMUX settings for pad not available: */
    { NO_INPUTMUX_U16, 0U, 0U},
    /* INMUX settings for pad PORT0:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CTU_CTU_EXT_IN_IN input func */
    {2U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH6_IN input func */
    {35U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH6_IN input func */
    {322U, 3U, 4U},
    /* INMUX settings for pad PORT1:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_0_LIN_0_RX_IN input func */
    {47U, 2U, 0U},
    /* SIUL2_0_EIRQ_1_IN input func */
    {69U, 2U, 0U},
    /* I3C_0_I3C_0_SDA_3_IN input func */
    {46U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH7_IN input func */
    {36U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH7_IN input func */
    {323U, 3U, 4U},
    /* INMUX settings for pad PORT2:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FR_0_FR_0_RXD_B_IN input func */
    {39U, 2U, 0U},
    /* SPI_0_DSPI_0_PCS0_IN input func */
    {3U, 2U, 0U},
    /* PSI5_0_PSI5_0_SDIN_0_IN input func */
    {55U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH1_IN input func */
    {11U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH1_IN input func */
    {317U, 3U, 4U},
    /* INMUX settings for pad PORT3:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_1_LIN_1_RX_IN input func */
    {48U, 2U, 0U},
    /* SIUL2_0_EIRQ_0_IN input func */
    {68U, 2U, 0U},
    /* PSI5_S_0_PSI5_S_0_RX_IN input func */
    {59U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH2_IN input func */
    {19U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH2_IN input func */
    {318U, 3U, 4U},
    /* INMUX settings for pad PORT4:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* I3C_0_I3C_0_SDA_2_IN input func */
    {45U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH5_IN input func */
    {34U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH5_IN input func */
    {321U, 3U, 4U},
    /* INMUX settings for pad PORT5:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_0_EIRQ_2_IN input func */
    {70U, 2U, 0U},
    /* I3C_0_I3C_0_SDA_1_IN input func */
    {44U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH0_IN input func */
    {10U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH0_IN input func */
    {316U, 3U, 4U},
    /* CAN_HUB_CAN_0_RX_IN input func */
    {0U, 2U, 3U},
    /* INMUX settings for pad PORT6:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_0_DSPI_0_SCK_IN input func */
    {4U, 2U, 0U},
    /* PSI5_0_PSI5_0_SDIN_1_IN input func */
    {56U, 2U, 0U},
    /* I3C_0_I3C_0_SDA_0_IN input func */
    {43U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH3_IN input func */
    {30U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH3_IN input func */
    {319U, 3U, 4U},
    /* INMUX settings for pad PORT7:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* I3C_0_I3C_0_SCL_IN input func */
    {42U, 2U, 0U},
    /* SPI_0_DSPI_0_SIN_IN input func */
    {5U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH4_IN input func */
    {33U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH4_IN input func */
    {320U, 3U, 4U},
    /* INMUX settings for pad PORT8:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FR_0_FR_0_RXD_A_IN input func */
    {38U, 2U, 0U},
    /* FR_1_FR_1_RXD_B_IN input func */
    {41U, 2U, 0U},
    /* CTU_CTU_EXT_IN_IN input func */
    {2U, 3U, 0U},
    /* DEBUG_EVTI_B_0_IN input func */
    {85U, 2U, 0U},
    /* INMUX settings for pad PORT9:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* BOOT_BOOTMOD_0_IN input func */
    {0U, 0U, 0U},
    /* MISC_TAMPER_IN_IN input func */
    {51U, 2U, 0U},
    /* INMUX settings for pad PORT10:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* BOOT_BOOTMOD_1_IN input func */
    {1U, 0U, 0U},
    /* INMUX settings for pad PORT11:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_1_EMIOS_1_CH16_IN input func */
    {15U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH16_IN input func */
    {328U, 3U, 4U},
    /* INMUX settings for pad PORT12:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_0_PSI5_0_SDIN_0_IN input func */
    {55U, 3U, 0U},
    /* SIUL2_0_EIRQ_3_IN input func */
    {71U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH23_IN input func */
    {23U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH23_IN input func */
    {335U, 4U, 4U},
    /* INMUX settings for pad PORT13:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MSC_0_LIN_LIN_12_RX_IN input func */
    {49U, 2U, 0U},
    /* SIUL2_0_EIRQ_4_IN input func */
    {72U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH22_IN input func */
    {22U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH22_IN input func */
    {334U, 3U, 4U},
    /* CAN_HUB_CAN_0_RX_IN input func */
    {0U, 3U, 3U},
    /* INMUX settings for pad PORT14:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_2_LIN_2_RX_IN input func */
    {50U, 2U, 0U},
    /* SIUL2_0_EIRQ_5_IN input func */
    {73U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH31_IN input func */
    {32U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH31_IN input func */
    {343U, 3U, 4U},
    /* INMUX settings for pad PORT15:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_0_EIRQ_6_IN input func */
    {74U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH30_IN input func */
    {31U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH30_IN input func */
    {342U, 3U, 4U},
    /* NETC_TMR_1588_TRIG2_IN input func */
    {179U, 7U, 1U},
    /* INMUX settings for pad PORT16:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_0_PSI5_0_SDIN_1_IN input func */
    {56U, 3U, 0U},
    /* SIUL2_0_EIRQ_7_IN input func */
    {75U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH29_IN input func */
    {29U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH29_IN input func */
    {341U, 3U, 4U},
    /* INMUX settings for pad PORT17:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FR_1_FR_1_RXD_A_IN input func */
    {40U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH28_IN input func */
    {28U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH28_IN input func */
    {340U, 3U, 4U},
    /* INMUX settings for pad PORT18:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_0_PSI5_0_SDIN_2_IN input func */
    {57U, 2U, 0U},
    /* SPI_1_DSPI_1_SCK_IN input func */
    {7U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH27_IN input func */
    {27U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH27_IN input func */
    {339U, 3U, 4U},
    /* INMUX settings for pad PORT19:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_1_DSPI_1_SIN_IN input func */
    {8U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH26_IN input func */
    {26U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH26_IN input func */
    {338U, 3U, 4U},
    /* INMUX settings for pad PORT20:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FR_1_FR_1_RXD_B_IN input func */
    {41U, 3U, 0U},
    /* PSI5_0_PSI5_0_SDIN_3_IN input func */
    {58U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH25_IN input func */
    {25U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH25_IN input func */
    {337U, 3U, 4U},
    /* INMUX settings for pad PORT21:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_1_DSPI_1_PCS0_IN input func */
    {6U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH24_IN input func */
    {24U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH24_IN input func */
    {336U, 3U, 4U},
    /* INMUX settings for pad PORT22:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_1_TRGMUX_1_XIN_5_IN input func */
    {76U, 2U, 0U},
    /* ADC_0_ADCSAR0_TRG_IN input func */
    {86U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH18_IN input func */
    {17U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH18_IN input func */
    {330U, 3U, 4U},
    /* INMUX settings for pad PORT23:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SINC_SINC_MBIT_3_IN input func */
    {63U, 2U, 0U},
    /* ADC_0_ADCSAR0_INJ_TRG_IN input func */
    {87U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH19_IN input func */
    {18U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH19_IN input func */
    {331U, 3U, 4U},
    /* CAN_HUB_CAN_1_RX_IN input func */
    {1U, 2U, 3U},
    /* INMUX settings for pad PORT24:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_1_TRGMUX_1_XIN_1_IN input func */
    {77U, 2U, 0U},
    /* SINC_SINC_MCLK_3_IN input func */
    {67U, 2U, 0U},
    /* PSI5_S_0_PSI5_S_0_RX_IN input func */
    {59U, 3U, 0U},
    /* ADC_1_ADCSAR1_TRG_IN input func */
    {88U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH8_IN input func */
    {37U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH8_IN input func */
    {324U, 3U, 4U},
    /* INMUX settings for pad PORT25:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SINC_SINC_MBIT_2_IN input func */
    {62U, 2U, 0U},
    /* ADC_1_ADCSAR1_INJ_TRG_IN input func */
    {89U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH17_IN input func */
    {16U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH17_IN input func */
    {329U, 4U, 4U},
    /* CAN_HUB_CAN_2_RX_IN input func */
    {2U, 2U, 3U},
    /* INMUX settings for pad PORT26:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_1_TRGMUX_1_XIN_2_IN input func */
    {78U, 2U, 0U},
    /* SINC_SINC_MCLK_2_IN input func */
    {66U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH10_IN input func */
    {12U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH10_IN input func */
    {325U, 3U, 4U},
    /* INMUX settings for pad PORT27:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_0_LIN_0_RX_IN input func */
    {47U, 3U, 0U},
    /* SINC_SINC_MBIT_1_IN input func */
    {61U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH20_IN input func */
    {20U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH20_IN input func */
    {332U, 4U, 4U},
    /* INMUX settings for pad PORT28:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_1_TRGMUX_1_XIN_3_IN input func */
    {79U, 2U, 0U},
    /* SINC_SINC_MCLK_1_IN input func */
    {65U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH12_IN input func */
    {13U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH12_IN input func */
    {326U, 3U, 4U},
    /* INMUX settings for pad PORT29:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_1_LIN_1_RX_IN input func */
    {48U, 3U, 0U},
    /* TRGMUX_1_TRGMUX_1_XIN_0_IN input func */
    {80U, 2U, 0U},
    /* SINC_SINC_MBIT_0_IN input func */
    {60U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH21_IN input func */
    {21U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH21_IN input func */
    {333U, 4U, 4U},
    /* INMUX settings for pad PORT30:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_1_TRGMUX_1_XIN_4_IN input func */
    {81U, 2U, 0U},
    /* SINC_SINC_MCLK_0_IN input func */
    {64U, 2U, 0U},
    /* EMIOS_1_EMIOS_1_CH14_IN input func */
    {14U, 2U, 0U},
    /* EMIOS_0_EMIOS_0_CH14_IN input func */
    {327U, 3U, 4U},
    /* INMUX settings for pad PORT170:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* JTAGC_TDI_IN input func */
    {82U, 0U, 0U},
    /* INMUX settings for pad PORT172:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* JTAGC_TMS_IN input func */
    {83U, 0U, 0U},
    /* INMUX settings for pad PORT173:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* JTAGC_TCK_IN input func */
    {84U, 0U, 0U}
};

/**
* @brief Array of elements storing information about IN functionalities on the other SIUL2 instance
*/
static const Port_InMuxSettingType Port_SIUL2_1_aInMuxSettings[130] =
{
    /* INMUX settings for pad not available: */
    { NO_INPUTMUX_U16, 0U, 0U},
    /* INMUX settings for pad PORT31:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_3_DSPI_3_SCK_IN input func */
    {131U, 2U, 1U},
    /* LPI2C_1_I2C_1_SDA_IN input func */
    {181U, 2U, 1U},
    /* DEBUG_EVTI_B_1_IN input func */
    {209U, 2U, 1U},
    /* INMUX settings for pad PORT32:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPI2C_1_I2C_1_SCL_IN input func */
    {180U, 2U, 1U},
    /* SPI_3_DSPI_3_SIN_IN input func */
    {132U, 2U, 1U},
    /* LINFLEX_4_LIN_4_RX_IN input func */
    {186U, 2U, 1U},
    /* CAN_HUB_CAN_14_RX_IN input func */
    {14U, 2U, 3U},
    /* INMUX settings for pad PORT34:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_3_DSPI_3_PCS0_IN input func */
    {130U, 2U, 1U},
    /* INMUX settings for pad PORT35:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_1_EIRQ_0_IN input func */
    {199U, 2U, 1U},
    /* CAN_HUB_CAN_3_RX_IN input func */
    {3U, 2U, 3U},
    /* INMUX settings for pad PORT37:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_5_LIN_5_RX_IN input func */
    {187U, 2U, 1U},
    /* SIUL2_1_EIRQ_1_IN input func */
    {200U, 2U, 1U},
    /* CAN_HUB_CAN_4_RX_IN input func */
    {4U, 2U, 3U},
    /* INMUX settings for pad PORT38:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_LFAST_1_EXT_REF_CLK_IN input func */
    {208U, 2U, 1U},
    /* INMUX settings for pad PORT39:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_LFAST_0_EXT_REF_CLK_IN input func */
    {207U, 2U, 1U},
    /* INMUX settings for pad PORT41:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_TMR_1588_CLK_IN input func */
    {177U, 2U, 1U},
    /* MC_CGM_1_ETH_RGMII_REF_CLK_IN input func */
    {136U, 2U, 1U},
    /* INMUX settings for pad PORT42:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_TMR_1588_CLK_IN input func */
    {177U, 3U, 1U},
    /* INMUX settings for pad PORT43:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_TMR_1588_TRIG1_IN input func */
    {178U, 2U, 1U},
    /* NETC_ETH_1_MII_RXER_IN input func */
    {165U, 2U, 1U},
    /* NETC_ETH_1_RMII_RXER_IN input func */
    {174U, 2U, 1U},
    /* INMUX settings for pad PORT44:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_TMR_1588_CLK_IN input func */
    {177U, 4U, 1U},
    /* NETC_ETH_1_MII_CRS_IN input func */
    {157U, 2U, 1U},
    /* SPI_3_DSPI_3_SCK_IN input func */
    {131U, 3U, 1U},
    /* INMUX settings for pad PORT45:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_1_MII_COL_IN input func */
    {156U, 2U, 1U},
    /* NETC_TMR_1588_TRIG2_IN input func */
    {179U, 2U, 1U},
    /* SPI_3_DSPI_3_SIN_IN input func */
    {132U, 3U, 1U},
    /* INMUX settings for pad PORT46:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_ETH_1_TX_CLK_IN input func */
    {158U, 2U, 1U},
    /* INMUX settings for pad PORT47:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_3_DSPI_3_PCS0_IN input func */
    {130U, 3U, 1U},
    /* NETC_ETH_1_RGMII_RXCTL_IN input func */
    {166U, 3U, 1U},
    /* INMUX settings for pad PORT48:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_4_LIN_4_RX_IN input func */
    {186U, 3U, 1U},
    /* NETC_ETH_1_RGMII_RXD_0_IN input func */
    {167U, 3U, 1U},
    /* INMUX settings for pad PORT49:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_1_RGMII_RXD_1_IN input func */
    {168U, 3U, 1U},
    /* INMUX settings for pad PORT50:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_4_DSPI_4_SCK_IN input func */
    {134U, 2U, 1U},
    /* CAN_HUB_CAN_3_RX_IN input func */
    {3U, 3U, 3U},
    /* NETC_ETH_1_RGMII_RXD_2_IN input func */
    {169U, 3U, 1U},
    /* INMUX settings for pad PORT51:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_4_DSPI_4_SIN_IN input func */
    {135U, 2U, 1U},
    /* NETC_ETH_1_RGMII_RXD_3_IN input func */
    {170U, 3U, 1U},
    /* INMUX settings for pad PORT52:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_ETH_1_RX_CLK_IN input func */
    {159U, 2U, 1U},
    /* CAN_HUB_CAN_4_RX_IN input func */
    {4U, 3U, 3U},
    /* INMUX settings for pad PORT53:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_1_MII_RXDV_IN input func */
    {164U, 2U, 1U},
    /* NETC_ETH_1_RGMII_RXCTL_IN input func */
    {166U, 2U, 1U},
    /* NETC_ETH_1_RMII_CRS_DV_IN input func */
    {171U, 2U, 1U},
    /* SPI_4_DSPI_4_PCS0_IN input func */
    {133U, 2U, 1U},
    /* INMUX settings for pad PORT54:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_1_MII_RXD_0_IN input func */
    {160U, 2U, 1U},
    /* NETC_ETH_1_RGMII_RXD_0_IN input func */
    {167U, 2U, 1U},
    /* LINFLEX_5_LIN_5_RX_IN input func */
    {187U, 3U, 1U},
    /* NETC_ETH_1_RMII_RXD_0_IN input func */
    {172U, 2U, 1U},
    /* INMUX settings for pad PORT55:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_1_MII_RXD_1_IN input func */
    {161U, 2U, 1U},
    /* NETC_ETH_1_RGMII_RXD_1_IN input func */
    {168U, 2U, 1U},
    /* NETC_ETH_1_RMII_RXD_1_IN input func */
    {173U, 2U, 1U},
    /* INMUX settings for pad PORT56:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPI2C_1_I2C_1_SCL_IN input func */
    {180U, 3U, 1U},
    /* NETC_TMR_1588_TRIG1_IN input func */
    {178U, 3U, 1U},
    /* NETC_ETH_1_MII_RXD_2_IN input func */
    {162U, 2U, 1U},
    /* NETC_ETH_1_RGMII_RXD_2_IN input func */
    {169U, 2U, 1U},
    /* INMUX settings for pad PORT57:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_TMR_1588_TRIG2_IN input func */
    {179U, 3U, 1U},
    /* NETC_ETH_1_MII_RXD_3_IN input func */
    {163U, 2U, 1U},
    /* NETC_ETH_1_RGMII_RXD_3_IN input func */
    {170U, 2U, 1U},
    /* LPI2C_1_I2C_1_SDA_IN input func */
    {181U, 3U, 1U},
    /* INMUX settings for pad PORT58:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_MDC_IN input func */
    {176U, 2U, 1U},
    /* INMUX settings for pad PORT59:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_MDIO_IN input func */
    {175U, 2U, 1U},
    /* INMUX settings for pad PORT60:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_ETH_0_TX_CLK_IN input func */
    {139U, 2U, 1U},
    /* INMUX settings for pad PORT61:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_RGMII_RXCTL_IN input func */
    {147U, 3U, 1U},
    /* INMUX settings for pad PORT62:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_RGMII_RXD_0_IN input func */
    {148U, 3U, 1U},
    /* INMUX settings for pad PORT63:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_RGMII_RXD_1_IN input func */
    {149U, 3U, 1U},
    /* INMUX settings for pad PORT64:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_RGMII_RXD_2_IN input func */
    {150U, 3U, 1U},
    /* INMUX settings for pad PORT65:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_RGMII_RXD_3_IN input func */
    {151U, 3U, 1U},
    /* INMUX settings for pad PORT66:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_ETH_0_RX_CLK_IN input func */
    {140U, 2U, 1U},
    /* INMUX settings for pad PORT67:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_MII_RXDV_IN input func */
    {145U, 2U, 1U},
    /* NETC_ETH_0_RGMII_RXCTL_IN input func */
    {147U, 2U, 1U},
    /* NETC_ETH_0_RMII_CRS_DV_IN input func */
    {152U, 2U, 1U},
    /* INMUX settings for pad PORT68:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_MII_RXD_0_IN input func */
    {141U, 2U, 1U},
    /* NETC_ETH_0_RGMII_RXD_0_IN input func */
    {148U, 2U, 1U},
    /* NETC_ETH_0_RMII_RXD_0_IN input func */
    {153U, 2U, 1U},
    /* INMUX settings for pad PORT69:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_MII_RXD_1_IN input func */
    {142U, 2U, 1U},
    /* NETC_ETH_0_RGMII_RXD_1_IN input func */
    {149U, 2U, 1U},
    /* NETC_ETH_0_RMII_RXD_1_IN input func */
    {154U, 2U, 1U},
    /* INMUX settings for pad PORT70:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_TMR_1588_TRIG1_IN input func */
    {178U, 4U, 1U},
    /* NETC_ETH_0_MII_RXD_2_IN input func */
    {143U, 2U, 1U},
    /* NETC_ETH_0_RGMII_RXD_2_IN input func */
    {150U, 2U, 1U},
    /* INMUX settings for pad PORT71:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_MII_RXD_3_IN input func */
    {144U, 2U, 1U},
    /* NETC_ETH_0_RGMII_RXD_3_IN input func */
    {151U, 2U, 1U},
    /* NETC_TMR_1588_TRIG2_IN input func */
    {179U, 4U, 1U},
    /* INMUX settings for pad PORT72:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_TMR_1588_CLK_IN input func */
    {177U, 5U, 1U},
    /* INMUX settings for pad PORT73:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_TMR_1588_TRIG1_IN input func */
    {178U, 5U, 1U},
    /* NETC_ETH_0_MII_RXER_IN input func */
    {146U, 2U, 1U},
    /* NETC_ETH_0_RMII_RXER_IN input func */
    {155U, 2U, 1U},
    /* INMUX settings for pad PORT74:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* MC_CGM_1_TMR_1588_CLK_IN input func */
    {177U, 6U, 1U},
    /* NETC_ETH_0_MII_CRS_IN input func */
    {138U, 2U, 1U},
    /* INMUX settings for pad PORT75:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_ETH_0_MII_COL_IN input func */
    {137U, 2U, 1U},
    /* NETC_TMR_1588_TRIG2_IN input func */
    {179U, 5U, 1U},
    /* INMUX settings for pad PORT76:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_0_SENT_0_CH0_IN input func */
    {191U, 2U, 1U},
    /* INMUX settings for pad PORT77:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_0_SENT_0_CH1_IN input func */
    {192U, 2U, 1U},
    /* CAN_HUB_CAN_5_RX_IN input func */
    {5U, 2U, 3U},
    /* INMUX settings for pad PORT78:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_0_SENT_0_CH0_IN input func */
    {191U, 3U, 1U},
    /* SPI_4_DSPI_4_SCK_IN input func */
    {134U, 3U, 1U},
    /* INMUX settings for pad PORT79:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_4_DSPI_4_SIN_IN input func */
    {135U, 3U, 1U},
    /* SRX_0_SENT_0_CH1_IN input func */
    {192U, 3U, 1U},
    /* CAN_HUB_CAN_15_RX_IN input func */
    {15U, 2U, 3U},
    /* INMUX settings for pad PORT80:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_1_EIRQ_2_IN input func */
    {201U, 2U, 1U},
    /* SRX_0_SENT_0_CH2_IN input func */
    {193U, 2U, 1U},
    /* INMUX settings for pad PORT81:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_1_EIRQ_3_IN input func */
    {202U, 2U, 1U},
    /* SRX_0_SENT_0_CH3_IN input func */
    {194U, 2U, 1U},
    /* SPI_4_DSPI_4_PCS0_IN input func */
    {133U, 3U, 1U},
    /* INMUX settings for pad PORT82:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_0_SENT_0_CH4_IN input func */
    {195U, 2U, 1U},
    /* INMUX settings for pad PORT83:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_0_SENT_0_CH5_IN input func */
    {196U, 2U, 1U},
    /* LPI2C_1_I2C_1_SDA_IN input func */
    {181U, 4U, 1U},
    /* INMUX settings for pad PORT84:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPI2C_1_I2C_1_SCL_IN input func */
    {180U, 4U, 1U},
    /* SIUL2_1_EIRQ_4_IN input func */
    {203U, 2U, 1U},
    /* SRX_0_SENT_0_CH6_IN input func */
    {197U, 2U, 1U},
    /* INMUX settings for pad PORT85:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_1_EIRQ_5_IN input func */
    {204U, 2U, 1U},
    /* SRX_0_SENT_0_CH7_IN input func */
    {198U, 2U, 1U},
    /* CAN_HUB_CAN_3_RX_IN input func */
    {3U, 4U, 3U},
    /* INMUX settings for pad PORT86:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_2_DSPI_2_SCK_IN input func */
    {128U, 2U, 1U},
    /* SRX_0_SENT_0_CH2_IN input func */
    {193U, 3U, 1U},
    /* INMUX settings for pad PORT87:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_2_DSPI_2_SIN_IN input func */
    {129U, 2U, 1U},
    /* SRX_0_SENT_0_CH3_IN input func */
    {194U, 3U, 1U},
    /* INMUX settings for pad PORT88:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_TMR_1588_TRIG1_IN input func */
    {178U, 6U, 1U},
    /* SRX_0_SENT_0_CH4_IN input func */
    {195U, 3U, 1U},
    /* INMUX settings for pad PORT89:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* NETC_TMR_1588_TRIG2_IN input func */
    {179U, 6U, 1U},
    /* SPI_2_DSPI_2_PCS0_IN input func */
    {127U, 2U, 1U},
    /* SRX_0_SENT_0_CH5_IN input func */
    {196U, 3U, 1U},
    /* INMUX settings for pad PORT90:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_1_EIRQ_6_IN input func */
    {205U, 2U, 1U},
    /* SRX_0_SENT_0_CH6_IN input func */
    {197U, 3U, 1U},
    /* INMUX settings for pad PORT91:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_3_LIN_3_RX_IN input func */
    {185U, 2U, 1U},
    /* SIUL2_1_EIRQ_7_IN input func */
    {206U, 2U, 1U},
    /* SRX_0_SENT_0_CH7_IN input func */
    {198U, 3U, 1U},
    /* CAN_HUB_CAN_4_RX_IN input func */
    {4U, 4U, 3U},
    /* CAN_HUB_CAN_16_RX_IN input func */
    {16U, 2U, 3U}
};
static const Port_InMuxSettingType Port_SIUL2_3_aInMuxSettings[1] =
{
    /* INMUX settings for pad not available: */
    { NO_INPUTMUX_U16, 0U, 0U},

};
static const Port_InMuxSettingType Port_SIUL2_4_aInMuxSettings[149] =
{
    /* INMUX settings for pad not available: */
    { NO_INPUTMUX_U16, 0U, 0U},
    /* INMUX settings for pad PORT92:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* QUADSPI_0_QSPI_0_INTA_B_IN input func */
    {292U, 2U, 4U},
    /* INMUX settings for pad PORT106:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_6_DSPI_6_SCK_IN input func */
    {305U, 2U, 4U},
    /* LPI2C_2_I2C_2_SCL_IN input func */
    {311U, 2U, 4U},
    /* INMUX settings for pad PORT107:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_6_DSPI_6_SIN_IN input func */
    {306U, 2U, 4U},
    /* SIUL2_4_EIRQ_0_IN input func */
    {357U, 2U, 4U},
    /* CAN_HUB_CAN_6_RX_IN input func */
    {6U, 2U, 3U},
    /* INMUX settings for pad PORT108:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LPI2C_2_I2C_2_SDA_IN input func */
    {312U, 2U, 4U},
    /* INMUX settings for pad PORT109:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_6_DSPI_6_PCS0_IN input func */
    {307U, 2U, 4U},
    /* SIUL2_4_EIRQ_1_IN input func */
    {358U, 2U, 4U},
    /* CAN_HUB_CAN_7_RX_IN input func */
    {7U, 2U, 3U},
    /* INMUX settings for pad PORT111:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* USDHC_SD_0_CLK_IN input func */
    {371U, 2U, 4U},
    /* QUADSPI_1_QSPI_1_DQS_A_IN input func */
    {295U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH16_IN input func */
    {328U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH16_IN input func */
    {15U, 3U, 0U},
    /* CAN_HUB_CAN_8_RX_IN input func */
    {8U, 2U, 3U},
    /* INMUX settings for pad PORT112:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH23_IN input func */
    {335U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH23_IN input func */
    {23U, 3U, 0U},
    /* INMUX settings for pad PORT113:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_5_DSPI_5_SIN_IN input func */
    {303U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH21_IN input func */
    {333U, 3U, 4U},
    /* EMIOS_1_EMIOS_1_CH21_IN input func */
    {21U, 3U, 0U},
    /* CAN_HUB_CAN_3_RX_IN input func */
    {3U, 5U, 3U},
    /* INMUX settings for pad PORT114:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_5_DSPI_5_SCK_IN input func */
    {302U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH20_IN input func */
    {332U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH20_IN input func */
    {20U, 3U, 0U},
    /* INMUX settings for pad PORT115:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_5_DSPI_5_PCS0_IN input func */
    {304U, 2U, 4U},
    /* PSI5_1_PSI5_1_SDIN_0_IN input func */
    {344U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH19_IN input func */
    {331U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH19_IN input func */
    {18U, 3U, 0U},
    /* CAN_HUB_CAN_4_RX_IN input func */
    {4U, 5U, 3U},
    /* INMUX settings for pad PORT116:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* EMIOS_0_EMIOS_0_CH18_IN input func */
    {330U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH18_IN input func */
    {17U, 3U, 0U},
    /* INMUX settings for pad PORT117:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_1_PSI5_1_SDIN_1_IN input func */
    {345U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH17_IN input func */
    {329U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH17_IN input func */
    {16U, 3U, 0U},
    /* CAN_HUB_CAN_6_RX_IN input func */
    {6U, 3U, 3U},
    /* INMUX settings for pad PORT119:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* QUADSPI_1_QSPI_1_INTA_B_IN input func */
    {293U, 2U, 4U},
    /* CAN_HUB_CAN_7_RX_IN input func */
    {7U, 3U, 3U},
    /* INMUX settings for pad PORT120:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_1_PSI5_1_SDIN_0_IN input func */
    {344U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH31_IN input func */
    {343U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH31_IN input func */
    {32U, 3U, 0U},
    /* INMUX settings for pad PORT121:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_6_LIN_6_RX_IN input func */
    {256U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH30_IN input func */
    {342U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH30_IN input func */
    {31U, 3U, 0U},
    /* CAN_HUB_CAN_12_RX_IN input func */
    {12U, 2U, 3U},
    /* NETC_TMR_1588_TRIG1_IN input func */
    {178U, 7U, 1U},
    /* INMUX settings for pad PORT122:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_0_TRGMUX_0_XIN_5_IN input func */
    {370U, 2U, 4U},
    /* LPI2C_2_I2C_2_SCL_IN input func */
    {311U, 3U, 4U},
    /* INMUX settings for pad PORT123:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_1_PSI5_1_SDIN_1_IN input func */
    {345U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH29_IN input func */
    {341U, 2U, 4U},
    /* LPI2C_2_I2C_2_SDA_IN input func */
    {312U, 3U, 4U},
    /* EMIOS_1_EMIOS_1_CH29_IN input func */
    {29U, 3U, 0U},
    /* CAN_HUB_CAN_17_RX_IN input func */
    {17U, 2U, 3U},
    /* INMUX settings for pad PORT124:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_7_LIN_7_RX_IN input func */
    {257U, 2U, 4U},
    /* SIUL2_4_EIRQ_2_IN input func */
    {359U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH28_IN input func */
    {340U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH28_IN input func */
    {28U, 3U, 0U},
    /* INMUX settings for pad PORT125:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_1_PSI5_1_SDIN_2_IN input func */
    {346U, 2U, 4U},
    /* SPI_7_DSPI_7_SCK_IN input func */
    {308U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH27_IN input func */
    {339U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH27_IN input func */
    {27U, 3U, 0U},
    /* INMUX settings for pad PORT126:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_8_LIN_8_RX_IN input func */
    {258U, 2U, 4U},
    /* SPI_7_DSPI_7_SIN_IN input func */
    {309U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH26_IN input func */
    {338U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH26_IN input func */
    {26U, 3U, 0U},
    /* CAN_HUB_CAN_2_RX_IN input func */
    {2U, 3U, 3U},
    /* INMUX settings for pad PORT127:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* PSI5_1_PSI5_1_SDIN_3_IN input func */
    {347U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH25_IN input func */
    {337U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH25_IN input func */
    {25U, 3U, 0U},
    /* INMUX settings for pad PORT128:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_0_TRGMUX_0_XIN_0_IN input func */
    {365U, 2U, 4U},
    /* SPI_7_DSPI_7_PCS0_IN input func */
    {310U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH24_IN input func */
    {336U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH24_IN input func */
    {24U, 3U, 0U},
    /* CAN_HUB_CAN_12_RX_IN input func */
    {12U, 3U, 3U},
    /* CAN_HUB_CAN_18_RX_IN input func */
    {18U, 2U, 3U},
    /* INMUX settings for pad PORT129:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH0_IN input func */
    {349U, 2U, 4U},
    /* TRGMUX_0_TRGMUX_0_XIN_1_IN input func */
    {366U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH23_IN input func */
    {335U, 3U, 4U},
    /* EMIOS_1_EMIOS_1_CH23_IN input func */
    {23U, 4U, 0U},
    /* INMUX settings for pad PORT130:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH1_IN input func */
    {350U, 2U, 4U},
    /* TRGMUX_0_TRGMUX_0_XIN_2_IN input func */
    {367U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH22_IN input func */
    {334U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH22_IN input func */
    {22U, 3U, 0U},
    /* CAN_HUB_CAN_19_RX_IN input func */
    {19U, 2U, 3U},
    /* INMUX settings for pad PORT131:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH2_IN input func */
    {351U, 2U, 4U},
    /* TRGMUX_0_TRGMUX_0_XIN_3_IN input func */
    {368U, 2U, 4U},
    /* PSI5_S_1_PSI5_S_1_RX_IN input func */
    {348U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH8_IN input func */
    {324U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH8_IN input func */
    {37U, 3U, 0U},
    /* INMUX settings for pad PORT132:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH3_IN input func */
    {352U, 2U, 4U},
    /* SIUL2_4_EIRQ_3_IN input func */
    {360U, 2U, 4U},
    /* TRGMUX_0_TRGMUX_0_XIN_4_IN input func */
    {369U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH17_IN input func */
    {329U, 3U, 4U},
    /* EMIOS_1_EMIOS_1_CH17_IN input func */
    {16U, 4U, 0U},
    /* CAN_HUB_CAN_20_RX_IN input func */
    {20U, 2U, 3U},
    /* INMUX settings for pad PORT133:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH4_IN input func */
    {353U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH10_IN input func */
    {325U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH10_IN input func */
    {12U, 3U, 0U},
    /* INMUX settings for pad PORT134:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH5_IN input func */
    {354U, 2U, 4U},
    /* SIUL2_4_EIRQ_4_IN input func */
    {361U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH20_IN input func */
    {332U, 3U, 4U},
    /* EMIOS_1_EMIOS_1_CH20_IN input func */
    {20U, 4U, 0U},
    /* INMUX settings for pad PORT135:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH6_IN input func */
    {355U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH12_IN input func */
    {326U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH12_IN input func */
    {13U, 3U, 0U},
    /* CAN_HUB_CAN_1_RX_IN input func */
    {1U, 3U, 3U},
    /* INMUX settings for pad PORT136:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH7_IN input func */
    {356U, 2U, 4U},
    /* TRGMUX_0_TRGMUX_0_XIN_5_IN input func */
    {370U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH21_IN input func */
    {333U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH21_IN input func */
    {21U, 4U, 0U},
    /* INMUX settings for pad PORT137:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_4_EIRQ_5_IN input func */
    {362U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH14_IN input func */
    {327U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH14_IN input func */
    {14U, 3U, 0U},
    /* CAN_HUB_CAN_21_RX_IN input func */
    {21U, 2U, 3U},
    /* INMUX settings for pad PORT138:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* TRGMUX_0_TRGMUX_0_XIN_5_IN input func */
    {370U, 4U, 4U},
    /* SRX_1_SENT_1_CH0_IN input func */
    {349U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH0_IN input func */
    {316U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH0_IN input func */
    {10U, 3U, 0U},
    /* INMUX settings for pad PORT139:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* QUADSPI_1_QSPI_1_INTB_B_IN input func */
    {294U, 2U, 4U},
    /* SRX_1_SENT_1_CH1_IN input func */
    {350U, 3U, 4U},
    /* SIUL2_4_EIRQ_6_IN input func */
    {363U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH1_IN input func */
    {317U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH1_IN input func */
    {11U, 3U, 0U},
    /* CAN_HUB_CAN_6_RX_IN input func */
    {6U, 4U, 3U},
    /* CAN_HUB_CAN_12_RX_IN input func */
    {12U, 4U, 3U},
    /* INMUX settings for pad PORT140:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_6_DSPI_6_SCK_IN input func */
    {305U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH2_IN input func */
    {318U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH2_IN input func */
    {19U, 3U, 0U},
    /* SRX_1_SENT_1_CH2_IN input func */
    {351U, 3U, 4U},
    /* INMUX settings for pad PORT141:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_6_DSPI_6_SIN_IN input func */
    {306U, 3U, 4U},
    /* SRX_1_SENT_1_CH3_IN input func */
    {352U, 3U, 4U},
    /* SIUL2_4_EIRQ_7_IN input func */
    {364U, 2U, 4U},
    /* EMIOS_0_EMIOS_0_CH3_IN input func */
    {319U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH3_IN input func */
    {30U, 3U, 0U},
    /* CAN_HUB_CAN_7_RX_IN input func */
    {7U, 4U, 3U},
    /* INMUX settings for pad PORT142:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH4_IN input func */
    {353U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH4_IN input func */
    {320U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH4_IN input func */
    {33U, 3U, 0U},
    /* INMUX settings for pad PORT143:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_6_DSPI_6_PCS0_IN input func */
    {307U, 3U, 4U},
    /* SRX_1_SENT_1_CH5_IN input func */
    {354U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH5_IN input func */
    {321U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH5_IN input func */
    {34U, 3U, 0U},
    /* CAN_HUB_CAN_8_RX_IN input func */
    {8U, 3U, 3U},
    /* INMUX settings for pad PORT144:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH6_IN input func */
    {355U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH6_IN input func */
    {322U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH6_IN input func */
    {35U, 3U, 0U},
    /* INMUX settings for pad PORT145:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SRX_1_SENT_1_CH7_IN input func */
    {356U, 3U, 4U},
    /* EMIOS_0_EMIOS_0_CH7_IN input func */
    {323U, 2U, 4U},
    /* EMIOS_1_EMIOS_1_CH7_IN input func */
    {36U, 3U, 0U}
};
static const Port_InMuxSettingType Port_SIUL2_5_aInMuxSettings[37] =
{
    /* INMUX settings for pad not available: */
    { NO_INPUTMUX_U16, 0U, 0U},
    /* INMUX settings for pad PORT147:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_5_EIRQ_0_IN input func */
    {467U, 2U, 5U},
    /* CAN_HUB_CAN_10_RX_IN input func */
    {10U, 2U, 3U},
    /* INMUX settings for pad PORT149:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_5_EIRQ_1_IN input func */
    {468U, 2U, 5U},
    /* CAN_HUB_CAN_11_RX_IN input func */
    {11U, 2U, 3U},
    /* SPI_8_DSPI_8_PCS0_IN input func */
    {449U, 4U, 5U},
    /* INMUX settings for pad PORT150:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_8_DSPI_8_SCK_IN input func */
    {450U, 2U, 5U},
    /* INMUX settings for pad PORT151:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_9_LIN_9_RX_IN input func */
    {466U, 2U, 5U},
    /* SIUL2_5_EIRQ_2_IN input func */
    {469U, 2U, 5U},
    /* CAN_HUB_CAN_1_RX_IN input func */
    {1U, 4U, 3U},
    /* INMUX settings for pad PORT152:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_8_DSPI_8_SIN_IN input func */
    {451U, 2U, 5U},
    /* INMUX settings for pad PORT153:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_10_LIN_10_RX_IN input func */
    {464U, 2U, 5U},
    /* SPI_8_DSPI_8_PCS0_IN input func */
    {449U, 2U, 5U},
    /* CANXL_0_CANXL_0_RX_IN input func */
    {462U, 2U, 5U},
    /* SIUL2_5_EIRQ_3_IN input func */
    {470U, 2U, 5U},
    /* CAN_HUB_CAN_22_RX_IN input func */
    {22U, 2U, 3U},
    /* INMUX settings for pad PORT155:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CANXL_1_CANXL_1_RX_IN input func */
    {463U, 2U, 5U},
    /* CAN_HUB_CAN_13_RX_IN input func */
    {13U, 2U, 3U},
    /* INMUX settings for pad PORT156:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CANXL_0_CANXL_0_RX_IN input func */
    {462U, 4U, 5U},
    /* INMUX settings for pad PORT157:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_9_DSPI_9_SCK_IN input func */
    {453U, 2U, 5U},
    /* INMUX settings for pad PORT158:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* LINFLEX_11_LIN_11_RX_IN input func */
    {465U, 2U, 5U},
    /* CAN_HUB_CAN_2_RX_IN input func */
    {2U, 4U, 3U},
    /* INMUX settings for pad PORT160:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SIUL2_5_EIRQ_4_IN input func */
    {471U, 2U, 5U},
    /* CAN_HUB_CAN_9_RX_IN input func */
    {9U, 2U, 3U},
    /* INMUX settings for pad PORT161:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_9_DSPI_9_SIN_IN input func */
    {454U, 2U, 5U},
    /* INMUX settings for pad PORT162:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_9_DSPI_9_PCS0_IN input func */
    {452U, 2U, 5U},
    /* SIUL2_5_EIRQ_5_IN input func */
    {472U, 2U, 5U},
    /* CANXL_0_CANXL_0_RX_IN input func */
    {462U, 3U, 5U},
    /* CAN_HUB_CAN_5_RX_IN input func */
    {5U, 3U, 3U},
    /* CAN_HUB_CAN_23_RX_IN input func */
    {23U, 2U, 3U},
    /* INMUX settings for pad PORT164:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_8_DSPI_8_SCK_IN input func */
    {450U, 3U, 5U},
    /* INMUX settings for pad PORT165:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_8_DSPI_8_SIN_IN input func */
    {451U, 3U, 5U},
    /* SIUL2_5_EIRQ_6_IN input func */
    {473U, 2U, 5U},
    /* CAN_HUB_CAN_1_RX_IN input func */
    {1U, 5U, 3U},
    /* INMUX settings for pad PORT166:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* SPI_8_DSPI_8_PCS0_IN input func */
    {449U, 3U, 5U},
    /* SIUL2_5_EIRQ_7_IN input func */
    {474U, 2U, 5U},
    /* INMUX settings for pad PORT167:  {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* CAN_HUB_CAN_2_RX_IN input func */
    {2U, 5U, 3U}
};
static const Port_InMuxSettingType Port_SIUL2_AE_aInMuxSettings[53] =
{
    /* INMUX settings for pad not available: */
    { NO_INPUTMUX_U16, 0U, 0U},
    /* INMUX settings for pad PORT0:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_0_IN input func */
    {25U, 2U, 6U},
    /* SIUL2_AE_EIRQ_0_IN input func */
    {1U, 2U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_0_IN input func */
    {3U, 3U, 6U},
    /* CTU_AE_1_CTU_AE_1_EXT_IN_0_IN input func */
    {16U, 2U, 6U},
    /* INMUX settings for pad PORT1:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_1_IN input func */
    {26U, 2U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_1_IN input func */
    {0U, 3U, 6U},
    /* SIUL2_AE_EIRQ_1_IN input func */
    {2U, 2U, 6U},
    /* INMUX settings for pad PORT2:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_2_IN input func */
    {27U, 2U, 6U},
    /* FLEXPWM_AE_1_PWM1_EXTSYNC_IN input func */
    {30U, 2U, 6U},
    /* SIUL2_AE_EIRQ_2_IN input func */
    {41U, 2U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_2_IN input func */
    {4U, 3U, 6U},
    /* INMUX settings for pad PORT3:    {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_3_IN input func */
    {28U, 2U, 6U},
    /* SIUL2_AE_EIRQ_3_IN input func */
    {42U, 2U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_3_IN input func */
    {5U, 3U, 6U},
    /* CTU_AE_2_CTU_AE_2_EXT_IN_0_IN input func */
    {17U, 2U, 6U},
    /* INMUX settings for pad PORT16:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_FAULT_0_IN input func */
    {18U, 2U, 6U},
    /* INMUX settings for pad PORT17:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_EXTSYNC_IN input func */
    {30U, 3U, 6U},
    /* FLEXPWM_AE_1_PWM1_FAULT_1_IN input func */
    {29U, 2U, 6U},
    /* INMUX settings for pad PORT18:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_0_IN input func */
    {10U, 2U, 6U},
    /* INMUX settings for pad PORT19:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_1_IN input func */
    {11U, 2U, 6U},
    /* INMUX settings for pad PORT20:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_2_IN input func */
    {12U, 2U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_0_IN input func */
    {3U, 2U, 6U},
    /* INMUX settings for pad PORT21:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_3_IN input func */
    {13U, 2U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_1_IN input func */
    {0U, 2U, 6U},
    /* INMUX settings for pad PORT22:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_3_IN input func */
    {28U, 3U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_2_IN input func */
    {4U, 2U, 6U},
    /* ETIMER_AE_1_0_ET1_0_CH_4_IN input func */
    {14U, 2U, 6U},
    /* INMUX settings for pad PORT23:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_2_IN input func */
    {27U, 3U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_3_IN input func */
    {5U, 2U, 6U},
    /* ETIMER_AE_1_0_ET1_0_CH_5_IN input func */
    {15U, 2U, 6U},
    /* INMUX settings for pad PORT24:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_1_IN input func */
    {26U, 3U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_4_IN input func */
    {35U, 2U, 6U},
    /* INMUX settings for pad PORT25:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_1_PWM1_X_0_IN input func */
    {25U, 3U, 6U},
    /* ETIMER_AE_1_1_ET1_1_CH_5_IN input func */
    {36U, 2U, 6U},
    /* INMUX settings for pad PORT34:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_2_PWM2_FAULT_0_IN input func */
    {37U, 2U, 6U},
    /* INMUX settings for pad PORT35:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_2_PWM2_FAULT_1_IN input func */
    {38U, 2U, 6U},
    /* INMUX settings for pad PORT36:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_0_IN input func */
    {19U, 2U, 6U},
    /* INMUX settings for pad PORT37:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_1_IN input func */
    {20U, 2U, 6U},
    /* INMUX settings for pad PORT38:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_2_IN input func */
    {21U, 2U, 6U},
    /* ETIMER_AE_2_1_ET2_1_CH_0_IN input func */
    {6U, 2U, 6U},
    /* INMUX settings for pad PORT39:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_3_IN input func */
    {22U, 2U, 6U},
    /* ETIMER_AE_2_1_ET2_1_CH_1_IN input func */
    {7U, 2U, 6U},
    /* INMUX settings for pad PORT40:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_2_PWM2_X_3_IN input func */
    {31U, 2U, 6U},
    /* ETIMER_AE_2_1_ET2_1_CH_2_IN input func */
    {8U, 2U, 6U},
    /* ETIMER_AE_2_0_ET2_0_CH_4_IN input func */
    {23U, 2U, 6U},
    /* INMUX settings for pad PORT41:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* FLEXPWM_AE_2_PWM2_X_2_IN input func */
    {32U, 2U, 6U},
    /* ETIMER_AE_2_1_ET2_1_CH_3_IN input func */
    {9U, 2U, 6U},
    /* ETIMER_AE_2_0_ET2_0_CH_5_IN input func */
    {24U, 2U, 6U},
    /* INMUX settings for pad PORT42:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_2_1_ET2_1_CH_4_IN input func */
    {39U, 2U, 6U},
    /* FLEXPWM_AE_2_PWM2_X_1_IN input func */
    {34U, 2U, 6U},
    /* INMUX settings for pad PORT43:   {IMCR reg, IMCR.SSS Val, IMCR SIUL2 Instance} */
    /* ETIMER_AE_2_1_ET2_1_CH_5_IN input func */
    {40U, 2U, 6U},
    /* FLEXPWM_AE_2_PWM2_X_0_IN input func */
    {33U, 2U, 6U}
};

/**
* @brief Array of elements storing information about INOUT functionalities on the first SIUL2 instance
*/
static const Port_InoutSettingType Port_SIUL2_0_aInoutMuxSettings[PORT_SIUL2_0_INOUT_TABLE_NUM_ENTRIES_U16] =
{
    /* Inout settings for pad PORT0 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_000_INOUT inout functionality */
    {0U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH6_INOUT inout functionality */
    {0U, 21U, 35U, 2U, 0U}, 
    /* Inout settings for pad PORT1 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_001_INOUT inout functionality */
    {1U, 17U, 65535U, 0U, 0U}, 
    /* I3C_0_I3C_0_SDA_3_INOUT inout functionality */
    {1U, 20U, 46U, 2U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH7_INOUT inout functionality */
    {1U, 21U, 36U, 2U, 0U}, 
    /* Inout settings for pad PORT2 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_002_INOUT inout functionality */
    {2U, 18U, 65535U, 0U, 0U}, 
    /* SPI_0_DSPI_0_PCS0_INOUT inout functionality */
    {2U, 19U, 3U, 2U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH1_INOUT inout functionality */
    {2U, 21U, 11U, 2U, 0U}, 
    /* Inout settings for pad PORT3 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_003_INOUT inout functionality */
    {3U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH2_INOUT inout functionality */
    {3U, 20U, 19U, 2U, 0U}, 
    /* Inout settings for pad PORT4 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_004_INOUT inout functionality */
    {4U, 18U, 65535U, 0U, 0U}, 
    /* I3C_0_I3C_0_SDA_2_INOUT inout functionality */
    {4U, 20U, 45U, 2U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH5_INOUT inout functionality */
    {4U, 21U, 34U, 2U, 0U}, 
    /* Inout settings for pad PORT5 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_005_INOUT inout functionality */
    {5U, 17U, 65535U, 0U, 0U}, 
    /* I3C_0_I3C_0_SDA_1_INOUT inout functionality */
    {5U, 20U, 44U, 2U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH0_INOUT inout functionality */
    {5U, 21U, 10U, 2U, 0U}, 
    /* Inout settings for pad PORT6 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_006_INOUT inout functionality */
    {6U, 18U, 65535U, 0U, 0U}, 
    /* SPI_0_DSPI_0_SCK_INOUT inout functionality */
    {6U, 20U, 4U, 2U, 0U}, 
    /* I3C_0_I3C_0_SDA_0_INOUT inout functionality */
    {6U, 21U, 43U, 2U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH3_INOUT inout functionality */
    {6U, 22U, 30U, 2U, 0U}, 
    /* Inout settings for pad PORT7 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_007_INOUT inout functionality */
    {7U, 18U, 65535U, 0U, 0U}, 
    /* I3C_0_I3C_0_SCL_INOUT inout functionality */
    {7U, 21U, 42U, 2U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH4_INOUT inout functionality */
    {7U, 22U, 33U, 2U, 0U}, 
    /* Inout settings for pad PORT8 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_008_INOUT inout functionality */
    {8U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT9 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_009_INOUT inout functionality */
    {9U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT10 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_010_INOUT inout functionality */
    {10U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT11 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_011_INOUT inout functionality */
    {11U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH16_INOUT inout functionality */
    {11U, 20U, 15U, 2U, 0U}, 
    /* Inout settings for pad PORT12 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_012_INOUT inout functionality */
    {12U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH23_INOUT inout functionality */
    {12U, 21U, 23U, 2U, 0U}, 
    /* Inout settings for pad PORT13 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_013_INOUT inout functionality */
    {13U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH22_INOUT inout functionality */
    {13U, 19U, 22U, 2U, 0U}, 
    /* Inout settings for pad PORT14 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_014_INOUT inout functionality */
    {14U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH31_INOUT inout functionality */
    {14U, 21U, 32U, 2U, 0U}, 
    /* Inout settings for pad PORT15 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_015_INOUT inout functionality */
    {15U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH30_INOUT inout functionality */
    {15U, 21U, 31U, 2U, 0U}, 
    /* Inout settings for pad PORT16 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_016_INOUT inout functionality */
    {16U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH29_INOUT inout functionality */
    {16U, 21U, 29U, 2U, 0U}, 
    /* Inout settings for pad PORT17 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_017_INOUT inout functionality */
    {17U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH28_INOUT inout functionality */
    {17U, 20U, 28U, 2U, 0U}, 
    /* Inout settings for pad PORT18 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_018_INOUT inout functionality */
    {18U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH27_INOUT inout functionality */
    {18U, 21U, 27U, 2U, 0U}, 
    /* SPI_1_DSPI_1_SCK_INOUT inout functionality */
    {18U, 22U, 7U, 2U, 0U}, 
    /* Inout settings for pad PORT19 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_019_INOUT inout functionality */
    {19U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH26_INOUT inout functionality */
    {19U, 21U, 26U, 2U, 0U}, 
    /* Inout settings for pad PORT20 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_020_INOUT inout functionality */
    {20U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH25_INOUT inout functionality */
    {20U, 20U, 25U, 2U, 0U}, 
    /* Inout settings for pad PORT21 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_021_INOUT inout functionality */
    {21U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH24_INOUT inout functionality */
    {21U, 20U, 24U, 2U, 0U}, 
    /* SPI_1_DSPI_1_PCS0_INOUT inout functionality */
    {21U, 22U, 6U, 2U, 0U}, 
    /* Inout settings for pad PORT22 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_022_INOUT inout functionality */
    {22U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH18_INOUT inout functionality */
    {22U, 21U, 17U, 2U, 0U}, 
    /* Inout settings for pad PORT23 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_023_INOUT inout functionality */
    {23U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH19_INOUT inout functionality */
    {23U, 20U, 18U, 2U, 0U}, 
    /* Inout settings for pad PORT24 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_024_INOUT inout functionality */
    {24U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH8_INOUT inout functionality */
    {24U, 20U, 37U, 2U, 0U}, 
    /* Inout settings for pad PORT25 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_025_INOUT inout functionality */
    {25U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH17_INOUT inout functionality */
    {25U, 20U, 16U, 2U, 0U}, 
    /* Inout settings for pad PORT26 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_026_INOUT inout functionality */
    {26U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH10_INOUT inout functionality */
    {26U, 20U, 12U, 2U, 0U}, 
    /* Inout settings for pad PORT27 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_027_INOUT inout functionality */
    {27U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH20_INOUT inout functionality */
    {27U, 20U, 20U, 2U, 0U}, 
    /* Inout settings for pad PORT28 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_028_INOUT inout functionality */
    {28U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH12_INOUT inout functionality */
    {28U, 20U, 13U, 2U, 0U}, 
    /* Inout settings for pad PORT29 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_029_INOUT inout functionality */
    {29U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH21_INOUT inout functionality */
    {29U, 19U, 21U, 2U, 0U}, 
    /* Inout settings for pad PORT30 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_030_INOUT inout functionality */
    {30U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_1_EMIOS_1_CH14_INOUT inout functionality */
    {30U, 19U, 14U, 2U, 0U}, 
    /* Inout settings for pad PORT172 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* JTAGC_TMS_INOUT inout functionality */
    {172U, 17U, 83U, 0U, 0U}
};

/**
* @brief Array of elements storing information about INOUT functionalities on the next SIUL2 instance
*/
static const Port_InoutSettingType Port_SIUL2_1_aInoutMuxSettings[PORT_SIUL2_1_INOUT_TABLE_NUM_ENTRIES_U16] =
{
    /* Inout settings for pad PORT31 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_031_INOUT inout functionality */
    {31U, 17U, 65535U, 0U, 0U}, 
    /* SPI_3_DSPI_3_SCK_INOUT inout functionality */
    {31U, 18U, 131U, 2U, 1U}, 
    /* LPI2C_1_I2C_1_SDA_INOUT inout functionality */
    {31U, 19U, 181U, 2U, 1U}, 
    /* Inout settings for pad PORT32 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_032_INOUT inout functionality */
    {32U, 17U, 65535U, 0U, 0U}, 
    /* LPI2C_1_I2C_1_SCL_INOUT inout functionality */
    {32U, 18U, 180U, 2U, 1U}, 
    /* Inout settings for pad PORT33 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_033_INOUT inout functionality */
    {33U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT34 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_034_INOUT inout functionality */
    {34U, 18U, 65535U, 0U, 0U}, 
    /* SPI_3_DSPI_3_PCS0_INOUT inout functionality */
    {34U, 19U, 130U, 2U, 1U}, 
    /* Inout settings for pad PORT35 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_035_INOUT inout functionality */
    {35U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT36 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_036_INOUT inout functionality */
    {36U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT37 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_037_INOUT inout functionality */
    {37U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT38 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_038_INOUT inout functionality */
    {38U, 17U, 65535U, 0U, 0U}, 
    /* MC_CGM_1_LFAST_1_EXT_REF_CLK_INOUT inout functionality */
    {38U, 19U, 208U, 2U, 1U}, 
    /* Inout settings for pad PORT39 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_039_INOUT inout functionality */
    {39U, 17U, 65535U, 0U, 0U}, 
    /* MC_CGM_1_LFAST_0_EXT_REF_CLK_INOUT inout functionality */
    {39U, 18U, 207U, 2U, 1U}, 
    /* Inout settings for pad PORT41 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_040_INOUT inout functionality */
    {41U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT42 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_041_INOUT inout functionality */
    {42U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT43 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_042_INOUT inout functionality */
    {43U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT44 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_043_INOUT inout functionality */
    {44U, 18U, 65535U, 0U, 0U}, 
    /* SPI_3_DSPI_3_SCK_INOUT inout functionality */
    {44U, 19U, 131U, 3U, 1U}, 
    /* Inout settings for pad PORT45 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_044_INOUT inout functionality */
    {45U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT46 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_045_INOUT inout functionality */
    {46U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT47 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_046_INOUT inout functionality */
    {47U, 20U, 65535U, 0U, 0U}, 
    /* SPI_3_DSPI_3_PCS0_INOUT inout functionality */
    {47U, 21U, 130U, 3U, 1U}, 
    /* Inout settings for pad PORT48 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_047_INOUT inout functionality */
    {48U, 20U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT49 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_048_INOUT inout functionality */
    {49U, 20U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT50 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_049_INOUT inout functionality */
    {50U, 19U, 65535U, 0U, 0U}, 
    /* SPI_4_DSPI_4_SCK_INOUT inout functionality */
    {50U, 21U, 134U, 2U, 1U}, 
    /* Inout settings for pad PORT51 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_050_INOUT inout functionality */
    {51U, 19U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT52 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_051_INOUT inout functionality */
    {52U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT53 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_052_INOUT inout functionality */
    {53U, 18U, 65535U, 0U, 0U}, 
    /* SPI_4_DSPI_4_PCS0_INOUT inout functionality */
    {53U, 19U, 133U, 2U, 1U}, 
    /* Inout settings for pad PORT54 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_053_INOUT inout functionality */
    {54U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT55 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_054_INOUT inout functionality */
    {55U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT56 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_055_INOUT inout functionality */
    {56U, 18U, 65535U, 0U, 0U}, 
    /* LPI2C_1_I2C_1_SCL_INOUT inout functionality */
    {56U, 19U, 180U, 3U, 1U}, 
    /* Inout settings for pad PORT57 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_056_INOUT inout functionality */
    {57U, 18U, 65535U, 0U, 0U}, 
    /* LPI2C_1_I2C_1_SDA_INOUT inout functionality */
    {57U, 19U, 181U, 3U, 1U}, 
    /* Inout settings for pad PORT58 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* NETC_ETH_MDC_INOUT inout functionality */
    {58U, 17U, 176U, 2U, 1U}, 
    /* GTM_GTM_057_INOUT inout functionality */
    {58U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT59 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* NETC_ETH_MDIO_INOUT inout functionality */
    {59U, 17U, 175U, 2U, 1U}, 
    /* GTM_GTM_058_INOUT inout functionality */
    {59U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT60 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_059_INOUT inout functionality */
    {60U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT61 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_060_INOUT inout functionality */
    {61U, 20U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT62 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_061_INOUT inout functionality */
    {62U, 20U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT63 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_062_INOUT inout functionality */
    {63U, 20U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT64 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_063_INOUT inout functionality */
    {64U, 19U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT65 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_064_INOUT inout functionality */
    {65U, 19U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT66 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_065_INOUT inout functionality */
    {66U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT67 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_066_INOUT inout functionality */
    {67U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT68 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_067_INOUT inout functionality */
    {68U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT69 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_068_INOUT inout functionality */
    {69U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT70 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_069_INOUT inout functionality */
    {70U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT71 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_070_INOUT inout functionality */
    {71U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT72 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_071_INOUT inout functionality */
    {72U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT73 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_072_INOUT inout functionality */
    {73U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT74 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_073_INOUT inout functionality */
    {74U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT75 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_074_INOUT inout functionality */
    {75U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT76 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_075_INOUT inout functionality */
    {76U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT77 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_076_INOUT inout functionality */
    {77U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT78 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_077_INOUT inout functionality */
    {78U, 17U, 65535U, 0U, 0U}, 
    /* SPI_4_DSPI_4_SCK_INOUT inout functionality */
    {78U, 18U, 134U, 3U, 1U}, 
    /* Inout settings for pad PORT79 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_078_INOUT inout functionality */
    {79U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT80 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_079_INOUT inout functionality */
    {80U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT81 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_080_INOUT inout functionality */
    {81U, 17U, 65535U, 0U, 0U}, 
    /* SPI_4_DSPI_4_PCS0_INOUT inout functionality */
    {81U, 18U, 133U, 3U, 1U}, 
    /* Inout settings for pad PORT82 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_081_INOUT inout functionality */
    {82U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT83 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_082_INOUT inout functionality */
    {83U, 17U, 65535U, 0U, 0U}, 
    /* LPI2C_1_I2C_1_SDA_INOUT inout functionality */
    {83U, 19U, 181U, 4U, 1U}, 
    /* Inout settings for pad PORT84 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_083_INOUT inout functionality */
    {84U, 17U, 65535U, 0U, 0U}, 
    /* LPI2C_1_I2C_1_SCL_INOUT inout functionality */
    {84U, 19U, 180U, 4U, 1U}, 
    /* Inout settings for pad PORT85 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_084_INOUT inout functionality */
    {85U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT86 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* SPI_2_DSPI_2_SCK_INOUT inout functionality */
    {86U, 17U, 128U, 2U, 1U}, 
    /* GTM_GTM_085_INOUT inout functionality */
    {86U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT87 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_086_INOUT inout functionality */
    {87U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT88 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_087_INOUT inout functionality */
    {88U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT89 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* SPI_2_DSPI_2_PCS0_INOUT inout functionality */
    {89U, 17U, 127U, 2U, 1U}, 
    /* GTM_GTM_088_INOUT inout functionality */
    {89U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT90 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_089_INOUT inout functionality */
    {90U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT91 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_090_INOUT inout functionality */
    {91U, 18U, 65535U, 0U, 0U}
};
static const Port_InoutSettingType Port_SIUL2_4_aInoutMuxSettings[PORT_SIUL2_4_INOUT_TABLE_NUM_ENTRIES_U16] =
{
    /* Inout settings for pad PORT92 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_091_INOUT inout functionality */
    {92U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT93 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_092_INOUT inout functionality */
    {93U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT94 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_1_INOUT inout functionality */
    {94U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_093_INOUT inout functionality */
    {94U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT95 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_5_INOUT inout functionality */
    {95U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_094_INOUT inout functionality */
    {95U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT96 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_7_INOUT inout functionality */
    {96U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_095_INOUT inout functionality */
    {96U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT97 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_3_INOUT inout functionality */
    {97U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_096_INOUT inout functionality */
    {97U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT98 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_097_INOUT inout functionality */
    {98U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT99 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_098_INOUT inout functionality */
    {99U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT100 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_0_INOUT inout functionality */
    {100U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_099_INOUT inout functionality */
    {100U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT101 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_4_INOUT inout functionality */
    {101U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_100_INOUT inout functionality */
    {101U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT102 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DQS_A_INOUT inout functionality */
    {102U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_101_INOUT inout functionality */
    {102U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT103 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_6_INOUT inout functionality */
    {103U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_102_INOUT inout functionality */
    {103U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT104 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_0_QSPI_0_DATA_A_2_INOUT inout functionality */
    {104U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_103_INOUT inout functionality */
    {104U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT105 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_104_INOUT inout functionality */
    {105U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT106 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_0_INOUT inout functionality */
    {106U, 17U, 65535U, 0U, 0U}, 
    /* USDHC_SD_0_CMD_INOUT inout functionality */
    {106U, 18U, 65535U, 0U, 0U}, 
    /* GTM_GTM_105_INOUT inout functionality */
    {106U, 19U, 65535U, 0U, 0U}, 
    /* SPI_6_DSPI_6_SCK_INOUT inout functionality */
    {106U, 21U, 305U, 2U, 4U}, 
    /* LPI2C_2_I2C_2_SCL_INOUT inout functionality */
    {106U, 22U, 311U, 2U, 4U}, 
    /* Inout settings for pad PORT107 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_3_INOUT inout functionality */
    {107U, 17U, 65535U, 0U, 0U}, 
    /* USDHC_SD_0_D_0_INOUT inout functionality */
    {107U, 18U, 65535U, 0U, 0U}, 
    /* GTM_GTM_106_INOUT inout functionality */
    {107U, 19U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT108 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* USDHC_SD_0_D_1_INOUT inout functionality */
    {108U, 18U, 65535U, 0U, 0U}, 
    /* LPI2C_2_I2C_2_SDA_INOUT inout functionality */
    {108U, 21U, 312U, 2U, 4U}, 
    /* GTM_GTM_107_INOUT inout functionality */
    {108U, 22U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT109 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_4_INOUT inout functionality */
    {109U, 17U, 65535U, 0U, 0U}, 
    /* USDHC_SD_0_D_2_INOUT inout functionality */
    {109U, 18U, 65535U, 0U, 0U}, 
    /* GTM_GTM_108_INOUT inout functionality */
    {109U, 19U, 65535U, 0U, 0U}, 
    /* SPI_6_DSPI_6_PCS0_INOUT inout functionality */
    {109U, 20U, 307U, 2U, 4U}, 
    /* Inout settings for pad PORT110 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_1_INOUT inout functionality */
    {110U, 17U, 65535U, 0U, 0U}, 
    /* USDHC_SD_0_D_3_INOUT inout functionality */
    {110U, 18U, 65535U, 0U, 0U}, 
    /* GTM_GTM_109_INOUT inout functionality */
    {110U, 20U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT111 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* USDHC_SD_0_CLK_INOUT inout functionality */
    {111U, 17U, 371U, 2U, 4U}, 
    /* GTM_GTM_110_INOUT inout functionality */
    {111U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH16_INOUT inout functionality */
    {111U, 21U, 328U, 2U, 4U}, 
    /* QUADSPI_1_QSPI_1_DQS_A_INOUT inout functionality */
    {111U, 22U, 295U, 2U, 4U}, 
    /* Inout settings for pad PORT112 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_7_INOUT inout functionality */
    {112U, 17U, 65535U, 0U, 0U}, 
    /* USDHC_SD_0_D_5_INOUT inout functionality */
    {112U, 18U, 65535U, 0U, 0U}, 
    /* GTM_GTM_111_INOUT inout functionality */
    {112U, 21U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH23_INOUT inout functionality */
    {112U, 22U, 335U, 2U, 4U}, 
    /* Inout settings for pad PORT113 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* USDHC_SD_0_D_4_INOUT inout functionality */
    {113U, 18U, 65535U, 0U, 0U}, 
    /* GTM_GTM_112_INOUT inout functionality */
    {113U, 19U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH21_INOUT inout functionality */
    {113U, 20U, 333U, 3U, 4U}, 
    /* Inout settings for pad PORT114 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* USDHC_SD_0_D_6_INOUT inout functionality */
    {114U, 18U, 65535U, 0U, 0U}, 
    /* SPI_5_DSPI_5_SCK_INOUT inout functionality */
    {114U, 19U, 302U, 2U, 4U}, 
    /* GTM_GTM_113_INOUT inout functionality */
    {114U, 21U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH20_INOUT inout functionality */
    {114U, 22U, 332U, 2U, 4U}, 
    /* Inout settings for pad PORT115 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_5_INOUT inout functionality */
    {115U, 17U, 65535U, 0U, 0U}, 
    /* USDHC_SD_0_D_7_INOUT inout functionality */
    {115U, 18U, 65535U, 0U, 0U}, 
    /* SPI_5_DSPI_5_PCS0_INOUT inout functionality */
    {115U, 19U, 304U, 2U, 4U}, 
    /* GTM_GTM_114_INOUT inout functionality */
    {115U, 20U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH19_INOUT inout functionality */
    {115U, 21U, 331U, 2U, 4U}, 
    /* Inout settings for pad PORT116 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_2_INOUT inout functionality */
    {116U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_115_INOUT inout functionality */
    {116U, 20U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH18_INOUT inout functionality */
    {116U, 22U, 330U, 2U, 4U}, 
    /* Inout settings for pad PORT117 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_A_6_INOUT inout functionality */
    {117U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_116_INOUT inout functionality */
    {117U, 20U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH17_INOUT inout functionality */
    {117U, 21U, 329U, 2U, 4U}, 
    /* Inout settings for pad PORT118 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_117_INOUT inout functionality */
    {118U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT119 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_118_INOUT inout functionality */
    {119U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT120 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_119_INOUT inout functionality */
    {120U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH31_INOUT inout functionality */
    {120U, 21U, 343U, 2U, 4U}, 
    /* Inout settings for pad PORT121 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_120_INOUT inout functionality */
    {121U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH30_INOUT inout functionality */
    {121U, 19U, 342U, 2U, 4U}, 
    /* Inout settings for pad PORT122 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_121_INOUT inout functionality */
    {122U, 17U, 65535U, 0U, 0U}, 
    /* LPI2C_2_I2C_2_SCL_INOUT inout functionality */
    {122U, 20U, 311U, 3U, 4U}, 
    /* Inout settings for pad PORT123 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_122_INOUT inout functionality */
    {123U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH29_INOUT inout functionality */
    {123U, 20U, 341U, 2U, 4U}, 
    /* LPI2C_2_I2C_2_SDA_INOUT inout functionality */
    {123U, 21U, 312U, 3U, 4U}, 
    /* Inout settings for pad PORT124 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_123_INOUT inout functionality */
    {124U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH28_INOUT inout functionality */
    {124U, 19U, 340U, 2U, 4U}, 
    /* Inout settings for pad PORT125 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_124_INOUT inout functionality */
    {125U, 19U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH27_INOUT inout functionality */
    {125U, 21U, 339U, 2U, 4U}, 
    /* SPI_7_DSPI_7_SCK_INOUT inout functionality */
    {125U, 22U, 308U, 2U, 4U}, 
    /* Inout settings for pad PORT126 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_125_INOUT inout functionality */
    {126U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH26_INOUT inout functionality */
    {126U, 19U, 338U, 2U, 4U}, 
    /* Inout settings for pad PORT127 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_126_INOUT inout functionality */
    {127U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH25_INOUT inout functionality */
    {127U, 20U, 337U, 2U, 4U}, 
    /* Inout settings for pad PORT128 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_127_INOUT inout functionality */
    {128U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH24_INOUT inout functionality */
    {128U, 18U, 336U, 2U, 4U}, 
    /* SPI_7_DSPI_7_PCS0_INOUT inout functionality */
    {128U, 20U, 310U, 2U, 4U}, 
    /* Inout settings for pad PORT129 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_128_INOUT inout functionality */
    {129U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH23_INOUT inout functionality */
    {129U, 18U, 335U, 3U, 4U}, 
    /* Inout settings for pad PORT130 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_129_INOUT inout functionality */
    {130U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH22_INOUT inout functionality */
    {130U, 18U, 334U, 2U, 4U}, 
    /* Inout settings for pad PORT131 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_130_INOUT inout functionality */
    {131U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH8_INOUT inout functionality */
    {131U, 18U, 324U, 2U, 4U}, 
    /* Inout settings for pad PORT132 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_131_INOUT inout functionality */
    {132U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH17_INOUT inout functionality */
    {132U, 18U, 329U, 3U, 4U}, 
    /* Inout settings for pad PORT133 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_132_INOUT inout functionality */
    {133U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH10_INOUT inout functionality */
    {133U, 19U, 325U, 2U, 4U}, 
    /* Inout settings for pad PORT134 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_133_INOUT inout functionality */
    {134U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH20_INOUT inout functionality */
    {134U, 19U, 332U, 3U, 4U}, 
    /* Inout settings for pad PORT135 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_134_INOUT inout functionality */
    {135U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH12_INOUT inout functionality */
    {135U, 19U, 326U, 2U, 4U}, 
    /* Inout settings for pad PORT136 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_135_INOUT inout functionality */
    {136U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH21_INOUT inout functionality */
    {136U, 19U, 333U, 2U, 4U}, 
    /* Inout settings for pad PORT137 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_136_INOUT inout functionality */
    {137U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH14_INOUT inout functionality */
    {137U, 19U, 327U, 2U, 4U}, 
    /* Inout settings for pad PORT138 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_137_INOUT inout functionality */
    {138U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH0_INOUT inout functionality */
    {138U, 19U, 316U, 2U, 4U}, 
    /* Inout settings for pad PORT139 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_138_INOUT inout functionality */
    {139U, 17U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH1_INOUT inout functionality */
    {139U, 18U, 317U, 2U, 4U}, 
    /* Inout settings for pad PORT140 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_B_3_INOUT inout functionality */
    {140U, 17U, 65535U, 0U, 0U}, 
    /* SPI_6_DSPI_6_SCK_INOUT inout functionality */
    {140U, 18U, 305U, 3U, 4U}, 
    /* GTM_GTM_139_INOUT inout functionality */
    {140U, 19U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH2_INOUT inout functionality */
    {140U, 20U, 318U, 2U, 4U}, 
    /* Inout settings for pad PORT141 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_B_2_INOUT inout functionality */
    {141U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_140_INOUT inout functionality */
    {141U, 18U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH3_INOUT inout functionality */
    {141U, 19U, 319U, 2U, 4U}, 
    /* Inout settings for pad PORT142 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_141_INOUT inout functionality */
    {142U, 19U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH4_INOUT inout functionality */
    {142U, 20U, 320U, 2U, 4U}, 
    /* Inout settings for pad PORT143 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* SPI_6_DSPI_6_PCS0_INOUT inout functionality */
    {143U, 18U, 307U, 3U, 4U}, 
    /* GTM_GTM_142_INOUT inout functionality */
    {143U, 19U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH5_INOUT inout functionality */
    {143U, 20U, 321U, 2U, 4U}, 
    /* Inout settings for pad PORT144 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_B_1_INOUT inout functionality */
    {144U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_143_INOUT inout functionality */
    {144U, 19U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH6_INOUT inout functionality */
    {144U, 20U, 322U, 2U, 4U}, 
    /* Inout settings for pad PORT145 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* QUADSPI_1_QSPI_1_DATA_B_0_INOUT inout functionality */
    {145U, 17U, 65535U, 0U, 0U}, 
    /* GTM_GTM_144_INOUT inout functionality */
    {145U, 19U, 65535U, 0U, 0U}, 
    /* EMIOS_0_EMIOS_0_CH7_INOUT inout functionality */
    {145U, 20U, 323U, 2U, 4U}
};
static const Port_InoutSettingType Port_SIUL2_5_aInoutMuxSettings[PORT_SIUL2_5_INOUT_TABLE_NUM_ENTRIES_U16] =
{
    /* Inout settings for pad PORT146 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_145_INOUT inout functionality */
    {146U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT147 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_146_INOUT inout functionality */
    {147U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT148 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_147_INOUT inout functionality */
    {148U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT149 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_148_INOUT inout functionality */
    {149U, 17U, 65535U, 0U, 0U}, 
    /* SPI_8_DSPI_8_PCS0_INOUT inout functionality */
    {149U, 19U, 449U, 4U, 5U}, 
    /* Inout settings for pad PORT150 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_149_INOUT inout functionality */
    {150U, 18U, 65535U, 0U, 0U}, 
    /* SPI_8_DSPI_8_SCK_INOUT inout functionality */
    {150U, 19U, 450U, 2U, 5U}, 
    /* Inout settings for pad PORT151 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_150_INOUT inout functionality */
    {151U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT152 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_151_INOUT inout functionality */
    {152U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT153 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_152_INOUT inout functionality */
    {153U, 17U, 65535U, 0U, 0U}, 
    /* SPI_8_DSPI_8_PCS0_INOUT inout functionality */
    {153U, 18U, 449U, 2U, 5U}, 
    /* Inout settings for pad PORT154 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_153_INOUT inout functionality */
    {154U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT155 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_154_INOUT inout functionality */
    {155U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT156 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_155_INOUT inout functionality */
    {156U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT157 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_156_INOUT inout functionality */
    {157U, 18U, 65535U, 0U, 0U}, 
    /* SPI_9_DSPI_9_SCK_INOUT inout functionality */
    {157U, 19U, 453U, 2U, 5U}, 
    /* Inout settings for pad PORT158 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_157_INOUT inout functionality */
    {158U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT159 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_158_INOUT inout functionality */
    {159U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT160 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_159_INOUT inout functionality */
    {160U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT161 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_160_INOUT inout functionality */
    {161U, 18U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT162 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_161_INOUT inout functionality */
    {162U, 17U, 65535U, 0U, 0U}, 
    /* SPI_9_DSPI_9_PCS0_INOUT inout functionality */
    {162U, 19U, 452U, 2U, 5U}, 
    /* Inout settings for pad PORT163 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_162_INOUT inout functionality */
    {163U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT164 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_163_INOUT inout functionality */
    {164U, 17U, 65535U, 0U, 0U}, 
    /* SPI_8_DSPI_8_SCK_INOUT inout functionality */
    {164U, 18U, 450U, 3U, 5U}, 
    /* Inout settings for pad PORT165 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_164_INOUT inout functionality */
    {165U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT166 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_165_INOUT inout functionality */
    {166U, 17U, 65535U, 0U, 0U}, 
    /* SPI_8_DSPI_8_PCS0_INOUT inout functionality */
    {166U, 18U, 449U, 3U, 5U}, 
    /* Inout settings for pad PORT167 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_166_INOUT inout functionality */
    {167U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT168 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_167_INOUT inout functionality */
    {168U, 17U, 65535U, 0U, 0U}, 
    /* Inout settings for pad PORT169 : {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* GTM_GTM_168_INOUT inout functionality */
    {169U, 17U, 65535U, 0U, 0U}
};
static const Port_InoutSettingType Port_SIUL2_AE_aInoutMuxSettings[PORT_SIUL2_AE_INOUT_TABLE_NUM_ENTRIES_U16] =
{
    /* Inout settings for pad PORT0 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_1_PWM1_X_0_INOUT inout functionality */
    {0U, 17U, 25U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_0_INOUT inout functionality */
    {0U, 18U, 3U, 3U, 6U}, 
    /* Inout settings for pad PORT1 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_1_PWM1_X_1_INOUT inout functionality */
    {1U, 17U, 26U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_1_INOUT inout functionality */
    {1U, 18U, 0U, 3U, 6U}, 
    /* Inout settings for pad PORT2 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_1_PWM1_X_2_INOUT inout functionality */
    {2U, 17U, 27U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_2_INOUT inout functionality */
    {2U, 18U, 4U, 3U, 6U}, 
    /* Inout settings for pad PORT3 :   {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_1_PWM1_X_3_INOUT inout functionality */
    {3U, 17U, 28U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_3_INOUT inout functionality */
    {3U, 18U, 5U, 3U, 6U}, 
    /* Inout settings for pad PORT18 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_0_INOUT inout functionality */
    {18U, 17U, 10U, 2U, 6U}, 
    /* Inout settings for pad PORT19 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_1_INOUT inout functionality */
    {19U, 17U, 11U, 2U, 6U}, 
    /* Inout settings for pad PORT20 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_2_INOUT inout functionality */
    {20U, 17U, 12U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_0_INOUT inout functionality */
    {20U, 18U, 3U, 2U, 6U}, 
    /* Inout settings for pad PORT21 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_3_INOUT inout functionality */
    {21U, 17U, 13U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_1_INOUT inout functionality */
    {21U, 18U, 0U, 2U, 6U}, 
    /* Inout settings for pad PORT22 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_4_INOUT inout functionality */
    {22U, 17U, 14U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_2_INOUT inout functionality */
    {22U, 18U, 4U, 2U, 6U}, 
    /* FLEXPWM_AE_1_PWM1_X_3_INOUT inout functionality */
    {22U, 19U, 28U, 3U, 6U}, 
    /* Inout settings for pad PORT23 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_1_0_ET1_0_CH_5_INOUT inout functionality */
    {23U, 17U, 15U, 2U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_3_INOUT inout functionality */
    {23U, 18U, 5U, 2U, 6U}, 
    /* FLEXPWM_AE_1_PWM1_X_2_INOUT inout functionality */
    {23U, 19U, 27U, 3U, 6U}, 
    /* Inout settings for pad PORT24 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_1_PWM1_X_1_INOUT inout functionality */
    {24U, 17U, 26U, 3U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_4_INOUT inout functionality */
    {24U, 18U, 35U, 2U, 6U}, 
    /* Inout settings for pad PORT25 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_1_PWM1_X_0_INOUT inout functionality */
    {25U, 17U, 25U, 3U, 6U}, 
    /* ETIMER_AE_1_1_ET1_1_CH_5_INOUT inout functionality */
    {25U, 18U, 36U, 2U, 6U}, 
    /* Inout settings for pad PORT36 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_0_INOUT inout functionality */
    {36U, 17U, 19U, 2U, 6U}, 
    /* Inout settings for pad PORT37 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_1_INOUT inout functionality */
    {37U, 17U, 20U, 2U, 6U}, 
    /* Inout settings for pad PORT38 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_2_INOUT inout functionality */
    {38U, 17U, 21U, 2U, 6U}, 
    /* ETIMER_AE_2_1_ET2_1_CH_0_INOUT inout functionality */
    {38U, 18U, 6U, 2U, 6U}, 
    /* Inout settings for pad PORT39 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_3_INOUT inout functionality */
    {39U, 17U, 22U, 2U, 6U}, 
    /* ETIMER_AE_2_1_ET2_1_CH_1_INOUT inout functionality */
    {39U, 18U, 7U, 2U, 6U}, 
    /* Inout settings for pad PORT40 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_4_INOUT inout functionality */
    {40U, 17U, 23U, 2U, 6U}, 
    /* ETIMER_AE_2_1_ET2_1_CH_2_INOUT inout functionality */
    {40U, 18U, 8U, 2U, 6U}, 
    /* FLEXPWM_AE_2_PWM2_X_3_INOUT inout functionality */
    {40U, 19U, 31U, 2U, 6U}, 
    /* Inout settings for pad PORT41 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* ETIMER_AE_2_0_ET2_0_CH_5_INOUT inout functionality */
    {41U, 17U, 24U, 2U, 6U}, 
    /* ETIMER_AE_2_1_ET2_1_CH_3_INOUT inout functionality */
    {41U, 18U, 9U, 2U, 6U}, 
    /* FLEXPWM_AE_2_PWM2_X_2_INOUT inout functionality */
    {41U, 19U, 32U, 2U, 6U}, 
    /* Inout settings for pad PORT42 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_2_PWM2_X_1_INOUT inout functionality */
    {42U, 17U, 34U, 2U, 6U}, 
    /* ETIMER_AE_2_1_ET2_1_CH_4_INOUT inout functionality */
    {42U, 18U, 39U, 2U, 6U}, 
    /* Inout settings for pad PORT43 :  {Mscr Id, AltFunc, Imcr Id, Imcr value, Imcr Siul Instance} */
    /* FLEXPWM_AE_2_PWM2_X_0_INOUT inout functionality */
    {43U, 17U, 33U, 2U, 6U}, 
    /* ETIMER_AE_2_1_ET2_1_CH_5_INOUT inout functionality */
    {43U, 18U, 40U, 2U, 6U}
};

#define PORT_STOP_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

#endif /* PORT_SET_PIN_MODE_API */

/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/
#if (STD_ON == PORT_SET_PIN_MODE_API)

#define PORT_START_SEC_CONST_16
#include "Port_MemMap.h"

/**
* @brief Array of values storing the length of tables with INOUT functionality information on each of the SIUL2 instance on the platform
*/
const uint16 Port_au16NumInoutMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    PORT_SIUL2_0_INOUT_TABLE_NUM_ENTRIES_U16,
    PORT_SIUL2_1_INOUT_TABLE_NUM_ENTRIES_U16,
    PORT_SIUL2_3_INOUT_TABLE_NUM_ENTRIES_U16,
    PORT_SIUL2_4_INOUT_TABLE_NUM_ENTRIES_U16,
    PORT_SIUL2_5_INOUT_TABLE_NUM_ENTRIES_U16,
    PORT_SIUL2_AE_INOUT_TABLE_NUM_ENTRIES_U16
};

#define PORT_STOP_SEC_CONST_16
#include "Port_MemMap.h"

#define PORT_START_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

/**
* @brief Array of pointers to the tables storing information about pin availability on each of the SIUL2 instance on the platform
*/
const Port_PinModeAvailabilityArrayType * const Port_apSiul2InstancePinModeAvailability[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    &Port_SIUL2_0_au16PinModeAvailability,
    &Port_SIUL2_1_au16PinModeAvailability,
    &Port_SIUL2_3_au16PinModeAvailability,
    &Port_SIUL2_4_au16PinModeAvailability,
    &Port_SIUL2_5_au16PinModeAvailability,
    &Port_SIUL2_AE_au16PinModeAvailability
};

/**
* @brief Array of pointers to the tables storing information about IN functionality on each of the SIUL2 instance on the platform
*/
const Port_InMuxSettingType * const Port_apInMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    Port_SIUL2_0_aInMuxSettings,
    Port_SIUL2_1_aInMuxSettings,
    Port_SIUL2_3_aInMuxSettings,
    Port_SIUL2_4_aInMuxSettings,
    Port_SIUL2_5_aInMuxSettings,
    Port_SIUL2_AE_aInMuxSettings
};

/**
* @brief Array of pointers to the tables storing information about indexes in the IN functionality tables on each of the SIUL2 instance on the platform
*/
const uint16 * const Port_apInMuxSettingsIndex[PORT_NUM_SIUL2_INSTANCES_U8] =
{
    Port_SIUL2_0_au16InMuxSettingsIndex,
    Port_SIUL2_1_au16InMuxSettingsIndex,
    Port_SIUL2_3_au16InMuxSettingsIndex,
    Port_SIUL2_4_au16InMuxSettingsIndex,
    Port_SIUL2_5_au16InMuxSettingsIndex,
    Port_SIUL2_AE_au16InMuxSettingsIndex
};

/**
* @brief Array of pointers to the tables storing information about INOUT functionality on each of the SIUL2 instance on the platform
*/
const Port_InoutSettingType * const Port_apInoutMuxSettings[PORT_NUM_SIUL2_INSTANCES_U8 - 1] =
{
    Port_SIUL2_0_aInoutMuxSettings,
    Port_SIUL2_1_aInoutMuxSettings,
    Port_SIUL2_4_aInoutMuxSettings,
    Port_SIUL2_5_aInoutMuxSettings,
    Port_SIUL2_AE_aInoutMuxSettings
};

#define PORT_STOP_SEC_CONST_UNSPECIFIED
#include "Port_MemMap.h"

#endif /* PORT_SET_PIN_MODE_API */

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/

/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/

/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/

/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

/* End of File */
