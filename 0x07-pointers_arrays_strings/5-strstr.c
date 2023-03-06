#include <stddef.h>

/**
* _strstr - finds the first occurence of a substring in a string
* @haystack: string to search in
* @needle: a string to search for
*
* Return: pointer of NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, match;

	match = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = i;
		if (haystack[j] == needle[0])
		{
			for (k = 0; needle[k] != '\0'; k++)
			{
				match = 1;
				j++;
				if (haystack[j] != needle[k])
				{
					match = 0;
					break;
				}
			}
		}
		if (match == 1)
			return (&haystack[i]);
	}
	return (NULL);
}
