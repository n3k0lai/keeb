#include QMK_KEYBOARD_H
//
//
//

enum layer_codes {BASE = 0, NUMERIC = 1, UTIL = 2, GAMING = 3 };
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_split_3x6_3(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ESC,
                               KC_LGUI, MO(1),   KC_SPC,      KC_ENT,  MO(2),   KC_RALT),

[NUMERIC] = LAYOUT_split_3x6_3(
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,        KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
                               _______, _______, _______,     _______, _______, _______),

[UTIL] = LAYOUT_split_3x6_3(
    QK_BOOT, _______, _______, _______, _______, _______,     RGB_VAI, RGB_HUI, RGB_SAI, RGB_MOD, RGB_TOG, _______,
    EE_CLR,  _______, _______, _______, _______, _______,     RGB_VAD, RGB_HUD, RGB_SAD, RGB_RMOD, CK_TOGG, _______,
    _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______,
                               _______, _______, _______,     _______, _______, _______)

};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
