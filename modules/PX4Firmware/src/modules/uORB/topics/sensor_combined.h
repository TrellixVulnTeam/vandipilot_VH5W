/****************************************************************************
 *
 *   Copyright (C) 2013-2015 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file d:\github\compiletest\34\ardupilot_rm_git\modules\PX4Firmware\msg\sensor_combined.msg */


#pragma once

#include <stdint.h>
#include <uORB/uORB.h>


#ifndef __cplusplus
#define MAGNETOMETER_MODE_NORMAL 0
#define MAGNETOMETER_MODE_POSITIVE_BIAS 1
#define MAGNETOMETER_MODE_NEGATIVE_BIAS 2
#define SENSOR_PRIO_MIN 0
#define SENSOR_PRIO_VERY_LOW 25
#define SENSOR_PRIO_LOW 50
#define SENSOR_PRIO_DEFAULT 75
#define SENSOR_PRIO_HIGH 100
#define SENSOR_PRIO_VERY_HIGH 125
#define SENSOR_PRIO_MAX 255

#endif

/**
 * @addtogroup topics
 * @{
 */


#ifdef __cplusplus
struct __EXPORT sensor_combined_s {
#else
struct sensor_combined_s {
#endif
	uint64_t timestamp;
	uint64_t gyro_timestamp[3];
	int16_t gyro_raw[9];
	float gyro_rad_s[9];
	uint32_t gyro_priority[3];
	float gyro_integral_rad[9];
	uint64_t gyro_integral_dt[3];
	uint32_t gyro_errcount[3];
	float gyro_temp[3];
	int16_t accelerometer_raw[9];
	float accelerometer_m_s2[9];
	float accelerometer_integral_m_s[9];
	uint64_t accelerometer_integral_dt[3];
	int16_t accelerometer_mode[3];
	float accelerometer_range_m_s2[3];
	uint64_t accelerometer_timestamp[3];
	uint32_t accelerometer_priority[3];
	uint32_t accelerometer_errcount[3];
	float accelerometer_temp[3];
	int16_t magnetometer_raw[9];
	float magnetometer_ga[9];
	int16_t magnetometer_mode[3];
	float magnetometer_range_ga[3];
	float magnetometer_cuttoff_freq_hz[3];
	uint64_t magnetometer_timestamp[3];
	uint32_t magnetometer_priority[3];
	uint32_t magnetometer_errcount[3];
	float magnetometer_temp[3];
	float baro_pres_mbar[3];
	float baro_alt_meter[3];
	float baro_temp_celcius[3];
	uint64_t baro_timestamp[3];
	uint32_t baro_priority[3];
	uint32_t baro_errcount[3];
	float adc_voltage_v[10];
	uint16_t adc_mapping[10];
	float mcu_temp_celcius;
	float differential_pressure_pa[3];
	uint64_t differential_pressure_timestamp[3];
	float differential_pressure_filtered_pa[3];
	uint32_t differential_pressure_priority[3];
	uint32_t differential_pressure_errcount[3];
#ifdef __cplusplus
	static const int32_t MAGNETOMETER_MODE_NORMAL = 0;
	static const int32_t MAGNETOMETER_MODE_POSITIVE_BIAS = 1;
	static const int32_t MAGNETOMETER_MODE_NEGATIVE_BIAS = 2;
	static const uint32_t SENSOR_PRIO_MIN = 0;
	static const uint32_t SENSOR_PRIO_VERY_LOW = 25;
	static const uint32_t SENSOR_PRIO_LOW = 50;
	static const uint32_t SENSOR_PRIO_DEFAULT = 75;
	static const uint32_t SENSOR_PRIO_HIGH = 100;
	static const uint32_t SENSOR_PRIO_VERY_HIGH = 125;
	static const uint32_t SENSOR_PRIO_MAX = 255;

#endif
};

/**
 * @}
 */

/* register this as object request broker structure */
ORB_DECLARE(sensor_combined);
