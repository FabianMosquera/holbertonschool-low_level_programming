#include "holberton.h"
/**
 * print_rev - Function that prints a string
 * @s: char
 * Return: void
 */
void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
		{
			t++;
		}
		while (s < t--)
		{
			_putchar(*t);
		}
		_putchar('\n');
	}
}
