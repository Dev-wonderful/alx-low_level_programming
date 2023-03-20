#include "main.h"

/**
 * _strncat - concatenates two string with n bytes from src
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of characters/bytes
 *
 * Return: A pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	};

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest[dest_len + j] = '\0';

	return (dest);

}
