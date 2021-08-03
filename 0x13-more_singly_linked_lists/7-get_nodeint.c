#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets a node of linked list at specific index
 * @head: head of list
 * @index: index to pull node from
 *
 * Return: pointer to node at specified index, NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (!head)
		return (NULL);
	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
