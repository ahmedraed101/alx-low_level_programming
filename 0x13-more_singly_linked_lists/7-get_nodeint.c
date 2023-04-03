#include "lists.h"

/**
 * get_nodeint_at_index - get the node at certain index stating from 0
 * @head: the head node of the listint_t list
 * @index: the index of the node needed
 *
 * Return: pointer to node needed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i != index)
	{
		i++;
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
