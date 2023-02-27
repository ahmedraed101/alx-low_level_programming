#include "main.h"
/**
* print_rev - prints the s string in reverse
* @s: the string to be printed in reverse
*
* Return: no thing
*/
void print_rev(char *s)
{
	char l;
	int i, n;

	l = *s;
	i = 0;
	while (l != '\0')
	{
		i++;
		l = *(s + i);
	}
	for (n -= i; n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
