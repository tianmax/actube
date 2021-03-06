#ifndef __CAPWAP_ITEMS_H
#define __CAPWAP_ITEMS_H

#include "item.h"

/*
	CW_ITEM_NONE=0,
	CW_ITEM_IDLE_TIMEOUT,
	CW_ITEM_DISCOVERY_TYPE,
	CW_ITEM_WTP_NAME,
	CW_ITEM_WTP_BOARD_VENDOR,
	CW_ITEM_WTP_BOARD_MODELNO,
	CW_ITEM_WTP_BOARD_MACADDRESS,
	CW_ITEM_WTP_BOARD_ID,
	CW_ITEM_WTP_BOARD_REVISION,
	CW_ITEM_WTP_BOARD_SERIALNO,
	CW_ITEM_WTP_MAC_TYPE,
	CW_ITEM_WTP_FRAME_TUNNEL_MODE,
	CW_ITEM_WTP_RADIOS_IN_USE,
	CW_ITEM_WTP_MAX_RADIOS,
	CW_ITEM_WTP_HARDWARE_VENDOR,
	CW_ITEM_WTP_HARDWARE_VERSION,
	CW_ITEM_WTP_SOFTWARE_VENDOR,
	CW_ITEM_WTP_SOFTWARE_VERSION,
	CW_ITEM_WTP_BOOTLOADER_VENDOR,
	CW_ITEM_WTP_BOOTLOADER_VERSION,
	CW_ITEM_WTP_OTHERSOFTWARE_VENDOR,
	CW_ITEM_WTP_OTHERSOFTWARE_VERSION,
	CW_ITEM_WTP_BOARD_DATA,
	CW_ITEM_WTP_DESCRIPTOR,
	CW_ITEM_CAPWAP_TIMERS,
	CW_ITEM_RADIO_ADMINISTRATIVE_STATE,

	CW_ITEM_AC_NAME,
	CW_ITEM_AC_DESCRIPTOR,
	CW_ITEM_RESULT_CODE,
	CW_ITEM_AC_STATUS,

	CW_ITEM_AC_HARDWARE_VERSION,
	CW_ITEM_AC_SOFTWARE_VERSION,

	CW_ITEM_AC_IP_LIST,
	CW_ITEM_CAPWAP_CONTROL_IP_ADDRESS_LIST,
	CW_ITEM_CAPWAP_LOCAL_IP_ADDRESS,

	CW_ITEM_LOCATION_DATA,
	CW_ITEM_SESSION_ID,
	
	CW_ITEM_AC_TIMESTAMP,
	CW_ITEM_STATISTICS_TIMER,
	CW_ITEM_WTP_REBOOT_STATISTICS,
	CW_ITEM_IMAGE_IDENTIFIER,
	CW_ITEM_AC_HASH_VALUE,
	
	CW_ITEM_AC_NAME_WITH_PRIORITY,
	CW_ITEM_MAXIMUM_MESSAGE_LENGTH,


	CW_ITEM_WTP_GROUP_NAME,
	

	CW_ITEM_AC_IMAGE_DIR,	
	CW_ITEM_IMAGE_FILENAME,
	CW_ITEM_DISCOVERIES,
	
	CW_ITEM_IMAGE_FILEHANDLE,	

	CW_ITEM_RADIO_CFG,
	CW_ITEM_AP_MODE_AND_TYPE,

	CW_ITEM_CISCO_BOARD_DATA_OPTIONS,
	CW_ITEM_RADIOS,
	CW_ITEM_RADIO_OPER_STATE,
	

*/

extern const char CW_ITEM_IDLE_TIMEOUT[];
extern const char CW_ITEM_DISCOVERY_TYPE[];
extern const char CW_ITEM_WTP_NAME[];

