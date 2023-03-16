#include "main.h"

/*
 * free_grid - frees an 2D aray
 * @grid: 2D array
 * @height: rows
 *
 * Return: Nothing
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
