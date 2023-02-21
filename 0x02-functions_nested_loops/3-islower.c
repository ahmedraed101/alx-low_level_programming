#include "main.h"

/**
 * _islower - prints the lower case alphabet chars 10 times
 *
 * Return: Always 1 if c is lowercase or 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
