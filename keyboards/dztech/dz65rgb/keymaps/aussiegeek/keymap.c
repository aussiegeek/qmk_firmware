#include QMK_KEYBOARD_H

enum {
  TD_CTRL_CAPS = 0
};

qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_CTRL_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_LCTRL, KC_CAPS)
};

#define CAPS_LOCK_LED 30
#define RGB_OFF 0x00, 0x00, 0x00

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_65_ansi(
          KC_GESC,            KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_MPLY,
          KC_TAB,             KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_VOLU,
          TD(TD_CTRL_CAPS),   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,             KC_VOLD,
          KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,            KC_UP,    KC_MUTE,
          MO(1),              KC_LALT,  KC_LGUI,                      KC_SPC,                                 KC_RGUI,  KC_RALT,  MO(1),    KC_LEFT,  KC_DOWN,  KC_RGHT),
	[1] = LAYOUT_65_ansi(
          KC_GRAVE,           KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_MSTP,
          EEPROM_RESET,       _______,  _______,  RGB_TOG,  RGB_MOD,  RGB_RMOD, _______,  _______,  RGB_SPI,  RGB_SPD,  _______,  _______,  _______,  RESET,    KC_MNXT,
          _______,            _______,  _______,  _______,  RGB_HUI,  RGB_HUD,  RGB_SAI,  RGB_SAD,  RGB_VAI,  RGB_VAD,  _______,  _______,  KC_RETURN,          KC_MPRV,
          _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            KC_PGUP,  KC_MUTE,
          _______,            _______,  _______,                      _______,                                _______,  _______,  _______,  KC_HOME,  KC_PGDN,  KC_END)
};

void rgb_matrix_indicators_user(void) {
    if (host_keyboard_led_state().caps_lock) {
        rgb_matrix_set_color_all(RGB_OFF);
        rgb_matrix_set_color(CAPS_LOCK_LED, RGB_WHITE);
    }
}
