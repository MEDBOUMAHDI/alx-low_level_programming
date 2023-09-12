#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit- A fucntion that prints last digit of a number m.
 * @m: integer number.
 * Return: value of last digit.
*/

int print_last_digit(int m)
{
	int number;

	if (m < 0)
		number = -1 * (m % 10);
	else
		number = m % 10;

	_putchar(number + '0');
		return (number);
}
