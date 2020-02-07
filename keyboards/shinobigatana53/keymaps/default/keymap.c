/* Copyright 2019 amber
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
#include "keymap_jp.h"

extern keymap_config_t keymap_config;
// Defines the keycodes used by our macros in process_record_user
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
};
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define KC_LOEN LT(_LOWER, KC_SPC)
#define KC_RASP LT(_RAISE, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( /* Base */
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , JP_LBRC,         JP_RBRC, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,
		KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_MINS,         JP_CIRC, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_DEL , KC_ESC, KC_BSPC, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
		KC_ESC , KC_LGUI, KC_APP , KC_LALT,                   KC_LOEN ,        KC_RASP,       KC_RALT   , KC_APP , KC_RGUI, KC_RCTL
  ),

  [_LOWER] = LAYOUT(
		KC_GRV , KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, JP_LCBR,         JP_RCBR, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, JP_CIRC, JP_AT  ,
		_______, JP_GRV , JP_BSLS, KC_MINS, JP_EQL , JP_LBRC, JP_EQL ,         JP_TILD, JP_RBRC, JP_SCLN, JP_ASTR, KC_SLSH, JP_PLUS, JP_ASTR,
		_______, _______, JP_PIPE, JP_UNDS, JP_PLUS, JP_LCBR, _______, _______,_______, JP_RCBR, JP_COLN, JP_LT  , JP_GT  , JP_QUES, _______,
		_______, _______, _______, _______,                   _______,         _______,          _______, _______, _______, _______ ),

  [_RAISE] = LAYOUT(
		KC_GRV , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , _______,          _______, KC_F6 , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,
		_______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______,          _______, KC_F4 , KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX,
		_______, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______, _______, _______, KC_F10, KC_F11 , KC_F12 , _______, _______ , _______,
		_______, _______, _______, _______,                   _______,          _______,         _______, _______, _______, _______ ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
