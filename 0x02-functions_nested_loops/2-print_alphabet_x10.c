#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - Function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * You can only use _putchar twice in your code.
 * Return: 0.
*/

void print_alphabet_x10(void)
{

	int n, m;
	int lower_n;

	for (m = 0; m <= 9; m++)
	{
		for (n = 'A'; n <= 'Z'; n++)
		{
			lower_n = tolower(n);
			_putchar(lower_n);
		}
	_putchar('\n');
	}
}
