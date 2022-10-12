/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 19 de Novembro de 2021, 23:54
 */

#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Lcd_Init();
    Interrupt_Initialize();
    
    Lcd_Clear();
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Modo de Captura");
    while (1)
    {
        if(flag1)
        {
            timer2  =   timer2-timer1;
            sprintf(LCD_Text, "%4d", timer2);
            Lcd_Set_Cursor(2,1);
            Lcd_Write_String(LCD_Text);
            flag1       =   0x00;
        }
    }   
}
