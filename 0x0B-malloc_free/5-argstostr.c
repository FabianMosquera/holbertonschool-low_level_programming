#include "holberton.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: integer
 * @av: integer
 * Return: char
 */
char *argstostr(int ac, char **av)
{
	char *a, *b;
	int c, size;

	if (!ac || !av)
		return (NULL);

	for (c = 0, size = 1; c < ac; ++c, ++size)
	{
		for (b = av[c]; *b; ++b, ++size)
			;
	}
	a = malloc(sizeof(char) * size);

	if (!a)
		return (NULL);

	for (c = 0, size = 0; c < ac; ++c, ++size)
	{
		for (b = av[c]; *b; ++b, ++size)
			a[size] = *b;
		a[size] = '\n';
	}
	a[size] = '\0';

	return (a);
}
