#include "lists.h"

/**
 * sum_listint - sums all the data(n) of the list
 * @head: the head node of the listint_t list
 *
 * Return: address to the new element or NULL
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
