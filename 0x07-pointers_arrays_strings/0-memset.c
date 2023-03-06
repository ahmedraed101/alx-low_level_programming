/**
* _memset - fills the first n bytes of the memorey of array s with contanct b
* @s: the array to set it's memory values
* @b: the constant to fill the array with
* @n: the limit of the bytes of the array
*
* Return: pointer to the new array
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
