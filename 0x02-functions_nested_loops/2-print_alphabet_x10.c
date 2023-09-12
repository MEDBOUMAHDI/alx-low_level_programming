#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet  in lowercase, followed by a new line.
 * You can only use _putchar twice 
 * Return: 0 always (success)
*/

void print_alphabet_x10(void)
{

	int m, n;
	int lower_m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 'A'; m <= 'Z'; m++)
		{
			lower_m = tolower(m);
			_putchar(lower_m);
		}
	_putchar('\n');
	}
}
