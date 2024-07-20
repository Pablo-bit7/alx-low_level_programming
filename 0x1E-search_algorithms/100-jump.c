#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * min - Returns the minimum of two size_t values
 * @a: First value
 * @b: Second value
 *
 * Return: The minimum of the two values
 */
size_t min(size_t a, size_t b)
{
        return (a < b ? a : b);
}

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if the value is not present or the array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = (size_t)sqrt(size);
	prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += (size_t)sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, min(step, size));

	for (i = prev; i < min(step, size); i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
