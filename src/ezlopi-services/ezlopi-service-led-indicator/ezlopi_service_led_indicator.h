

#ifndef _EZLOPI_SERVICE_LED_INDICATOR_H_
#define _EZLOPI_SERVICE_LED_INDICATOR_H_

#include "ezlopi-user-config/EZLOPI_USER_CONFIG.h"

/*******************************************************************************
 *                          C++ Declaration Wrapper
 *******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif

#ifdef CONFIG_EZPI_ENABLE_LED_INDICATOR
typedef enum {
    PRIORITY_POWER = 0,
    PRIORITY_WIFI,
    PRIORITY_INTERNET,
    PRIORITY_CLOUD,
    PRIORITY_MAX,
}e_indicator_led_priority_t;

int ezlopi_service_led_indicator_init();

#endif //CONFIG_EZPI_ENABLE_LED_INDICATOR

#ifdef __cplusplus
}
#endif

#endif // _EZLOPI_SERVICE_LED_INDICATOR_H_
