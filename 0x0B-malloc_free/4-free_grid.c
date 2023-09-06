#include "main.h"

/**
 * free_grid - frees a 2dimensional grid
 * previously created by your alloc_grid function
 * @grid: pointer to integer
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
