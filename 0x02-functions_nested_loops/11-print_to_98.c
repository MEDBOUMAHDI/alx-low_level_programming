#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98: A function that prints all natural numbers from m to 98,
 * followed by a new line.
 * @m: integer
 * Numbers must be separated by a comma, followed by a space.
 * Numbers should be printed in order.
 * The first printed number should be the number passed to your function
 * Return: no return
*/

void print_to_98(int m)
{
	if (m <= 98)
	{
	for (m = m; m <= 97; m++)
		printf("%d, ", m);
	}
	else
	{
	for (m = m; m > 98; m--)
		printf("%d, ", m);
	}
	printf("98\n");
}
