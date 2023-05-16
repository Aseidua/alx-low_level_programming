#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - A function that frees a two dimensional grid
 * previously created by a file
 * @grid : A double pointer to the array
 * @height : height of the grid in integer
 * Return: ALways successful
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
