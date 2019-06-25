#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "keymap_steno.h"

#define BASE 0
#define SYMB 1
#define TXBOLT 2
#define TXBOLT2 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox(
    KC_DLR,KC_LBRACKET,KC_LCBR,KC_RCBR,KC_LPRN,KC_EQUAL,KC_AMPR,
    KC_TAB,KC_SCOLON,KC_COMMA,KC_DOT,KC_P,KC_Y,KC_ESCAPE,
    KC_LCTRL,KC_A,KC_O,KC_E,KC_U,KC_I,
    MO(SYMB),KC_QUOTE,KC_Q,KC_J,KC_K,KC_X,LCTL(KC_R),
    KC_LSHIFT,RESET,LGUI(LSFT(KC_5)),LGUI(LSFT(KC_4)),KC_LALT,

    LGUI(KC_C),LGUI(KC_V),
               LGUI(KC_X),
    KC_ENTER,KC_LGUI,LCTL(LGUI(KC_T)),


    KC_AT,KC_ASTR,KC_RPRN,KC_PLUS,KC_RBRACKET,KC_EXLM,KC_HASH,
    KC_BSPACE,KC_F,KC_G,KC_C,KC_R,KC_L,KC_SLASH,
    KC_D,KC_H,KC_T,KC_N,KC_S,KC_MINUS,
    KC_DELETE,KC_B,KC_M,KC_W,KC_V,KC_Z,MO(SYMB),
    KC_LEFT,KC_DOWN,KC_UP,KC_RIGHT,KC_BSLASH,

    TG(TXBOLT),LCTL(LGUI(KC_W)),
    LCTL(LGUI(KC_H)),
    LCTL(LGUI(KC_N)),KC_RGUI,KC_SPACE
),



[SYMB] = LAYOUT_ergodox(
    KC_TILD,KC_7,KC_5,KC_3,KC_1,KC_9,KC_PERC,
    LSFT(KC_TAB),KC_COLN,KC_LABK,KC_RABK,LSFT(KC_P),LSFT(KC_Y),LSFT(KC_ESCAPE),
    LSFT(KC_LCTRL),LSFT(KC_A),LSFT(KC_O),LSFT(KC_E),LSFT(KC_U),LSFT(KC_I),
    KC_TRANSPARENT,KC_DQUO,LSFT(KC_Q),LSFT(KC_J),LSFT(KC_K),LSFT(KC_X),KC_TRANSPARENT,
    KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,KC_TRANSPARENT,LSFT(KC_LALT),

    KC_TRANSPARENT,KC_TRANSPARENT,
                   KC_TRANSPARENT,
    LSFT(KC_ENTER),LSFT(KC_LGUI),KC_TRANSPARENT,
    
    
    KC_CIRC,KC_0,KC_2,KC_4,KC_6,KC_8,KC_GRAVE,
    LALT(KC_BSPACE),LSFT(KC_F),LSFT(KC_G),LSFT(KC_C),LSFT(KC_R),LSFT(KC_L),KC_QUES,
    LSFT(KC_D),LSFT(KC_H),LSFT(KC_T),LSFT(KC_N),LSFT(KC_S),KC_UNDS,
    LSFT(KC_DELETE),LSFT(KC_B),LSFT(KC_M),LSFT(KC_W),LSFT(KC_V),LSFT(KC_Z),KC_TRANSPARENT,
    LSFT(KC_LEFT),LSFT(KC_DOWN),LSFT(KC_UP),LSFT(KC_RIGHT),KC_PIPE,
    
    KC_TRANSPARENT,KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,LSFT(KC_RGUI),LSFT(KC_SPACE)
),



/* Keymap 3: TxBolt (Serial)
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * | BKSPC  |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   #  |   #  |   #  |   #  |   #  |      |           |      |   #  |   #  |   #  |   #  |   #  |   #    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   S  |   T  |   P  |   H  |   *  |------|           |------|   *  |   F  |   P  |   L  |   T  |   D    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   S  |   K  |   W  |   R  |   *  |      |           |      |   *  |   R  |   B  |   G  |   S  |   Z    |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |   A  |   O  |------|       |------|   E  |   U  |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[TXBOLT] = LAYOUT_ergodox(
    KC_BSPC, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  KC_NO,
    KC_NO,   STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1,
    KC_NO,   STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2, KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,

                                       KC_NO,   KC_NO,
                                                KC_NO,
                              STN_A,   STN_O,   KC_NO,


    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,
            STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
    KC_NO,   STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
                     KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,

    KC_TRNS, KC_NO,
    KC_NO,
    KC_NO,   STN_E,   STN_U
),



/* Keymap 4: TxBolt (Serial) Alternative
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |   #  |   #  |   #  |   #  |   #  |      |           |      |   #  |   #  |   #  |   #  |   #  |   #    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   S  |   T  |   P  |   H  |   *  |      |           |      |   *  |   F  |   P  |   L  |   T  |   D    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   S  |   K  |   W  |   R  |   *  |------|           |------|   *  |   R  |   B  |   G  |   S  |   Z    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |   A  |   O  |                                       |   E  |   U  |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[TXBOLT2] = LAYOUT_ergodox(
    KC_NO,   STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,  KC_NO,
    KC_NO,   STN_S1,  STN_TL,  STN_PL,  STN_HL,  STN_ST1, KC_NO,
    KC_NO,   STN_S2,  STN_KL,  STN_WL,  STN_RL,  STN_ST2,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   STN_A,   STN_O,

                                        KC_NO,   KC_NO,
                                                 KC_NO,
                               KC_NO,   KC_NO,   KC_NO,

    KC_NO,   STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NA,  STN_NB,
    KC_NO,   STN_ST3, STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
             STN_ST4, STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
                      STN_E,   STN_U,   KC_NO,   KC_NO,   KC_NO,

    KC_TRNS, KC_NO,
    KC_NO,
    KC_NO,   KC_NO,   KC_NO
),

};

// Runs just one time when the keyboard initializes
void matrix_init_user(void) {
    steno_set_mode(STENO_MODE_BOLT);
};

// Runs constantly in the background, in a loop
void matrix_scan_user(void) {
    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    switch (layer) {
        case TXBOLT:
        case TXBOLT2:
            ergodox_right_led_1_on();
            /* ergodox_right_led_2_on(); */
            /* ergodox_right_led_3_on(); */
            break;
        default:
            break;
    }
};
