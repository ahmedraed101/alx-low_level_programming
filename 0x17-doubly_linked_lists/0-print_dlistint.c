#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: the head node
 *
 * Return: the size of the list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
