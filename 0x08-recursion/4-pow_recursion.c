/**
* _pow_recursion - give x to the power of y
* @x: int number
* @y: int number the power value
*
* Return: factorial of number or -1 for negative values
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
