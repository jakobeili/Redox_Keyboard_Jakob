/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.


qmk compile -kb redox -km Redox_keyboard_jakob

 
*/

#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum layers {
   _QWERTZ,
   _CODING,
   _NAV
};

// Shortcut to make keymap more readable
#define SYM_L   MO(_SYMB)
#define COD_L   MO(_CODING) 
#define NAV_L   MO(_NAV) 

#define KC_ALAS LALT_T(KC_PAST)
#define KC_CTPL LCTL_T(KC_BSLS)

#define KC_NAGR LT(_NAV, KC_GRV)
#define KC_NAMI LT(_NAV, KC_MINS)

#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP) 

#define COPY    LCTL(KC_C)                            //STRG + C
#define PASTE   LCTL(KC_V)                            //STRG + V

#define WD_LEFT     LGUI(LCTL(KC_LEFT))               //Windows + ALT + Links
#define WD_RIGHT     LGUI(LCTL(KC_RGHT))              //Windows + ALT + Links

#define ALG_TAB  ALGR(KC_TAB)                          //ALT GR + TAB


#define LSFTD     LSFT_T(KC_D)	                     //Left Shift when held, D when tapped
#define RSFTK     RSFT_T(KC_K)	                     //Right Shift when held, K when tapped
#define LSTRF     LCTL_T(KC_F)                        //Left Control when held, F when tapped
#define RSTRJ     RCTL_T(KC_J)                        //Right Control when held, J when tapped
#define LALTS     LALT_T(KC_S)                        //Left Alt when held, S when tapped
#define RALTL     RALT_T(KC_L)                        //Right Alt when held, L when tapped
#define LWINA     LGUI_T(KC_A)                        //Left GUI when held, A when tapped
#define RWINO     RGUI_T(KC_SCLN)                     //Right GUI when held, OE when tapped

#define L_MAIN    TO(_QWERTZ)                         //Toggle Layer QWERTZ
#define L_COD     TG(_CODING)                         //Toggle Layer CODING
#define L_NAV     TG(_NAV)                            //Toggle Layer NAV


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 
//  [_QWERTY] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //   KC_NAGR  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0   ,KC_NAMI ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //   KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,SYM_L   ,                          SYM_L   ,DE_Z    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //   KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,KC_LALT ,                         KC_RALT  ,KC_H    ,KC_J    ,KC_K    ,KC_L    ,KC_SCLN ,KC_QUOT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //   KC_LSFT ,DE_Y    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,COPY    ,PASTE   ,       XXXXXXX  ,XXXXXXX ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
  //   KC_LGUI ,KC_PPLS ,KC_END  ,ALG_TAB ,     KC_SPC      ,KC_LCTL  ,NAV_L  ,       KC_ENT   ,KC_BSPC ,    COD_L   ,     WD_LEFT  ,KC_DOWN ,KC_UP   ,WD_RIGHT 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  //),

  [_QWERTZ] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                                            XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T   ,XXXXXXX ,                          XXXXXXX ,DE_Z    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_LBRC ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX  ,LWINA  ,LALTS   ,LSFTD   ,LSTRF   ,KC_G    ,XXXXXXX ,                         XXXXXXX  ,KC_H    ,RSTRJ   ,RSFTK   ,RALTL   ,RWINO   ,KC_QUOT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,DE_Y    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,COPY    ,PASTE   ,       XXXXXXX  ,XXXXXXX ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_SLSH ,KC_RSFT ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     KC_SPC     ,KC_LSFT  ,XXXXXXX  ,      L_COD ,KC_ENT ,    KC_BSPC   ,     WD_LEFT  ,XXXXXXX ,XXXXXXX   ,WD_RIGHT 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_CODING] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     XXXXXXX ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,DE_AT   ,DE_LCBR ,DE_RCBR ,DE_LPRN ,DE_RPRN ,XXXXXXX ,                          XXXXXXX ,KC_PSLS ,KC_P7   ,KC_P8   ,KC_P9   ,KC_PMNS ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,DE_PIPE ,DE_PERC ,DE_SCLN ,DE_ASTR ,DE_UNDS ,KC_HASH ,                          XXXXXXX ,KC_PAST ,KC_P4   ,KC_P5   ,KC_P6   ,KC_PPLS ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,DE_LBRC ,DE_RBRC ,DE_DQUO ,DE_QUOT ,DE_QUES ,_______ ,_______ ,        XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_P1   ,KC_P2   ,KC_P3   ,KC_PENT ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     _______ ,    KC_LT   ,L_MAIN   ,        L_NAV ,_______ ,    _______   ,     KC_P0   ,KC_PDOT ,KC_PENT ,XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ), 

  [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,KC_MS_U ,XXXXXXX ,KC_WH_U ,XXXXXXX ,_______ ,                          _______ ,XXXXXXX ,KC_HOME ,KC_UP   ,KC_END  ,KC_PGUP ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_D ,XXXXXXX ,_______ ,                          _______ ,KC_DEL  ,KC_LEFT ,KC_DOWN ,KC_RIGHT,KC_PGDN ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______    ,_______   ,        _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     KC_BTN1 ,    KC_BTN2 ,L_MAIN  ,        _______ ,_______ ,    XXXXXXX ,     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX 
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

};
