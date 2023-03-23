#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
	unsigned int i, num;
	char *sep;

	if (separator != NULL)
	{
		sep = malloc(sizeof(char) * strlen(separator));
		if (sep == NULL)
			return;
		strcpy(sep, separator);
	}
	else
		sep = "";

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		if (i == n - 1)
		{
			printf("%d", num);
			break;
		}
		printf("%d%s", num, sep);
	}
	printf("\n");
	va_end(nums);
	free(sep);
}
