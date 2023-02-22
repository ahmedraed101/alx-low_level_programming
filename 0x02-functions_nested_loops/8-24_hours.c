#include "main.h"

/**
 * jack_bauer - prints the all the hours and minute of the day in 24 format
 *
 * Return: no return
*/

void jack_bauer(void)
{
	int h10, h1, m10, m1;

	for (h10 = 0; h10 <= 2; ++h10)
		for (h1 = 0; h1 <= 9; ++h1)
		{
			if (h10 == 2 && h1 > 3)
				break;
			for (m10 = 0; m10 <= 5; ++m10)
				for (m1 = 0; m1 <= 9; ++m1)
				{
					_putchar(h10 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m10 + '0');
					_putchar(m1 + '0');
					_putchar('\n');
				}
		}
}
