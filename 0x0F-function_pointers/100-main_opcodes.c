#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes if its own
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 1 if argc not right, 2 if bytes is negative
 */

int main(int argc, char **argv)
{
	int i, bytes;
	char *opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	opcodes = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", opcodes[i]);
			break;
		}
		printf("%02hhx ", opcodes[i]);
	}
	return (0);
}
