#include "main.h"
/**
* _strlen_recursion - gets the length of the string
* @s: string to count
*
* Return: int length of string
*/

int _strlen_recursion(char *s)
{
	unsigned int i;

	i = 1;
	if (*s != '\0')
		return (i + _strlen_recursion(++s));
	return (0);
}
