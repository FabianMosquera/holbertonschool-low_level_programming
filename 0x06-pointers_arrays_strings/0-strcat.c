#include "holberton.h"
/**
 * _strcat - Concatenates two strings
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int leng = 0;
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
		b++;

	while (leng <= b)
	{
		dest[a] = src[leng];
		leng++;
		a++;
	}
	return (dest);
}
