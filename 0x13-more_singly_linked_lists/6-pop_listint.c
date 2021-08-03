#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - pops a list element from the beginning of a list
 * @head: double pointer to head of list
 *
 * Return: value of n for element deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *T;
	int a;

	if (!*head)
		return (0);
	a = (*head)->n;
	T = (*head)->next;
	free(*head);
	*head = T;
	return (a);
}
