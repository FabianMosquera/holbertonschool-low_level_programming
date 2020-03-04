#include "holberton.h"

/**
 * alloc_grid - Return pointer Matriz
 * @width: integer
 * @height: integer
 * Return: int
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row;
	int column;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);

	if (!array)
		return (NULL);

	for (row = 0; row < height; ++row)
	{
		array[row] = malloc(sizeof(int *) * width);

		if (!array)
		{
			while (--row > -1)
				free(array[row]);
			free(array);
			return (NULL);
		}
		for (column = 0; column < width; ++column)
			array[row][column] = 0;
	}
	return (array);
}
