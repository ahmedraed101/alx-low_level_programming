#include "lists.h"

/**
 * add_nodeint_end - adds node at the end of a listint_t list
 * @head: the head node of the listint_t list
 * @n: int value of the node
 *
 * Return: address to the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tail;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new;
	return (new);
}
