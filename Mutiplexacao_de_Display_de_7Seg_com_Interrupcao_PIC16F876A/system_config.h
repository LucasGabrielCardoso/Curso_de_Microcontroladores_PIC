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
#ifndef SYSTEM_CONFIG_H
    #define	SYSTEM_CONFIG_H

#include <xc.h>

#define _XTAL_FREQ  4000000

//Seven Segments Disply Ports
#define DIGI_UNI_TRIS               TRISBbits.TRISB0
#define DIGI_UNI                    PORTBbits.RB0
#define DIGI_DEC_TRIS               TRISBbits.TRISB1
#define DIGI_DEC                    PORTBbits.RB1
#define DIGI_CEN_TRIS               TRISBbits.TRISB2
#define DIGI_CEN                    PORTBbits.RB2
#define DIGI_MIL_TRIS               TRISBbits.TRISB3
#define DIGI_MIL                    PORTBbits.RB3

#define DIGIT_TRIS                  TRISC
#define DIGIT                       PORTC

//Increase/Decriase bit flag
#define INCnDEC_TRIS                TRISBbits.TRISB4
#define INCnDEC                     PORTBbits.RB4

#endif	/* SYSTEM_CONFIG_H */

