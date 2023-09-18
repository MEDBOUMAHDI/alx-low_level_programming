#include "main.h"
#include <string.h>
/**
 * puts_half -   prints half of a string
 * followed by a new line.
 * @string: char pointer
 * Return: Nothing
 */
void puts_half(char *string)
{
	int len, i;

	len = strlen(string);
	if (len % 2 != 0)
		i = (len / 2) + 1;
	else
		i = len / 2;
	for (; i < len; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
}
