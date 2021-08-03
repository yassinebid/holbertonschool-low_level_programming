#include "lists.h"
/**
 * sum_listint - sums the n value of a linked list of listint_t
 * @head: head of list
 *
 * Return: integer represetnting sum of all n values from list
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (!head)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
