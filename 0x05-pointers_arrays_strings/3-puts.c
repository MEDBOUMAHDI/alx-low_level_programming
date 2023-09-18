#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @string: char pointer of string to print
 */
void _puts(char *string)
{
	int lenght;

	lenght = 0;
	while (string[lenght] != '\0')
		{
		_putchar(string[lenght]);
		lenght++;
		}
	_putchar('\n');
}
