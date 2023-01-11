#include "main.h"
/**
 * alloc_grid - allocate grid to memory
 * @width: wdith of the grid
 * @hieght: h of the grid
 * Return: array
 */
int **alloc_grid(int width, int hieght)
{
	int i, j;
	int **grid;

	if ((width <= 0) || (hieght <= 0))
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int) * hieght);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < hieght; i++)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid);
			for (j = 0; j <= i; j++)
			{
				free(grid[j]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < hieght; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
