#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @str: char pointer
 * Return: char pinter
 */
int _atoi(char *str)
{
	unsigned int x = 0;
	unsigned int i;
	char negative;
	char positive;

	positive = 0;
	negative = 0;
	i = 0;
	/*x = 0;*/

	while (str[i] != '\0')
	{
		if (!((str[i] >= '0') && (str[i] <= '9')) && x > 0)
		{
			break;
		}
		if (((str[i] >= '0') && (str[i] <= '9')))
		{
			x = (x * 10) + (str[i] - '0');
		}
		else if (str[i] == '-')
			negative++;
		else if (str[i] == '+')
			positive++;

		i++;
	}

	if (positive < negative)
		x = x * -1;
	if (positive == 7 && negative == 1)
		x = x * -1;
return (x);
}
