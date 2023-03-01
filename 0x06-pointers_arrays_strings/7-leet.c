/**
* leet - a function that converts some letter to numbers
* @a: the arary
*
* Return: new number coded string
*/

char *leet(char *a)
{
	int i, n;
	char leet[5] = {'a', 'e', 'o', 't', 'l'};
	char nums[5] = {'4', '3', '0', '7', '1'};

	while (a[i] != '\0')
	{
		for (n = 0; n < 5; n++)
			if (a[i] == leet[n] || a[i] - 32 == leet[n])
				a[i] = nums[n];
		i++;
	}
	return (a);
}
