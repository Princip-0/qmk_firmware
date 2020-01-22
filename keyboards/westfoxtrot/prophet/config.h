/*
Copyright 2019 REPLACE_WITH_YOUR_NAME

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
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x21FF
#define PRODUCT_ID      0xAA03
#define DEVICE_VER      0x0001
#define MANUFACTURER    westfoxtrot
#define PRODUCT         prophet
#define DESCRIPTION     QMK Firmware for the prophet PCB

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/*
 * Keyboard Matrix Assignments
*/
#define MATRIX_ROW_PINS { C13, B2, B1, A4, A3 }
#define MATRIX_COL_PINS { A6, A7, B0, A9, A8, A14, A15, B3, B4, B5, B8, B7, B6, B9 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
#define GRAVE_ESC_CTRL_OVERRIDE
