#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - function is the Entry Point for this porgram
 * checking if 'n' is positive or nigative or 0
 * Return: value is (0)
 */
int main(void)
{
	int num;

	srand(time(0));
	num  = rand() - RAND_MAX / 2;
	if (num == 0)
		printf("%d is zero\n", n);
	else if (num > 0)
		printf("%d is positive\n", n);
	else
		pritf("%d is negative\n", n);
	return (0);
}
