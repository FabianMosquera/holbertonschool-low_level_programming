#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *a;

	for (i = 0; s[i]; i++)
	{
		for (a = accept; *a; a++)
		{
			if (s[i] == *a)
				break;
		}
		if (!*a)
			break;
	}
	return (i);
}

