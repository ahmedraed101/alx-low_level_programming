#include "lists.h"

/**
 * print_list - prints a linked list
 * @head: a pointer the head node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *head)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		i++;
	}
	return (i);
}
