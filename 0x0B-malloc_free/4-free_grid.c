#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional array of integers
 * @grid: array2D of integers
 * @height: height of array2D
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	
	if (grid == NULL || height <= 0)
		return ;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
