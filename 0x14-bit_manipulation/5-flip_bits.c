#include "main.h"

/**
 * flip_bits - gives the number of bits to flib to get from number n to m
 * @n: the first Number
 * @m: the second Number to get to
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index = (sizeof(int) * 8)-1, bit_count = 0;
	unsigned long int current;
	unsigned long int special = n ^ m;

	while (index >= 0)
	{
		current = special >> index;
		if (current & 1)
			bit_count++;
		index--;
	}
	return bit_count;
}
