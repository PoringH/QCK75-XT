// Copyright 2023 Andrian (@PoringH)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define I2C1_SCL_PIN B8
#define I2C1_SDA_PIN B9

#define I2C1_SCL_PAL_MODE 1
#define I2C1_SDA_PAL_MODE 1

#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_DISPLAY_128X64
#define OLED_COM_PINS 0x12

#define OLED_IC OLED_IC_SH1106
#define OLED_COLUMN_OFFSET 2

#define OLED_TIMEOUT 120000
#define OLED_BRIGHNTESS 120

#define VIA_EEPROM_CUSTOM_CONFIG_SIZE 21

#define USB_POLLING_INTERVAL_MS 1
