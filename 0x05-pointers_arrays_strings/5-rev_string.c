#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string 
 * @str: char pointer
 * Return: Nothing
 */
void rev_string(char *str)
{
	int lenght, i;
	char swap;

	lenght = strlen(str) - 1;
	for (i = 0; i <= lenght / 2; i++)
	{
		swap = str[i];
		str[i] = str[lenght - i];
		str[lenght - i] = swap;
	}
}
