#include "main.h"

/**
 * _strlen-a function that gives the len of string without the null
 * @str: the string to get it's length
 *
 * Return: size_t size
 */

size_t _strlen(char *str)
{
	size_t size = 0;

	while (str[size] != '\0')
		size++;

	return (size);
}
