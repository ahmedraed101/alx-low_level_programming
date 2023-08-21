#include "main.h"

/**
 * _abs - gets the absolute value if a number
 *@n: The number to get it's absolute value
 *
 * Return: the absolute value of n
*/

int _abs(int n)
{
	int abs = n;

	if (n < 0)
		abs = n * -1;
	return (abs);
}
