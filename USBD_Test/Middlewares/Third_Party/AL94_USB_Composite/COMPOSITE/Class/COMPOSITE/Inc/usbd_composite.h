/**
  ******************************************************************************
  * @file    usbd_composite.h
  * @author  MCD Application Team
  * @brief   Header file for the usbd_composite.c file.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2015 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                      www.st.com/SLA0044
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USB_COMPOSITE_H
#define __USB_COMPOSITE_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include  "usbd_ioreq.h"

/** @addtogroup STM32_USB_DEVICE_LIBRARY
  * @{
  */

/** @defgroup USBD_COMPOSITE
  * @brief This file is the header file for usbd_composite.c
  * @{
  */


/** @defgroup USBD_COMPOSITE_Exported_Defines
  * @{
  */

#define USBD_USE_CDC_ACM                                            0
#define USBD_CDC_ACM_COUNT                                          NUMBER_OF_CDC
#define USBD_USE_CDC_RNDIS                                          0
#define USBD_USE_CDC_ECM                                            1
#define USBD_USE_HID_MOUSE                                          0
#define USBD_USE_HID_KEYBOARD                                       0
#define USBD_USE_HID_CUSTOM                                         0
#define USBD_USE_UAC_MIC                                            0
#define USBD_USE_UAC_SPKR                                           0
#define USBD_USE_UVC                                                0
#define USBD_USE_MSC                                                0
#define USBD_USE_DFU                                                0
#define USBD_USE_PRNTR                                              0

#if(USBD_USE_CDC_ACM == 1)
#include "usbd_cdc_acm_if.h"
#endif
#if(USBD_USE_CDC_RNDIS == 1)
#include "usbd_cdc_rndis_if.h"
#endif
#if(USBD_USE_CDC_ECM == 1)
#include "usbd_cdc_ecm_if.h"
#endif
#if(USBD_USE_HID_MOUSE == 1)
#include "usbd_hid_mouse.h"
#endif
#if(USBD_USE_HID_KEYBOARD == 1)
#include "usbd_hid_keyboard.h"
#endif
#if(USBD_USE_HID_CUSTOM == 1)
#include "usbd_hid_custom_if.h"
#endif
#if(USBD_USE_UAC_MIC == 1)
#include "usbd_audio_mic_if.h"
#endif
#if(USBD_USE_UAC_SPKR == 1)
#include "usbd_audio_spkr_if.h"
#endif
#if(USBD_USE_UVC == 1)
#include "usbd_video_if.h"
#endif
#if(USBD_USE_MSC == 1)
#include "usbd_msc_if.h"
#endif
#if(USBD_USE_DFU == 1)
#include "usbd_dfu_if.h"
#endif
#if(USBD_USE_PRNTR == 1)
#include "usbd_printer_if.h"
#endif

/**
  * @}
  */


/** @defgroup USBD_COMPOSITE_Exported_TypesDefinitions
  * @{
  */

/**
  * @}
  */



/** @defgroup USBD_COMPOSITE_Exported_Macros
  * @{
  */

/**
  * @}
  */

/** @defgroup USBD_COMPOSITE_Exported_Variables
  * @{
  */

extern USBD_ClassTypeDef USBD_COMPOSITE;
/**
  * @}
  */

/** @defgroup USB_CORE_Exported_Functions
  * @{
  */
void USBD_COMPOSITE_Mount_Class(void);
/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif  /* __USB_COMPOSITE_H */
/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
