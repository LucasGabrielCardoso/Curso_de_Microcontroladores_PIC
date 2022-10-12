/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 17 de Novembro de 2021, 23:00
 */


#include "system.h"

void System_Initialize(void)
{
    //Putting unusable ports in tristate
    TRISA       =   0x00;
    TRISB       =   0x00;
    TRISC       =   0x00;
    
    //Unable comparators registers
    CMCONbits.CM    =   0b111;
    
    //Setting Display ports
    D7_TRIS     =   0b0;
    D7          =   0b0;
    D6_TRIS     =   0b0;
    D6          =   0b0;
    D5_TRIS     =   0b0;
    D5          =   0b0;
    D4_TRIS     =   0b0;
    D4          =   0b0;
    EN_TRIS     =   0b0;
    EN          =   0b0;
    RS_TRIS     =   0b0;
    RS          =   0b0;
    
    //Setting output Ports
    OUTPUT2_TRIS        =   0b0;
    OUTPUT2             =   0b0;
    OUTPUT1_TRIS        =   0b0;
    OUTPUT1             =   0b0;
    
    //Setting input Ports
    LOGICSTATE_TRS      =   0b1;
    LOGICSTATE          =   0b0;
    
    //Setting TMR1 Register
    T1CONbits.TMR1CS    =   0b1;
    T1CONbits.TMR1ON    =   0b1;
    TMR1H               =   0x00;
    TMR1L               =   0x00;
}
