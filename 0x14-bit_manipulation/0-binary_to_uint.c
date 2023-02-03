#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: pointer to string
 *
 * Return: the converted number or NULL if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, h, pow, digit;
	unsigned int uint = 0;
	char p[] = "";

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (!isdigit(b[i++]))
			return (0);
	}
	i = i - 1;
	while (i >= 0)
	{
		pow = 2;
		p[0] = b[i--];
		digit = atoi(p);
		h = j++;
		if (h == 0)
		{
			pow = 1;
		}
		else if (h == 1)
		{
			pow = 2;
		}
		else
		{
			while (h > 1)
			{
				pow *= 2;
				h--;
			}
		}
		uint += (pow * digit);
	}
	return (uint);
}
