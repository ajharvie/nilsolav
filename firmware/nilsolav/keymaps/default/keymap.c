#include QMK_KEYBOARD_H
extern keymap_config_t keymap_config;

//TODO show correct keymap. also write a good keymap lel



// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layers {
  BL = 0,
  NAV,
  LWR,
  RSE,
  ADJ
};

enum custom_keycodes {
  KC_DBL0 = SAFE_RANGE,
};

// Tap Dance declarations
enum {
    TD_NLK_LYR,
	TD_INS_LYR,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for numlock, twice for new layer
    [TD_NLK_LYR] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_NLCK, NAV),
	// Tap once for insert, twice for base layer
	[TD_INS_LYR] = ACTION_TAP_DANCE_LAYER_TOGGLE(KC_INS, NAV),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap _BL: (Base Layer) Default Layer
   * ,-----------------------.  ,-----------------------------------------------------------------------.
   * | nlk |  /  |  *  |  -  |  |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | del |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  7  |  8  |  9  |     |  | tab |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  | bs  |
   * |-----|-----|-----|  +  |  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  4  |  5  |  6  |     |  | esc |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  1  |  2  |  3  |     |  |shift|  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |enter|
   * |-----|-----|-----| ENT |  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  0  | 00  |  .  |     |  | ctrl| fn  | win | alt | lwr |   space   | rse |left |down |  up |right|
   * `-----------------------'  '-----------------------------------------------------------------------'
   * *double tap to toggle to NAV layer
 */
  [BL] = LAYOUT(
    TD(TD_NLK_LYR), KC_PSLS,  KC_PAST,   KC_PMNS,     KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL, \
    KC_P7,          KC_P8,    KC_P9,     KC_PPLS,     KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC, \
    KC_P4,          KC_P5,    KC_P6,                  KC_ESC,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT, \
    KC_P1,          KC_P2,    KC_P3,     KC_PENT,     KC_LSFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_ENT , \
    KC_P0,          KC_DBL0,  KC_PDOT,                KC_LCTL,  MO(ADJ),KC_LGUI,KC_LALT,MO(LWR),    KC_SPC,    MO(RSE), KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT \
	),
	
	/* Keymap NAV: Same as default layer, but numpad is now a NAV cluster
   * ,-----------------------.  ,-----------------------------------------------------------------------.
   * | INS*|home |pgup |     |  |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | del |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * | del | end |pgdn |     |  | tab |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  | bs  |
   * |-----|-----|-----|     |  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |     |     |     |     |  | esc |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |     | up  |     |     |  |shift|  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |enter|
   * |-----|-----|-----|     |  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |left |down |right|     |  | ctrl| fn  | win | alt | lwr |   space   | rse |left |down |  up |right|
   * `-----------------------'  '-----------------------------------------------------------------------'
   * *double tap to toggle to base layer
 */
  [NAV] = LAYOUT(
    TD(TD_INS_LYR), KC_HOME,  KC_PGUP,   _______,     KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL, \
    KC_DEL,         KC_END,   KC_PGDN,   _______,     KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC, \
    KC_NO,          KC_NO,    KC_NO,                  KC_ESC,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT, \
    KC_NO,          KC_UP,    KC_NO,     _______,     KC_LSFT,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_ENT , \
    KC_LEFT,        KC_DOWN,  KC_RGHT,                KC_LCTL,  MO(ADJ),KC_LGUI,KC_LALT,MO(LWR),    KC_SPC,    MO(RSE), KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT \
	),

