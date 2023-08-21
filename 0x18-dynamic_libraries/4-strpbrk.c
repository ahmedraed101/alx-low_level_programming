#include <stddef.h>

/**
* _strpbrk - locates the first occurrence in string s of any bytes of accept
* @s: the string to search
* @accept: the string to match from
*
* Return: pointer to the new array or NULL if no thing found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (&s[i]);
	return (NULL);
}
