#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: the head node
 * @index: the index to get it's n
 *
 * Return: int or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;
	unsigned int i = 0;

	while (cur)
	{
		if (i == index)
			return (cur);
		i++;
		cur = cur->next;
	}
	return (NULL);
}
