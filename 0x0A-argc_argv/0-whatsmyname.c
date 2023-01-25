#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 indicating success
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
