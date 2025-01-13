/* ===========================================================================
** Copyright (C) 2024 Ezlo Innovation Inc
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
/**
 * @file    main.h
 * @brief   perform some function on data
 * @author  xx
 * @version 0.1
 * @date    12th DEC 2024
*/

#ifndef _EZLOPI_CORE_DEVICES_LIST_INCLUDES_H_
#define _EZLOPI_CORE_DEVICES_LIST_INCLUDES_H_

/*******************************************************************************
*                          Include Files
*******************************************************************************/

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
#include "ezlopi-sensors-devices/device-0001-digitalOut-generic/device_0001_digitalOut_generic.h"
#include "ezlopi-sensors-devices/device-0002-digitalOut-relay/device_0002_digitalOut_relay.h"
#include "ezlopi-sensors-devices/device-0003-digitalOut-plug/device_0003_digitalOut_plug.h"
#include "ezlopi-sensors-devices/device-0004-digitalIn-generic/device_0004_digitalIn_generic.h"

#include "ezlopi-sensors-devices/sensor-0005-I2C-MPU6050/sensor_0005_I2C_MPU6050.h"
#include "ezlopi-sensors-devices/sensor-0006-I2C-ADXL345/sensor_0006_I2C_ADXL345.h"
#include "ezlopi-sensors-devices/sensor-0007-I2C-GY271/sensor_0007_I2C_GY271.h"
#include "ezlopi-sensors-devices/sensor-0008-I2C-LTR303ALS/sensor_0008_I2C_LTR303ALS.h"
#include "ezlopi-sensors-devices/device-0009-other-RMT-SK6812/device_0009_other_RMT_SK6812.h"
#include "ezlopi-sensors-devices/sensor-0010-I2C-BME680/sensor_0010_I2C_BME680.h"
#include "ezlopi-sensors-devices/sensor-0012-I2C-BME280/sensor_0012_I2C_BME280.h"
#include "ezlopi-sensors-devices/sensor-0015-oneWire-DHT11/sensor_0015_oneWire_DHT11.h"
#include "ezlopi-sensors-devices/sensor-0016-oneWire-DHT22/sensor_0016_oneWire_DHT22.h"
#include "ezlopi-sensors-devices/sensor-0017-ADC-potentiometer/sensor_0017_ADC_potentiometer.h"

#ifdef CONFIG_IDF_TARGET_ESP32
#include "ezlopi-sensors-devices/sensor-0018-other-internal-hall-effect/sensor_0018_other_internal_hall_effect.h"
#endif // CONFIG_IDF_TARGET_ESP32

#include "ezlopi-sensors-devices/sensor-0019-digitalIn-PIR/sensor_0019_digitalIn_PIR.h"
#include "ezlopi-sensors-devices/sensor-0020-other-2axis-joystick/sensor_0020_other_2axis_joystick.h"
#include "ezlopi-sensors-devices/sensor-0021-UART-MB1013/sensor_0021_UART_MB1013.h"
#include "ezlopi-sensors-devices/device-0022-PWM-dimmable-lamp/device_0022_PWM_dimmable_lamp.h"
#include "ezlopi-sensors-devices/sensor-0023-digitalIn-touch-switch-TTP223B/sensor_0023_digitalIn_touch_switch_TTP223B.h"
#include "ezlopi-sensors-devices/sensor-0024-other-HCSR04/sensor_0024_other_HCSR04.h"
#include "ezlopi-sensors-devices/sensor-0025-digitalIn-LDR/sensor_0025_digitalIn_LDR.h"
#include "ezlopi-sensors-devices/sensor-0026-ADC-LDR/sensor_0026_ADC_LDR.h"
#include "ezlopi-sensors-devices/sensor-0027-ADC-waterLeak/sensor_0027_ADC_waterLeak.h"
#include "ezlopi-sensors-devices/sensor-0028-other-GY61/sensor_0028_other_GY61.h"
#include "ezlopi-sensors-devices/sensor-0029-I2C-GXHTC3/sensor_0029_I2C_GXHTC3.h"
#include "ezlopi-sensors-devices/sensor-0030-oneWire-DS18B20/sensor_0030_oneWire_DS18B20.h"
#include "ezlopi-sensors-devices/sensor-0031-other-JSNSR04T/sensor_0031_other_JSNSR04T.h"
#include "ezlopi-sensors-devices/sensor-0032-ADC-soilMoisture/sensor_0032_ADC_soilMoisture.h"
#include "ezlopi-sensors-devices/sensor-0033-ADC-turbidity/sensor_0033_ADC_turbidity.h"
#include "ezlopi-sensors-devices/sensor-0034-digitalIn-proximity/sensor_0034_digitalIn_proximity.h"
#include "ezlopi-sensors-devices/sensor-0035-digitalIn-touch-sensor-TPP223B/sensor_0035_digitalIn_touch_sensor_TPP223B.h"
#include "ezlopi-sensors-devices/device-0036-PWM-servo-MG996R/device_0036_PWM_servo_MG996R.h"
#include "ezlopi-sensors-devices/sensor-0037-pms5003-sensor/sensor_0037_pms5003_sensor.h"
#include "ezlopi-sensors-devices/device-0038-other-RGB/device_0038_other_RGB.h"

