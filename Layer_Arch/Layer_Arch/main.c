/*
 * Layer_Arch.c
 *
 * Created: 4/15/2020 4:10:03 PM
 * Author : Ahmed
 */ 
#define F_CPU 1600000
#include "dio_config.h"
#include "dio.h"
#include "lcd.h"
#include "std_types.h"
int main(void)
{
    int_lcd();
    while (1) 
    {
		string_lcd("hello");
		comand_lcd(dio_channel_B3,dio_channel_B1,0xc0);
		string_lcd("AHMED");
		
    }
}