/* Keymap LWR: LOWER
   * ,-----------------------.  ,-----------------------------------------------------------------------.
   * | nlk |  /  |  *  |  -  |  |  ~  |  !  |  "  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  |     |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  7  |  8  |  9  |     |  |  ~  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  [  |  ]  |     |
   * |-----|-----|-----|  +  |  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  4  |  5  |  6  |     |  |     |     |     |     |     |     |     |     |     |  {  |  }  |  @  |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  1  |  2  |  3  |     |  |shift|     |     |     |     |  -  |  =  |     |home | end |  \  |     |
   * |-----|-----|-----| ENT |  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  0  | 00  |  .  |     |  |     |     |     |     |     |           |     |next |vold |volu |play |
   * `-----------------------'  '-----------------------------------------------------------------------'
 */
  [LWR] = LAYOUT(
    KC_NLCK,  KC_PSLS,  KC_PAST,   KC_PMNS,     KC_TILD,  KC_EXLM, KC_DQUO, KC_NUHS, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
    KC_P7,    KC_P8,    KC_P9,     KC_PPLS,     KC_TILD,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, _______, \
    KC_P4,    KC_P5,    KC_P6,                  _______,  _______, _______, _______, _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, KC_AT, \
    KC_P1,    KC_P2,    KC_P3,     KC_PENT,     KC_LSFT,  _______, _______, _______, _______, KC_MINS, KC_EQL,  _______, KC_HOME, KC_END,  KC_NUBS, _______, \
    KC_P0,    KC_DBL0,  KC_PDOT,                _______,  _______, _______, _______, _______,     _______,      _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY \
	),
  
  /* Keymap RSE: RAISE
   * ,-----------------------.  ,-----------------------------------------------------------------------.
   * | nlk |  /  |  *  |  -  |  |  ~  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | BS  |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  7  |  8  |  9  |  +  |  |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  {  |  }  | DEL |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  4  |  5  |  6  |     |  |     |     |     |     |     |     |     |     |     |  [  |  ]  |  @  |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  1  |  2  |  3  | ENT |  |CAPS |     |     |     |     |  _  |  +  |     | pgdn| pgup|\(us)|enter|
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  0  | 00  |  .  |     |  |     |     |     |     |     |           |     |next |vold |volu |play |
   * `-----------------------'  '-----------------------------------------------------------------------'
 */
  [RSE] = LAYOUT(
    KC_NLCK,  KC_PSLS,  KC_PAST,   KC_PMNS,     KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,       KC_0,      KC_BSPC, \
    KC_P7,    KC_P8,    KC_P9,     KC_PPLS,     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_LCBR,    KC_RCBR,   KC_DEL,  \
    KC_P4,    KC_P5,    KC_P6,                  _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC,    KC_RBRC,   KC_AT, \
    KC_P1,    KC_P2,    KC_P3,     KC_PENT,     KC_CAPS, _______, _______, _______, _______, KC_UNDS, KC_PLUS, _______, KC_PGDN, KC_PGUP,    KC_BSLS,   _______, \
    KC_P0,    KC_DBL0,  KC_PDOT,                _______, _______, _______, _______, _______,     _______,      _______, KC_MNXT, KC_VOLD,    KC_VOLU,   KC_MPLY \
  ),

/* Keymap ADJ: Function Layer
   * ,-----------------------.  ,-----------------------------------------------------------------------.
   * | nlk |  /  |  *  |  -  |  | F12 | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  7  |  8  |  9  |  +  |  |     | rst |     |     |     |     |     | ins |     |     |PSCR | DEL |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  4  |  5  |  6  |     |  |     |     |     |     |     |     |     |     |     |     |     |     |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  1  |  2  |  3  | ENT |  |CAPS |     |     |     |     |     |     |     |     |     |     |     |
   * |-----|-----|-----|-----|  |-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|-----|
   * |  0  | 00  |  .  |     |  |     |     |     |     |     |           |     |next |vold |volu |play |
   * `-----------------------'  '-----------------------------------------------------------------------'
 */
  [ADJ] = LAYOUT(
    KC_NLCK,  KC_PSLS,  KC_PAST,   KC_PMNS,     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, \
    KC_P7,    KC_P8,    KC_P9,     KC_PPLS,     _______, RESET,   _______, _______, _______, _______, _______, KC_INS,  _______, _______, KC_PSCR, KC_DEL,  \
    KC_P4,    KC_P5,    KC_P6,                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_P1,    KC_P2,    KC_P3,     KC_PENT,     KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_P0,    KC_DBL0,  KC_PDOT,                _______, _______, _______, _______, _______,      _______,     _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_DBL0:
      if (record->event.pressed) {
        SEND_STRING("00");
      } else {
        // when keycode KC_DBL0 is released
      }
      break;

  }
  return true;
};

