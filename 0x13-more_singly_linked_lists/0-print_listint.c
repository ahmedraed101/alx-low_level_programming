#include "lists.h"

/**
 * print_listint - function that prints a listint_t
 * @head: the head node of the listint_t list
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *head)
{
	size_t i = 0;

	while (head != NULL)
	{
		if (head.n != NULL)
			printf("%d\n", head.n);
		head = head.next;
		i++
	}
	return (i);
}
