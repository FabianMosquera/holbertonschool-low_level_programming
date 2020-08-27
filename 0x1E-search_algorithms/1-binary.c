#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array
 * @array: pointer to fist element
 * @size: size of array
 * @value: value to serch
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int first = 0;
	int last = size - 1;
	int middle, i;

	if (array == NULL)
		return (-1);
	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d", array[i]);
			if (i < last)
				printf(", ");
			else
				printf("\n");
		}
		middle = (first + last) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			first = middle + 1;
		if (array[middle] > value)
			last = middle - 1;
	}
	return (-1);
}
