#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at idx
 * @head: the head node
 * @index: the index to insert node on
 *
 * Return: 1 on success and -1 on fail
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	unsigned int i = 0;

	while (cur)
	{
		if (i == index)
		{
			if (cur->prev != NULL)
			{
				cur->prev->next = cur->next; }
			else
			{
				*head = cur->next; }
			if (cur->next != NULL)
				cur->next->prev = cur->prev;
			free(cur);
			return (1);
		}
		cur = cur->next;
		i++;
	}
	return (-1);
}
