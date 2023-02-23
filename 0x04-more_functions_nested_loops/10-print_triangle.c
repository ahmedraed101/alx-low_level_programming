#include "main.h"

/**
 * print_triangle - print triangle of #s
 * @size: the size of the triangle
 *
 * Return: no return
*/

void print_triangle(int size)
{
	int i, n, h;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (n = 0; n < (size - i); n++)
				_putchar(' ');
			for (h = 0; h < i; h++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
