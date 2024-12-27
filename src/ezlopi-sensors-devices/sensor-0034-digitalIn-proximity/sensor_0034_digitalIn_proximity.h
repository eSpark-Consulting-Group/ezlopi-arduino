#ifndef _SENSOR_0034_DIGITALIN_PROXIMITY_H_
#define _SENSOR_0034_DIGITALIN_PROXIMITY_H_

#include "esp_err.h"
#include "driver/gpio.h"
#include "ezlopi-cloud/ezlopi-cloud-items/ezlopi_cloud_items.h"
#include "ezlopi-util/ezlopi-util-trace/ezlopi_util_trace.h"
#include "ezlopi-components/cjext/cjext.h"

#include "ezlopi-core/ezlopi-core-actions/ezlopi_core_actions.h"
#include "ezlopi-core/ezlopi-core-devices/ezlopi_core_devices.h"
#include "ezlopi-core/ezlopi-core-devices/ezlopi_core_devices_list.h"
#include "ezlopi-core/ezlopi-core-devices/ezlopi_core_device_value_updated.h"
#include "ezlopi-core/ezlopi-core-errors/ezlopi_core_errors.h"

#include "ezlopi-cloud/ezlopi-cloud-constants/ezlopi_cloud_constants.h"

ezlopi_error_t sensor_0034_digitalIn_proximity(e_ezlopi_actions_t action, l_ezlopi_item_t* item, void* args, void* user_arg);

#endif // _SENSOR_0034_DIGITALIN_PROXIMITY_H_
