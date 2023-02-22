#include "main.h"

/**
 * times_table - prints the number from 0 to 9 * number from 0 to 9
 *
 * Return: no return
*/

void times_table(void)
{
	int n, multi, result, base1, base10;

	for (n = 0; n <= 9; ++n)
	{
		for (multi = 0; multi <= 9; ++multi)
		{
			result = n * multi;

			if (result > 9)
			{
				base1 = result % 10;
				base10 = (result - base1) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(base10 + '0');
				_putchar(base1 + '0');
			} else
			{
				if (multi != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
