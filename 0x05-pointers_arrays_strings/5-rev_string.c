#include "main.h"
/**
* rev_string - reverse the string in memory
* @s: the string to be reversed
*
* Return: no thing
*/
void rev_string(char *s)
{
	char temp;
	int len, i;

	len = 0;
	while (s[len] != '\0')
		len++;
	for (i = 0; i < (len / 2); i++)
	{
		temp = s[len - 1 - i];
		s[len - 1 - i] = s[i];
		s[i] = temp;
	}
}
