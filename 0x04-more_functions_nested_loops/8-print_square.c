#include "holberton.h"
/**
 * print_square - Print the square
 * @size: the size
 * Return: A integer
 */
void print_square(int size)
{
	int a;
	int b;

	for(a = 0; a < size; a++)
	{
		for(b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
