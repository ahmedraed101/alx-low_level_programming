#include "lists.h"

/**
 * dlistint_len - get a doubly linked list lenth
 * @h: the head node
 *
 * Return: the size of the list
*/

size_t dlistint_len(const dlistint_t *h);
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
