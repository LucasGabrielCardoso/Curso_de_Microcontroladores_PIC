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

//Mapping Pull-Down Inputs
#define SWITCH2_TRIS                TRISAbits.TRISA0
#define SWITCH2                     PORTAbits.RA0
#define SWITCH1_TRIS                TRISAbits.TRISA1
#define SWITCH1                     PORTAbits.RA1

//Mappint LEDs' Pins
#define LED2_TRIS                   TRISAbits.TRISA2
#define LED2                        PORTAbits.RA2
#define LED1_TRIS                   TRISAbits.TRISA3
#define LED1                        PORTAbits.RA3

//Mapping DIPSWITCH Pins
#define IN4_TRIS                    TRISBbits.TRISB7
#define IN4                         PORTBbits.RB7
#define IN3_TRIS                    TRISBbits.TRISB6
#define IN3                         PORTBbits.RB6
#define IN2_TRIS                    TRISBbits.TRISB5
#define IN2                         PORTBbits.RB5
#define IN1_TRIS                    TRISBbits.TRISB4
#define IN1                         PORTBbits.RB4

#endif	/* SYSTEM_CONFIG_H_ */

