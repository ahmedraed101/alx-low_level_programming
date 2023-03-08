/**
* factorial - return the factorial of number
* @n: int number
*
* Return: factorial of number or -1 for negative values
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
