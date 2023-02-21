#include "main.h"

/**
 * print_sign - checks if the number is == 0 or > 0 or < 0
 *@n: The number to be checkd
 *
 * Return: 1 if (n > 0) 0 if (n == 0) -1 if (n < 0)
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
