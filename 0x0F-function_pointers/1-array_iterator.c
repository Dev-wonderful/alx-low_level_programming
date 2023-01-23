#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function over each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: the function to be executed
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		int i;

		for (i = 0; (size_t)i < size; i++)
		{
			action(array[i]);
		}
	};
}
