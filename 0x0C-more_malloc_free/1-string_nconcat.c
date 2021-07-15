#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings, up to n bytes of s2
 *
 * @s1: string 1 to concatenate with string 2
 * @s2: string 2 to concatenate with string 1
 * @n: number of bytes to concatenate of s2
 *
 * Return: pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *T, *Tstart;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	if (n >= j)
	{
		n = j;
		T = malloc(sizeof(char) * (i + n + 1));
	}
	else
		T = malloc(sizeof(char) * (i + j + 1));
	if (T == NULL)
		return (NULL);
	Tstart = T;
	while (*s1)
		*T++ = *s1++;
	while (k < n)
	{
		*T++ = *s2++;
		k++;
	}
	*T = '\0';
	return (Tstart);
}
