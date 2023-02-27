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

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
	
}
