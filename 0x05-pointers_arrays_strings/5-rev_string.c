#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string with refrance
 * @str: char pointer
 * Return: Nothing
 */
void rev_string(char *str)
{
	int len, i;
	char swap;

	len = strlen(s) - 1;
	for (i = 0; i <= len / 2; i++)
	{
		swap = str[i];
		str[i] = str[len - i];
		str[len - i] = swap;
	}
}
