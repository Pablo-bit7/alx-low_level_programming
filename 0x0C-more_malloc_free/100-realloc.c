#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: Pointer to the memory block
 * @old_size: Size of the old memory block
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return (new_ptr);
}
