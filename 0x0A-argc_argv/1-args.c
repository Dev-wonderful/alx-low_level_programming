#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}
