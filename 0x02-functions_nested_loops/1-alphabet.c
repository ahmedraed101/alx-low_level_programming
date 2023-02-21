#include "main.h"

/**
 * print_alphabet - prints the lower case alphabet chars
 *
 * Return: Always 0
*/

int print_alphabet(void)
{
	char letter;

	for (letter = 97; letter < 123; ++letter)
		_putchar(letter);
	_putchar('\n');
	return (0);
}
