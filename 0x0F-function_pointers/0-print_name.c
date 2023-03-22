#include "main.h"

/**
 * print_name - prints a given string
 * @name: a array of char
 * @f: a pointer to function that prints one char
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	while (*name != '\0')
	{
		f(name);
		name++;
	};
}
