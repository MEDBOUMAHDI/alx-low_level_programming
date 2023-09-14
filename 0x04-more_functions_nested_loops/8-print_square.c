#include <stdio.h>
#include "main.h"

/**
*print_square - prints squares
*@size: parameter
*Return: returns nothing
*/

void print_square(int size)
{
	int in1, in2;

	if (size > 0)
	{
		for (in1 = 0; in1 < size; in1++)
		{
			for (in2 = 0; in2 < (size - 1); in2++)
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
