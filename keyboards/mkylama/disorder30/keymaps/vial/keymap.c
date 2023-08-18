#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────────────────────────────────────────────────────┐
     * │ ┌───┐┌───┬───┬───┐┌───┬───┬───┐ ┌───┐ ┌───┬───┬───┐ │
     * │ │Esc││ 1 │ 2 │ 3 ││ 4 │ 5 │ 6 │ │ O │ │ 7 │ 8 │ 9 │ │
     * │ └───┘└───┴───┴───┘└───┴───┴───┘ │ L │ └───┴───┴───┘ │
     * │ ┌───┬───┬───┬───┬───┬───┬─────┐ │ E │ ┌───┬───┬───┐ │
     * │ │Tab│ Q │ W │ E │ R │ T │ Ent │ │ D │ │ 4 │ 5 │ 6 │ │
     * │ ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │ └───┘ ├───┼───┼───┤ │
     * │ │Shft│ A │ S │ D │ F │ G │    │ ┌───┐ │ 1 │ 2 │ 3 │ │
     * │ ├────┼───┴┬──┴───┴───┼───┴┬───┘ │ ↑ │ └───┼───┼───┤ │
     * │ │Ctrl│Alt │  Space   │ Fn │ ┌───┼───┼───┐ │ 0 │ . │ │
     * │ └────┴────┴──────────┴────┘ │ ← │ ↓ │ → │ └───┴───┘ │
     * │                             └───┴───┴───┘           │
     * └─────────────────────────────────────────────────────┘
     */
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,             KC_P7,   KC_P8,   KC_P9,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_ENT,           KC_P4,   KC_P5,   KC_P6,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_UP,   KC_P1,   KC_P2,   KC_P3,
        KC_LCTL, KC_LALT,          KC_SPC,           MO(1),   KC_LEFT, KC_DOWN, KC_RGHT, KC_P0,   KC_PDOT
    ),
    /*
     * ┌─────────────────────────────────────────────────────┐
     * │ ┌───┐┌───┬───┬───┐┌───┬───┬───┐ ┌───┐ ┌───┬───┬───┐ │
     * │ │RST││   │   │   ││   │   │   │ │ O │ │   │   │   │ │
     * │ └───┘└───┴───┴───┘└───┴───┴───┘ │ L │ └───┴───┴───┘ │
     * │ ┌───┬───┬───┬───┬───┬───┬─────┐ │ E │ ┌───┬───┬───┐ │
     * │ │   │   │   │   │   │   │     │ │ D │ │   │   │   │ │
     * │ ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │ └───┘ ├───┼───┼───┤ │
     * │ │    │   │   │   │   │   │    │ ┌───┐ │   │   │   │ │
     * │ ├────┼───┴┬──┴───┴───┼───┴┬───┘ │   │ └───┼───┼───┤ │
     * │ │    │    │          │    │ ┌───┼───┼───┐ │   │   │ │
     * │ └────┴────┴──────────┴────┘ │   │   │   │ └───┴───┘ │
     * │                             └───┴───┴───┘           │
     * └─────────────────────────────────────────────────────┘
     */
    [1] = LAYOUT(
        QK_BOOT, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______,          _______,          _______, _______, _______, _______, _______, _______
    ),
    /*
     * ┌─────────────────────────────────────────────────────┐
     * │ ┌───┐┌───┬───┬───┐┌───┬───┬───┐ ┌───┐ ┌───┬───┬───┐ │
     * │ │   ││   │   │   ││   │   │   │ │ O │ │   │   │   │ │
     * │ └───┘└───┴───┴───┘└───┴───┴───┘ │ L │ └───┴───┴───┘ │
     * │ ┌───┬───┬───┬───┬───┬───┬─────┐ │ E │ ┌───┬───┬───┐ │
     * │ │   │   │   │   │   │   │     │ │ D │ │   │   │   │ │
     * │ ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │ └───┘ ├───┼───┼───┤ │
     * │ │    │   │   │   │   │   │    │ ┌───┐ │   │   │   │ │
     * │ ├────┼───┴┬──┴───┴───┼───┴┬───┘ │   │ └───┼───┼───┤ │
     * │ │    │    │          │    │ ┌───┼───┼───┐ │   │   │ │
     * │ └────┴────┴──────────┴────┘ │   │   │   │ └───┴───┘ │
     * │                             └───┴───┴───┘           │
     * └─────────────────────────────────────────────────────┘
     */
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______,          _______,          _______, _______, _______, _______, _______, _______
    ),
    /*
     * ┌─────────────────────────────────────────────────────┐
     * │ ┌───┐┌───┬───┬───┐┌───┬───┬───┐ ┌───┐ ┌───┬───┬───┐ │
     * │ │   ││   │   │   ││   │   │   │ │ O │ │   │   │   │ │
     * │ └───┘└───┴───┴───┘└───┴───┴───┘ │ L │ └───┴───┴───┘ │
     * │ ┌───┬───┬───┬───┬───┬───┬─────┐ │ E │ ┌───┬───┬───┐ │
     * │ │   │   │   │   │   │   │     │ │ D │ │   │   │   │ │
     * │ ├───┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │ └───┘ ├───┼───┼───┤ │
     * │ │    │   │   │   │   │   │    │ ┌───┐ │   │   │   │ │
     * │ ├────┼───┴┬──┴───┴───┼───┴┬───┘ │   │ └───┼───┼───┤ │
     * │ │    │    │          │    │ ┌───┼───┼───┐ │   │   │ │
     * │ └────┴────┴──────────┴────┘ │   │   │   │ └───┴───┘ │
     * │                             └───┴───┴───┘           │
     * └─────────────────────────────────────────────────────┘
     */
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
        _______, _______,          _______,          _______, _______, _______, _______, _______, _______
    )
};
// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
};
#endif // ENCODER_MAP_ENABLE

