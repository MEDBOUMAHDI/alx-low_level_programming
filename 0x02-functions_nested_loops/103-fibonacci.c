#include <stdio.h>
/**
 * main - A program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 * Consider the terms in the Fibonacci sequence
 * whose values do not exceed 4,000,000.
 * Return: 0 always (success)
 */

int main(void)
{
	int m = 0, n = 1, nxt = 0, sum = 0;

	while (nxt < 4000000)
	{
		nxt = m + n;
		m = n;
		n = nxt;
		if (nxt % 2 == 0)
			sum += nxt;
	}
	printf("%i\n", sum);
	return (0);
}
