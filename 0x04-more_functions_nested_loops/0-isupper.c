#include "main.h"

/**
 * _isupper - checks if the given char is upper case letter or not
 * @c: letter to be checked for upper case
 *
 * Return: 1 if upper else 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
