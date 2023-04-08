// Copyright 2023 Andrian (@PoringH)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#ifdef OLED_DRIVER_ENABLE
#    define I2C1_SCL_BANK GPIOB
#    define I2C1_SDA_BANK GPIOB
#    define I2C1_SDA 7
#    define I2C1_SCL 6
#    define I2C1_SCL_PAL_MODE 1
#    define I2C1_SDA_PAL_MODE 1
#    define I2C1_TIMINGR_PRESC 0U
#    define I2C1_TIMINGR_SCLDEL 3U
#    define I2C1_TIMINGR_SDADEL 1U
#    define I2C1_TIMINGR_SCLH 3U
#    define I2C1_TIMINGR_SCLL 9U
#    define OLED_DISPLAY_WIDTH 128
#    define OLED_DISPLAY_HEIGHT 64
#    define OLED_UPDATE_INTERVAL 20
#    define OLED_TIMEOUT 30000
#endif

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