#if defined(OLED_ENABLE)
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

static void oled_render_logo(void) {
    static const char PROGMEM logo[] = {
        0,   224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 192, 192, 0,   0,   0,   0,   224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 224, 0,   0,   0,   255, 255, 255, 255, 1,   1,   1,   1,   1,   3,   255, 255, 255, 255, 0,   0,   0,   1,   1,   1,   1,   255, 255, 255, 255, 1,   1,   1,   1,   0,   0,   0,   255, 255, 255, 255, 128, 128, 128, 128, 128, 192, 255, 255, 255, 255, 0,   0,   0,   128, 128, 128, 128, 255, 255, 255, 255, 128, 128, 128, 128, 0,   0,   0,   7,   199, 199, 231, 231, 231, 231, 231, 231, 231, 231, 195, 195, 0,   0,   0,   0,   199, 199, 231, 231, 231, 231, 231, 231, 231, 231, 199, 199, 0,   0,   0,   127, 255, 255, 255, 227, 193, 193, 193, 193, 195, 207, 143, 143, 15,  0,   0,   255, 255, 255, 255, 3, 1,   1,   1,   1,   3,   255, 255, 255, 255, 0,   0, 240, 241, 241, 243, 195, 131, 131, 131, 131, 199,
        255, 255, 255, 254, 0,   0,   255, 255, 255, 255, 192, 128, 128, 128, 128, 192, 255, 255, 255, 255, 0,   0,   224, 227, 227, 231, 231, 231, 231, 231, 231, 231, 231, 195, 195, 0,   0,   0,   224, 227, 227, 231, 231, 231, 231, 231, 231, 231, 231, 195, 195, 0,   0,   0,   255, 255, 255, 255, 193, 193, 193, 193, 193, 227, 255, 255, 255, 127, 0,   0,   255, 255, 255, 255, 1,   1,   1,   1,   1,   3,   255, 255, 255, 255, 0,   0,   255, 255, 255, 255, 3,   3,   3,   3,   31,  255, 255, 255, 225, 0,   0,   0,   255, 255, 255, 255, 128, 128, 128, 128, 128, 192, 255, 255, 255, 255, 0,   0,   231, 231, 231, 231, 224, 224, 224, 224, 224, 224, 231, 231, 231, 231, 0,   0,   231, 231, 231, 231, 231, 231, 231, 231, 231, 231, 231, 195, 195, 0,   0,   0, 255, 255, 255, 255, 193, 193, 193, 193, 193, 193, 1, 1,   1,   1,   0,   0,   255, 255, 255, 255, 193,
        193, 193, 193, 193, 227, 255, 255, 255, 127, 0,   0,   255, 255, 255, 255, 131, 131, 131, 131, 131, 131, 128, 128, 128, 128, 0,   0,   255, 255, 255, 255, 3,   3,   3,   3,   31,  255, 255, 255, 225, 0,   0,   0,   7,   199, 199, 231, 231, 231, 231, 231, 231, 231, 231, 199, 199, 7,   0,   0,   7,   199, 199, 231, 224, 224, 224, 224, 224, 224, 231, 199, 199, 7,   0,   0,   15,  15,  15,  15,  195, 193, 193, 193, 193, 227, 255, 255, 127, 63,  0,   0,   255, 255, 255, 255, 3,   1,   1,   1,   1,   3,   255, 255, 255, 255, 0,   0,   240, 240, 240, 240, 195, 131, 131, 131, 131, 199, 255, 255, 254, 252, 0,   0,   255, 255, 255, 255, 192, 128, 128, 128, 128, 192, 255, 255, 255, 255, 0,   0,   0,   3,   3,   7,   7,   7,   7,   7,   7,   7,   7, 3,   3,   0,   0,   0,   0,   3,   3,   7,   7,   7, 7,   7,   7,   7,   7,   3,   3,   0,   0,
    };
    oled_write_raw_P(logo, sizeof(logo));
}

bool oled_task_user(void) {
    oled_render_logo();
    return false;
}
#endif // OLED_ENABLE
