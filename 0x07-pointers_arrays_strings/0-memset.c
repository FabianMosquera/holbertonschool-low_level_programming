#include "holberton.h"
/**
 * _memset - Function that fills memory a constant byte
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
i}
