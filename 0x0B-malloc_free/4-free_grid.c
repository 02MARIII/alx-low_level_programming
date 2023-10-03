#include "main.h"
/**
 * free_grid - Entry point
 * @grid: param of pointer in int
 * @height: param of int
 * Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
