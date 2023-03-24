//#ifndef CONFIG_H
//#define CONFIG_H
//
//#include "config_common.h"

#pragma once
#define VENDOR_ID 0x1209
#define PRODUCT_ID 0xBA01
#define DEVICE_VER 0x0001
#define MANUFACTURER KoBuss
#define PRODUCT Grabert
#define DESCRIPTION Grabert Sixty

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/* key matrix pins */
#define MATRIX_ROW_PINS { PC3, PA0, PA1, PA2, PB10, PA15 }
#define MATRIX_COL_PINS { PA6, PA7, PC4, PC5, PB0, PB1, PB2, PB11, PA9, PA8, PC9, PC8, PC7, PC6, PB15, PB14, PB13, PB12 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
