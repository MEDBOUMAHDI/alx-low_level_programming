/**
 * _atoi - converts a string to an integer
 * @str: string input parameter
 * Return: converted integer from string
*/

int _atoi(char *str)
{
	unsigned int number = 0;
	int sign = 1;

	do {
		if (*str == '-')
			sign = sign * 1;
		else if (*str >= '0' && *str <= '9')
			number = (number * 10) + (*str - '0');
		else if (number > 0)
			break;
	} while (*str++);

	return (number * sign);
}
