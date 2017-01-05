


#include "usb_device_keyboard.h"
#include "usbd_core.h"
#include "usbd_desc.h"
#include "usbd_hid2.h"

/* USB Device Core handle declaration */
USBD_HandleTypeDef hUsbDeviceFS_Keyboard;
extern USBD_ClassTypeDef  USBD_HID_Keyboard;

/* init function */				        
void MX_USB_DEVICE_Keyboard_Init(void)
{
  /* Init Device Library,Add Supported Class and Start the library*/
  USBD_Init(&hUsbDeviceFS_Keyboard, &FS_Desc, DEVICE_FS);

  USBD_RegisterClass(&hUsbDeviceFS_Keyboard, &USBD_HID_Keyboard);

  USBD_Start(&hUsbDeviceFS_Keyboard);

}









