#include <stdlib.h>

/**
 * alloc_grid - allocates a 2 dimensional array of int
 * @width: int value
 * @height: int value
 *
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width < 1 || height < 1)
		return (NULL);

	p = malloc(sizeof(p) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;

	return (p);
}
