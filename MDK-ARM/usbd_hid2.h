


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USB_HID2_H
#define __USB_HID2_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include  "usbd_ioreq.h"
#include "usbd_hid.h"

#define HID_KEYBOARD_REPORT_DESC_SIZE    63

/* Key value defnination  */
static uint8_t chars[] = {
	0x00, //reserved
	0x01, //ErrorRollOver9
	0x02, //postfAIL
	0x03, //ErrorUndefined
	0x04, // a & A
	0x05, // b & B
	0x06, // c
	0x07, // d
	0x08, // e
	0x09, // f
	0x0a, // g
	0x0b, // h
	0x0c, // i
	0x0d, // j
	0x0e, // k
	0x0f, // l
	0x10, // m
	0x11, // n
	0x12, // o
	0x13, // p
	0x14, // q
	0x15, // r
	0x16, // s
	0x17, // t
	0x18, // u
	0x19, // v
	0x1a, // w
	0x1b, // x
	0x1c, // y
	0x1d  // z
};
// tobe continued....

#ifdef __cplusplus
}
#endif

#endif  /* __USB_HID_H */




