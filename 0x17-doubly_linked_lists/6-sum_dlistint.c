#include "lists.h"

/**
 * sum_dlistint - get the sum of the dlistint_t
 * @head: the head node
 *
 * Return: sum or 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum  = 0;
	dlistint_t *cur = head;

	while (cur)
	{
		sum = sum + cur->n;
		cur = cur->next;
	}
	return (sum);
}
