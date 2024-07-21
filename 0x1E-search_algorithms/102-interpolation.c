#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for value in sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: First index where value is located, or
 *	-1 if not found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;
	double f;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		f = (double)(high - low) / (array[high] - array[low]);
		pos = low + (f * (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (value == array[low])
		return (low);

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
