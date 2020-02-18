#include "holberton.h"
/**
 * rev_string - Function that reverse
 * @s: char
 * Return: void
 */
void rev_string(char *s)
{
	char *a = s;

	if (s)
	{
		while (*a)
		{
			a++;
		}
		while (s < --a)
		{
			*s ^= *a;
			*a ^= *s;
			*s ^= *a;
			s++;
		}
	}
}
