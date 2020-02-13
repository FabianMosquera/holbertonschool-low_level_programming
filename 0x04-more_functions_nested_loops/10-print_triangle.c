#include "holberton.h"
/**
 * print_triangle - Print a triangle with character
 * @size: size the character
 * Return: void
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = size; b > a; b--)
		{
			_putchar(' ');
		}
		while (b > 0)
		{
			_putchar('#');
			b--;
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}

