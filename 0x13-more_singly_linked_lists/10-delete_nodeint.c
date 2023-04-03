#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: the head node of the listint_t list
 * @index: the index where you should place the node
 *
 * Return: 1 in Success -1 in failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *trashed;
	listint_t *temp_head;
	unsigned int i = 0;

	temp_head = *head;
	if (temp_head == NULL && index != 0)
		return (-1);
	if (index == 0)
	{
		*head = temp_head->next;
		free(temp_head);
		return (1);
	}
	while (i != (index - 1))
	{
		i++;
		temp_head = temp_head->next;
		if (temp_head == NULL)
			return (-1);
	}

	trashed = temp_head->next;
	temp = trashed->next;
	temp_head->next = temp;
	free(trashed);
	return (1);
}
