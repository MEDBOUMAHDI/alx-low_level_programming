#include <stdio.h>
#include "main.h"

/**
*print_numbers - function that print 0 to 9
*Return: returns nothing
*/

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar(10);
}
