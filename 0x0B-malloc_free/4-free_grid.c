#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array previously created by alloc_grid
 * @grid: The 2D array to free
 * @height: The height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	/* Free memory for each row */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free memory for the array of pointers */
	free(grid);
}
