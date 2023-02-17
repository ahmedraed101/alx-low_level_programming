#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - prints the single digit numbers
 *
 * Return: Always 0 (sucess)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; ++n)
	{
		putchar(n);
		if (n == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
