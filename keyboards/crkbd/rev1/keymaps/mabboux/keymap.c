#include QMK_KEYBOARD_H
#include "g/keymap_combo.h"

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT(

  //,-------------------------------------------------------------------------.                    ,-----------------------------------------------------------------------------.
       KC_TAB,        KC_Q,          KC_W,         KC_E,         KC_R,    KC_T,                         KC_Y,         KC_U,         KC_I,         KC_O,            KC_P,  KC_BSPC,
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_LSFT, LGUI_T(KC_A), LALT_T(KC_S), LSFT_T(KC_D), LCTL_T(KC_F),    KC_G,                         KC_H, LCTL_T(KC_J), LSFT_T(KC_K), LALT_T(KC_L), LGUI_T(KC_SCLN),  KC_RSFT,
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_LCTL,         KC_Z,         KC_X,         KC_C,         KC_V,    KC_B,                         KC_N,         KC_M,      KC_COMM,       KC_DOT,         KC_SLSH,   KC_DEL,
  //|--------+-------------+-------------+-------------+-------------+--------+--------|  |--------+--------+-------------+-------------+-------------+----------------+---------|
                                                              MO(5),   MO(1),    KC_SPC,     KC_ENT,   MO(2),   KC_RALT
                                                          //`--------------------------'  `--------------------------'

        
    ),

    [_LAYER1] = LAYOUT(
        
  //,-------------------------------------------------------------------------.                    ,-----------------------------------------------------------------------------.
       KC_F12,        KC_F1,        KC_F2,        KC_F3,        KC_F4,   KC_F5,                        KC_F6,        KC_F7,        KC_F8,        KC_F9,          KC_F10,   KC_F11, 
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
       KC_EQL,         KC_1,         KC_2,         KC_3,         KC_4,    KC_5,                         KC_6,         KC_7,         KC_8,         KC_9,            KC_0,  KC_MINS,
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_LSFT,      KC_RCTL,        KC_NO,      KC_HOME,       KC_END,  KC_INS,                      KC_LALT,      KC_LEFT,        KC_UP,      KC_DOWN,         KC_RGHT,    KC_NO,
  //|--------+-------------+-------------+-------------+-------------+--------+--------|  |--------+--------+-------------+-------------+-------------+----------------+---------|
                                                            MO(5),   KC_TRNS,    KC_SPC,       KC_ENT,   MO(3),   KC_RALT
                                                          //`--------------------------'  `--------------------------'
        
    ),

    [_LAYER2] = LAYOUT(

  //,-------------------------------------------------------------------------.                    ,-----------------------------------------------------------------------------.
       KC_ESC,      KC_ASTR,      KC_LPRN,      KC_RPRN,      KC_UNDS, KC_RCBR,                        TG(4),      KC_LBRC,      KC_RBRC,      KC_PSLS,         KC_PAST,    KC_AT,  
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_LSFT,      KC_NUBS,LSFT(KC_NUBS),   RALT(KC_2),      KC_RALT, RALT(KC_NUBS),                  KC_NO,      KC_QUOT,      KC_NUHS,      KC_PMNS,         KC_PPLS,  KC_PERC,
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_LCTL,       KC_GRV, LSFT(KC_GRV),   RALT(KC_7), RALT(KC_EQL), RALT(KC_GRV),              RALT(KC_3),      KC_LEFT,        KC_UP,      KC_DOWN,         KC_RGHT,  KC_CIRC,
  //|--------+-------------+-------------+-------------+-------------+--------+--------|  |--------+--------+-------------+-------------+-------------+----------------+---------|
                                                              KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, KC_TRNS,  KC_RALT
                                                          //`--------------------------'  `--------------------------'
        
    ),

    [_LAYER3] = LAYOUT(

  //,-------------------------------------------------------------------------.                    ,-----------------------------------------------------------------------------.
      QK_BOOT,      KC_MRWD,      KC_MFFD,      KC_BRID,      KC_BRIU, KC_LCTL,                      KC_PSCR,        KC_NO,        KC_UP,        KC_NO,           KC_NO,    KC_NO, 
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_CAPS,      KC_MPRV,      KC_MNXT,      KC_VOLD,      KC_VOLU, KC_LSFT,                        KC_NO,      KC_LEFT,      KC_DOWN,      KC_RGHT,           KC_NO,    KC_NO,
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_MPLY,        KC_NO,        KC_NO,      KC_PGDN,      KC_PGUP, KC_RALT,                        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,    KC_NO, 
  //|--------+-------------+-------------+-------------+-------------+--------+--------|  |--------+--------+-------------+-------------+-------------+----------------+---------|
                                                              KC_LGUI, KC_TRNS,  KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
                                                          //`--------------------------'  `--------------------------'
    ),

    [_LAYER5] = LAYOUT(

  //,-------------------------------------------------------------------------.                    ,-----------------------------------------------------------------------------.
      KC_BSPC,        KC_NO,LSFT(LGUI(KC_C)),     KC_F7,        KC_F8,   KC_F9,                        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,    KC_NO,
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
      KC_LSFT,LSFT(KC_HOME),LSFT(LCTL(KC_C)),LCTL(KC_C),   LCTL(KC_V),   KC_PSCR,                        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,    KC_NO,
  //|--------+-------------+-------------+-------------+-------------+--------|                    |--------+-------------+-------------+-------------+----------------+---------|
       KC_ENT,        KC_NO,        KC_NO,        KC_NO,        KC_NO,   KC_PSCR,                        KC_NO,        KC_NO,        KC_NO,        KC_NO,           KC_NO,    KC_NO, 
  //|--------+-------------+-------------+-------------+-------------+--------+--------|  |--------+--------+-------------+-------------+-------------+----------------+---------|
                                                              KC_TRNS,   KC_NO,   KC_NO,      KC_NO,   KC_NO,   KC_NO
                                                          //`--------------------------'  `--------------------------'
        )

};