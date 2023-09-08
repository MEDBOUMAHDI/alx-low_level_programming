#include <stdio.h>

/**
 * main - entry point
 *
 * Return:0  always ( success)
 */

int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m != 'e' && m != 'q')
		{
			putchar(m);
		}
	}
	putchar('\n');
	return (0);
}
