#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *d;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		l++;

	d = malloc(sizeof(char) * (l + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		d[i] = str[i];

	d[l] = '\0';

	return (d);
}
