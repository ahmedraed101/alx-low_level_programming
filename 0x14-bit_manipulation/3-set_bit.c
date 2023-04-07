#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at @index
 * @n: a pointer to the number
 * @index: the index of the bit to set to 1
 *
 * Return: 1 on success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
