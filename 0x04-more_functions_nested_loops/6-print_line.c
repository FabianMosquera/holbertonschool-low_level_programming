#include "holberton.h"
/**
 * print_line - Prints the lines
 * @n: values integer
 * Return: integer
 */
void print_line(int n)
{
	while (--n >= 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
