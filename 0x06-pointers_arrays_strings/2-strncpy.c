/**
* _strncpy - copies the src string to dest string with n limit
* @dest: the destniation for the copy
* @src: the string to copied
* @n: the limit of  bytes from @src
*
* Return: pointer to the new array
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	char *g = src;

	while (n > 0 && *g != '\0')
	{
		*p = *g;
		p++;
		g++;
		n--;
	}
	if (*g == '\0')
		*p = *g;
	return (dest);
}
