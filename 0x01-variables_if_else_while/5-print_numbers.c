#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints all base 10 digits
 *
 * Return: Always 0 (sucess)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');
	return (0);
}
