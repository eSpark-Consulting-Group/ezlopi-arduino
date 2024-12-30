/**
 * @file    ezlopi.h
 * @brief   perform some function on data
 * @author  Abeer Ul Haq
 * @version 0.1
 * @date    1st January 2024
 */
/* ===========================================================================
** Copyright (C) 2022 Ezlo Innovation Inc
**
** Under EZLO AVAILABLE SOURCE LICENSE (EASL) AGREEMENT
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are met:
**
** 1. Redistributions of source code must retain the above copyright notice,
**    this list of conditions and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 3. Neither the name of the copyright holder nor the names of its
**    contributors may be used to endorse or promote products derived from
**    this software without specific prior written permission.
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
** AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
** IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
** ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
** LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
** CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
** SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
** INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
** CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
** ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
** POSSIBILITY OF SUCH DAMAGE.
** ===========================================================================
*/

#ifndef __EZLOPI_H__
#define __EZLOPI_H__

/*******************************************************************************
 *                          Include Files
 *******************************************************************************/
/**
 * Include Sequence
 * 1. C standard libraries eg. stdint, string etc.
 * 2. Third party component eg. cJSON, freeRTOS etc etc
 * 3. ESP-IDF specific eg. driver/gpio, esp_log etc.
 * 4. EzloPi HAL specific eg ezlopi_hal_i2c
 * 5. EzloPi core specific eg. ezlopi_core_ble
 * 6. EzloPi cloud specific eg. ezlopi_cloud_items
 * 7. EzloPi Service specific eg ezlopi_service_ble
 * 8. EzloPi Sensors and Device Specific eg. ezlopi_device_0001_digitalout_generic
 */
#include <Arduino.h>
#include "BLEUUID.h"
#include "ezlopi-util/ezlopi-util-trace/ezlopi_util_trace.h"

#include "ezlopi-core/ezlopi-core-log/ezlopi_core_log.h"
#include "ezlopi-core/ezlopi-core-wifi/ezlopi_core_wifi.h"
#include "ezlopi-core/ezlopi-core-reset/ezlopi_core_reset.h"
#include "ezlopi-core/ezlopi-core-ezlopi/ezlopi_core_ezlopi.h"
#include "ezlopi-core/ezlopi-core-ble/ezlopi_core_ble_config.h"
#include "ezlopi-core/ezlopi-core-processes/ezlopi_core_processes.h"
#include "ezlopi-core/ezlopi-core-factory-info/ezlopi_core_factory_info.h"
#include "ezlopi-core/ezlopi-core-setting-commands/ezlopi_core_setting_commands.h"

#include "ezlopi-services/ezlopi-service-ota/ezlopi_service_ota.h"
#include "ezlopi-services/ezlopi-service-ble/ezlopi_service_ble.h"
#include "ezlopi-services/ezlopi-service-otel/ezlopi_service_otel.h"
#include "ezlopi-services/ezlopi-service-uart/ezlopi_service_uart.h"
#include "ezlopi-services/ezlopi-service-loop/ezlopi_service_loop.h"
#include "ezlopi-services/ezlopi-service-modes/ezlopi_service_modes.h"
#include "ezlopi-services/ezlopi-service-meshbot/ezlopi_service_meshbot.h"
#include "ezlopi-services/ezlopi-service-gpioisr/ezlopi_service_gpioisr.h"
#include "ezlopi-services/ezlopi-service-webprov/ezlopi_service_webprov.h"
#include "ezlopi-services/ezlopi-service-ws-server/ezlopi_service_ws_server.h"
#include "ezlopi-services/ezlopi-service-broadcast/ezlopi_service_broadcast.h"
#include "ezlopi-services/ezlopi-service-led-indicator/ezlopi_service_led_indicator.h"
#include "ezlopi-services/ezlopi-service-system-temperature-sensor/ezlopi_service_system_temperature_sensor.h"

#include "ezlopi-user-config/EZLOPI_USER_CONFIG.h"

/*******************************************************************************
 *                          C++ Declaration Wrapper
 *******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif

    /*******************************************************************************
     *                          Type & Macro Declarations
     *******************************************************************************/

    /*******************************************************************************
     *                          Extern Data Declarations
     *******************************************************************************/

    /*******************************************************************************
     *                          Extern Function Prototypes
     *******************************************************************************/

    // void ezlopi_arduino_init(void);

#ifdef __cplusplus
}
#endif

#endif // __EZLOPI_H__

/*******************************************************************************
 *                          End of File
 *******************************************************************************/
