#include "holberton.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @source: an input stringin parameter
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *source)
{
	char *tmp = dest;

	while (*dest)
		dest++;

	while (*source)
		*dest++ = *source++;

	*dest = '\0';
	return (tmp);
}