#include "ezlopi-sensors-devices/sensor-0040-other-TCS230/sensor_0040_other_TCS230.h"
#include "ezlopi-sensors-devices/sensor-0041-ADC-FC28-soilMoisture/sensor_0041_ADC_FC28_soilMoisture.h"
#include "ezlopi-sensors-devices/sensor-0042-ADC-shunt-voltmeter/sensor_0042_ADC_shunt_voltmeter.h"
#include "ezlopi-sensors-devices/sensor-0043-ADC-GYML8511-UV-intensity/sensor_0043_ADC_GYML8511_UV_intensity.h"
#include "ezlopi-sensors-devices/sensor-0044-I2C-TSL256-luminosity/sensor_0044_I2C_TSL256_luminosity.h"
#include "ezlopi-sensors-devices/sensor-0046-ADC-ACS712-05B-currentmeter/sensor_0046_ADC_ACS712_05B_currentmeter.h"
#include "ezlopi-sensors-devices/sensor-0047-other-HX711-loadcell/sensor_0047_other_HX711_loadcell.h"
#include "ezlopi-sensors-devices/sensor-0048-other-MQ4-CH4-detector/sensor_0048_other_MQ4_CH4_detector.h"
#include "ezlopi-sensors-devices/sensor-0049-other-MQ2-LPG-detector/sensor_0049_other_MQ2_LPG_detector.h"
#include "ezlopi-sensors-devices/sensor-0050-other-MQ3-alcohol-detector/sensor_0050_other_MQ3_alcohol_detector.h"
#include "ezlopi-sensors-devices/sensor-0051-other-MQ8-H2-detector/sensor_0051_other_MQ8_H2_detector.h"
#include "ezlopi-sensors-devices/sensor-0052-other-MQ135-NH3-detector/sensor_0052_other_MQ135_NH3_detector.h"
#include "ezlopi-sensors-devices/sensor-0053-UART-GYGPS6MV2/sensor_0053_UART_GYGPS6MV2.h"
#include "ezlopi-sensors-devices/sensor-0054-PWM-YFS201-flowmeter/sensor_0054_PWM_YFS201_flowmeter.h"
#include "ezlopi-sensors-devices/sensor-0055-ADC-FlexResistor/sensor_0055_ADC_FlexResistor.h"
#include "ezlopi-sensors-devices/sensor-0056-ADC-Force-Sensitive-Resistor/sensor_0056_ADC_Force_Sensitive_Resistor.h"
#include "ezlopi-sensors-devices/sensor-0057-other-KY026-FlameDetector/sensor_0057_other_KY026_FlameDetector.h"

#include "ezlopi-sensors-devices/sensor-0059-other-MQ6-LPG-detector/sensor_0059_other_MQ6_LPG_detector.h"
#include "ezlopi-sensors-devices/sensor-0060-digitalIn-vibration-detector/sensor_0060_digitalIn_vibration_detector.h"
#include "ezlopi-sensors-devices/sensor-0061-digitalIn-reed-switch/sensor_0061_digitalIn_reed_switch.h"
#include "ezlopi-sensors-devices/sensor-0062-other-MQ7-CO-detector/sensor_0062_other_MQ7_CO_detector.h"
#include "ezlopi-sensors-devices/sensor-0063-other-MQ9-LPG-flameable-detector/sensor_0063_other_MQ9_LPG_flameable_detector.h"
#include "ezlopi-sensors-devices/sensor-0065-digitalIn-float-switch/sensor_0065_digitalIn_float_switch.h"
#include "ezlopi-sensors-devices/sensor-0066-other-R307-FingerPrint/sensor_0066_other_R307_FingerPrint.h"
#include "ezlopi-sensors-devices/sensor-0067-UART-hilink-presence-sensor/sensor_0067_hilink_presence_sensor.h"
#include "ezlopi-sensors-devices/sensor-0068-I2C-ENS160-gas-sensor/sensor_0068_ENS160_gas_sensor.h"
#include "ezlopi-sensors-devices/sensor-0069-UART-ze08-ch02-gas-sensor/sensor_0069_ze08_ch02_gas_sensor.h"

#include "ezlopi-sensors-devices/sensor-0070-ADC-dummy-potentiometer/sensor_0070_ADC_dummy_potentiometer.h"


    /*******************************************************************************
    *                          Extern Function Prototypes
    *******************************************************************************/
#ifdef __cplusplus
}
#endif

#endif // _EZLOPI_CORE_DEVICES_LIST_INCLUDES_H_

/*******************************************************************************
*                          End of File
*******************************************************************************/

