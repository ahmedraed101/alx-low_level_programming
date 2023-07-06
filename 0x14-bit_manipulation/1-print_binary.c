#include "main.h"

/**
 * print_binary - a function that takes a number and print it's binary
 * @n: the number to prints it as binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int index = 63, len = 0;
	unsigned long int num;

	while (index >= 0)
	{
		num = n >> index;
		if (num & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
		index--;
	}
	if (!len)
		_putchar('0');
}

