#include <stdio.h>
#include "main.h"

/**
*print_square - prints squares
*@size: parameter
*Return: returns nothing
*/

void print_square(int siz)
{
	int inc1, inc2;

	if (siz > 0)
	{
		for (inc1 = 0; inc1 < siz; inc1++)
		{
			for (inc2 = 0; inc2 < (siz - 1); inc2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
