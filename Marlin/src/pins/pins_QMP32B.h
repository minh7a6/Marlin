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
  #error "You must set ([XYZ]|E0)_DRIVER_TYPE to TMC2208 in Configuration.h for QMP32B."
#endif

#if ENABLED(ULTRA_LCD) && DISABLED(CR10_STOCKDISPLAY)
  #error "QMP32B only supports CR10 display"
#endif


#if HOTENDS > 1 || E_STEPPERS > 1
  #error "QMP32B only supports 1 hotend / E-stepper."
#endif

#define E2END 0x7FFF  // EEPROM end address (32kB)
#define I2C_EEPROM

#define USB_DFU //Enable DFU for uploading

#ifndef BOARD_NAME
  #define BOARD_NAME "QMP32B"
#endif

#define SERVO0_PIN          PA5

#define X_MIN_PIN          PA7
#define Y_MIN_PIN          PC4
#define Z_MIN_PIN          PC5

#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN  PC5
#endif

#define X_STEP_PIN         PC14
#define X_DIR_PIN          PC0
#define X_ENABLE_PIN       PC15

#define Y_STEP_PIN         PB7
#define Y_DIR_PIN          PC13
#define Y_ENABLE_PIN       PC15

#define Z_STEP_PIN         PC9
#define Z_DIR_PIN          PA8
#define Z_ENABLE_PIN       PC15

#define E0_STEP_PIN        PB15
#define E0_DIR_PIN         PC8
#define E0_ENABLE_PIN      PC15

#define X_HARDWARE_SERIAL  Serial2
#define Y_HARDWARE_SERIAL  Serial5
#define Z_HARDWARE_SERIAL  Serial4
#define E0_HARDWARE_SERIAL Serial6


#define TEMP_0_PIN          PC1   // Analog Input
#define TEMP_BED_PIN        PC2   // Analog Input

#define HEATER_0_PIN        PA1
#define HEATER_BED_PIN      PA0

#define FAN_PIN             PC3
#define FAN1_PIN            PA4

#define SDSS                PA15


#if ENABLED(ULTRA_LCD)

  #if ENABLED(NEWPANEL)

    #if ENABLED(CR10_STOCKDISPLAY)
      #define LCD_PINS_RS     PB1
      #define LCD_PINS_ENABLE PB0
      #define LCD_PINS_D4     PB2
      #define BTN_EN1         PB12
      #define BTN_EN2         PB10
      #define ST7920_DELAY_1 DELAY_NS(300)
      #define ST7920_DELAY_2 DELAY_NS(300)
      #define ST7920_DELAY_3 DELAY_NS(450)
    #endif

    #define BTN_ENC           PB13   
    #define BEEPER_PIN        PB14   
    #define SD_DETECT_PIN     PB6

  #endif // NEWPANEL
#endif // ULTRA_LCD