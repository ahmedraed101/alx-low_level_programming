#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: a pointer the head node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[%d] (nil)", 0);
	else
		printf("[%d] %s", h->len, h->str);
	if (h->next != NULL)
		return (1 + print_list(h->next));
	return (1);
}
