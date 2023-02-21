#include "main.h"

/**
 * _isalpha - checks if the letter is lower or uppercase char
 *@c: The letter to be checked
 *
 * Return: Always 1 if c is lowercase or upper case or 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
