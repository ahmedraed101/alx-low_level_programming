#include "main.h"

/**
 * more_numbers - prints numbers [0-9] + \n 10X
 *
 * Return: no return
*/

void more_numbers(void)
{
	int i, n, base1, base10;

	for (n = 1; n <= 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			base1 = i % 10;
			base10 = i / 10;
			if (base10 != 0)
				_putchar(base10 + '0');
			_putchar(base1 + '0');
		}
		_putchar('\n');
	}
}
