/*
    ChibiOS - Copyright (C) 2006..2016 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef USBCFG_H
#define USBCFG_H

extern const USBConfig usbcfg1;
extern const SerialUSBConfig serusbcfg;
extern SerialUSBDriver SDU1;

#define USBD1_DATA_AVAILABLE_EP         2
#define USBD1_DATA_REQUEST_EP           2
#define USBD1_INTERRUPT_REQUEST_EP      3

#define USBD_VID 0x0483
#define USBD_PID 0x5740
#define USB_MSD_EP_SIZE 64

#endif  /* USBCFG_H */

/** @} */
