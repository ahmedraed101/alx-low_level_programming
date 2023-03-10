int _sqrt(int, int);
/**
* _sqrt_recursion - give the square root of n
* @n: int number
*
* Return: square root of number or -1 if have none
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - gives the square root of n
 * @n: number to get square root
 * @i: iterate numer
 *
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (sqrt);
	return (_sqrt(n, i + 1));
}
