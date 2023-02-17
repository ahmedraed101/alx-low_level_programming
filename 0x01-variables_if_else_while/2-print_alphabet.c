#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the alphabet in lower
 *
 * Return: Always 0 (sucess)
*/

/* betty style doc for function main goes there */
int main(void)
{
	char letter;
	int start = 97;

	while (start < 123)
	{
		letter = start;
		putchar(letter);
		++start;
	}
	putchar('\n');
	return (0);
}
