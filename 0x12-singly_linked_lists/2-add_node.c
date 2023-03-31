#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds node as the beginning of list
 * @head: a pointer the head node
 * @str: the str for the new node
 *
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
