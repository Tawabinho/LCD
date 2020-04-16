/*
 * lcd_config.c
 *
 * Created: 4/16/2020 2:02:01 AM
 *  Author: Ahmed
 */ 
#include "bit_math.h"
#include "dio_hw.h"
#include "dio_types.h"
#include "dio_config.h"
#include "lcd.h"
#include "util\delay.h"
void int_lcd(){
	int_();
	CLEAR_BIT(DDRB_REG,3);
	_delay_ms(20);
    comand_lcd(dio_channel_B3,dio_channel_B1,0x33);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x32);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x28);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x0c);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x06);
	comand_lcd(dio_channel_B3,dio_channel_B1,0x01);
	}