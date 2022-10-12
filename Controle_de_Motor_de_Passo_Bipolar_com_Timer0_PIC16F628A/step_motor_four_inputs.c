/*
 * File:   step_motor_four_inputs.c
 * Author: Lucas Gabriel
 *
 * Created on 4 de Dezembro de 2021, 20:11
 */

#include "step_motor_four_inputs.h"
#include "system.h"

void Step01(void) 
{
    IN1     =   0b1;
    IN2     =   0b1;
    IN3     =   0b0;
    IN4     =   0b0;
}

void Step02(void) 
{
    IN1     =   0b0;
    IN2     =   0b1;
    IN3     =   0b1;
    IN4     =   0b0;
}

void Step03(void) 
{
    IN1     =   0b0;
    IN2     =   0b0;
    IN3     =   0b1;
    IN4     =   0b1;
}

void Step04(void) 
{
    IN1     =   0b1;
    IN2     =   0b0;
    IN3     =   0b1;
    IN4     =   0b0;
}
