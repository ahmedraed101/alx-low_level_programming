/**
* swap_int - takes pointers to 2vars and swap ther values
* @a: is the pointer to the 1st var
* @b: is the pointer to the 2st var
*
* Return: no thing
*/

void swap_int(int *a, int *b)
{
	int mid;

	mid = *a;
	*a = *b;
	*b = mid;
}
