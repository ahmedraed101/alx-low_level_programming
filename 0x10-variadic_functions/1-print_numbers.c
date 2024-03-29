#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints @n number of arguments with @separator
 * @separator: string to be printed between numbers
 * @n: the number of arguments passed
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if (separator != NULL && i != (n  - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
