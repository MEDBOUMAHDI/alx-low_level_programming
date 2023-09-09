#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
      int n;
      int n_two;

	for (n = 0; n <= 98; n++)
	{
		for (n_two = n + 1; n_two <= 99; n_two++)
		{
			putchar('0' + n / 10);
			putchar('0' + n % 10);
			putchar(32);
			putchar('0' + n_two / 10);
			putchar('0' + n_two % 10);
			if (n / 10 != 9 || n % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);
	return (0);
}
