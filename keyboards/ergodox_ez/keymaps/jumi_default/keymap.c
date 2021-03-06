#include QMK_KEYBOARD_H
#include "version.h"

// Fillers to make layering clearer
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define KCRDP_TAB LALT(KC_PGUP)
#define KCRDP_WIN LALT(KC_HOME)
#define KCRDP_PSCR LALT(LCTL(KC_PPLS))
#define KCRDP_BRK LALT(LCTL(KC_BRK))

enum layers {
    L_COMMON = 0,
    L_WIN,
    L_MAC,
    L_QWERTY,
    L_FUNC,
    L_NAV,
    L_CONF,
};

//Tap Dance Declarations
enum taps {
  TD_LANG = 0
};

enum custom_keycodes {
    //--layers--
    // os(default layer)
    OS_TGL = SAFE_RANGE,
    DEF_IME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[L_COMMON] = LAYOUT_ergodox_pretty(
    // left hand
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       MO(L_CONF),     _______,    KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,
    KC_TAB,     _______,    _______,    _______,    _______,    _______,    _______,        KC_UP,      _______,    _______,    _______,    _______,    _______,    _______,
    MO(L_FUNC), _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    KC_LSFT,    _______,    _______,    _______,    _______,    _______,    KC_DELT,        KC_DOWN,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,                                                        KC_BSPC,    _______,    _______,    _______,    _______,

                                                                _______,    _______,        KC_LEFT,    KC_RGHT,
                                                                            _______,        _______,
                                                    KC_SPC,     _______,    _______,        MO(L_FUNC), _______,     KC_ENT
),

[L_WIN] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    MEH_T(KC_F2),   _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_F7,      KC_LGUI,    KC_LALT,    KC_LCTL,                                                        _______,    _______,    _______,    _______,    _______,

                                                                KC_APP,     KC_PSCR,        _______,    _______,
                                                                            KC_BRK,         _______,                                                                   
                                                    _______,    KC_MHEN,    DEF_IME,        _______,    KC_HENK,    _______
),

[L_MAC] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_F7,      KC_LCTL,    KC_LALT,    KC_LGUI,                                                        _______,    _______,    _______,    _______,    _______,

                                                                KC_APP,     _______,        _______,    _______,
                                                                            _______,        _______,
                                                    _______,    KC_LANG2,   _______,        _______,    KC_LANG1,    _______
),

[L_QWERTY] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    KC_SLSH,
    _______,    KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       _______,        _______,    KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_MINS,
    _______,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,                                   KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_RBRC,
    _______,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       _______,        _______,    KC_N,       KC_M,       KC_COMM,    KC_DOT,     KC_QUOT,    KC_BSLS,
    _______,    _______,    _______,    _______,    _______,                                _______,    KC_LBRC,    KC_EQL,     KC_JYEN,    KC_INT1,

                                                                _______,    _______,        _______,    _______,
                                                                            _______,        _______,
                                                    _______,    _______,    _______,        _______,    _______,    _______
),

[L_FUNC] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      _______,    _______,        KC_PGUP,    _______,    _______,    KC_P7,      KC_P8,      KC_P9,      KC_PSLS,
    _______,    KC_F5,      KC_F6,      KC_F7,      KC_F8,      _______,                                _______,    _______,    KC_P4,      KC_P5,      KC_P6,      KC_PAST,
    _______,    KC_F9,      KC_F10,     KC_F11,     KC_F12,     _______,    _______,        KC_PGDOWN,  _______,    _______,    KC_P1,      KC_P2,      KC_P3,      KC_PMNS,
    _______,    _______,    _______,    _______,    _______,                                                        _______,    KC_P0,      _______,    KC_PDOT,    KC_PPLS,

                                                                _______,    _______,        KC_HOME,    KC_END,
                                                                            _______,        _______,
                                                    _______,    _______,    _______,        _______,    _______,    _______
),

[L_NAV] = LAYOUT_ergodox_pretty(    
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    KC_UP,      _______,    _______,    _______,    _______,        KC_WH_U,    _______,    _______,    KC_MS_U,    _______,    _______,    _______,
    _______,    KC_LEFT,    KC_DOWN,    KC_RGHT,    _______,    _______,                                _______,    KC_MS_L,    KC_MS_D,    KC_MS_R,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        KC_WH_D,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,                                                        KC_MS_BTN2, _______,    _______,    _______,    _______,

                                                                _______,    _______,        KC_WH_L,    KC_WH_R,
                                                                            _______,        TO(L_QWERTY),
                                                    KC_MS_BTN1, KC_MS_BTN2, _______,        _______,    KC_MS_BTN1, KC_MS_BTN2
),
[L_CONF] = LAYOUT_ergodox_pretty(
    // left hand
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        OS_TGL,     _______,    _______,    _______,    _______,    _______,    RESET,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,                                _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,        _______,    _______,    _______,    _______,    _______,    _______,    _______,
    _______,    _______,    _______,    _______,    _______,                                                        _______,    _______,    _______,    _______,    _______,

                                                                _______,    _______,        _______,    _______,
                                                                            _______,        _______,
                                                    _______,    _______,    _______,        TO(L_NAV),  _______,    _______
)
};

void persistant_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
};

void type_code(uint8_t keycode){
    register_code (keycode);
    unregister_code (keycode);
};

void toggle_default_layer(void){
    switch(biton32(default_layer_state)) {
        case L_WIN:
            persistant_default_layer_set(1UL<<L_MAC);
            layer_move(L_QWERTY);
            break;
        case L_MAC:
            persistant_default_layer_set(1UL<<L_WIN);
            layer_move(L_QWERTY);
            break;
        default:
            // none
            break;
    }
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DEF_IME:
            if (record->event.pressed) {
                register_code (KC_LALT);
                register_code (KC_GRAVE);
            }
            else
            {
                unregister_code (KC_GRAVE);
                unregister_code (KC_LALT);
            }
            return false;
            break;

        //--layers--
        //os(default layer)
        case OS_TGL:
            if (record->event.pressed) {
                toggle_default_layer();
            }
            return false;
            break;
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();
    ergodox_right_led_1_on();
    ergodox_right_led_2_on();
    ergodox_right_led_3_on();
    ergodox_board_led_off();
    persistant_default_layer_set(1UL<<L_WIN);
    layer_move(L_QWERTY);
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    switch(biton32(default_layer_state)) {
        case L_WIN:
            ergodox_right_led_1_on();
            break;
        case L_MAC:
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }

    uint8_t layer = biton32(layer_state);

    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case L_FUNC:
            ergodox_right_led_2_on();
            break;
        case L_NAV:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case L_CONF:
            ergodox_led_all_on();
            break;
        default:
            // none
            break;
    }

};
