/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

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


#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
  // 0 - SERCOM1 - PA00 - TX and GPIO    ADC, DAC, IRQ, Captouch and general purpose pin - no timer
  { PORTA,  0, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_0, GCLK_CCL_NONE  }, // 

  // 1 - SERCOM1 - PA01 - RX and GPIO
  { PORTA,  1, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM), TCC2_CH1, No_ADC_Channel, EXTERNAL_INT_1, GCLK_CCL_NONE },  // TCC0/WO[0]

  // 2 - PA14 - interrupt and GPIO - no timer
  { PORTA, 14, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_14, GCLK_CCL_NONE }, //

  // 3 - PA23 - GPIO - no timer PWM
  { PORTA,  23, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_7, GCLK_CCL_NONE }, // 
  
  // 4 - PA22 -  GPIO 
  { PORTA,  22, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_6, GCLK_CCL_NONE }, //

  // 5 - PA15 - GPIO - PWM 
  { PORTA, 15, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_15, GCLK_CCL_NONE },
  
  // 6 - PA27 -  GPIO - PWM
  { PORTA, 27, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, 
  
  // 7 - PA28 -  GPIO 
  { PORTA, 28, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },

  // 8 - PA06 -  GPIO 
  { PORTA,  6, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_6, GCLK_CCL_NONE }, // 
  
  // 9 - PA07 -  GPIO - PWM
  { PORTA,  7, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), TCC1_CH0, No_ADC_Channel, EXTERNAL_INT_7, GCLK_CCL_NONE }, // TCC0/WO[1]

  // SPI SERCOM3
  // 10 - PA18 -  GPIO - PWM - SS(SPI) 
  { PORTA,  18, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PER_ATTR_SERCOM_ALT), TCC0_CH0, No_ADC_Channel, EXTERNAL_INT_2, GCLK_CCL_NONE },  // TCC0/WO[0]
  
  // 11 - PA16 -  GPIO - MOSI(SPI) 
  { PORTA, 16, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },

  // 12 - PA19 -  GPIO - MISO(SPI) 
  { PORTA, 19, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },

  // 13 - PA17 - GPIO - SCK(SPI) 
  { PORTA,  17, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM), TCC2_CH1, No_ADC_Channel, EXTERNAL_INT_1, GCLK_CCL_NONE }, // TCC0/WO[1]

  // USB
  // 14 - PA24 -  USB_M 
  { PORTA, 24, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DM
  // 15 - PA25 -  USB_P
  { PORTA, 25, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DP
  
  // SWCLK & SWDIO
  // 16 - PA30 -  SWCLK
  { PORTA, 30, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },
  // 17 - PA31 -  SWDIO
  { PORTA, 31, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },

  // Analogic and I2C
  // 18 - A0 - PA02 - GPIO
  { PORTA,  2, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel0, EXTERNAL_INT_2, GCLK_CCL_NONE }, // ADC/AIN[0]

  // 19 - A1 - PA04 - GPIO
  { PORTA,  4, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_SERCOM), TCC0_CH0, ADC_Channel4, EXTERNAL_INT_4, GCLK_CCL_NONE }, // ADC/AIN[0]

  // 20 - A2 - PA05 - GPIO 
  { PORTA,  5, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, ADC_Channel5, EXTERNAL_INT_5, GCLK_CCL_NONE }, // ADC/AIN[0]

  // 21 - A3 - PA10 - GPIO
  { PORTA,  10, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel18, EXTERNAL_INT_10, GCLK_CCL_NONE }, // ADC/AIN[0]

  // 22 - A4 - PA08 - SDA -  GPIO - SERCOM2
  { PORTA,  8, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, ADC_Channel16, EXTERNAL_INT_NMI, GCLK_CCL_NONE }, // ADC/AIN[0]
  
  // 23 - A5 - PA09 - SCL -  GPIO - SERCOM2
  { PORTA,  9, PIO_SERCOM, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_ADC|PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, ADC_Channel17, EXTERNAL_INT_9, GCLK_CCL_NONE }, // ADC/AIN[0]
  
  // 24 - LED - PA11 -  GPIO
  { PORTA,  11, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_11, GCLK_CCL_NONE }, // TCC0/WO[1]

} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;

Uart Serial1( &sercom1, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM1_Handler()
{
  Serial1.IrqHandler();
}
