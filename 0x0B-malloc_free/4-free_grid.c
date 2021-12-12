#include "main.h"

/**
 *free_grid - function that frees memory of a 2d grid
 *@grid: the passed pointer
 *@height: the height of the grid
 *Return: (VOID)
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}

	free(grid);
}
