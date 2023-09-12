#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - Function that checks for lowercase character.
 * @s: character to classify.
 * Return: 1 if s is lowercase or otherwise 0.
*/

int _islower(int s)
{
	if islower(s)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
