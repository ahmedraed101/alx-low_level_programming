/**
* leet - a function that converts some letter to numbers
* @a: the arary
*
* Return: new number coded string
*/

char *leet(char *a)
{
	int i, n;
	char leet[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	while (a[i] != '\0')
	{
		for (n = 0; n < 8; n++)
			if (a[i] == leet[n] || a[i] + 32 == leet[n])
				a[i] = n + '0';
		i++;
	}
	return (a);
}
