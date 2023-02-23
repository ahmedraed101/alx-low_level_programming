#include "main.h"

/**
 * print_square - print square of #s
 * @size: the length of the edge
 *
 * Return: no return
*/

void print_square(int size)
{
	int i, n;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (n = 1; n <= size; n++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
