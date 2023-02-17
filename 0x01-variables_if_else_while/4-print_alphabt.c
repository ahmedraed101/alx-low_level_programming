#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lower except q and e
 *
 * Return: Always 0 (sucess)
*/

/* betty style doc for function main goes there */
int main(void)
{
	char letter;
	int lower = 97;

	while (lower < 123)
	{
		letter = lower;
		++lower;
		if (letter == 'e' || letter == 'q')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
