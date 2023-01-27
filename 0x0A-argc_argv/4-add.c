#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
/*		char *str[50];*/
		int i = 1;
		int total = 0;

		while (i < argc)
		{
			
			if (1)
			{
				total += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}

			i++;
		}
		
		printf("%d\n", total);	
	}
	else
	{
		printf("%d\n", 0);
	}

	exit(EXIT_SUCCESS);
}
