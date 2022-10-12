/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 15 de Janeiro de 2022, 19:47
 */


#include "interrupt_manager.h"
#include "system_config.h"
#include "seven-seg-display.h"

void Interrupt_Initialize(void)
{
    OPTION_REG      =   0x83;
    INTCON          =   0xA0;
}

__interrupt() void change_digit(void)
{
    if(INTCONbits.TMR0IF)
    {
        INTCONbits.TMR0IF       =   0b0;
        if(!DIGI_MIL && control_flag==0x01)
        {
            control_flag    =   0x02;
            DIGI_UNI        =   0b0;
            DIGI_DEC        =   0b0;
            DIGI_CEN        =   0b0;
            DIGIT           =   0x00;
            mil             =   (unsigned char)(counter/1000);
            DIGI_MIL        =   0x01;
            DIGIT           =   display(mil);
        }
        
        else if(!DIGI_CEN && control_flag==0x02)
        {
            control_flag    =   0x03;
            DIGI_UNI        =   0b0;
            DIGI_DEC        =   0b0;
            DIGI_MIL        =   0b0;
            DIGIT           =   0x00;
            cen             =   (unsigned char)((counter%1000)/100);
            DIGI_CEN        =   0x01;
            DIGIT           =   display(cen);
        }
        
        else if(!DIGI_DEC && control_flag==0x03)
        {
            control_flag    =   0x04;
            DIGI_UNI        =   0b0;
            DIGI_CEN        =   0b0;
            DIGI_MIL        =   0b0;
            DIGIT           =   0x00;
            dec             =   (unsigned char) (counter%100)/10;
            DIGI_DEC        =   0x01;
            DIGIT           =   display(dec);
        }
        
        else if(!DIGI_UNI && control_flag==0x04)
        {
            control_flag    =   0x01;
            DIGI_DEC        =   0b0;
            DIGI_CEN        =   0b0;
            DIGI_MIL        =   0b0;
            DIGIT           =   0x00;
            uni             =   (unsigned char) (counter%10);
            DIGI_UNI        =   0x01;
            DIGIT           =   display(uni);
        }
    }
}
