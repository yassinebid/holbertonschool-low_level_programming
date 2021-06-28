#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
	int len = 0, str;

	while (s[str++])
		len++;

	for (str = len - 1; str >= 0; str--)
		_putchar(s[str]);

	_putchar('\n');
}
