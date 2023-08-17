#include "lists.h"

/**
 * insert_dnodeint_at_index - add node at idx
 * @h: the head node
 * @idx: the index to insert node on
 * @n: the n of the new node
 *
 * Return: new_node or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *new_node;
	unsigned int i = 0;

	if (h == NULL && *h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	while (cur)
	{
		if (i == idx)
		{
			new_node->prev = cur->prev;
			cur->prev->next = new_node;
			cur->prev = new_node;
			new_node->next = cur;
			return (new_node);
		}
		cur = cur->next;
		i++;
	}
	free(new_node);
	return (NULL);
}
