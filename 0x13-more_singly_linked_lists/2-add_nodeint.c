#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listnt_t list.
 *@head: the head of the linked list.
 *@n: integer.
 *Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *T;

	T = malloc(sizeof(listint_t));
	if (T == NULL)
		return (NULL);
	T->n = n;
	T->next = *head;
	*head = T;
	return (*head);
}
