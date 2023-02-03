#include "main.h"

/**
 * print_binary - print the converted binary
 * @n: the unsigned long integer to be converted
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, allow, j = 31;
	unsigned long int bit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (j >= 0)
	{
		bit = 2;
		i = j;
		if (i == 0)
		{
			bit = 1;
		}
		else if (i == 1)
		{
			bit = 2;
		}
		else
		{
			while (i > 1)
			{
				bit *= 2;
				i--;
			}
		}
		if (n & bit)
		{
			allow = 1;
			_putchar('1');
		}
		else
		{
			if (allow == 1)
				_putchar('0');
		}
		j--;
	}
}
