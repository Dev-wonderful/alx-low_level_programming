#include "main.h"

/**
 * _strncpy - copies n bytes of string to dest
 * @dest: a pointer to the destination variable
 * @src: a pointer to the source variable
 * @n: number of bytes to copied
 *
 * Return: a pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	if (dest_len <= n)
	{
		dest[i] = '\0';
	}

	return (dest);
}
