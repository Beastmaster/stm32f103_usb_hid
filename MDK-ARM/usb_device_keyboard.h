#ifndef __usb_device_keyboard_H
#define __usb_device_keyboard_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx.h"
#include "stm32f1xx_hal.h"
#include "usbd_def.h"

extern USBD_HandleTypeDef hUsbDeviceFS;

/* USB_Device init function */	
void MX_USB_DEVICE_Keyboard_Init(void);

#ifdef __cplusplus
}
#endif
#endif /*__usb_device_H */
