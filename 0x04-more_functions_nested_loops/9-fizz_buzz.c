#include <stdio.h>
/**
 * main - Program that prints the numbers from 1 to 100.
 * Print Fizz if divisible by 3 and Buzz if divisible by 5.
 * Each number or word should be separated by a space.
 * Return: Always 0.
 */

int main(void)
{
	int j;

	for (j = 1; j < 100; j++)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
			printf("FizzBuzz ");
		else if (j % 3 == 0)
			printf("Fizz ");
		else if (j % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", j);
	}
	printf("Buzz\n");
	return (0);
}
