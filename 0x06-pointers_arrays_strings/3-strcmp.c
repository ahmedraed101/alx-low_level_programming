/**
* _strcmp - compares two strings s1 and s2
* @s1: the first string
* @s2: the second strindg
*
* Return: 0 if s1 == s2 -int if s1 < s2 +int if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		i = *s1 - *s2;
		if (i != 0)
			break;
		s1++;
		s2++;
	}
	return (i);
}
