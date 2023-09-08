#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char m;
	char n;

	for (m = 'a'; m <= 'z'; m++)
	{
		putchar(m);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
