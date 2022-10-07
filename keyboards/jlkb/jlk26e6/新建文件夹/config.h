#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6004
#define DEVICE_VER      0x0002
#define MANUFACTURER    JL_K26E6



/* 层数 */
#  define DYNAMIC_KEYMAP_LAYER_COUNT 16

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 8
 
 /* 层指示灯 */
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_LAYER_BLINK

/* key matrix pins */
#define MATRIX_ROW_PINS {  B13,B15,A10,B4,B0,B8,A15,0}
#define MATRIX_COL_PINS {  B12,B14,A8,B3,B5,A5,0,0}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* 编码器 */
#define ENCODERS_PAD_A { B10, B10 , A6, A4, A2, A0, C14 }
#define ENCODERS_PAD_B { B1 , A7, A7, A3, A1, C15, C13 }
#define ENCODER_RESOLUTIONS {4, 4, 4, 4, 4, 4, 2}
#ifdef ENCODER_TRIGGER_ENABLE
#define ENCODER_PAD_A_KEY_POS {6, 0}, {6, 2}, {6, 4}, {1, 7}, {3, 7}, {5, 7}, {1, 4}
#define ENCODER_PAD_B_KEY_POS {6, 1}, {6, 3}, {6, 5}, {2, 7}, {4, 7}, {6, 7}, {2, 4}
#endif
/* 编码器01 */
#define ENCODER_DEFAULT_POS 0x3

/* 指示灯 */
/* #define LED_CAPS_LOCK_PIN B10
#define LED_NUM_LOCK_PIN C13
#define LED_SCROLL_LOCK_PIN B1
#define LED_PIN_ON_STATE 0  指示灯 LED“亮”时指示灯引脚的状态 -1高电平，0低电平*/

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 3
#endif

/* Set 0 if debouncing isn't needed */
/* #define DEBOUNCING_DELAY 5 */

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
/* #define PREVENT_STUCK_MODIFIERS */


#define RGB_DI_PIN B9
#ifdef RGB_DI_PIN 
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 16
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

