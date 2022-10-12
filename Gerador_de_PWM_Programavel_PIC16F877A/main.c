/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 5 de Novembro de 2021, 23:23
 */

#include "system.h"

void main(void) 
{
    System_Initialize();
    
    Lcd_Clear();                    //Limpa display
    Lcd_Set_Cursor(1,4);
    Lcd_Write_String("PWM Config");
    Lcd_Set_Cursor(2,1);
    sprintf((char *)LCDText, "Valur Duty: %d%d", dezena, unidade);
    Lcd_Write_String(LCDText);
    
    while(1)
    {
        Lcd_Set_Cursor(2,1);
        sprintf((char *)LCDText, "Valur Duty: %d%d", dezena, unidade);
        Lcd_Write_String(LCDText);

        if(!aux)
        {
            value = StrToValue(dezena, unidade);
            aux   = 1;
            store = 0;
            
            PWM_Duty(value);
        }
        
        __delay_ms(100);
    }//end while
}//end main