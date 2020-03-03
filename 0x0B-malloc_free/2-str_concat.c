#include "holberton.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: char
 * @s2: char
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *pointer;

	if (s1)
	{
		while (s1[size1])
			size1++;
	}
	else
	{
		s1 = "";
	}
	if (s2)
	{
		while (s2[size2])
			size2++;
	}
	else
	{
		s2 = "";
	}
	pointer = malloc(sizeof(char) * (size1 + size2 + 1));

	if (!pointer)
		return (NULL);
	if (s1)
	{
		for (size1 = 0; s1[size1]; ++size1)
			pointer[size1] = s1[size1];
	}
	if (s2)
	{
		for (size2 = 0; s2[size2]; ++size2)
			pointer[size1 + size2] = s2[size2];
	}
	pointer[size1 + size2] = '\0';
	return (pointer);
}
