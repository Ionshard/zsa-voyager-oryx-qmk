#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LALT, KC_A),MT(MOD_LGUI, KC_R),MT(MOD_LCTL, KC_S),LT(3,KC_T),     KC_G,                                           KC_K,           LT(5,KC_N),     MT(MOD_RCTL, KC_E),MT(MOD_RGUI, KC_I),MT(MOD_RALT, KC_O),KC_DELETE,      
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_M,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_MEH,         KC_LEFT,        KC_RIGHT,       KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_MEH,         
                                                    LT(2,KC_SPACE), LT(6,KC_BSPC),                                  LT(6,KC_TAB),   LT(2,KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(4,KC_T),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(LSFT(KC_LEFT_GUI)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LSFT(KC_LEFT_GUI)),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_CAPS,        KC_DLR,         KC_ASTR,        KC_PLUS,        KC_CIRC,                                        KC_TILD,        KC_LCBR,        KC_RCBR,        KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          KC_HASH,        KC_EXLM,        KC_MINUS,       KC_PERC,                                        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_QUOTE,       KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    KC_COLN,                                        KC_RABK,        KC_LBRC,        KC_RBRC,        KC_DQUO,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         KC_SCRL,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PSCR,        KC_PAUSE,       KC_INSERT,      KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, LCTL(LSFT(KC_4)),KC_NUM,         KC_SCRL,        KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PSCR,        KC_PAUSE,       KC_INSERT,      KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(LSFT(KC_5)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(KC_LEFT),  LALT(KC_DOWN),  LALT(KC_UP),    LALT(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL2,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL1,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,                                         KC_BSLS,        KC_7,           KC_8,           KC_9,           KC_ASTR,        TO(1),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_F11,                                         KC_DOT,         KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_ENTER,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F12,                                         KC_BSPC,        KC_1,           KC_2,           KC_3,           KC_PLUS,        KC_TAB,         
    QK_BOOT,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_0,           KC_0,           KC_EQUAL,       KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSPC,        
    KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_QUOTE,       KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
    KC_F21,         KC_F22,         KC_F23,         KC_LEFT_ALT,    KC_SPACE,       MO(8),                                          MO(8),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LT(9,KC_SPACE), LT(10,KC_BSPC),                                 LT(10,KC_TAB),  LT(9,KC_ENTER)
  ),
  [8] = LAYOUT_voyager(
    KC_GRAVE,       KC_7,           KC_8,           KC_9,           KC_MINUS,       KC_PLUS,                                        ST_MACRO_0,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_4,           KC_5,           KC_6,           KC_0,           KC_BSLS,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_1,           KC_2,           KC_3,           KC_LBRC,        KC_RBRC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_CAPS,        KC_PSCR,        KC_SCRL,        KC_PAUSE,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_voyager(
    KC_ESCAPE,      KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,                                        KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_SHIFT,  KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_voyager(
    KC_QUOTE,       KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_INSERT,                                      KC_KP_SLASH,    KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_ASTERISK, KC_TRANSPARENT, 
    KC_LEFT_ALT,    KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_PAGE_UP,                                     KC_KP_DOT,      KC_KP_4,        KC_KP_5,        KC_KP_6,        KC_KP_MINUS,    KC_KP_ENTER,    
    KC_LEFT_SHIFT,  KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_PGDN,                                        KC_BSPC,        KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_PLUS,     KC_TAB,         
    KC_LEFT_CTRL,   KC_LEFT_GUI,    KC_BSPC,        KC_END,         KC_HOME,        KC_DELETE,                                      KC_TRANSPARENT, KC_KP_0,        KC_KP_0,        KC_KP_EQUAL,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_Q, KC_W, KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_Q, KC_W, KC_E, KC_R, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(7)),
    COMBO(combo1, TO(0)),
};


extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255} },

    [1] = { {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255} },

    [2] = { {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248} },

    [3] = { {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {212,255,92}, {172,218,204}, {172,218,204}, {172,218,204}, {212,255,92}, {0,0,0}, {41,193,248}, {172,218,204}, {172,218,204}, {172,218,204}, {41,193,248}, {23,217,255}, {0,239,255}, {172,218,204}, {172,218,204}, {172,218,204}, {212,255,92}, {23,217,255}, {0,0,0}, {0,0,0}, {172,218,204}, {212,255,92}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {23,217,255}, {171,218,204}, {41,132,246}, {171,218,204}, {171,218,204}, {171,218,204}, {132,217,255}, {41,132,246}, {41,132,246}, {41,132,246}, {171,218,204}, {171,218,204}, {132,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {212,217,255}, {212,217,255}, {212,217,255}, {132,217,255}, {90,202,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {23,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {41,132,246}, {41,132,246}, {132,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {41,132,246}, {132,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {41,132,246}, {41,132,246}, {132,217,255}, {0,0,255}, {23,217,255}, {23,217,255}, {23,217,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {23,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {132,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {132,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {171,218,204}, {132,217,255}, {212,217,255}, {212,255,92}, {212,52,255}, {212,217,255}, {23,217,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {212,52,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {212,217,255}, {212,255,92}, {212,217,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {23,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {172,145,254}, {212,217,255}, {132,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {172,145,254}, {41,132,246}, {132,217,255}, {171,218,204}, {171,218,204}, {171,218,204}, {172,145,254}, {41,132,246}, {132,217,255}, {132,217,255}, {0,239,255}, {41,132,246}, {41,132,246}, {212,217,255}, {0,0,0}, {0,0,0}, {212,255,92}, {132,217,255}, {132,217,255}, {132,217,255}, {212,255,92}, {0,0,0}, {41,193,248}, {132,217,255}, {132,217,255}, {132,217,255}, {41,193,248}, {23,217,255}, {0,239,255}, {132,217,255}, {132,217,255}, {132,217,255}, {212,255,92}, {23,217,255}, {0,0,0}, {0,0,0}, {132,217,255}, {212,255,92}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F3));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[3];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PIPE);
        tap_code16(KC_PIPE);
        tap_code16(KC_PIPE);
    }
    if(state->count > 3) {
        tap_code16(KC_PIPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_PIPE); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: register_code16(KC_PIPE); register_code16(KC_PIPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PIPE); register_code16(KC_PIPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_PIPE); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(KC_PIPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PIPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AMPR);
        tap_code16(KC_AMPR);
        tap_code16(KC_AMPR);
    }
    if(state->count > 3) {
        tap_code16(KC_AMPR);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_AMPR); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: register_code16(KC_AMPR); register_code16(KC_AMPR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AMPR); register_code16(KC_AMPR);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_AMPR); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(KC_AMPR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AMPR); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UNDS);
        tap_code16(KC_UNDS);
        tap_code16(KC_UNDS);
    }
    if(state->count > 3) {
        tap_code16(KC_UNDS);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_UNDS); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_UNDS); register_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UNDS); register_code16(KC_UNDS);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_UNDS); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UNDS); break;
    }
    dance_state[2].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
};
