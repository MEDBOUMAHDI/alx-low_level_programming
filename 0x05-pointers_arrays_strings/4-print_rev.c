#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @string: char pointer
 * Return: Nothing
 */
void print_rev(char *string)
{
	int lenght, i;

	lenght = 0;
	while (string[lenght] != '\0')
	{
		lenght++;
	}

	for (i = lenght - 1; i >= 0; i--)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
