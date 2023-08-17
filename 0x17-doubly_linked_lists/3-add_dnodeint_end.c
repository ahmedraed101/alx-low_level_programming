#include "lists.h"

/**
 * add_dnodeint_end - add node at the end of dlistint
 * @head: the head node
 * @n: the n of the new node
 *
 * Return: the new node or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cur, *new_node = malloc(sizeof(dlistint_t));

	cur = *head;
	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = new_node;
	new_node->prev = cur;
	return (new_node);
}