/*
extern const char CW_ITEM_WTP_BOARD_VENDOR,
extern const char CW_ITEM_WTP_BOARD_MODELNO,
extern const char CW_ITEM_WTP_BOARD_MACADDRESS,
extern const char CW_ITEM_WTP_BOARD_ID,
extern const char CW_ITEM_WTP_BOARD_REVISION,
extern const char CW_ITEM_WTP_BOARD_SERIALNO,
*/
extern const char CW_ITEM_WTP_MAC_TYPE[];
extern const char CW_ITEM_WTP_FRAME_TUNNEL_MODE[];
/*
extern const char CW_ITEM_WTP_RADIOS_IN_USE=
extern const char CW_ITEM_WTP_MAX_RADIOS,
*/
/*
extern const char CW_ITEM_WTP_HARDWARE_VENDOR=
extern const char CW_ITEM_WTP_HARDWARE_VERSION="
*/
/*
extern const char CW_ITEM_WTP_SOFTWARE_VENDOR,
extern const char CW_ITEM_WTP_SOFTWARE_VERSION,
extern const char CW_ITEM_WTP_BOOTLOADER_VENDOR,
extern const char CW_ITEM_WTP_BOOTLOADER_VERSION,
extern const char CW_ITEM_WTP_OTHERSOFTWARE_VENDOR,
extern const char CW_ITEM_WTP_OTHERSOFTWARE_VERSION,
*/
extern const char CW_ITEM_WTP_BOARD_DATA[];
extern const char CW_ITEM_WTP_DESCRIPTOR[];
extern const char CW_ITEM_CAPWAP_TIMERS[];
extern const char CW_ITEM_RADIO_ADMINISTRATIVE_STATE[];

extern const char CW_ITEM_AC_NAME[];
extern const char CW_ITEM_AC_DESCRIPTOR[];
extern const char CW_ITEM_RESULT_CODE[];
extern const char CW_ITEM_AC_STATUS[];

extern const char CW_ITEM_AC_HARDWARE_VERSION[];
extern const char CW_ITEM_AC_SOFTWARE_VERSION[];

extern const char CW_ITEM_AC_IP_LIST[];
extern const char CW_ITEM_CAPWAP_CONTROL_IP_ADDRESS_LIST[];
extern const char CW_ITEM_CAPWAP_LOCAL_IP_ADDRESS[];

extern const char CW_ITEM_LOCATION_DATA[];
extern const char CW_ITEM_SESSION_ID[];
	
extern const char CW_ITEM_AC_TIMESTAMP[];
extern const char CW_ITEM_STATISTICS_TIMER[];
extern const char CW_ITEM_WTP_REBOOT_STATISTICS[];
extern const char CW_ITEM_IMAGE_IDENTIFIER[];
extern const char CW_ITEM_AC_HASH_VALUE[];
	
extern const char CW_ITEM_AC_NAME_WITH_PRIORITY[];
extern const char CW_ITEM_MAXIMUM_MESSAGE_LENGTH[];


	/* CIPWAP and Cisco */
extern const char CW_ITEM_WTP_GROUP_NAME[];
	

	/* Other Items */
extern const char CW_ITEM_AC_IMAGE_DIR[];		/* Path where WTP images are stored */
extern const char CW_ITEM_IMAGE_FILENAME[];		/* Full path of image filename */
extern const char CW_ITEM_DISCOVERIES[];
	
	/** FILE handle for uploading and downloading images  */
extern const char CW_ITEM_IMAGE_FILEHANDLE[];

extern const char CW_ITEM_RADIO_CFG[];
extern const char CW_ITEM_AP_MODE_AND_TYPE[];

extern const char CW_ITEM_CISCO_BOARD_DATA_OPTIONS[];
extern const char CW_ITEM_RADIOS[];
extern const char CW_ITEM_RADIO_OPER_STATE[];
	

extern const char CW_ITEM_WTP_BOARD_VENDOR[];
extern const char CW_ITEM_WTP_BOARD_MODELNO[];
extern const char CW_ITEM_WTP_BOARD_MACADDRESS[];
extern const char CW_ITEM_WTP_BOARD_ID[];
extern const char CW_ITEM_WTP_BOARD_REVISION[];
extern const char CW_ITEM_WTP_BOARD_SERIALNO[];

extern const char CW_ITEM_WTP_SOFTWARE_VERSION[];
extern const char CW_ITEM_WTP_HARDWARE_VERSION[];

extern const char CW_ITEM_WTP_BOOTLOADER_VERSION[];

extern const char CW_ITEM_WTP_RADIOS_IN_USE[];
extern const char CW_ITEM_WTP_MAX_RADIOS[];
extern const char CW_ITEM_RADIO_INFOS[];





extern struct cw_itemdef capwap_itemdefs[];

#endif
