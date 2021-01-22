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

/*
 * Modified 29 January 2018 by Justin Mattair
 *   for MattairTech boards (www.mattairtech.com)
 *
 * See README.md for documentation and pin mapping information
 */


#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
        // 0...3
        { NOT_A_PORT, 0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // XIN32
        { NOT_A_PORT, 0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // XIN32
        { NOT_A_PORT, 0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // 
        { NOT_A_PORT, 0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // 
        
        // 4..5 - EDBG - Serial1
        { PORTA, 4, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM|PIN_ATTR_TIMER), TCC0_CH6, No_ADC_Channel, EXTERNAL_INT_0, GCLK_CCL_NONE }, // TX: SERCOM0
        { PORTA, 5, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), TC0_CH1, No_ADC_Channel, EXTERNAL_INT_1, GCLK_CCL_NONE }, // RX: SERCOM0
        
        // 6..12 - Digital
        { NOT_A_PORT, 0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // 
        { PORTB, 7,     PIO_MULTI, (PER_ATTR_DRIVE_STD), (PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_6, GCLK_CCL_NONE }, 
        { PORTA, 8,     PIO_MULTI, PER_ATTR_DRIVE_STRONG, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_15, GCLK_CCL_NONE },
        { PORTA, 9,     PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_EXTINT), TC4_CH0, No_ADC_Channel, EXTERNAL_INT_14, GCLK_CCL_NONE },
        { PORTA, 13,    PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER|PIN_ATTR_EXTINT), TC1_CH1, No_ADC_Channel, EXTERNAL_INT_5, GCLK_CCL_NONE },
        { NOT_A_PORT, 0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // XIN
        { NOT_A_PORT, 0, PIO_NOT_A_PIN, PER_ATTR_NONE, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // XOUT
        
        // 13..14 - I2C
        { PORTA, 16, PIO_MULTI, (PER_ATTR_DRIVE_STRONG|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_8, GCLK_CCL_NONE }, // SDA
        { PORTA, 17, PIO_MULTI, (PER_ATTR_DRIVE_STD||PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), TC0_CH0, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SCL
        
        // 15...16 - LEDS
        { PORTA, 18, PIO_MULTI, (PER_ATTR_DRIVE_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), TC0_CH1, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // LED
        { PORTB, 19, PIO_MULTI, (PER_ATTR_DRIVE_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), TC2_CH0, ADC_Channel10, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // LED

        // 17..21 - Analog capable pins
        { PORTA,   6, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel6, EXTERNAL_INT_15, GCLK_CCL_NONE }, // QTButton/QTouch Connection
        { PORTA,  23, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel17, EXTERNAL_INT_NONE, GCLK_CCL_NONE },
        { PORTA,  24, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel16, EXTERNAL_INT_NONE, GCLK_CCL_NONE },
        { PORTA,  25, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DAC|PIN_ATTR_DIGITAL|PIN_ATTR_EXTINT), NOT_ON_TIMER, ADC_Channel7, EXTERNAL_INT_2, GCLK_CCL_NONE },
        { PORTA,  27, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_REF|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel6, EXTERNAL_INT_NONE, GCLK_CCL_NONE },
        
        // 22 - Button
        { PORTA,  28, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_8, GCLK_CCL_NONE }, // Button
        
        // 23..26 - SPI
        { PORTB,  22, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, ADC_Channel11, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, //COPI
        { PORTB,  2, PIO_MULTI,  (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, ADC_Channel11, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // CIPO
        { PORTB,  23, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, ADC_Channel11, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SCK
        { PORTB,  3, PIO_MULTI,  PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // CS
        
        // 27..29 - USB_NEGATIVE and USB_POSITIVE
        { PORTA, 24, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DM
        { PORTA, 25, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/DP
        { PORTA, 15, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_15, GCLK_CCL_NONE }, // USB/ID
        
        // 30..31 Digital functions / Debug interface (SWD CLK and SWD IO)
        { PORTA, 30, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SWD CLK
        { PORTA, 31, PIO_MULTI, (PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SWD IO

        // 32..36 - RF SPI PINS 
        {PORTB, 31, PIO_OUTPUT,(PER_ATTR_OUTPUT_TYPE_STD), (PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // SEL 
        {PORTB, 30, PIO_SERCOM_RF, (PER_ATTR_OUTPUT_TYPE_STD|PER_TIMER_ALT), (PIN_ATTR_DIGITAL | PIN_ATTR_SERCOM), No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // MOSI SERCOM4 PAD2
        {PORTC, 19, PIO_SERCOM_RF, (PER_ATTR_OUTPUT_TYPE_STD|PER_TIMER_ALT), (PIN_ATTR_DIGITAL | PIN_ATTR_SERCOM), No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // MISO SERCOM4 PAD0
        {PORTC, 18, PIO_SERCOM_RF, (PER_ATTR_OUTPUT_TYPE_STD|PER_TIMER_ALT), (PIN_ATTR_DIGITAL | PIN_ATTR_SERCOM), No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // SCK  SERCOM4 PAD3
        {PORTB, 15, PIO_MULTI,  (PER_ATTR_OUTPUT_TYPE_STD), (PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // RST          
        
        // 37..42 - RF DIO PINS
        {PORTB, 16, PIO_MULTI,     PIN_ATTR_DIGITAL, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_0,  GCLK_CCL_NONE}, // DIO0
        {PORTA, 11, PIO_MULTI,     PIN_ATTR_DIGITAL, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_11, GCLK_CCL_NONE}, // DIO1
        {PORTA, 12, PIO_MULTI,     PIN_ATTR_DIGITAL, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_12, GCLK_CCL_NONE}, // DIO2
        {PORTB, 17, PIO_MULTI,     PIN_ATTR_DIGITAL, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_1,  GCLK_CCL_NONE}, // DIO3
        {PORTA, 10, PIO_MULTI,     PIN_ATTR_DIGITAL, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_10, GCLK_CCL_NONE}, // DIO4
        {PORTB,  0, PIO_MULTI,     PIN_ATTR_DIGITAL, PIN_ATTR_NONE, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_0,  GCLK_CCL_NONE}, // DIO5
        
        // 43..44 - RF OTHER 
        {PORTA, 9, PIO_MULTI,    (PIN_ATTR_DIGITAL), (PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // TCXO_PWR_PIN
        {PORTA, 13, PIO_MULTI,   (PIN_ATTR_DIGITAL), (PIN_ATTR_DIGITAL), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE}, // RF_SWITCH_PIN
} ;

const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC0, TC1, TC2, TC3, TC4 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ; // Serial1
SERCOM sercom1( SERCOM1 ) ; // I2C
SERCOM sercom2( SERCOM2 ) ; 
SERCOM sercom3( SERCOM3 ) ;
SERCOM sercom4( SERCOM4 ) ; // RESERVED FOR RF
SERCOM sercom5( SERCOM5 ) ; // SPI

Uart Serial1( SERCOM_INSTANCE_SERIAL1, PIN_SERIAL1_RX, PIN_SERIAL1_TX, PAD_SERIAL1_RX, PAD_SERIAL1_TX ) ;

void SERCOM0_Handler()  {
  Serial1.IrqHandler();
}