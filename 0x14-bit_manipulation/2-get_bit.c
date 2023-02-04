#include "main.h"

/**
 * get_bit - get the bit at a specified index
 * @n: the number
 * @index: the index to check
 *
 * Return: an integer value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n & (1 << index))
		return (1);
	else
		return (0);
}
