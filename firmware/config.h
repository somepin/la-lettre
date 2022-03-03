/* Copyright 2022 somepin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7370
#define PRODUCT_ID      0x6C6C
#define DEVICE_VER      0x0001
#define MANUFACTURER    somepin
#define PRODUCT         La Lettre

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 10

#define DIODE_DIRECTION COL2ROW

#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, B1, F7, F6, F5, F4 }
#define MATRIX_ROW_PINS { E6, B4, B3, B2 }
#define UNUSED_PINS

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5
