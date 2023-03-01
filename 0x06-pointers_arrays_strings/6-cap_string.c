/**
* cap_string - convert the first letter of each word to uppercase
* @a: the arary
*
* Return: the new uppercase string
*/

char *cap_string(char *a)
{
	int i, lastS;

	lastS = 1;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' ||
			a[i] == ',' || a[i] == ';' || a[i] == '.' ||
			a[i] == '!' || a[i] == '?' || a[i] == '"' ||
			a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
			lastS = 1;
		else if (a[i] >= 'a' && a[i] <= 'z' && lastS == 1)
		{
			a[i] = a[i] - 32;
			lastS = 0;
		} else
			lastS = 0;
	}
	return (a);
}
