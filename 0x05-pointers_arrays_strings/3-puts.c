#include "holberton.h"

/**
 * _puts - Write a function that prints a string
 * @string: an input string
 * Return: Nothing
 */
void _puts(char *string)
{
	int i = 0;

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
}
