#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: a pointer the head node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
