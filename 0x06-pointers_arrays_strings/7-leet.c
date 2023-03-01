/**
* leet - a function that converts some letter to numbers
* @a: the arary
*
* Return: new number coded string
*/

char *leet(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
		{
			a[i] = '4';
			continue;
		}
		if (a[i] == 'e' || a[i] == 'E')
		{
			a[i] = '3';
			continue;
		}
		if (a[i] == 'o' || a[i] == 'O')
		{
			a[i] = '0';
			continue;
		}
		if (a[i] == 't' || a[i] == 'T')
		{
			a[i] = '7';
			continue;
		}
		if (a[i] == 'l' || a[i] == 'L')
		{
			a[i] = '1';
			continue;
		}
	}
	return (a);
}
