#include "main.h"

/**
 * free_grid - frees a 2dimensional grid
 * @grid: pointer to integer
 * @height: number of rows
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
