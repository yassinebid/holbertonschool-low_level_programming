#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements in linked list
 * @h: head of listint_t type
 *
 * Return: size_t, number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t a;

	a = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
