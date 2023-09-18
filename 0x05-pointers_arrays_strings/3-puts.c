#include"main.h"

/**
 * _puts - prints a string, followed by a newline
 * @string: string parameter to print
 * Return: Nothing
*/

void _puts(char *string)
{
	while (*string != '\0')
	{
		_putchar(*string + 0);
		string++;
	}
	_putchar('\n');
}
