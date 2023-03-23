#include "variadic_functions.h"
/**
 * sum_them_all - a function that return the sum of it's arguments
 * @n: the number of arguments passed
 *
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(nums, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
