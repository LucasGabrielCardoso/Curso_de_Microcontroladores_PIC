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

#include <xc.h>

#define _XTAL_FREQ 16000000

//Display Ports
#define D7          PORTBbits.RB7
#define D7_TRIS     TRISBbits.TRISB7
#define D6          PORTBbits.RB6
#define D6_TRIS     TRISBbits.TRISB6
#define D5          PORTBbits.RB5
#define D5_TRIS     TRISBbits.TRISB5
#define D4          PORTBbits.RB4
#define D4_TRIS     TRISBbits.TRISB4
#define EN          PORTBbits.RB3
#define EN_TRIS     TRISBbits.TRISB3
#define RS          PORTBbits.RB2
#define RS_TRIS     TRISBbits.TRISB2

//Output Ports
#define OUTPUT2         PORTCbits.RC5             
#define OUTPUT2_TRIS    TRISCbits.TRISC5
#define OUTPUT1         PORTCbits.RC4             
#define OUTPUT1_TRIS    TRISCbits.TRISC4

//Input Port
#define LOGICSTATE      PORTCbits.RC0
#define LOGICSTATE_TRS  TRISCbits.TRISC0

#endif	/* SYSTEM_CONFIG_H_ */

