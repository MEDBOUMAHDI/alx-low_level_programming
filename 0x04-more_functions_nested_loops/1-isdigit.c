#include "main.h"

/**
*_isdigit - checks whether a  character is a digit or not
*@s: tested character
*Return: 1 if success, 0 otherwise
*/

int _isdigit(int s)
{
	if ((s >= 48) && (s <= 57))
	{
		return (1);
	}

	return (0);
}
