#include <stdio.h>
/**
 * main - Prog that finds and prints the first 98 Fibonacci numbers.
 * starting, with 1 and 2.
 * followed by a new line.
 * The numbers should be separated by comma.
 * followed by a space .
 * You are allowed to use the standard library.
 * You are not allowed to use any other library (You can’t use GMP etc…).
 * You are not allowed to use long long, malloc.
 * you are not allwed to use  pointers, arrays/tables, or structures.
 * You are not allowed to hard code any Fibonacci number (except for 1 and 2).
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long int m, n, l, n1, n2, l1, l2;

	n = 1;
	l = 2;

	printf("%lu", n);

	for (m = 1; m < 91; m++)
	{
		printf(", %lu", l);
		l = l + n;
		n = l - n;
	}

	n1 = n / 1000000000;
	n2 = n % 1000000000;
	l1 = l / 1000000000;
	l2 = l % 1000000000;

	for (m = 92; m < 99; ++m)
	{

		printf(", %lu", l1 + (l2 / 1000000000));
		printf("%lu", l2 % 1000000000);
		l1 = l1 + n1;
		n1 = l1 - n1;
		l2 = l2 + n2;
		n2 = l2 - n2;
	}

	printf("\n");


	return (0);
}
