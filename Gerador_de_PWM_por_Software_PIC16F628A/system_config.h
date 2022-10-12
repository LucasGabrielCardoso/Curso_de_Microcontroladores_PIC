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

//Mapping Buttons and Led Pins
#define BUTTON2_TRIS                    TRISAbits.TRISA0
#define BUTTON2                         PORTAbits.RA0
#define BUTTON1_TRIS                    TRISAbits.TRISA2
#define BUTTON1                         PORTAbits.RA1

#define LED2_TRIS                       TRISAbits.TRISA2
#define LED2                            PORTAbits.RA2
#define LED1_TRIS                       TRISAbits.TRISA3
#define LED1                            PORTAbits.RA3

#define SELECT_TRIS                     TRISBbits.TRISB0
#define SELECT                          PORTBbits.RB0

//Mapping PWM Pins
#define PWM3_TRIS                       TRISBbits.TRISB3
#define PWM3                            PORTBbits.RB3
#define PWM2_TRIS                       TRISBbits.TRISB2
#define PWM2                            PORTBbits.RB2
#define PWM1_TRIS                       TRISBbits.TRISB1
#define PWM1                            PORTBbits.RB1

#endif	/* SYSTEM_CONFIG_H_ */

