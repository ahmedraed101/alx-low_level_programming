#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: nothing
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	unsigned int size, k;
	char *result;

	if (ac < 1 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		size++;
	}

	result = malloc(sizeof(char) * size);
	if (result == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}

	return (result);
}
