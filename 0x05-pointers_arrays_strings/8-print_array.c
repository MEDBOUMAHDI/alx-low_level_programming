#include "main.h"
#include <stdio.h>

/**
 * print_array -   prints array of int
 * @x: int array pointer
 * @y: array size
 */
void print_array(int *x, int y)
{
	int i;

	if (y > 0)
	{
		for (i = 0; i < y - 1; i++)
		{
			printf("%d, ", x[i]);
		}
		printf("%d\n", x[y - 1]);
	}
	else
		putchar('\n');

}
