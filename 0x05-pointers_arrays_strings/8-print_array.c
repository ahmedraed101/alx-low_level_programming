#include <stdio.h>
#include "main.h"
/**
* print_array - prints the giving array of numbers
* @a: is array to be printed
* @n: the length of the array
*
* Return: no thing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
