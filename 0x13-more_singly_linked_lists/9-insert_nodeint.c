#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position*
 * @head : double pointer to a struct
 * @idx : the position of the new node
 * @n : the value stored in the new node
 *
 * Return: the addres of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new;
	listint_t *current = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}
	else if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while ((idx - 1) > 0)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
		idx--;
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
