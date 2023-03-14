#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate an area memory for 2 dimensional array of integers
 * @width: an input integer which represents the width of the grid
 * @height: an input integer which represents the height of the grid
 *
 * Return: array of integers
 */
int **alloc_grid(int width, int height)
{
	int **ptr = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
