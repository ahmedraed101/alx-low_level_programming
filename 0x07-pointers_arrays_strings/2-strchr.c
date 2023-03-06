#include <stddef.h>

/**
* _strchr - finds the first occurrence of charcter c in string s
* @s: the string to search for char c
* @c: the character to search for
*
* Return: pointer to the new array
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
