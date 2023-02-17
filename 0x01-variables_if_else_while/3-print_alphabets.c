#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lower and upper
 *
 * Return: Always 0 (sucess)
*/

/* betty style doc for function main goes there */
int main(void)
{
	char letter;
	int lower = 97;
	int upper = 65;

	while (lower < 123)
	{
		letter = lower;
		putchar(letter);
		++lower;
	}
	while (upper < 91)
	{
		letter = upper;
		putchar(letter);
		++upper;
	}
	putchar('\n');
	return (0);
}
