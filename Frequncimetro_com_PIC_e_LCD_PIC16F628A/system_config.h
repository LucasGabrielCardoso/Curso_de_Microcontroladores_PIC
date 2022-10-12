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
#define _XTAL_FREQ  4000000

//Mapping Display Pins
#define RS_TRIS                 TRISBbits.TRISB0                     
#define RS                      PORTBbits.RB0                     
#define EN_TRIS                 TRISBbits.TRISB1                     
#define EN                      PORTBbits.RB1                     
#define D4_TRIS                 TRISBbits.TRISB4                     
#define D4                      PORTBbits.RB4                     
#define D5_TRIS                 TRISBbits.TRISB5                     
#define D5                      PORTBbits.RB5                     
#define D6_TRIS                 TRISBbits.TRISB6                     
#define D6                      PORTBbits.RB6                  
#define D7_TRIS                 TRISBbits.TRISB7                     
#define D7                      PORTBbits.RB7                     

//Mapping Capture Pins to Frequncimeter
#define CAPTURE_TRIS            TRISBbits.TRISB3                 
#define CAPTURE                 PORTBbits.RB3                

#endif	/* SYSTEM_CONFIG_H_ */

