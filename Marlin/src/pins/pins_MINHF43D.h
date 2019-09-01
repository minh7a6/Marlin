/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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

#pragma once

#if !defined(STM32F4) && !defined(STM32F4xx)
  #error "Oops! Select an STM32F4 board in 'Tools > Board.'"
#endif

#if !AXIS_DRIVER_TYPE_X(TMC2208) || !AXIS_DRIVER_TYPE_Y(TMC2208) || !AXIS_DRIVER_TYPE_Z(TMC2208) || !AXIS_DRIVER_TYPE_E0(TMC2208)
  #error "You must set ([XYZ]|E0|E1)_DRIVER_TYPE to TMC2208 in Configuration.h for MINHF43D."
#endif

#define E2END 0x7FFF  // EEPROM end address (32kB)
#define I2C_EEPROM

#ifndef BOARD_NAME
  #define BOARD_NAME "MINHF43D"
#endif

#define SERVO0_PIN          PD14
#define SERVO1_PIN          PD13
#define SERVO2_PIN          PD12
#ifndef SERVO3_PIN          
  #define SERVO3_PIN        PD11
#endif

#define X_MIN_PIN           PE14
#ifndef X_MAX_PIN
  #define X_MAX_PIN         PE15
#endif
#define Y_MIN_PIN          PE12
#define Y_MAX_PIN          PE13
#define Z_MIN_PIN          PE10
#define Z_MAX_PIN          PE11

#define X_STEP_PIN         PA0
#define X_DIR_PIN          PA1
#define X_ENABLE_PIN       PC3

#define Y_STEP_PIN         PD1
#define Y_DIR_PIN          PD0
#define Y_ENABLE_PIN       PD3

#define Z_STEP_PIN         PA11
#define Z_DIR_PIN          PA8
#define Z_ENABLE_PIN       PA12

#define E0_STEP_PIN        PC8
#define E0_DIR_PIN         PD15
#define E0_ENABLE_PIN      PC9

#define X_HARDWARE_SERIAL  Serial2
#define Y_HARDWARE_SERIAL  Serial5
#define Z_HARDWARE_SERIAL  Serial4
#define E0_HARDWARE_SERIAL Serial6


#define TEMP_0_PIN          PC0   // Analog Input
#define TEMP_1_PIN          PC1   // Analog Input
#define TEMP_BED_PIN        PC2   // Analog Input

#define HEATER_0_PIN        PA5
#define HEATER_BED_PIN      PA6

#ifndef FAN_PIN
  #define FAN_PIN           PA4
#endif

#ifndef FAN1_PIN
  #define FAN1_PIN          PE9
#endif

#define SDSS               PA15
#define LED_PIN            PC13      

#if ENABLED(ULTRA_LCD)

  #define KILL_PIN         PD7

  #if ENABLED(NEWPANEL)

    #if ENABLED(CR10_STOCKDISPLAY)
      #define LCD_PINS_RS     PE4
      #define LCD_PINS_ENABLE PE5
      #define LCD_PINS_D4     PE3
      #define BTN_EN1         PE0
      #define BTN_EN2         PE2
    #else
      #define LCD_PINS_RS     PE1
      #define LCD_PINS_ENABLE PE0
      #define LCD_PINS_D4     PE2
      #define LCD_PINS_D5     PE3
      #define LCD_PINS_D6     PE4
      #define LCD_PINS_D7     PE5
      #define BTN_EN1         PD5
      #define BTN_EN2         PD4
    #endif

    #define BTN_ENC           PB9   
    #define BEEPER_PIN        PB8   
    #define SD_DETECT_PIN     -1

  #endif // NEWPANEL
#endif // ULTRA_LCD