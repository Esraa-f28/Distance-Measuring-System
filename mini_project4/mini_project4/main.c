/******************************************************************************
 *
 * Description: measure distance using ultrasonic sensor
 *
 * Author: Esraa Fawzy
 *
 *******************************************************************************/
#include"lcd.h"
#include"ultrasonic.h"
#include<avr/interrupt.h> // to enable I-bit
#include<util/delay.h>

int main(void)
{
	SREG|=(1<<7);
	Ultrasonic_init();
	LCD_init();
	LCD_displayString(" Distance=   cm");
	uint16 distance=0,prevDistance=0;

	while(1)
	{
		LCD_moveCursor(0,10);
		distance=Ultrasonic_readDistance();
		if(distance!=prevDistance)
		{
			if(distance>=100)
			{
				LCD_intgerToString(distance);
			}
			else if(distance >=10 && distance <100)
			{
				LCD_intgerToString(distance);
				LCD_displayCharacter(' ');
			}
			else if(distance >=0 && distance <10)
			{
				LCD_intgerToString(distance);
				LCD_displayCharacter(' ');
				LCD_displayCharacter(' ');
			}

		}

		prevDistance= distance;

	}


}
