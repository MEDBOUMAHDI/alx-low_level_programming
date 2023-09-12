#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar
 * Return: 0 always (success)
*/

int main(void)
{
	int string[] = {85, 102, 127, 136, 88, 109, 67, 134};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
