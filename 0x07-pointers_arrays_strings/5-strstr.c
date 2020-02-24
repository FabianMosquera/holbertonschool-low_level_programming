#include "holberton.h"
/**
 * _strstr - Function that locates a substring
 * @haystack: char
 * @needle: char
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	do {
		a = haystack;
		b = needle;
		do {
			if (!*b)
				return (haystack);
			if (!*a)
				return (NULL);
		} while (*a++ == *b++);
	} while (*(++haystack));
	return (NULL);
}
