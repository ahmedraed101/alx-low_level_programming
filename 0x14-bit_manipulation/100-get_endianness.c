#include "main.h"

/**
 * get_endianness - a function that checks the endianness of the system
 *
 * Return: 0 big endian or 1 little indian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
