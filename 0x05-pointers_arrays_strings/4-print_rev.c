#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *str)
{
	int len = 0, index;

	while (str[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(str[index]);

	_putchar('\n');
}
