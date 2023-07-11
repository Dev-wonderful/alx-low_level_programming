#include "search_algos.h"

/**
 * linear_search - searches for value using linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: number to be found
 *
 * Return: index of value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		else
		{
			printf("value checked array[%lu] = [%d]\n", i, array[i]);
		}
	}

	return (-1);
}
