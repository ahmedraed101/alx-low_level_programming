#include "main.h"

/**
 * binary_to_uint - a function that converts binary to unsiged int
 * @b: an array of chars of 0 and 1 to convert
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, len = 0;
	const char *s = b;
	int power = 1, i = 0;

	if (b == NULL)
		return (0);

	while (*s != '\0')
	{
		len++;
		s++;
	}

	i = len - 1;
	while (i >= 0)
	{
		int charNumber = b[i] - '0';

		if (charNumber != 1 && charNumber != 0)
			return (0);
		x += power * charNumber;
		power = power * 2;
		i--;
	}
	return (x);
}
