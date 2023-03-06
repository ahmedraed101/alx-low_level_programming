#include <stdio.h>

/**
* print_diagsums - prints the diagonal sum of array
* @a: the array
* @size: size of the array
*
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i <= (size * size) - size; i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
