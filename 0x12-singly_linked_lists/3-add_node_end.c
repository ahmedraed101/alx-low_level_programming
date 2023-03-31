#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds node as the end of list
 * @head: a pointer the head node
 * @str: the str for the new node
 *
 * Return: the number of nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));
	list_t *tail;

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	return (temp);
}
