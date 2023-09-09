#include <stdio.h>

/**
 * main - entry point
 *
 * Return:0 always (success)
 */
int main(void)
{
	int m, m_two;

	for (m = 48; m <= 56; m++)
	{
		for (m_two = m + 1; m_two <= 57; m_two++)
		{
			putchar(m);
			putchar(m_two);
			if (m != 56 || m_two != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
