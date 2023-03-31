#include "lists.h"

/**
 * before_main - prints a string before the main runs
 *
 * Return: nothing
 */

void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
