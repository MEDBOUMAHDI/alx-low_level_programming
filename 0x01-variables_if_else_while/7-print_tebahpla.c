#include <stdio.h>

/**
 * main - entry point
 * Return:0 Always ( success)
 */
int main(void)
{
	char st = 'z';

	for (st = 'z'; st >= 'a'; st--)
	{
		putchar(st);
	}
	putchar('\n');
	return (0);
}
