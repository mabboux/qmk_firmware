/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
//#define MASTER_RIGHT
#define EE_HANDS
#define SERIAL_DEBUG
//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D2
#define SELECT_SOFT_SERIAL_SPEED 1
#define FORCED_SYNC_THROTTLE_MS 1000
#define SPLIT_USB_DETECT
#define SPLUT_USB_TIMEOUT 2500
#define COMBO_VARIABLE_LEN