#include "main.h"

/**
 * _strlen_recursion -  The output is the  length of a string.
 * @str:  measure the string.
 * Return: The   string its length.
 */
int _strlen_recursion(char *str)
{
	int len = 0;

	if (*str)
	{
	len++;
	len += _strlen_recursion(str + 1);
	}
	return (len);
}
