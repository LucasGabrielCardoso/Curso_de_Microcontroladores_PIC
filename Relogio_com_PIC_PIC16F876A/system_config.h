/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef SYSTEM_CONFIG_H_
    #define	SYSTEM_CONFIG_H_

// PIC16F876A Configuration Bit Settings
// 'C' source line config statements
// CONFIG
#pragma config FOSC         = HS        // Oscillator Selection bits (HS oscillator)
#pragma config WDTE         = OFF      // Watchdog Timer Enable bit (WDT enabled)
#pragma config PWRTE        = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN        = OFF      // Brown-out Reset Enable bit (BOR disabled)
#pragma config LVP          = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD          = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT          = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP           = OFF         // Flash Program Memory Code Protection bit (Code protection off)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#include <xc.h>

#define DIGI_UNI_TRIS           TRISBbits.TRISB0
#define DIGI_UNI                PORTBbits.RB0
#define DIGI_DEZ_TRIS           TRISBbits.TRISB1
#define DIGI_DEZ                PORTBbits.RB1
#define DIGI_CEN_TRIS           TRISBbits.TRISB2
#define DIGI_CEN                PORTBbits.RB2
#define DIGI_MIL_TRIS           TRISBbits.TRISB3
#define DIGI_MIL                PORTBbits.RB3
#define BOTAO_MIN_TRIS          TRISBbits.TRISB4
#define BOTAO_MIN               PORTBbits.RB4
#define BOTAO_HOR_TRIS          TRISBbits.TRISB5
#define BOTAO_HOR               PORTBbits.RB5

#define DIGITO_TRIS             TRISC
#define DIGITO                  PORTC

#define LED_TRIS                TRISBbits.TRISB7
#define LED                     PORTBbits.RB7

#endif	/* SYSTEM_CONFIG_H_ */

