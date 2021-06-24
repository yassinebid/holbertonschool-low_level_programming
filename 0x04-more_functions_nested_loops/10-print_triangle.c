#include "holberton.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int H, I;

	if (size > 0)
	{
		for (H = 1; H <= size; H++)
		{
			for (I = size - H; I > 0; I--)
				_putchar(' ');

			for (I = 0; I < H; I++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
