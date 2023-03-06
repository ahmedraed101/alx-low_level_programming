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
	for (; *haystack != '\0'; haystack++)
	{
		char *main = haystack;
		char *sub = needle;

		while (*main == *sub && *sub != '\0')
		{
			main++;
			sub++;
		}

		if (*sub == '\0')
			return (haystack);
	}
	return (NULL);
}
