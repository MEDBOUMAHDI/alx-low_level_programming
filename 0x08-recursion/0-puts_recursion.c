#include "main.h"

/**
 * _puts_recursion - Works just like puts();
 * @str: input character
 * Return: Always 0 (Success)
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
