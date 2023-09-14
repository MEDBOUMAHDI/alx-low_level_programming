#include <stdio.h>
#include "main.h"

/**
*print_line - prints a straight line
*@x: parameter
*Return:returns nothing
*/

void print_line(int x)
{
	while (x-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
