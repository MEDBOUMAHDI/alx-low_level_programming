#include "main.h"

/**
 * print_times_table - Function that prints the x times table.
 * starting with 0.
 * @x: an input integer.
 * If x is > than 15 or less than 0 the function should not print anything.
 * Return: nothing.
 */

void print_times_table(int x)
{
	int j, d, r;

	if (x >= 0 && x <= 15)
	{
		for (j = 0; j <= x; ++j)
		{
			_putchar('0');

			for (d = 1; d <= x; ++d)
			{
				_putchar(',');
				_putchar(' ');

				r = j * d;

				if (r <= 99)
					_putchar(' ');
				if (r <= 9)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10)) % 10 + '0');
				}
				else if (r <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
