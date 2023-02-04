#include "main.h"

/**
 * set_bit - set the bit at a specified index
 * @n: pointer to the integer variable
 * @index: index to be set
 *
 * Return: 1 for success or -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1 << index);

	return (1);
}
