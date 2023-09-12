#include <unistd.h>

/**
 * _putchar - writes the character m
 * @m: The character to print
 *
 * Return: On success 1.
 * On error, -1 is return
 */
int _putchar(char m)
{
	return (write(1, &m, 1));
}
