#pragma once
/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 18

/* key matrix pins */
#define MATRIX_ROW_PINS { C3, A0, A1, A2, B10, A15 }
#define MATRIX_COL_PINS { A6, A7, C4, C5, B0, B1, B2, B11, A9, A8, C9, C8, C7, C6, B15, B14, B13, B12 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

///* number of backlight levels */
//
//#ifdef BACKLIGHT_PIN
//#define BACKLIGHT_LEVELS 3
//#endif

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
