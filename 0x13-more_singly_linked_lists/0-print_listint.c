#include "lists.h"

/**
 * print_listint - function that prints a listint_t
 * @h: the head node of the listint_t list
 * Return: the number of nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	for (; temp; temp = temp->next)
	{
		printf("%d\n", temp->n);
		i++;
	}
	return (i);
}
