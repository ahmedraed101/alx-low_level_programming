/**
* set_string - function that sets the value of a pointer to a char
* @s: src string
* @to: dest string
*
* Return: nothing
*/

void set_string(char **s, char *to)
{
	*to = **s;
}
