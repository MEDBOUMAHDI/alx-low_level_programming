#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * jack_bauer - Function that prints time from 00:00 to 24:00.
 * Return: No return.
*/

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
