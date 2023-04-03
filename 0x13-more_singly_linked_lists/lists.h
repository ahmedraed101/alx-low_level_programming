#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_t - singly linked list
 * @n: int value of the node
 * @next: a pointer to the next node
 */

typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;

size_t print_listint(const listint_t *head);
size_t listint_len(const listint_t *head);
listint_t *add_nodeint(listint_t **head, const int n);

#endif