#include "main.h"

/**
 * times_table - Function that prints the 9 times table, starting with 0.
 * Return: No return.
 */

void times_table(void)
{
	int x, y, p;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			p = x * y;

			if ((p / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(p + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
