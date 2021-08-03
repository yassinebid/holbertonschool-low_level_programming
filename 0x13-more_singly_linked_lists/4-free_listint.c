#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list.
 *@head: pointer.
 *Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *T;

	while (head != NULL)
	{
		T = head->next;
		free(head);
		head = T;
	}
}
