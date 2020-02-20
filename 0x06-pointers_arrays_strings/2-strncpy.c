#include "holberton.h"
/**
 * _strncpy - Function that copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; n < i && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; n < i; i++)
		dest[i] = '\0';
	return (dest);
}
