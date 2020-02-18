#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints elements of an array
 * @a: integer
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n)
{
	if (a)
	{
		while (n > 0)
		{
			printf("%d", *a++);
		if (--n)
			printf(", ");
		}
	}
	printf("\n");
}
