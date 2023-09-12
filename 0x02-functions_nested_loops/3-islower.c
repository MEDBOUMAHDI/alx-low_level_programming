#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @x: character to classify.
 * Return: 1  if x is lowercase or otherwise 0.
*/

int _islower(int x)
{
	if islower(x)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
