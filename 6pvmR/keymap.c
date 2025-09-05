#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_CAPS,        KC_TRANSPARENT, KC_LBRC,        KC_RBRC,        KC_MS_BTN1,                                     KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_PSCR,        KC_DELETE,      
    KC_ESCAPE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_QUES,        
    CW_TOGG,        LT(1,KC_A),     MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),MT(MOD_LGUI, KC_G),                                MT(MOD_LGUI, KC_H),MT(MOD_LSFT, KC_J),MT(MOD_LCTL, KC_K),MT(MOD_LALT, KC_L),LT(1,KC_SCLN),  KC_QUOTE,
    UK_BSLS,        KC_Z,           KC_X,           KC_C,           KC_V,           MEH_T(KC_B),                                    MEH_T(KC_N),    KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_TRANSPARENT, 
                                                    LT(2,KC_SPACE), LT(5,KC_TAB),                                   LT(3,KC_BSPC),  LT(4,KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, UK_ASTR,        KC_LABK,        KC_RABK,        UK_BSLS,        KC_DOT,                                         UK_AMPR,        KC_DLR,         KC_LBRC,        KC_RBRC,        UK_PND,         KC_NO,          
    KC_ESCAPE,      KC_EXLM,        KC_MINUS,       KC_PLUS,        KC_EQUAL,       UK_HASH,                                        UK_PIPE,        UK_COLN,        KC_LPRN,        KC_RPRN,        UK_QUES,        UK_DQUO,        
    KC_NO,          UK_GRV,         KC_SLASH,       KC_ASTR,        UK_AT,          UK_CIRC,                                        UK_TILD,        UK_PERC,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, UK_UNDS,                                        KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_MINUS,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_GUI,                                    KC_0,           KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_SLASH,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_DOT,         QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F10,         KC_F11,         KC_F12,         LCTL(LSFT(KC_F12)),                                KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_ESCAPE,      KC_TRANSPARENT, KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_GUI,                                    KC_DELETE,      KC_F4,          KC_F5,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_0,                                     KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_PAUSE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_NO,                                          KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_INSERT,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_GUI,                                    KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_DELETE,      KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(KC_Z),     LCTL(KC_C),     LCTL(KC_X),     LCTL(KC_V),     KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,          KC_SCRL,        QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_BTN2,     KC_MS_BTN1,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_ACCEL1,   KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_LEFT_GUI,                                    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    KC_NO,                                          KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT, QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

/* Harper - Customised Chordal so that layer switches on thumbs not treated as opposite hands rule. Alt on left hand
 * too so snappier alt tab as on left hand */
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
            'L', 'L', 'L', 'L', 'L', 'L',                                 'R', 'R', 'R', 'R', 'R', 'R',
            'L', 'L', 'L', 'L', 'L', 'L',                                 'R', 'R', 'R', 'R', 'R', 'R',
            'L', 'L', '*', 'L', 'L', 'L',                                 'R', 'R', 'R', 'R', 'R', 'R',
            'L', 'L', 'L', 'L', 'L', 'L',                                 'R', 'R', 'R', 'R', 'R', 'R',
                                '*', '*',                                 '*', '*'
    );

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 100;
        case MT(MOD_LCTL, KC_D):
            return TAPPING_TERM + 100;
        case MT(MOD_LSFT, KC_F):
            return TAPPING_TERM -50;
        case LT(2, KC_SPACE):
            return TAPPING_TERM -50;
        case LT(5, KC_TAB):
            return TAPPING_TERM -50;
        case MT(MOD_LSFT, KC_J):
            return TAPPING_TERM -50;
        case MT(MOD_LCTL, KC_K):
            return TAPPING_TERM + 100;
        case MT(MOD_LALT, KC_L):
            return TAPPING_TERM + 100;
        case LT(3, KC_BSPC):
            return TAPPING_TERM -50;
        case LT(4, KC_ENTER):
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}

bool capslock_active = false;
bool scrolllock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  scrolllock_active = led_state.scroll_lock;
  return true;
}

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
    [0] = { {252,218,204}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {23,218,204}, {252,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {80,209,220}, {41,255,255}, {41,255,255}, {79,168,200}, {152,255,255}, {152,255,255}, {79,181,164}, {137,11,115}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {80,209,220}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {41,255,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {40,52,227}, {217,218,204}, {217,218,204}, {40,52,227}, {40,52,227}, {7,218,204}, {217,218,204}, {79,181,164}, {79,181,164}, {217,218,204}, {40,52,227}, {0,0,0}, {40,52,227}, {79,181,164}, {79,181,164}, {40,52,227}, {40,52,227}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {139,235,218}, {40,52,227}, {23,218,204}, {23,218,204}, {40,52,227}, {0,0,0}, {139,235,218}, {40,52,227}, {23,218,204}, {23,218,204}, {40,52,227}, {0,0,0}, {139,235,218}, {40,52,227}, {23,218,204}, {23,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {252,218,204}, {252,218,204}, {252,218,204}, {131,255,255}, {131,255,255}, {252,218,204}, {252,218,204}, {252,218,204}, {252,218,204}, {131,255,255}, {131,255,255}, {131,255,255}, {252,218,204}, {252,218,204}, {252,218,204}, {131,255,255}, {40,52,227}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {211,255,255}, {211,255,255}, {211,255,255}, {131,255,255}, {252,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {211,255,255}, {211,255,255}, {211,255,255}, {0,0,0}, {0,0,0}, {252,218,204}, {211,255,255}, {211,255,255}, {211,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {211,255,255}, {211,255,255}, {211,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {80,209,220}, {80,209,220}, {80,209,220}, {80,209,220}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {169,255,84}, {0,0,0}, {188,255,255}, {121,218,204}, {74,255,255}, {121,218,204}, {7,218,204}, {0,0,0}, {188,255,255}, {74,255,255}, {74,255,255}, {74,255,255}, {7,218,204}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {0,0,0}, {7,218,204}, {40,52,227}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {80,218,204}, {80,209,220}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {80,209,220}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {131,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {127,218,204}, {0,255,255}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {127,218,204}, {127,218,204}, {127,218,204}, {0,0,0}, {40,52,227}, {0,0,0}, {0,0,0} },

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

  if (capslock_active && biton32(layer_state) == 0) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 211, 255, 255 });
    rgb_matrix_set_color( 1, rgb.r, rgb.g, rgb.b );
  }
  if (scrolllock_active && biton32(layer_state) == 4) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 211, 255, 255 });
    rgb_matrix_set_color( 48, rgb.r, rgb.g, rgb.b );
  }
  return true;
}





bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_F1) ) SS_DELAY(100) SS_TAP(X_ENTER));
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
