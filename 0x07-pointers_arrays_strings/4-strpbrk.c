#include "holberton.h"
/**
 * _strpbrk - Function that search a string
 * @s: char
 * @accept: char
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	for ( ; *s; ++s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
				return (s);
		}
	}
	return (NULL);
}
