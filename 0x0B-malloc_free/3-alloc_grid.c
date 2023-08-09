#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: The width of the grid
 * @height: The height of the grid
 *
 * Return: Pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the array of pointers */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL); /* Memory allocation failed */

	/* Allocate memory for each row */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated rows on failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL); /* Memory allocation failed */
		}

		/* Initialize each element to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
