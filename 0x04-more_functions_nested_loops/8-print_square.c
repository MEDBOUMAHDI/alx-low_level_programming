#include <stdio.h>
#include "main.h"

/**
*print_square - prints squares
*@size: parameter
*Return: returns nothing
*/

void print_square(int siz)
{
	int in1;
	int in2;

	if (siz > 0)
	{
		for (in1 = 0; in1 < siz; in1++)
		{
			for (in2 = 0; in2 < (siz - 1); in2++)
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
