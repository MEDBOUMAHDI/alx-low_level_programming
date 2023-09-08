#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: returns 0 (success)
*
*/

int main(void)
{
	int b, last;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	last = b % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", b, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", b, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", b, last);
	return (0);
}
