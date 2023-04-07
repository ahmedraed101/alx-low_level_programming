#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at @index
 * @n: a pointer to the number
 * @index: the index of the bit to set to 0
 *
 * Return: 1 on success and -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
