#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all base 16 numbers in lower
 *
 * Return: Always 0 (sucess)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int d;
	char lower;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);

	putchar('\n');

	return (0);
}
