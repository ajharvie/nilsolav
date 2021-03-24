
/* Copyright 2021
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "quantum.h"
#define ___ KC_NO

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

/* how to do this numpad matrix layout
   * ,-------------------.  ,-----------------------------------------------------------.
   * | 50 | 51 | 52 | 53 |  | 00 | 01 | 02 | 03 | 04 | 05 | 06 | 07 | 08 | 09 | 0a | 0b |
   * |----|----|----|----|  |----|----|----|----|----|----|----|----|----|----|----|----|
   * | 54 | 55 | 56 |    |  | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 1a | 1b |
   * |----|----|----| 57 |  |----|----|----|----|----|----|----|----|----|----|----|----|
   * | 60 | 61 | 62 |    |  | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 2a | 2b |
   * |----|----|----|----|  |----|----|----|----|----|----|----|----|----|----|----|----|
   * | 63 | 64 | 65 |    |  | 30 | 31 | 32 | 33 | 34 | 35 | 36 | 37 | 38 | 39 | 3a | 3b |
   * |----|----|----| 66 |  |----|----|----|----|----|----|----|----|----|----|----|----|
   * | 67 | 68 | 69 |    |  | 40 | 41 | 42 | 43 | 44 |   46    | 47 | 48 | 49 | 4a | 4b |
   * `-------------------'  '-----------------------------------------------------------'
 */
#define LAYOUT( \
	k50, k51, k52, k53,    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b,\
	k54, k55, k56, k57,    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b,\
	k60, k61, k62,         k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b,\
	k63, k64, k65, k66,    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,\
	k67, k68, k69,         k40, k41, k42, k43, k44,    k46,   k47, k48, k49, k4a, k4b\
) \
{ \
	{k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b}, \
	{k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b}, \
	{k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b}, \
	{k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b}, \
	{k40, k41, k42, k43, k44, ___, k46, k47, k48, k49, k4a, k4b}, \
	{k50, k51, k52, k53, k54, k55, k56, k57, ___, ___, ___, ___}, \
	{k60, k61, k62, k63, k64, k65, k66, k67, k68, k69, ___, ___} \
}
