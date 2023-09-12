#include <ctype.h>
#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet, in lowercase,
 * followed by a new line.
 * You can only use _putchar twice 
 * Return: 0 always (success)
*/

void print_alphabet(void)
{

	int m;
	int lower_m;

	for (m = 'A'; m <= 'Z'; m++)
	{
		lower_m = tolower(m);
		_putchar(lower_m);
	}
	_putchar('\n');
}
