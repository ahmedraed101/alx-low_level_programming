#include "main.h"

/**
 * print_line - prints a line of _
 * @c: how many time to print _
 *
 * Return: no return
*/

void print_line(int c)
{
	int i;

	if (c > 0)
		for (i = 1; i <= c; i++)
			_putchar('_');
	_putchar('\n');
}
