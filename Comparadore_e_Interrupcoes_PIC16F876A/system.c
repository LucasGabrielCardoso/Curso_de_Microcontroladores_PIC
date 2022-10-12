/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 11:33
 */


#include <xc.h>

void System_Initialize(void) 
{
    //Setting interrupts
    INTCONbits.GIE          =   0b1;        //Enable global interrupt
    INTCONbits.PEIE         =   0b1;        //Enable peripheral interrupt
    PIE2bits.CMIE           =   0b1;        //Enable comparator interrupt
    PIR2bits.CMIF           =   0b0;        //Cleaned comparator interrupt
    CMCON                   =   0x03;       //
    
    TRISA                   =   0x0F;       //Less significant nebble as input
    TRISBbits.TRISB0        =   0b0;         //RB0 like output port
}
