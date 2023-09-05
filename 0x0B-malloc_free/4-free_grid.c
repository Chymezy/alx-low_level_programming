#include "main.h"

/**
 * free_grid - drops the memory for 2 dimensional grid
 *
 * @grid: the grid array to be freed from memory
 * @height: the height of the grid
 *
 * Return: always (0)
 */


void free_grid(int **grid, int height)
{
	int k = 0;

	while (k < height)
	{
		free(grid[k]);
		k++;
	}

	free(grid);

}
