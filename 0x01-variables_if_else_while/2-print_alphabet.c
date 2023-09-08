#include <stdio.h>

/**
 * main - entry point
 *
 * Return:0  always (success)
 */
int main(void)
{
	char m = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m = m + 1;
	}
	putchar('\n');
	return (0);
}
