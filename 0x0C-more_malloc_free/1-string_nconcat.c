#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two string
 * @s1: the first string
 * @s2: second string
 * @n: the limit number of chars from @s2
 *
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size1, size2, total_size;
	char *p;

	size1 = size2 = 0;
	if (s1 != NULL)
		while (s1[size1] != '\0')
			size1++;

	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;
	if (size2 > n)
		total_size = size1 + n + 1;
	else
		total_size = size1 + size2 + 1;

	p = malloc(total_size);

	if (p == NULL)
		return (p);

	j = i = 0;
	if (s1 != NULL)
		for (; i < size1; i++)
		{
			p[j] = s1[i];
			j++;
		}
	if (s2 != NULL)
		for (i = 0; i < size2; i++)
		{
			p[j] = s2[i];
			j++;
		}
	p[j] = '\0';

	return (p);
}
