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
	int len;

	for (len = 0; len < n && src[len] != '\0'; len++)
		dest[len] = src[len];
	for (; len < n; len++)
		dest[len] = '\0';
	return (dest);
}
