#include <stdio.h>

/**
 * first - executes before the main function
 *
 * Return: nothing
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow \n");
	printf("I bore my house upon my back!\n");
}
