#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from n given number to 98
 * @n: number given to count from until 98
 *
 * Return: no return
*/

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		--n;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		++n;
	}
	printf("%d\n", 98);
}
