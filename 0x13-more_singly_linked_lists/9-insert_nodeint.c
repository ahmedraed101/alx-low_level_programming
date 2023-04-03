#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index
 * @head: the head node of the listint_t list
 * @idx: the index where you should place the node
 * @n: the value of the node
 *
 * Return: address to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp;
	listint_t *temp_head;
	unsigned int i = 0;

	temp_head = *head;
	if (new == NULL || (temp_head == NULL && idx != 0))
		return (NULL);
	while (i != (idx - 1))
	{
		i++;
		temp_head = temp_head->next;
		if (temp_head == NULL)
			return (NULL);
	}

	new->n = n;
	temp = temp_head->next;
	temp_head->next = new;
	new->next = temp;
	return (new);
}
