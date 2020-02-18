#include "holberton.h"
/**
 * swap_int - function that swaps the values
 * @a: integer
 * @b: integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	if (a && b)
	{
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
}
