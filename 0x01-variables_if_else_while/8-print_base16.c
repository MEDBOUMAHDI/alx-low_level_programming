#include <stdio.h>

/**
 * main - entry point
 * Return: 0 Always( success)
 */
int main(void)
{
	int m = '0';
	char n = 'a';

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
