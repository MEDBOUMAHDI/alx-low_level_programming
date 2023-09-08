#include <stdio.h>

/**
 * main - entry point
 * Return:  0 Always (success)
 */
int main(void)
{
	int m = '0';

	while (m <= '9')
	{
		putchar(m);
		if (m == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			m++;
		}
	}
	return (0);
}
