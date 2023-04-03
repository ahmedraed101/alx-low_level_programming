#include "lists.h"

/**
 * listint_len - function that counts the nodes of listint_t
 * @head: the head node of the listint_t list
 *
 * Return: the number of nodes printed
 */

size_t listint_len(const listint_t *head)
{
	size_t i = 0;

	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
