#include "main.h"


/**
 * get_bit - a function that get the value of an bit at index given
 * @n: the unsigned int
 * @index: unsigned int
 *
 * Return: the value of the bit in int
 */

int get_bit(unsigned int n, unsigned int index)
{
	int value;

	if (index >= sizeof(n) * 8)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
