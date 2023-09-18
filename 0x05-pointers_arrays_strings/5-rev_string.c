#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string with refrance
 * @s: char pointer
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len, i;
	char swap;

	len = strlen(s) - 1;
	for (i = 0; i <= len / 2; i++)
	{
		swap = s[i];
		s[i] = s[len - i];
		s[len - i] = swap;
	}
}
