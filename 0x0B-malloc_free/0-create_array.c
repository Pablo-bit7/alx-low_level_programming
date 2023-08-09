#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates array of chars + initializes it with a specific char
 * @size: The size of the array to create
 * @c: The char with which to initialize the array
 *
 * Return: pointer to created array, or NULL if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
