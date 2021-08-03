#include "lists.h"
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *adv_1 = head, *adv_2 = head;

	while (adv_1 && adv_2 && adv_2->next)
	{
		adv_1 = adv_1->next;
		adv_2 = adv_2->next->next;
		if (adv_1 == adv_2)
		{
			return (adv_1);
		}
	}
	return (NULL);
}
