#include "holberton.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: char
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (*s == c ? s : NULL);
}
