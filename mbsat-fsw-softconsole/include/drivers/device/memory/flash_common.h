#ifndef FLASH_COMMON_H
#define FLASH_COMMON_H
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// MBSat-1
//
// Repository:
//	Github: https://github.com/joehowarth17/ManitobaSat-Flight-Software
//
// File Description:
//  Common interface for external flash drivers.
//
// History
// 2020-03-30 by Joseph Howarth
// - Created.
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// INCLUDES
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <stdint.h>

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// ENUMERATIONS AND ENUMERATION TYPEDEFS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef enum{

	DATA_FLASH,
	PROGRAM_FLASH,
	NUM_FLASH_DEVICES
} FlashDevicesIndex_t;

typedef enum{

	FLASH_OK,
	FLASH_BUSY,
	FLASH_ERROR,
	FLASH_INVALID_ID,
	FLASH_INVALID_ADDRESS,
	FLASH_WRITE_ERROR,
	FLASH_ERASE_ERROR,
	FLASH_ERROR_ADRESSING_MODE,
    FLASH_ERROR_ECC

} FlashStatus_t;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// STRUCTS AND STRUCT TYPEDEFS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
typedef struct FlashDev{

	void * driver;
    uint32_t  device_size;
    uint32_t  page_size;
    uint32_t  erase_size;
    uint8_t id;

} FlashDev_t;

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// GLOBALS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
extern FlashDev_t *flash_devices[NUM_FLASH_DEVICES];

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//-------------------------------------------------------------------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// Description:
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
FlashStatus_t flash_device_init(FlashDev_t *device);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// Description:
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
FlashStatus_t flash_write(FlashDev_t *device,uint32_t address, uint8_t *wr_buffer,uint32_t wr_size);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// Description:
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
FlashStatus_t flash_read(FlashDev_t *device, uint32_t address, uint8_t *rd_buffer,uint32_t rd_size);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// Description:
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
FlashStatus_t flash_erase(FlashDev_t *device, uint32_t address);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// Description:
//
//-------------------------------------------------------------------------------------------------------------------------------------------------------------
FlashStatus_t flash_erase_device(FlashDev_t *device);


#endif
