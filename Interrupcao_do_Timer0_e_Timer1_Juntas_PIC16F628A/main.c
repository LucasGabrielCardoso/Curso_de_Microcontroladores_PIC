/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 30 de Novembro de 2021, 18:21
 */


#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Lcd_Init();
    Interrupt_Initialize();
    
    Lcd_Clear();
    
    while (1) 
    {
        if(!change)
        {
            Lcd_Set_Cursor(1,1);
            Lcd_Write_String("Testing...      ");
        }
        else
        {
            Lcd_Set_Cursor(1,1);
            Lcd_Write_String("    ...interrupt");
        }
    }
}
