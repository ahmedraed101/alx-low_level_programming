#include "main.h"

/**
 * get_bit - gives the value of a bit at a given index
 * @n: an unsigned long number
 * @index: the index of the bit needed
 *
 * Return: the value of the bit or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
