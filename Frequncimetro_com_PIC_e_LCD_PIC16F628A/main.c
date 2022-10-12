/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 28 de Novembro de 2021, 20:10
 */


#include "system.h"
#include "interrupt_manager.h"

#include <stdlib.h>
#include <stdio.h>

void main(void) 
{
    System_Initialize();
    Lcd_Init();
    Interrupt_Initialize();
    
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Frequncimetro");
    Lcd_Set_Cursor(2,14);
    Lcd_Write_String("Hz");
    
    while(1)
    {
        timer2  = abs(timer2 - timer1);
        timer2  = (timer2>>4);
        freq    = 1000000 / (timer2);    
        
        sprintf(LCD_Text, "%5d", freq);
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String(LCD_Text);
        
        flagB1  =   0x00;
        __delay_ms(100);
    }
}
