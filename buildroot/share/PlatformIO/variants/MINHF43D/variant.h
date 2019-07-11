/*
 *******************************************************************************
 * Copyright (c) 2017, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

/*
 * This version created by Andrew W Symons (AWS), 19-Nov-18
 * for DIYMROE_STM32F407VGT board
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

/*------------------------------------------------------------------
 *        Headers
 *------------------------------------------------------------------*/
#include "PeripheralPins.h"

#ifdef __cplusplus
extern "C"{
#endif // __cplusplus

/*------------------------------------------------------------------
 *        Pins
 * Header pin numbers are numbered anticlockwise from the USB socket,
 * ... as in the schematic.
 * ... Right / Left / Top: oriented relative to USB socket at bottom
 *
 *------------------------------------------------------------------*/
extern const PinName digitalPin[];

// Header right (as viewed with USB socket at the bottom), numbered from bottom
#define PE3  0  // Header right, pin 1
#define PE2  1  // Header right, pin 2
#define PE5  2  // Header right, pin 3
#define PE4  3  // Header right, pin 4
#define PC13 4  // Header right, pin 5
#define PE6  5  // Header right, pin 6
                // Header right, pin 7 = GND
                // Header right, pin 8 = 3.3V
//#define PC1  6  // Header right, pin 9
//#define PC0  7  // Header right, pin 10
#define PA0  6  // Header right, pin 11
//#define PC2  9  // Header right, pin 12
#define PA2  7 // Header right, pin 13
#define PA1  8 // Header right, pin 14
#define PA3  9 // Header right, pin 15
#define PC3  10 // Header right, pin 16
#define PA5  11 // Header right, pin 17
#define PA4  12 // Header right, pin 18
#define PA7  13 // Header right, pin 19
#define PA6  14 // Header right, pin 20
#define PC5  15 // Header right, pin 21
#define PC4  16 // Header right, pin 22
#define PB1  17 // Header right, pin 23
#define PB0  18 // Header right, pin 24
#define PB9  19 // Header right, pin 25
#define PB8  20 // Header right, pin 26
#define PE7  21 // Header right, pin 27
#define PE1  22 // Header right, pin 28
#define PE9  23 // Header right, pin 29
#define PE8  24 // Header right, pin 30
#define PB2  25 // Header right, pin 31
#define PE10 26 // Header right, pin 32

// Header top (as viewed with USB socket at the bottom), numbered from right
#define PE11 27 // Header top, pin 1
#define PE12 28 // Header top, pin 2
#define PE13 29 // Header top, pin 3
#define PE14 30 // Header top, pin 4
#define PE15 31 // Header top, pin 5
#define PB10 32 // Header top, pin 6
#define PB11 33 // Header top, pin 7
                // Header top, pin 8 = GND
#define PB12 34 // Header top, pin 9
                // Header top, pin 10 = 3.3V
#define PB14 35 // Header top, pin 11
#define PB13 36 // Header top, pin 12
#define PD8  37 // Header top, pin 13
#define PB15 38 // Header top, pin 14
#define PD10 39 // Header top, pin 15
#define PD9  40 // Header top, pin 16
#define PD12 41 // Header top, pin 17
#define PD11 42 // Header top, pin 18
#define PD14 43 // Header top, pin 19
#define PD13 44 // Header top, pin 20
#define PC6  45 // Header top, pin 21
#define PD15 46 // Header top, pin 22
#define PC8  47 // Header top, pin 23
#define PC7  48 // Header top, pin 24

// Header left (as viewed with USB socket at the bottom), numbered from top
                // Header left, pin 1 = GND
                // Header left, pin 2 = Vcc (5V)
#define PA8  49 // Header left, pin 3
#define PC9  50 // Header left, pin 4
#define PA10 51 // Header left, pin 5
#define PA9  52 // Header left, pin 6
#define PA12 53 // Header left, pin 7 and USB_DP
#define PA11 54 // Header left, pin 8 and USB_DM
#define PA14 55 // Header left, pin 9
#define PA13 56 // Header left, pin 10
#define PC10 57 // Header left, pin 11
#define PA15 58 // Header left, pin 12
#define PC12 59 // Header left, pin 13
#define PC11 60 // Header left, pin 14
#define PD1  61 // Header left, pin 15
#define PD0  62 // Header left, pin 16
#define PD3  63 // Header left, pin 17
#define PD2  64 // Header left, pin 18
#define PD5  65 // Header left, pin 19
#define PD4  66 // Header left, pin 20
#define PD7  67 // Header left, pin 21
#define PD6  68 // Header left, pin 22
#define PB4  69 // Header left, pin 23
#define PB3  70 // Header left, pin 24
#define PB6  71 // Header left, pin 25
#define PB5  72 // Header left, pin 26
#define PE0  73 // Header left, pin 27
#define PB7  74 // Header left, pin 28
#define PC0  75
#define PC1  76
#define PC2  77

// This must be a literal
#define NUM_DIGITAL_PINS        78  // Number of definitions above

// This must be a literal with a value less than or equal to MAX_ANALOG_INPUTS
#define NUM_ANALOG_INPUTS       3
#define NUM_ANALOG_FIRST        75

#define PWM_RESOLUTION          8
#define PWM_FREQUENCY           20000 // >= 20 Khz => inaudible noise for fans
#define PWM_MAX_DUTY_CYCLE      255

// On-board LED pin number
#define LED_BUILTIN             PC13

// On-board user button
//#define BTN_K_UP                PD15

// SPI Definitions
#define PIN_SPI_MOSI            PB5
#define PIN_SPI_MISO            PB4
#define PIN_SPI_SCK             PB3
#define PIN_SPI_SS              PA15

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PB6

// Timer Definitions
//Do not use timer used by PWM pins when possible. See PinMap_PWM in PeripheralPins.c
#define TIMER_TONE              TIM6

// Do not use basic timer: OC is required
#define TIMER_SERVO             TIM2  //TODO: advanced-control timers don't work

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#define SERIAL_UART_INSTANCE    1 //ex: 2 for Serial2 (USART2)
// DEBUG_UART could be redefined to print on another instance than 'Serial'
//#define DEBUG_UART              ((USART_TypeDef *) U(S)ARTX) // ex: USART3
// DEBUG_UART baudrate, default: 9600 if not defined
//#define DEBUG_UART_BAUDRATE     x
// DEBUG_UART Tx pin name, default: the first one found in PinMap_UART_TX for DEBUG_UART
//#define DEBUG_PINNAME_TX        PX_n // PinName used for TX

// Default pin used for 'Serial1' instance
#define PIN_SERIAL_RX           PA10
#define PIN_SERIAL_TX           PA9
#define PIN_SERIAL2_TX          PA2
#define PIN_SERIAL2_RX          PA3
#define PIN_SERIAL3_TX          PB10
#define PIN_SERIAL3_RX          PB11
#define PIN_SERIAL6_TX          PC6
#define PIN_SERIAL6_RX          PC7
#define PIN_SERIALLP4_TX        PC10
#define PIN_SERIALLP4_RX        PC11
#define PIN_SERIALLP5_TX        PC12
#define PIN_SERIALLP5_RX        PD2

#define HAVE_HWSERIAL2
#define HAVE_HWSERIAL3
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
// SERIAL_PORT_HARDWARE       Hardware serial port.
//
// SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
//                            pins are NOT connected to anything by default.
#define SERIAL_PORT_MONITOR     Serial
#define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
