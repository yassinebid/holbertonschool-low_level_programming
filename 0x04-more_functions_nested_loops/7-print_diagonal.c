#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int L, space;

	if (n > 0)
	{
		for (L = 0; L < n; L++)
		{
			for (space = 0; space < L; space++)
				_putchar(' ');
			_putchar('\\');

			if (L == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
