#include "main.h"

/**
 * binary_to_unit - converts binary number to an unsigned int
 * @b: pionter to string of one bit
 *
 * Return: converted number or 0 if any char at @b != 0|1
 */

unsigned int binary_to_unit(const char *b)
{
	unsigned int i, dec;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && (*b + i) != '1')
			return (0);
		dec <<= 1;
		if (*(b + i) == '1')
			dec ^= 1;
		i++;
	}
}
