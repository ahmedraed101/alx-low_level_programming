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
	int i, j;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc(max - min);
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
