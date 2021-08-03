#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list_t list
 * @h: a variable pointing to a struct of type list_t
 *
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
