#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @s: character to classify.
 * Return: 1 if s is a letter, lowercase or uppercase else 0.
*/

int _isalpha(int s)
{
	if isalpha(s)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
