#include "main.h"

/**
 * main - Entry point
 * Description: prints _putchar
 * Return: 0 always (success)
*/

int main(void)
{
	int string[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
