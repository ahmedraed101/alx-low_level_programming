#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pionter to string of one bit
 *
 * Return: converted number or 0 if any char at @b != 0|1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int dec = 0;

	if (b == NULL)
		return (0);
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		dec <<= 1;
		if (*(b + i) == '1')
			dec ^= 1;
		i++;
	}
	return (dec);
}
