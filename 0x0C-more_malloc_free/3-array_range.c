#include <stdlib.h>
#include <stdio.h>
int *fill_array_range(int *p, int min, int max);
/**
 * array_range - creates an array of integers in memory
 *
 * @min: value to start at
 * @max: value to end at
 *
 * Return: pointer to beginning of array
 */
int *array_range(int min, int max)
{
	int *T, len = 0, temp;

	if (min > max)
		return (NULL);
	temp = min;
	while (temp <= max)
	{
		len++;
		temp++;
	}
	T = malloc(sizeof(min) * len);
	if (T == NULL)
		return (NULL);
	T = fill_array_range(T, min, max);
	return (T);
}
/**
 * fill_array_range - fills an array with a range of nums
 *
 * @p: array to fill
 * @min: bottom of range
 * @max: top of range
 *
 * Return: pointer to beginning of filled array
 */
int *fill_array_range(int *p, int min, int max)
{
	int i = 0;

	while (min <= max)
	{
		p[i] = min;
		i++, min++;
	}
	return (p);
}
