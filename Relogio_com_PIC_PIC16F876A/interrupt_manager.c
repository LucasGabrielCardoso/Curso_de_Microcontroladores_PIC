/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 5 de Fevereiro de 2022, 21:47
 */


#include    "system_config.h"
#include    "interrupt_manager.h"
#include "display_set_seg.h"
#include "clock_manager.h"

void Interrupt_Initializer(void)
{
    INTCONbits.TMR0IE           =   0b1;
    OPTION_REGbits.nRBPU        =   0b0;
    OPTION_REGbits.T0CS         =   0b0;
    OPTION_REGbits.T0SE         =   0b0;
    OPTION_REGbits.PSA          =   0b0;
    OPTION_REGbits.PS           =   0b011;
    
    T1CONbits.T1CKPS            =   0b11;
    T1CONbits.T1OSCEN           =   0b0;
    T1CONbits.nT1SYNC           =   0b0;
    T1CONbits.TMR1CS            =   0b0;
    T1CONbits.TMR1ON            =   0b1;
    TMR1L                       =   0xDC;
    TMR1H                       =   0x0B;
    PIE1bits.TMR1IE             =   0b1; 
}

__interrupt() void Interrupt_Batch(void)
{
    if(INTCONbits.TMR0IF)
    {
        INTCONbits.TMR0IF     =   0b0;
        if((!DIGI_MIL) && (0x01==controler))
        {
            controler   =   0x02;
            DIGI_UNI     =   0b0;
            DIGI_DEZ     =   0b0;
            DIGI_CEN     =   0b0;
            DIGITO      =   0x00;
            
            mil         =   (horas%100)/10;
            DIGI_MIL     =   0b1;
            DIGITO      =   Display(mil);
        }
        else if((!DIGI_CEN) && (0x02==controler))
        {
            controler       =   0x03;
            DIGI_UNI        =   0b0;
            DIGI_DEZ        =   0b0;
            DIGI_MIL        =   0b0;
            DIGITO          =   0x00;
            
            cen             =   (horas%10);
            DIGI_CEN        =   0b1;
            DIGITO          =   Display(cen);
        }
        else if((!DIGI_DEZ) && (0x03==controler))
        {
            controler       =   0x04;
            DIGI_UNI        =   0b0;
            DIGI_CEN        =   0b0;
            DIGI_MIL        =   0b0;
            DIGITO          =   0x00;
            
            dez             =   (minutos%100)/10;
            DIGI_DEZ        =   0b1;
            DIGITO          =   Display(dez);
        }
        else if((!DIGI_UNI) && (0x04==controler))
        {
            controler       =   0x01;
            DIGI_DEZ        =   0b0;
            DIGI_CEN        =   0b0;
            DIGI_MIL        =   0b0;
            DIGITO          =   0x00;
            
            uni             =   (minutos%10);
            DIGI_UNI        =   0b1;
            DIGITO          =   Display(uni);
        }  
    }
    if(PIR1bits.TMR1IF)
    {
        PIR1bits.TMR1IF         =   0b0;
        TMR1L                   =   0xDC;
        TMR1H                   =   0x0B;

        LED                     =   !LED;
        clk_cont++;
        if(0x02==clk_cont)
        {
            clk_cont            =   0x00;
            segundos++;
        }
    }
}