#include "main.h"

/**
 * flip_bits - get how many bits to flip to get @m from @n
 * @n: the first number to get @m from
 * @m: the second number to get from @n
 *
 * Return: the number of bits you need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int flip_bit;

	xor = n ^ m;
	flip_bit = 0;
	while (xor > 0)
	{
		if ((xor & 1) != 0)
			flip_bit++;
		xor = xor >> 1;
	}
	return (flip_bit);
}
