#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *free_grid -frees a 2 dimensional grid
 *
 *@grid: The memory allocated to the grid
 *@height: The rows that will be freed
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
{
	free(grid[h]);
}
	free(grid);
}
