#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocated for grid
 * created by alloc_grid()
 * @grid: grids to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;

	for (x = 0; x < height; x++)
		free(grid[x]);

	free(grid);
}
