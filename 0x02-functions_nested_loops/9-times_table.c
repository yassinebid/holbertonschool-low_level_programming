#include "holberton.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int N, mult, F;

	for (N = 0; N <= 9; N++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			F = N * mult;

			if (F <= 9)
				_putchar(' ');
			else
				_putchar((F / 10) + '0');

			_putchar((F % 10) + '0');
		}
		_putchar('\n');
	}
}
