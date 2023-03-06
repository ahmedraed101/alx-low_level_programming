/**
* _memcpy - compies n number of bytes from src array to dest array
* @dest: the array to copy the src array to
* @src: the source array to copy into dest
* @n: the limit of the bytes to copy
*
* Return: pointer to the new array
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
