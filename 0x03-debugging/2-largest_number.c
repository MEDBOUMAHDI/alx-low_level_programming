#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @x: first integer
 * @y: second integer
 * @z: third integer
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
	int large;

	if (x >= y && x >= z)
	{
		large = x;
	}
	else if (y >= x && y >= z)
	{
		large = y;
	}
	else
	{
		large = z;
	}

	return (large);
}
