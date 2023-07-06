#include "main.h"

/**
 *
 * clear_bit - a function that allow you to set a bit at certain index to zero
 * @n: the number to change it's bits
 * @index: the index of the bit to change
 *
 * Return: 1 on success and -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);
	return (1);
}
