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

#include "variant.h"

#ifdef __cplusplus
extern "C" {
#endif

// Pin number
const PinName digitalPin[] = {
  PE_3,  //  0 Header right, pin 1
  PE_2,  //  1 Header right, pin 2
  PE_5,  //  2 Header right, pin 3
  PE_4,  //  3 Header right, pin 4
  PC_13, //  4 Header right, pin 5
  PE_6,  //  5 Header right, pin 6
         // -- Header right, pin 7 = GND
         // -- Header right, pin 8 = 3.3V
  PA_0,  //  6 Header right, pin 11
  PA_2,  // 7 Header right, pin 13
  PA_1,  // 8 Header right, pin 14
  PA_3,  // 9 Header right, pin 15
  PC_3,  // 10 Header right, pin 16
  PA_5,  // 11 Header right, pin 17
  PA_4,  // 12 Header right, pin 18
  PA_7,  // 13 Header right, pin 19
  PA_6,  // 14 Header right, pin 20
  PC_5,  // 15 Header right, pin 21
  PC_4,  // 16 Header right, pin 22
  PB_1,  // 17 Header right, pin 23
  PB_0,  // 18 Header right, pin 24
  PB_9,  // 19 Header right, pin 25
  PB_8,  // 20 Header right, pin 26
  PE_7,  // 21 Header right, pin 27
  PE_1,  // 22 Header right, pin 28
  PE_9,  // 23 Header right, pin 29
  PE_8,  // 24 Header right, pin 30
  PB_2,  // 25 Header right, pin 31
  PE_10, // 26 Header right, pin 32

// The final four headers in the right hand side are for BOOT0 and BOOT1 jumpers;
// ... They are not numbered as headers on the schematic

// Header top (as viewed with USB socket at the bottom), numbered from right
  PE_11, // 27 Header top, pin 1
  PE_12, // 28 Header top, pin 2
  PE_13, // 29 Header top, pin 3
  PE_14, // 30 Header top, pin 4
  PE_15, // 31 Header top, pin 5
  PB_10, // 32 Header top, pin 6
  PB_11, // 33 Header top, pin 7
         // -- Header top, pin 8 = GND
  PB_12, // 34 Header top, pin 9
         // -- Header top, pin 10 = 3.3V
  PB_14, // 35 Header top, pin 11
  PB_13, // 36 Header top, pin 12
  PD_8,  // 37 Header top, pin 13
  PB_15, // 38 Header top, pin 14
  PD_10, // 39 Header top, pin 15
  PD_9,  // 40 Header top, pin 16
  PD_12, // 41 Header top, pin 17
  PD_11, // 42 Header top, pin 18
  PD_14, // 43 Header top, pin 19
  PD_13, // 44 Header top, pin 20
  PC_6,  // 45 Header top, pin 21
  PD_15, // 46 Header top, pin 22
  PC_8,  // 47 Header top, pin 23
  PC_7,  // 48 Header top, pin 24

// Header left (as viewed with UBS coket at the bottom), numbered from top
         // -- Header left, pin 1 = GND
         // -- Header left, pin 2 = Vcc (5V)
  PA_8,  // 49 Header left, pin 3
  PC_9,  // 50 Header left, pin 4
  PA_10, // 51 Header left, pin 5
  PA_9,  // 52 Header left, pin 6
  PA_12, // 53 Header left, pin 7 and USB_DP
  PA_11, // 54 Header left, pin 8 and USB_DM
  PA_14, // 55 Header left, pin 9
  PA_13, // 56 Header left, pin 10
  PC_10, // 57 Header left, pin 11
  PA_15, // 58 Header left, pin 12
  PC_12, // 59 Header left, pin 13
  PC_11, // 60 Header left, pin 14
  PD_1,  // 61 Header left, pin 15
  PD_0,  // 62 Header left, pin 16
  PD_3,  // 63 Header left, pin 17
  PD_2,  // 64 Header left, pin 18
  PD_5,  // 65 Header left, pin 19
  PD_4,  // 66 Header left, pin 20
  PD_7,  // 67 Header left, pin 21
  PD_6,  // 68 Header left, pin 22
  PB_4,  // 69 Header left, pin 23
  PB_3,  // 70 Header left, pin 24
  PB_6,  // 71 Header left, pin 25
  PB_5,  // 72 Header left, pin 26
  PE_0,  // 73 Header left, pin 27 and LED_BUILTIN
  PB_7,  // 74 Header left, pin 28
// Duplicated pins in order to be aligned with PinMap_ADC
  PC_0,  // 75/A10
  PC_1,  // 76/A11
  PC_2,  // 77/A12
};

#ifdef __cplusplus
}
#endif

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct;
  RCC_ClkInitTypeDef RCC_ClkInitStruct;

  /**Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    _Error_Handler(__FILE__, __LINE__);
  }

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
    _Error_Handler(__FILE__, __LINE__);
  }

  /**Configure the Systick interrupt time
  */
  HAL_SYSTICK_Config(HAL_RCC_GetHCLKFreq() / 1000);

  /**Configure the Systick
  */
  HAL_SYSTICK_CLKSourceConfig(SYSTICK_CLKSOURCE_HCLK);

  /* SysTick_IRQn interrupt configuration */
  HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
}

#ifdef __cplusplus
}
#endif
