#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

/**
 * list_t - singly linked list
 * @str: the value of the node
 * @len: the length of the value of the node
 * @next: pointer to next node
 */

typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t* next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
