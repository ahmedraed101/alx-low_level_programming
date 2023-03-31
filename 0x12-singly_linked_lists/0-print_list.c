#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: a pointer the head node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0
	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		i++;
	}
	return (i);
}
