#include <stdio.h>
#include "main.h"

/**
*print_diagonal - prints a diagonal line
*@x: parameter
*Return: returns nothing
*/

void print_diagonal(int x)
{
	int lenght;
	int empty;

	if (x > 0)
	{
		for (lenght = 0; lenght < x; lenght++)
		{
			for (empty = 0; empty < lenght; empty++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (lenght == (x - 1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
