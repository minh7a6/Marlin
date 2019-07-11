/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
extern const PinName digitalPin[];

#define PA3   0
#define PA2   1
#define PA10  2
#define PB3   3
#define PB5   4
#define PB4   5
#define PB10  6
#define PA8   7
#define PA9   8
#define PC7   9
#define PB6   10
#define PA7   11 
#define PA6   12 
#define PA5   13 
#define PB9   14
#define PB8   15
#define PC10  16
#define PC12  17
#define PA15  18
#define PB7   19
#define PC13  20 
#define PC14  21 
#define PC15  22 
#define PC2   23 
#define PC3   24 
#define PC11  25
#define PD2   26
#define PC9   27
#define PC8   28
#define PC6   29
#define PC5   30 
#define PA12  31
#define PA11  32
#define PB12  33
#define PB2   34
#define PB1   35 
#define PB15  36
#define PB14  37
#define PB13  38
#define PC4   39 
#define PA0   40 // A0
#define PA1   41 // A1
#define PA4   42 // A2
#define PB0   43 // A3
#define PC1   44 // A4
#define PC0   45 // A5

// This must be a literal
#define NUM_DIGITAL_PINS        46
// This must be a literal with a value less than or equal to to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       6
#define NUM_ANALOG_FIRST        40
#define PWM_RESOLUTION          8
#define PWM_FREQUENCY           20000 // >= 20 Khz => inaudible noise for fans
#define PWM_MAX_DUTY_CYCLE      255

// On-board LED pin number
//#define LED_BUILTIN             PC13

// On-board user button
//#define BTN_K_UP                PD15

// SPI Definitions
#define PIN_SPI_MOSI            PB5
#define PIN_SPI_MISO            PB4
#define PIN_SPI_SCK             PB3
#define PIN_SPI_SS              PA15

// I2C Definitions
#define PIN_WIRE_SDA            PB9
#define PIN_WIRE_SCL            PB8
// On-board LED pin number
//#define LED_BUILTIN             13
//#define LED_LD2                 LED_BUILTIN
//#define LED_GREEN               LED_BUILTIN

// On-board user button
//#define USER_BTN                PC13

// Timer Definitions
// Do not use timer used by PWM pins when possible. See PinMap_PWM.
#define TIMER_TONE              TIM10

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

// UART Definitions
#define SERIAL_UART_INSTANCE    1 //Connected to ST-Link
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata

#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9
#define PIN_SERIAL2_TX          PA2
#define PIN_SERIAL2_RX          PA3
#define PIN_SERIAL6_TX          PC6
#define PIN_SERIAL6_RX          PC7
#define PIN_SERIALLP4_TX        PC10
#define PIN_SERIALLP4_RX        PC11
#define PIN_SERIALLP5_TX        PC12
#define PIN_SERIALLP5_RX        PD2

#define HAVE_HWSERIAL2
#define HAVE_HWSERIAL4
#define HAVE_HWSERIAL5
#define HAVE_HWSERIAL6

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
// These serial port names are intended to allow libraries and architecture-neutral
// sketches to automatically default to the correct port name for a particular type
// of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
// the first hardware serial port whose RX/TX pins are not dedicated to another use.
//
// SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
//
// SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
//
// SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
//
// SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
