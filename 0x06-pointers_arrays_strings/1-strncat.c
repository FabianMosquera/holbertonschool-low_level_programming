#include "holberton.h"
/**
 * _strncat - Concatenate two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
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
		if (n > 0)
		{
			dest[a] = src[leng];
			leng++;
			a++;
			n--;
		}
		else
		{
			break;
		}

	}
	return (dest);
}
