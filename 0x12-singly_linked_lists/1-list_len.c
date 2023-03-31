#include "lists.h"

/**
 * list_len - counts the number of nodes
 * @head: a pointer the head node
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{
		head = head->next;
		i++;
	}
	return (i);
}
