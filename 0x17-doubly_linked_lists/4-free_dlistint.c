#include "lists.h"

/**
 * free_dlistint - free dlistint_t from the memory
 * @head: the head node
 *
 * Return: NoThing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
