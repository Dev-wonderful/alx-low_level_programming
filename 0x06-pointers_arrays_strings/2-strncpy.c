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

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
