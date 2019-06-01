#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "SAMD21E15B"
#define PRODUCT_NAME "SAMD21E15B"
#define VOLUME_LABEL "SAMD21E15B"
#define INDEX_URL "http://microchip.com"
#define BOARD_ID "SAMD21E15B"

#define USB_VID 0x239A
#define USB_PID 0x001E

// Prevents compilation sanity check eror. Doesn't actually seem to be used anywhere in code
#define FLASH_NUM_ROWS 128

#endif
