/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 17 de Novembro de 2021, 22:59
 */


#include <stdio.h>
#include "system.h"

void main(void) 
{
    int pulse    =  0x00;  //count pulses
    char LCD_Text[7];                 //Text string auxiliary
    
    System_Initialize();
    Lcd_Init();
    Lcd_Clear();
    
    while(1) 
    {
        pulse = (TMR1H<<8) + TMR1L;
        sprintf(LCD_Text, "%6d", pulse);
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("Pulsos:");
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String(LCD_Text);
        
        if(10 < pulse) 
        {
            OUTPUT1 = 0b1;
            TMR1H               =   0x00;
            TMR1L               =   0x00;
        }
    }
}
