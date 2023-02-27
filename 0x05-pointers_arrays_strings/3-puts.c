#include "main.h"
/**
* _puts - this function print string followd by \n
* @str: the string to be printed
*
* Return: no thing
*/
void _puts(char *str)
{
	char l;
	int i;

	l = *str;
	while (l != '\0')
	{
		_putchar(l);
		i++;
		l = *(str + i);
	}
	_putchar('\n');
}
