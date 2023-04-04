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
	unsigned int i = 0;
	listint_t *temp_node = *head;
	listint_t *index_node;

	if (temp_node && (!index))
	{
		*head = temp_node->next;
		free(temp_node);
		return (1);
	}
	while (temp_node)
	{
		if (i + 1 == index)
		{
			index_node = temp_node->next;
			if (index_node)
			{
				temp_node->next = index_node->next;
				free(index_node);
				return (1);
			}
		}
		temp_node = temp_node->next;
		i++;
	}
	return (-1);
}
