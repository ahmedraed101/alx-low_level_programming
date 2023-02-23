#include <stdio.h>

/**
 * main - print numbers 1-100 if n%3=0 Fizz n%5-0 Buzz or both
 *
 *
 * Return: Always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
