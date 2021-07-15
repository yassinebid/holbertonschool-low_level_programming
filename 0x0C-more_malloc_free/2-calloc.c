#include <stdlib.h>
void *set_mem(void *p, unsigned int nmemb, unsigned int size, char ch);
/**
 * _calloc - allocates memory for an array, and inits
 *
 * @nmemb: number of members in array
 * @size: size of each member
 *
 * Return: void pointer to beginning of alloc/init'ed memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *T;

	if (nmemb < 1 || size < 1)
		return (NULL);
	T = malloc(nmemb * size);
	if (T == NULL)
		return (NULL);
	T = set_mem(T, nmemb, size, '\0');
	return (T);
}
/**
 * set_mem - sets memory for void pointer
 *
 * @p: pointer to beginning of memory to set
 * @nmemb: number of members of array
 * @size: size of elements of array
 * @ch: character to set memory to
 *
 * Return: void pointer to beginning of set memory
 */
void *set_mem(void *p, unsigned int nmemb, unsigned int size, char ch)
{
	char *cast = p;
	unsigned int i = 0;

	while (i < nmemb * size)
		cast[i++] = ch;
	return (p);
}
