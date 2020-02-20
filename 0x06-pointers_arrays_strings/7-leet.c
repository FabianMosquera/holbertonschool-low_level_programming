#include "holberton.h"
/**
 * leet - Function that encodes a string
 * @s: char
 * Return: char
 */
char *leet(char *s)
{
	int i, b;
	char h[] = "aAeEoOtTlL";
	char h1[] = "4433007711";

	for (i = 0; s[i] != 0; i++)
	{
		for (b = 0; b <= 10; b++)
		{
			if (h[b] == s[i])
			{
				s[i] = h1[b];
			}
		}
	}
	return (s);
}
