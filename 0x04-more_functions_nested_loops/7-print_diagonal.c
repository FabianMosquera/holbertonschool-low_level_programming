#include "holberton.h"
/**
 * print_diagonal - Print in diagonal
 * @n: values in integer
 * Return: The diagonal
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}
