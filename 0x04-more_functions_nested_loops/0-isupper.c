#include "main.h"

/**
*_isupper - checks for uppercase character.
*@m: character to be tested
*Return: 1 if true, 0 otherwise
*/

int _isupper(int m)
{
	if ((m >= 'A') && (m <= 'Z'))
	{
		return (1);
	}

	return (0);
}
