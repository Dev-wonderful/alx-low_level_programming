#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers
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
		int total = var_a + var_b;

		if (total)
		{
			printf("%d\n", total);
		}
		else
		{
			printf("Error");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("Error\n");
	}

	exit(EXIT_SUCCESS);
}
