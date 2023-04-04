#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the head node of the listint_t list
 *
 * Return: a pointer to the the new head of the linked list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next;

	while (head && *head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
