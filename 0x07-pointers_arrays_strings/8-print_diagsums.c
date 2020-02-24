#include "holberton.h"
/**
 * print_diagsums - Prints the sum the two diagonals
 * @a: int
 * @size: int
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int c, *b;
	int s1 = 0;
	int s2 = 0;

	for (b = a, c = 0; c < size; ++c, b += size + 1)
		s1 += *b;

	for (b = a + size - 1, c = 0; c < size; ++c, b += size - 1)
		s2 += *b;

	printf("%d, %d\n", s1, s2);
}
