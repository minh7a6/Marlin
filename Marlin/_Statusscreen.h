/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */

#define STATUS_LOGO_WIDTH 40
const unsigned char status_logo_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00, // ........................................
  0x00,0x00,0x0F,0x80,0x00, // ....................#####...............
  0x00,0x00,0x01,0xE0,0x00, // .......................####.............
  0x00,0x00,0x00,0x78,0x00, // .........................####...........
  0x00,0x01,0x00,0x1C,0x00, // ...............#...........###..........
  0x00,0x11,0x00,0x0E,0x00, // ...........#...#............###.........
  0x00,0x21,0x00,0x0E,0x00, // ..........#....#............###.........
  0x00,0x21,0xF1,0xE7,0x00, // ..........#....#####...####..###........
  0x00,0x61,0x93,0x33,0x00, // .........##....##..#..##..##..##........
  0x00,0x71,0x0A,0x03,0x00, // .........###...#....#.#.......##........
  0x00,0x71,0x0A,0x03,0x00, // .........###...#....#.#.......##........
  0x00,0x31,0x9B,0x03,0x00, // ..........##...##..##.##......##........
  0x00,0x39,0xF1,0xF3,0x00, // ..........###..#####...#####..##........
  0x00,0x3C,0x00,0x02,0x00, // ..........####................#.........
  0x00,0x1E,0x00,0x00,0x00, // ...........####.........................
  0x00,0x0F,0x00,0x00,0x00, // ............####........................
  0x00,0x03,0x80,0x00,0x00, // ..............###.......................
  0x00,0x00,0xF0,0x00,0x00, // ................####....................
  0x00,0x00,0x00,0x00,0x00  // ........................................
};


//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_ALT_BED_BITMAP
#define STATUS_ALT_FAN_BITMAP
#define STATUS_FAN_FRAMES 4

