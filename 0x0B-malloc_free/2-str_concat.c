#include <stdlib.h>

/**
 * str_concat - concatenates two string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2, total_size, i, k;
	char *p;

	size1 = size2 = 0;
	if (s1 != NULL)
		while (s1[size1] != '\0')
			size1++;
	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;

	total_size = size1 + size2 + 1;
	p = malloc(sizeof(char) * total_size);

	if (p == NULL)
		return (p);

	i = k = 0;
	if (s1 != NULL)
		for (; i < size1; i++)
		{
			if (s1[i] != '\0')
				p[k] = s1[i];
			k++;

		}
	i = 0;
	if (s2 != NULL)
		for (; i < size2; i++)
		{
			p[k] = s2[i];
			k++;
		}

	return (p);
}
