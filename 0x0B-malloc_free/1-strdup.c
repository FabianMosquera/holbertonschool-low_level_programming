#include "holberton.h"

/**
 * _strdup - Function that returns a pointer
 *
 * Return: 
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int size = 0;

	if (str)
	{
		while(str[size++])
		       ;	

		a = malloc(sizeof(char) * size);
		if (a)
		{
			while (--size)
				a[size] = str[size];

			return (a);
		}
	}
	return (NULL);
}
