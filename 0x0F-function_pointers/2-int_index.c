#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: comparison function
 *
 * Return: an integer value indicating the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

		return (-1);
	}
	else
	{
		return (-1);
	}
}
