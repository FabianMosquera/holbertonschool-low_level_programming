#include "holberton.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *caster = malloc(b);

	if (caster)
		return (caster);
	exit(98);
}
