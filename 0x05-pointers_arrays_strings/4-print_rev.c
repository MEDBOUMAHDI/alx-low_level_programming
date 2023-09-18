#include"main.h"

/**
 * print_rev - prints a string in reverse
 * @string: string parameter input
 * Return: Nothing
*/

void print_rev(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++){
	for (--i; i >= 0; i--){
		_putchar(string[i]);
	}
	_putchar('\n');
	}
}
