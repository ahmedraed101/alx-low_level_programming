#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of integers from @min to @max
 * @min: the start itn (included)
 * @max: the final int (included)
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i, j, size;
	int *p;

	if (min > max)
		return (NULL);

	size = (max - min) + 2;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
		return (p);

	j = 0;
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
