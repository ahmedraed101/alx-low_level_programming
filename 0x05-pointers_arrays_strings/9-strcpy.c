#include "main.h"
/**
* *_strcpy - copy array to another
* @src: the array to copy from
* @dest: the array to copy to
*
* Return: no thing
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (1 == 1)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			break;
		i++;
	}
	return dest;
}
