/***
 * Copyright (C) Rodolfo Herrera Hernandez. All rights reserved.
 * Licensed under the MIT license. See LICENSE file in the project root 
 * for full license information.
 *
 * =+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
 *
 * For related information - https://github.com/codewithrodi/ChittyOS/
 * 
 * = This project has been done for no profit and just to test 
 * = my knowledge and skills, no contributions or bug fixes are expected.
 *
 * =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
 ***/

#pragma once

#include "../Display/Display.h"
#include "../../Firmware/Port/Port.h"
#include "../../Firmware/ISR/ISR.h"
#include "../../Library/Type.h"

#define REG_KEYBOARD_DATA 0x60
#define REG_KEYBOARD_CMD 0x64
#define UNPRINTALBE_CHAR 0x0

typedef enum {
  KEY_VOID,
  KEY_DOWN_BACKTICK,
  KEY_DOWN_DASH,
  KEY_DOWN_EQUALS,
  KEY_DOWN_BACKSPACE,
  KEY_DOWN_TAB,
  KEY_DOWN_1,
  KEY_DOWN_2,
  KEY_DOWN_3,
  KEY_DOWN_4,
  KEY_DOWN_5,
  KEY_DOWN_6,
  KEY_DOWN_7,
  KEY_DOWN_8,
  KEY_DOWN_9,
  KEY_DOWN_0,
  KEY_DOWN_Q,
  KEY_DOWN_W,
  KEY_DOWN_E,
  KEY_DOWN_R,
  KEY_DOWN_T,
  KEY_DOWN_Y,
  KEY_DOWN_U,
  KEY_DOWN_I,
  KEY_DOWN_O,
  KEY_DOWN_P,
  KEY_DOWN_LEFT_SQUARE_BRACKET,
  KEY_DOWN_RIGHT_SQUARE_BRACKET,
  KEY_DOWN_ENTER,
  KEY_DOWN_CAPS_LOCK,
  KEY_DOWN_A,
  KEY_DOWN_S,
  KEY_DOWN_D,
  KEY_DOWN_F,
  KEY_DOWN_G,
  KEY_DOWN_H,
  KEY_DOWN_J,
  KEY_DOWN_K,
  KEY_DOWN_L,
  KEY_DOWN_SEMICOLON,
  KEY_DOWN_APOSTROPHE,
  KEY_DOWN_BACKSLASH,
  KEY_DOWN_LEFT_SHIFT,
  KEY_DOWN_SMALLER,
  KEY_DOWN_Z,
  KEY_DOWN_X,
  KEY_DOWN_C,
  KEY_DOWN_V,
  KEY_DOWN_B,
  KEY_DOWN_N,
  KEY_DOWN_M,
  KEY_DOWN_COMMA,
  KEY_DOWN_DOT,
  KEY_DOWN_FRONT_SLASH,
  KEY_DOWN_RIGHT_SHIFT,
  KEY_DOWN_LEFT_CTRL,
  KEY_DOWN_LEFT_SUPER,
  KEY_DOWN_LEFT_ALT,
  KEY_DOWN_SPACE,
  KEY_DOWN_RIGHT_ALT,
  KEY_DOWN_RIGHT_SUPER,
  KEY_DOWN_FN,
  KEY_DOWN_RIGHT_CTRL,
} KeyEvent;

char KeyboardInputCharacter();
void InitializeKeyboard();