#include "lists.h"

/**
 * print_listint - function that prints a listint_t
 * @h: the head node of the listint_t list
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
