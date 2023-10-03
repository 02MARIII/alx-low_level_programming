#include "main.h"
/**
 * **alloc_grid - Entry point
 * @width: param of int
 * @height: param of int
 * Return: int
*/
int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;
	if (width <= 0 || height <= 0) {
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	
	if (grid == NULL) {
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL) {
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}

	return (grid);
}
