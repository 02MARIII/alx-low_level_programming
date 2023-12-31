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

	if (width <= 0 || height <= 0) {
		return (NULL);
	}
	int **grid = (int **)malloc(height * sizeof(int *));
	
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
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}