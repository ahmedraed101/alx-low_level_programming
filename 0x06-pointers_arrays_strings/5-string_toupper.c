/**
* string_toupper - convert lowercase letters to uppercase
* @a: the arary
*
* Return: the new upper case string
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
	return (a);
}
