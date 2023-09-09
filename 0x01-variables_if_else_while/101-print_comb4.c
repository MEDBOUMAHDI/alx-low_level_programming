#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int n_two;
	int  n_three;

	for (n = 48; n <= 55; n++)
	{
		for (n_two = n + 1; n_two <= 56; n_two++)
		{
			for (n_three = n_two + 1; n_three <= 57; n_three++)
			{
				putchar(n);
				putchar(n_two);
				putchar(n_three);
				if (n != 55 || n_two != 56 || n_three != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}
