#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_65_ansi(
          KC_GESC,            KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_MPLY,
          KC_TAB,             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_VOLU,
          CTL_T(KC_CAPS),     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,             KC_VOLD,
          KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    KC_MUTE,
          MO(1),              KC_LALT,  KC_LGUI,                      KC_SPC,                                 KC_RGUI,  KC_RALT,  MO(1),    KC_LEFT,  KC_DOWN,  KC_RGHT),
	[1] = LAYOUT_65_ansi(
          KC_GRAVE,           _______,  _______,  _______,  _______,  _______,  _______,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_DEL,   KC_MSTP,
          _______,            _______,  KC_UP,     RGB_TOG, RGB_MOD, RGB_RMOD,  _______,  _______,  RGB_SPI,  RGB_SPD,  KC_PGUP,  KC_HOME,  _______,  RESET,    KC_MNXT,
          _______,            KC_LEFT,  KC_DOWN,   KC_RGHT, RGB_HUI, RGB_HUD,   RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  KC_PGDN,  KC_END,   KC_PENT,            KC_MPRV,
          _______,            BL_TOGG,  BL_STEP,   BL_ON,   BL_OFF,  BL_INC,    BL_DEC,   BL_BRTG,  _______,  _______,  _______,  _______,            KC_PGUP,  KC_MUTE,
          KC_TRNS,            _______,  _______,                      _______,                                _______,  _______,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_END)
};
