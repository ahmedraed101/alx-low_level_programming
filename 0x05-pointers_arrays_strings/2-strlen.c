/**
* _strlen - this function calculate the length of strings
* @s: the string to get it's length
*
* Return: length of @s
*/

int _strlen(char *s)
{
	char i;
	int n;

	i = *s;
	n = 0;
	while (i != '\0')
	{
		n++;
		i = *(s + n);
	}
	return (n);
}
