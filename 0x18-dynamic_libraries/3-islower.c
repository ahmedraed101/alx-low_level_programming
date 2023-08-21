#include "main.h"

/**
 * _islower - check letter to be lowercase
 *@c: The letter to be checked
 *
 * Return: Always 1 if c is lowercase or 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
