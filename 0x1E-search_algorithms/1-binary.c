#include "search_algos.h"

/**
 * binary_search - searches using Binary Search Algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: the number to be found
 *
 * Return: the index of value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end, i;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		printf("Searching in array: %d", array[start]);
		for (i = start + 1; i <= end; i++)
		{
			printf(", %d", array[i]);
		}
		mid = (start + end) / 2;
		printf("\n");
		if (value < array[mid])
		{
			end = mid - 1;
		}
		else if (value > array[mid])
		{
			start = mid + 1;
		}
		else
		{
			return (mid);
		}
	}
	if (value == array[mid])
		return (mid);
	else
		return (-1);
	return (-1);
}
