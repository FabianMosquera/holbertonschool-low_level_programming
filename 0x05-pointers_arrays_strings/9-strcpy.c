#include "holberton.h"
/**
 * _strcpy - Function that copies the string
 * @dest: char
 * @src: char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char a = 0;
	char b = 0;

	if (dest && src)
	{
		while (*(src + a))
			++a;

		if (src + a < dest || dest + a < src)
		{
			do {
				*(dest + b++) = *src++;
			} while (a--);
		}
	}

	return (dest);
}
