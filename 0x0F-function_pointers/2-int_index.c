#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search in
 * @size: The number of elements in the array
 * @cmp: A pointer to the function used to compare values
 *
 * Return: Index of the first element for which cmp doesn't return 0,
 *         -1 if no element matches or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
