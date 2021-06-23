#include "holberton.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * 
 */
void print_times_table(int n)
{
	int N, mult, F;

	if (n >= 0 && n <= 15)
	{
		for (N = 0; N <= n; N++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				F = N * mult;

				if (F <= 99)
					_putchar(' ');
				if (F <= 9)
					_putchar(' ');

				if (F >= 100)
				{
				        _putchar((F / 100) + '0');
					_putchar(((F / 10)) % 10 + '0');
				}
				else if (F <= 99 && F >= 10)
				{
					_putchar((F / 10) + '0');
				}
				_putchar((F % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
