#include QMK_KEYBOARD_H

// clang-format off
enum layers { _ALPHA_1, _ALPHA_2, _NUMBERS, _NAVIGATION, _RGB };

#define ALPHA LT(_ALPHA_2, KC_SPC)
#define NUM LT(_NUMBERS, KC_ESC)
#define NAV LT(_NAVIGATION, KC_ENT)

#define LOWER ALPHA
#define RAISE NUMBERS

// Left-hand home row mods
#define HOME_A LCTL_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_E LGUI_T(KC_E)
#define HOME_T LSFT_T(KC_T)

#define HOME_GRV LCTL_T(KC_GRV)
#define HOME_Q LALT_T(KC_Q)
#define HOME_W LGUI_T(KC_W)
#define HOME_Y LSFT_T(KC_Y)

// Right-hand home row mods
#define HOME_N RSFT_T(KC_N)
#define HOME_I RGUI_T(KC_I)
#define HOME_O RALT_T(KC_O)
#define HOME_P RCTL_T(KC_P)

#define HOME_J RSFT_T(KC_J)
#define HOME_K RGUI_T(KC_K)
#define HOME_COM RALT_T(KC_COMM)
#define HOME_DOT RCTL_T(KC_DOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Alpha part 1
 * ,-----------------------------------------------------------------------------------.
 * |   A  |   S  |   E  |   T  |      |      |      |      |   N  |   I  |   O  |  P   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   Z  |   X  |   C  |   V  |      |      |      |      |   R  |   D  |   U  |  L   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      | Esc  | Spc  |             | Ent  | Bspc |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ALPHA_1] = LAYOUT_ortho_5x4(
    HOME_A,  HOME_S,  HOME_E,  HOME_T,
    KC_Z,    KC_X,    KC_C,    KC_V,
    HOME_N,  HOME_I,  HOME_O,  HOME_P,
    KC_R,    KC_D,    KC_U,    KC_L,
    NUM,     ALPHA,   NAV,     KC_BSPC
),

/* Alpha part 2
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   Q  |   W  |   Y  |      |      |      |      |   J  |   K  |   ,  |  .   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Tab  |   F  |   G  |   H  |      |      |      |      |   B  |   M  |   ;  |  '   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ALPHA_2] = LAYOUT_ortho_5x4(
    HOME_GRV,HOME_Q,  HOME_W,  HOME_Y,
    KC_TAB,  KC_F,    KC_G,    KC_H,
    HOME_J,  HOME_K,  HOME_COM,HOME_DOT,
    KC_B,    KC_M,    KC_SCLN, KC_QUOT,
    _______, _______, _______, _______
),

/* Numbers
 * ,-----------------------------------------------------------------------------------.
 * |   1  |   2  |   3  |   4  |      |      |      |      |   7  |   8  |   9  |  0   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |   \  |   -  |   =  |   5  |      |      |      |      |   6  |   /  |   [  |  ]   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      | Sft  |             | Gui  |   :  |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NUMBERS] = LAYOUT_ortho_5x4(
    KC_1,    KC_2,    KC_3,    KC_4,
    KC_BSLS, KC_MINS, KC_EQL,  KC_5,
    KC_7,    KC_8,    KC_9,    KC_0,
    KC_6,    KC_SLSH, KC_LBRC, KC_RBRC,
    KC_LGUI, KC_LSFT, KC_RGUI, S(KC_SCLN)
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * | WH ↑ | Btn1 | M ↑  | Btn2 |      |      |      |      |  ⇧   | HOME |  ↑   | END  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | WH ↓ | M ←  | M ↓  | M →  |      |      |      |      |  ⇩   |  ←   |  ↓   |  →   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_NAVIGATION] = LAYOUT_ortho_5x4(
    KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2,
    KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R,
    KC_PGUP, KC_HOME, KC_UP,   KC_END,
    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,
    _______, _______, _______, _______
),

/* RGB (Alpha 2 + Navigation)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * | BOOT |  BL  | BLUP |BLBRTG|      |      |      |      | RGB  | HUE+ | SAT+ |BRGTH+|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | DBG  | BL+  | BLDN |      |      |      |      |      |RGBMOD| HUE- | SAT- |BRGTH-|
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_RGB] = LAYOUT_ortho_5x4(
    QK_BOOT, BL_TOGG, BL_UP,   BL_BRTG,
    DB_TOGG, BL_STEP, BL_DOWN, _______,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
    _______, _______, _______, _______
)

};
// clang-format off

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _ALPHA_2, _NAVIGATION, _RGB);
}
