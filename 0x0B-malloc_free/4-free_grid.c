#include "holberton.h"
/**
 * free_grid - function that frees a 2 dimensional
 * @grid: integer
 * @height: integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
	while (height)
		free(grid[--height]);
	free(grid);
}
