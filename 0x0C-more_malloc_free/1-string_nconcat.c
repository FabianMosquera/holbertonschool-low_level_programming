#include "holberton.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arroz;
	unsigned int size1 = 0;
	unsigned int size2 = 0;

	if (s1)
	{
		while (s1[size1])
			++size1;
	}
	if (s2)
	{
		while (size2 < n && s2[size2])
			++size2;
	}
	arroz = malloc(sizeof(char) * size1 + size2 + 1);
	if (!arroz)
		return (NULL);

	for (n = 0; n < size1; ++n, ++arroz)
	{
		*arroz = s1[n];
	}
	for (n = 0; n < size2; ++n, ++arroz)
	{
		*arroz = s2[n];
	}
	*arroz = '\0';

	return (arroz - size1 - size2);
}
