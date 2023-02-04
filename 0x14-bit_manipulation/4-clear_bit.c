#include "main.h"

/**
 * clear_bit - clears the bit at a specified index
 * @n: pointer to the integer
 * @index: index to be cleared
 *
 * Return: 1 for success or -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	
	return (1);
}
