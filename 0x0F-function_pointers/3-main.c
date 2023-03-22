#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - runs the operation given onto two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success, 98 if argc not 4, 99 if op not right, 100 0Error
 */

int main(int argc, char **argv)
{
	int (*f)(int, int);
	int a, b, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (b == 0 && (op ==  "/" || op == "%"))
	{
		printf("Error\n");
		return (100);
	}

	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = f(a, b);
	printf("%d", result);
	return (0);
}
