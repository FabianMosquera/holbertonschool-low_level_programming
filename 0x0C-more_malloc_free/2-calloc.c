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
}
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *g;

	if (!(nmemb && size))
		return (NULL);

	g = malloc(nmemb * size);
	if (!g)
		return (NULL);

	_memset(g, 0, nmemb * size);
	return (g);
}
