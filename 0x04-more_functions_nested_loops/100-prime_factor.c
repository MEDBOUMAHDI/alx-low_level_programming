#include <stdio.h>
/**
 * main - Program that finds and prints the largest prime factor of the,
 * number 612852475143.
 * followed by a new line.
 * Return: 0 always (success)
*/

int main(void)
{
	long j, num = 612852475143;

	for (j  = 2; j <= num; j++)
	{
		if (num % j == 0)
		{
			num = num / j;
			j--;
		}
	}
	printf("%lu\n", j);
	return (0);
}
