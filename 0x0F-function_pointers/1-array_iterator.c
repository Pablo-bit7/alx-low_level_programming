#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: A function pointer to the function to execute on each element
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
