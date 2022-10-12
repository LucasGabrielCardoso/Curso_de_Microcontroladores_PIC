/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 23 de Novembro de 2021, 22:34
 */


#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Lcd_Init();
    Interrupt_Initialize();
    
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("Medida de Pulso");
    Lcd_Set_Cursor(2,14);
    Lcd_Write_String("us");
    
    while(1)
    {
        __delay_ms(100);
        periodo = (temp_H<<8) + temp_L;
        sprintf(LCD_Text, "%8d", periodo);
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String(LCD_Text);
    }//End While
    
}
