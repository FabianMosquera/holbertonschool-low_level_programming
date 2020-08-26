#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to fist element
 * @size: size of array
 * @value: value to serch
 * Return: index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%li] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
