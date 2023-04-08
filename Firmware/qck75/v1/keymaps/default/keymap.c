// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum {
	MAIN = 0,
	SECOND = 1,
	THIRD = 2,
	FOURTH = 3
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_75_ansi(
        				KC_ESC,  KC_F1,   KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6, 	KC_F7, KC_F8,   KC_F9, 	 KC_F10,  KC_F11,  KC_F12,  KC_F13,  KC_DEL, 
				KC_F14, KC_GRV,  KC_1, 	  KC_2,    KC_3,  KC_4,  KC_5, 	KC_6, 	KC_7,  KC_8, 	KC_9, 	 KC_0, 	  KC_MINS, KC_EQL,  KC_BSPC, KC_HOME, 
		KC_F15, KC_F16, KC_TAB,  KC_Q, 	  KC_W,    KC_E,  KC_R,  KC_T, 	KC_Y, 	KC_U,  KC_I,	KC_O, 	 KC_P, 	  KC_LBRC, KC_RBRC, KC_BSLS, KC_END, 
		KC_F17, KC_F18, KC_CAPS, KC_A, 	  KC_S,    KC_D,  KC_F,  KC_G, 	KC_H, 	KC_J,  KC_K,	KC_L, 	 KC_SCLN, KC_QUOT, KC_ENT, 			 KC_PGUP, 
		KC_F19, KC_F20, KC_LSFT, KC_Z,	  KC_X,    KC_C,  KC_V,  KC_B, 	KC_N, 	KC_M,  KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, 		    KC_UP, 	 KC_PGDN, 
		KC_F21, KC_F22, KC_LCTL, KC_LGUI, KC_LALT, 						KC_SPC, 				KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_75_ansi(
       			 		  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
				 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		 KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		    KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 							KC_TRNS, 				  	MO(2), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_75_ansi(
       			 		  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
				 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		 KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		    KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 							KC_TRNS, 				  	KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT_75_ansi(
       			 		  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
				 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		 KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		    KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 							 KC_TRNS, 				  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};


bool encoder_update_kb(uint8_t index, bool clockwise) {
	return encoder_update_user(index, clockwise);
}

bool encoder_update_user(uint8_t index, bool clockwise) {
	switch(get_highest_layer(layer_state)) {
		case 1:
			if(clockwise) {
				tap_code(KC_MS_WH_UP);
			} else {
				tap_code(KC_MS_WH_DOWN);
			}
			break;
		default: 
			if(clockwise) {
				tap_code(KC_VOLU);
			} else {
				tap_code(KC_VOLD);
			}
	}
	return true;
}

#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case MAIN:
            oled_write_P(PSTR("MAIN\n"), false);
            break;
        case SECOND:
            oled_write_P(PSTR("SECOND\n"), false);
            break;
        case THIRD:
            oled_write_P(PSTR("THIRD\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("FOURTH"), false);
    }
    
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    return false;
}

#endif

