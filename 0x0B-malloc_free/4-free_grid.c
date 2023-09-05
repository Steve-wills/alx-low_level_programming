#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2-dimensional grid previously
 * created by alloc_grid function
 * @grid: pointer variable
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
