#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - print numbers 1-100 if n%3=0 Fizz n%5-0 Buzz or both
 * main - runs fizz_buzz
 *
 * Return: no return
*/

int main(void)
{
	fizz_buzz();
	return (0);
}

void fizz_buzz(void)
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
}
