/**
* _strncat - concat two strings until n bytes of second string
* @dest: the first to string to chain with @src
* @src: the second string to chain on @dest
* @n: the max bytes from @src
*
* Return: pointer to the new array
*/

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	char *g = src;

	while (*p != '\0')
		p++;

	while (n > 0 && *g != '\0')
	{
		*p = *g;
		p++;
		g++;
		n--;
	}
	return (dest);
}
