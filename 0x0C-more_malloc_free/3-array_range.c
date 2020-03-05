#include "holberton.h"

/**
 * array_range - function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *h;
	unsigned int length;

	if (min > max)
		return (NULL);

	length = max - min;

	h = malloc(sizeof(int) * (length + 1));
	if (!h)
		return (NULL);

	do {
		*h++ = min++;
	} while (min <= max);
	return (h - length - 1);
}
