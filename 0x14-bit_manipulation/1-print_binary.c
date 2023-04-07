#include "main.h"
#include <stdio.h>

/**
 * _shift_right - recusive function to print bit 0
 * @n: the number
 */

void _shift_right(unsigned long int n)
{
	if (n == 0)
		return;
	_shift_right(n >> 1);
	putchar((n & 1) + '0');
}


/**
 * print_binary - prints the binary of a number
 * @n: a number to print in binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		putchar('0');
	else
		_shift_right(n);
}