#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @str: char argument 
 * Return: void
 */

void _puts_recursion(char *str)
{
	if (*str)
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
	else
	_putchar('\n');
}
