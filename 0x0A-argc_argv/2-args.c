#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", *argv++);
		count++;
	}

	exit(EXIT_SUCCESS);
}
