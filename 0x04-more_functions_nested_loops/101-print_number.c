#include "main.h"
/**
 * print_number - Function that prints an integer.
 * @x: integer to print.
 * You can only use _putchar function to print.
 * You are not allowed to use long.
 * You are not allowed to use arrays or pointers.
 * You are not allowed to hard-code special values.
 * Return: void.
 */
void print_number(int x)
{
	unsigned int m;

	m = x;

	if (x < 0)
	{
		_putchar(45);
		m = -x;
	}
	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
