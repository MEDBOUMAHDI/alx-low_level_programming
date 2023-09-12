#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - Function that prints the sign of a number.
 * @x: number to be analyzed.
 * greater than, equal to or less than zero.
 * Return: 0 or 1 or -1
*/


int print_sign(int x)
{
	if (x > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (x < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
