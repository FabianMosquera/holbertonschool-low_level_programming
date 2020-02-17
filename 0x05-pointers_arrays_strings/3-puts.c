#include "holberton.h"
/**
 * _puts - Function that prints a string
 * @str: char
 * Return: void
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
		{
			_putchar(*str++);
		}
		_putchar('\n');
	}
}
