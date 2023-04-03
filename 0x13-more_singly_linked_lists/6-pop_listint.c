#include "lists.h"

/**
 * pop_listint - a function the pops the head node of listint_t list
 * @head: the head node of the listint_t list
 *
 * Return: the value of the head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value = temp->n;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	free(temp);
	return (value);
}
