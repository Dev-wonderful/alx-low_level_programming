#include "main.h"

/**
 * flip_bits - the amount of bits to flip
 * @n: base integer
 * @m: second integer
 *
 * Return: the number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int num = 0;

	while (flip > 0)
	{
		flip &= (flip - 1);
		num++;
	}

	return (num);
}
