#include <stdio.h>

/**
 * main - Program that prints the first 50 Fibonacci numbers. starting with,
 * starting with 1 and 2.
 * followed by a new line.
 * The numbers must be separated by comma, followed by a space  .
 * Return: 0 always (success)
 */

int main(void)
{
	int i = 0;
	long int m = 0;
	long int n = 1;
	long int  nxt;

	while (i < 50)
	{
		nxt = m + n;
		m = n;
		n = nxt;
		printf("%lu", nxt);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
