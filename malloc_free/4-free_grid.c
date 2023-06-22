#include "main.h"
#include <stdlib.h>

/**
  * free_grid -  frees a 2 dimensional grid
  * @grid: grid previously created by your alloc_grid function.
  * @height: height ogf the grid.
  *
  * Return: freed grid
  */
void free_grid(int **grid, int height)
{
	int gridinc;

	for (gridinc = 0; gridinc < height; gridinc++)
	{
		free(grid[gridinc]);
	}

	free(grid);
}
