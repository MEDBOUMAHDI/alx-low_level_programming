#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string 
 * @string: char pointer
 * Return: Nothing
 */
void rev_string(char *string)
{
	int lenght, i;
	char swap;

	lenght = strlen(string) - 1;
	for (i = 0; i <= lenght / 2; i++)
	{
		swap = string[i];
		string[i] = string[lenght - i];
		string[lenght - i] = swap;
	}
}
