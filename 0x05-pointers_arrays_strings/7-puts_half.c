#include "main.h"
/**
* puts_half - prints the second half of str if odd n=(len-1)/2
* @str: the string to be print it's half
*
* Return: no thing
*/
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = (len / 2); i > 0; i++)
		_putchar(str[len - i]);
	_putchar('\n');
}
