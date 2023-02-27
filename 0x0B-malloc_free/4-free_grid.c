#include <stdlib.h>
#include "main.h"

/**
  * free_grid - this frees a 2D array
  * @grid: this is the 2D array to be freed
  * @height: this is the height of the grid
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
