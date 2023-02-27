#include "main.h"
/**
* puts2 - this function print every other char of the string
* @str: the string to be printed every other char of
*
* Return: no thing
*/
void puts2(char *str)
{
	int i, p;

	i = 0;
	p = 1;
	while (str[i] != '\0')
	{
		if (p == 1)
		{
			p = 0;
			_putchar(str[i]);
		} else
			p = 1;
		i++;
	}
	_putchar('\n');
}
