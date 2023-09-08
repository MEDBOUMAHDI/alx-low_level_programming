#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdio.h>

/**
 * main - prints last digit of a number
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int b;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	if (b % 10 < 6 && b % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", b, b % 10);
	}
	else if (b % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", b, b % 10);
	}
	else if (b == 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", b, b % 10);
	}
	else if (b > 6)
	{
		printf("Last digit of %d is %d and is greater than 5\n", b, b % 10);
	}
	return (0);
}
