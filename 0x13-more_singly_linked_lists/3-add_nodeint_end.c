#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end- adds a new node at the end of a list_t list.
 *@head: the head of the linked list.
 *@n: an integer.
 *Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *T;
	listint_t *tmp;

	T = malloc(sizeof(listint_t));
	if (T == NULL)
		return (NULL);
	T->n = n;
	T->next = NULL;
	if (*head == NULL)
	{
		*head = T;
		return (T);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = T;
	return (T);
}
