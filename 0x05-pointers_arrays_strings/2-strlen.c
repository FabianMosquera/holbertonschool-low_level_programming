#include "holberton.h"
/**
 * _strlen - Return the lenght of a string
 * @s: char
 * Return: int
 */
int _strlen(char *s)
{
	int lgt = 0;

	if (s)
	{
	while (*(s + lgt))
	{
		lgt++;
	}
	}
	return (lgt);
}
