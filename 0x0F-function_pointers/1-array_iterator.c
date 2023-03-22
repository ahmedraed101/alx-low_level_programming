#include "function_pointers.h"
/**
 * array_iterator - runs action to all elements of the array
 * @array: an array of int type
 * @size: the size of the array
 * @action: a function to run on each element
 *
 * Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
