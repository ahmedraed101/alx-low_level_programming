#include "main.h"

/**
 * print_last_digit - gits the last digit of the number
 *@n: The number to get it's last digit
 *
 * Return: the last digit of the number n
*/

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = lastdigit * -1;
	_putchar(lastdigit + '0');
	return (lastdigit);
}
