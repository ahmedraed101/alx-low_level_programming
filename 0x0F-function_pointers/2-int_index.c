#include "function_pointers.h"
/**
 * int_index - a function that searches for int
 * @array: an array of int type
 * @size: the size of the array
 * @cmp: pointer to a function that compares two numbers
 *
 * Return: nothing
*/

int  int_index(int *array, int size, int (*cmp)(int))
{
	int i, num;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		num = cmp(array[i]);
		if (num != 0)
			return (i);
	}

	return (-1);
}
