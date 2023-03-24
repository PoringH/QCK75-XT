#ifndef KB_H
#define KB_H

#include "quantum.h"

#define KEYMAP( \
	            K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, K014,       K016, K017, \
	      K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115,       K117, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215,       K217, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313,       K315,       K317, \
	K400, K401, K402,       K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414,       K416, K417, \
	K500, K501, K502, K503, K504,                   K508,                   K512, K513, K514, K515, K516, K517, \
	                                                                                                            \
) { \
	{ KC_NO, KC_NO, K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  K014,  KC_NO, K016,  K017 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  K114,  K115,  KC_NO, K117 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  K212,  K213,  K214,  K215,  KC_NO, K217 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  KC_NO, K315,  KC_NO, K317 }, \
	{ K400,  K401,  K402,  KC_NO, K404,  K405,  K406,  K407,  K408,  K409,  K410,  K411,  K412,  K413,  K414,  KC_NO, K416,  K417 }, \
	{ K500,  K501,  K502,  K503,  K504,  KC_NO, KC_NO, KC_NO, K508,  KC_NO, KC_NO, KC_NO, K512,  K513,  K514,  K515,  K516,  K517 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}

#endif