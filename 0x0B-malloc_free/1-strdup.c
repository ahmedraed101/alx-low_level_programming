#include <stdlib.h>

/**
 * _strdup - allocate a space in memory and copy @str to it
 * @str: the string to copy
 *
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int size, i;

	if (str == NULL)
		return (NULL);

	size = 0;
	while (str[size] != '\0')
		size++;
	size++;

	p = malloc(sizeof(char) * size);
	if (p != NULL)
		for (i = 0; i <= size; i++)
			p[i] = str[i];
	return (p);
}
