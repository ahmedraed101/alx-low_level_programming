/**
* _strcat - concat to strings
* @dest: the first to string to chain with @src
* @src: the second string to chain on @dest
*
* Return: pointer to the new array
*/

char *_strcat(char *dest, char *src)
{
	char *p = dest;
	char *g = src;

	while (*p != '\0')
		p++;

	while (*g != '\0')
	{
		*p = *g;
		p++;
		g++;
	}
	return (dest);
}
