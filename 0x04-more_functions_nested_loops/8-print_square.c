#include "holberton.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int H, W;

	if (size > 0)
	{
		for (H = 0; H < size; H++)
		{
			for (W = 0; W < size; W++)
				_putchar('#');

			if (H == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
