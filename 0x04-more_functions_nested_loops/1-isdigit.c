#include "main.h"

/**
 * _isdigit - checks if the @c is digit for not
 * @c: int value to be checked
 *
 * Return: 1 if between 0-9 else 0
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
