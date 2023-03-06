#include <stddef.h>

/**
* _strspn - gets the length of a prefix substring
* @s: string to be scanned
* @accept: string containing the charcters to match
*
* Return: number of charcters in the inital segment
*  of s which consist only of characters from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, k, match;

	match = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[i] == accept[k])
			{
				match = 1;
				break;
			}
		}
		if (match == 1)
		{
			n++;
			match = 0;
		}
		else
			break;
	}
	return (n);
}
