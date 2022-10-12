/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 8 de Dezembro de 2021, 20:03
 */


#include "system.h"
#include "interrupt_manager.h"
#include "pwm.h"
#include "display.h"

void main(void) 
{
    System_Initalize();
    Lcd_Init();
    Interrupt_Initialize();
    PWM_Initialize();
    
    Lcd_Set_Cursor(1,1);
    Lcd_Write_String("PWM Freq");
    
    while (1)
    {
        sprintf(LCD_Text, "%3d", duty);
        Lcd_Set_Cursor(1,10);
        Lcd_Write_String(LCD_Text);
        PWM_Duty_Cycle(duty);
    }
}
