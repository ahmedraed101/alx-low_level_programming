#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: an array of types of arguments
 *
 * Return: nothing
*/

void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *separator = "";
	unsigned int i;

	va_start(args, format);
	if (format)
	{
		i = 0;
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char*);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
