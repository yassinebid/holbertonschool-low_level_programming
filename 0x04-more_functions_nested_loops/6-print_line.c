#include "holberton.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int T;

	if (n > 0)
	{
		for (T = 0; T < n; T++)
			_putchar('_');
	}

	_putchar('\n');
}
