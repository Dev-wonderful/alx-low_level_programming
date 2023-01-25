#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int var_a = atoi(argv[1]);
		int var_b = atoi(argv[2]);

		printf("%d\n", var_a * var_b);
	}
	else
	{
		printf("Error\n");
	}

	exit(EXIT_SUCCESS);
}
