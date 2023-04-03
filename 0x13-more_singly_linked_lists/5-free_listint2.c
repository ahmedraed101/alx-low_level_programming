#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and set head to null
 * @head: the head node of the listint_t list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp1;
	listint_t *temp2;

	temp1 = *head;
	while (temp1 != NULL)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
	*head = NULL;
}
