#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dlistint_t - doubly linked list
 * @n: integer
 * @next: points to the next node
 * @prev: points to the prev node
 *
 * Description: doubly linked list node structure
*/
typedef struct dlistint_t
{
	int n;
	struct dlistint_t *next;
	struct dlistint_t *prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
