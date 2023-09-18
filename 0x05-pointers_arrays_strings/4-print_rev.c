#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @string: string parameter input
 * Return: Nothing
*/

void print_rev(char *string)
{
	int i;

	/*finds the length of string without null character*/
	for (i = 0; string[i] != '\0'; i++);

	/*print char from the last index as you decrement*/
	for (--i; i >= 0; i--)
		_putchar(string[i]);
	_putchar('\n');
}
