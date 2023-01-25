#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		int total;

		if (isdigit(*argv[1]) && isdigit(*argv[2]))
		{
			total = var_a + var_b;	
			printf("%d\n", total);
		}
		else
		{
			printf("Error\n");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		printf("%d\n", 0);
	}

	exit(EXIT_SUCCESS);
}
