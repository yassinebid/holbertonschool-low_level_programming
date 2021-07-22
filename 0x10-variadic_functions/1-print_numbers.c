#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <unistd.h>
/**
 * print_numbers - prints out numbers from variadic function
 * @seperator: pointer to seperation string
 * @n: number of numbers to print
 * @...: numbers to print
 *
 * Return: always void
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int num;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%d", num);
		if (seperator == NULL || *seperator == '\0')
			continue;
		if (i != n - 1)
			printf("%s", seperator);
	}
	putchar('\n');
	va_end(arg);
}
