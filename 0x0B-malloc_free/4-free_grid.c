#include "main.h"
/**
 * free_grid - free spacess in mem
 * @grid: the actual grid pointer
 * @height: sorta size of the grid
 * Return: Void palije
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
