#include "main.h"

/**
 * print_diagonal - prints \ to shape a diagonal
 * @c: how many time to print \
 *
 * Return: no return
*/

void print_diagonal(int c)
{
	int i, n;

	if (c > 0)
		for (i = 1; i <= c; i++)
		{
			for (n = 1; n < i; n++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');		}
	_putchar('\n');
}
