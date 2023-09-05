#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0
 * @width: The width of the 2-dimensional array
 * @height: The height of the 2-dimensional array
 * Return: inter to the 2-dimensional array, NULL if it fais
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * width);

	if (grid == NULL)
		return (NULL);

	for (w = 0; w < width; w++)
	{
		grid[w] = malloc(sizeof(int) * height);

		if (grid[w] == NULL)
		{
			for (h = 0; h < w; h++)
				free(grid[h]);
			free(grid);
			return (NULL);
		}
		for (h = 0; h < height; h++)
			grid[w][h] = 0;
	}
	return (grid);
}
