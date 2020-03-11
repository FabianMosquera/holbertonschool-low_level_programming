#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: int
 * @size: int
 * @cmp: int
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
