#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: the size of the aray
 * @c: the inital cahr
 *
 * Return: pointer or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p != NULL)
		for (i = 0; i < size; i++)
			p[i] = c;
	return (p);
}
