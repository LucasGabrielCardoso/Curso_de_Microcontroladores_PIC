/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 18 de Novembro de 2021, 17:51
 */


#include "system.h"

void System_Initialize(void)
{
    //Disable internal comparators
    CMCONbits.CM        =   0b111;
    
    //Setting Unusable Ports in Trestate
    TRISA               =   0xFF;
    TRISB               =   0xFF;
    TRISC               =   0xFF;
    
    //Setting Timer 1
    T1CONbits.T1CKPS    =   0b11;       //Prescaler 1:8
    T1CONbits.TMR1ON    =   0b1;        //Timer 1 ON
    TMR1H               =   0x00;
    TMR1L               =   0x00;
    
    //Setting comparator mode
    CCP1CONbits.CCP1M   =   0b1000;     //Comparation mode setting as output
    CCPR1H              =   0xFF;
    CCPR1L              =   0xFF;
    
    OUTPUT_TRIS         =   0b0;
    OUTPUT              =   0b0;
}
