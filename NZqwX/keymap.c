#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};



#define DUAL_FUNC_0 LT(4, KC_5)
#define DUAL_FUNC_1 LT(2, KC_5)
#define DUAL_FUNC_2 LT(5, KC_D)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LALT, KC_A),MT(MOD_LGUI, KC_R),MT(MOD_LCTL, KC_S),LT(3, KC_T),    KC_G,                                           KC_K,           LT(5, KC_N),    MT(MOD_RCTL, KC_E),MT(MOD_RGUI, KC_I),MT(MOD_RALT, KC_O),KC_DELETE,      
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_M,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_MEH,         KC_LEFT,        KC_RIGHT,       KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_ESCAPE,      KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_MEH,         
                                                    LT(2, KC_SPACE),LT(6, KC_BSPC),                                 LT(6, KC_TAB),  LT(2, KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LT(4, KC_T),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(LSFT(KC_LEFT_GUI)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LSFT(KC_LEFT_GUI)),
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_ESCAPE,      KC_CAPS,        KC_DLR,         KC_ASTR,        KC_PLUS,        KC_CIRC,                                        KC_TILD,        KC_LCBR,        KC_RCBR,        KC_GRAVE,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AT,          KC_HASH,        KC_EXLM,        KC_MINUS,       KC_PERC,                                        KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_QUOTE,       KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        DUAL_FUNC_0,    DUAL_FUNC_1,    DUAL_FUNC_2,    KC_COLN,                                        KC_RABK,        KC_LBRC,        KC_RBRC,        KC_DQUO,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_ENTER,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NUM,         KC_SCRL,        KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_GRAVE), KC_PAUSE,       KC_INSERT,      KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       CW_TOGG,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_TRANSPARENT, KC_TRANSPARENT, 
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
                                                    LT(9, KC_SPACE),LT(10, KC_BSPC),                                LT(10, KC_TAB), LT(9, KC_ENTER)
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

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R', 
  'L', 'L', 'R', 'R'
);

const uint16_t PROGMEM combo0[] = { KC_Q, KC_W, KC_F, KC_P, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_Q, KC_W, KC_E, KC_R, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(7)),
    COMBO(combo1, TO(0)),
};



extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255} },

    [1] = { {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {139,222,255}, {139,222,255}, {139,222,255}, {139,222,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255}, {206,103,255} },

    [2] = { {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248}, {90,248,248} },

    [3] = { {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,239,255}, {0,239,255}, {0,239,255}, {0,239,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
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
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_DOWN(X_F3)SS_DELAY(100)  SS_TAP(X_G)SS_UP(X_F3));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PIPE);
        } else {
          unregister_code16(KC_PIPE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_X));
        } else {
          unregister_code16(LCTL(KC_X));
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_AMPR);
        } else {
          unregister_code16(KC_AMPR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_C));
        } else {
          unregister_code16(LCTL(KC_C));
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_V));
        } else {
          unregister_code16(LCTL(KC_V));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

#define GAME 7

bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
  uint16_t other_keycode, keyrecord_t* other_record) {
  if (IS_LAYER_ON(GAME)) {
    return true;  // Allow all chords on the GAME layer, bypassing Chordal Hold.
  }

  switch (tap_hold_keycode) {
    // Allow shift when using the navigation layer
    case LT(3,KC_T):
    case LT(4,KC_T):
      if (other_keycode == KC_LEFT_SHIFT) {
        return true;
      }
      break;

    // Allow single handed copy/paste
    case LT(2,KC_SPACE):
      if (other_keycode == KC_X ||
          other_keycode == KC_C ||
          // Since Colemak-DH, this is actually V 
          other_keycode == KC_D) {
        return true;
      }
      break;
  }
    
  // Otherwise defer to the opposite hands rule.
  return get_chordal_hold_default(tap_hold_record, other_record);
}
