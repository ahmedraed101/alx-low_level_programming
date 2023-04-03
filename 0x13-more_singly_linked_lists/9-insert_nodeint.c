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
	listint_t *new, listint_t, *temp_head;
	unsigned int i = 0;

	if (head == NULL && *head == NULL)
		return (NULL);

	temp_head = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = temp_head;
		*head = new;
		return (new);
	}
	while (i != (idx - 1))
	{
		i++;
		temp_head = temp_head->next;
		if (temp_head == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = temp_head->next;
	temp_head->next = new;
	return (new);
}
