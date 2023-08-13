/* Copyright 2020 tominabox1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
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
[_ALPHA_1] = LAYOUT_ortho_4x12_1x2uC(
    HOME_A,  HOME_S,  HOME_E,  HOME_T,  _______, _______, _______, _______, HOME_N,  HOME_I,  HOME_O,  HOME_P,
    KC_Z,    KC_X,    KC_C,    KC_V,    _______, _______, _______, _______, KC_R,    KC_D,    KC_U,    KC_L,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, NUM,     ALPHA,   _______, NAV,     KC_BSPC, _______, _______, _______
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
[_ALPHA_2] = LAYOUT_ortho_4x12_1x2uC(
    HOME_GRV,HOME_Q,  HOME_W,  HOME_Y,  _______, _______, _______, _______, HOME_J,  HOME_K,  HOME_COM,HOME_DOT,
    KC_TAB,  KC_F,    KC_G,    KC_H,    _______, _______, _______, _______, KC_B,    KC_M,    KC_SCLN, KC_QUOT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
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
[_NUMBERS] = LAYOUT_ortho_4x12_1x2uC(
    KC_1,    KC_2,    KC_3,    KC_4,    _______, _______, _______, _______, KC_7,    KC_8,    KC_9,    KC_0,
    KC_BSLS, KC_MINS, KC_EQL,  KC_5,    _______, _______, _______, _______, KC_6,    KC_SLSH, KC_LBRC, KC_RBRC,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, KC_LSFT, _______, KC_RGUI, S(KC_SCLN), _______, _______, _______
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
[_NAVIGATION] = LAYOUT_ortho_4x12_1x2uC(
    KC_WH_U, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, _______, _______, KC_PGUP, KC_HOME, KC_UP,   KC_END,
    KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
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
[_RGB] = LAYOUT_ortho_4x12_1x2uC(
    QK_BOOT, BL_TOGG, BL_UP,   BL_BRTG, _______, _______, _______, _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
    DB_TOGG, BL_STEP, BL_DOWN, _______, _______, _______, _______, _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
)

};
// clang-format off

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _ALPHA_2, _NAVIGATION, _RGB);
}
