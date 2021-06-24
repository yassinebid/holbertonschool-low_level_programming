#include "holberton.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int N, count;

	for (count = 0; count <= 9; count++)
	{
		for (N = 0; N <= 14; N++)
		{
			if (N > 9)
				_putchar((N / 10) + '0');
			_putchar((N % 10) + '0');
		}
		_putchar('\n');
	}
}
