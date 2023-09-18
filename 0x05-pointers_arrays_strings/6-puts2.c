#include "main.h"
#include <string.h>
/**
 * puts2 -  prints every other character of a string
 * @string: char pointer
 * Return: Nothing
 */
void puts2(char *string)
{
	int len, i;

	len = strlen(string);
	for (i = 0; i < len; i++)
	{
		_putchar(string[i]);
		i = i + 1;
	}
	_putchar('\n');
}
