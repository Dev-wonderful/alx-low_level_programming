#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: Destination string
 * @src: source string
 *
 * Return: A pointer to the final string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	int dest_len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_len++;
	};

	j = 0;

	while (src[j] != '\0')
	{
		dest[dest_len + j] = src[j];
		j++;
	};

	dest[dest_len + j] = '\0';

	return (dest);
}
