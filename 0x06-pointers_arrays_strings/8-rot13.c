#include "holberton.h"
/**
 * rot13 - Function that encodes a string using rot13
 * @s: char
 * Return: char
 */
char *rot13(char *s)
{
	int a, b;
	char j[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char j1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (j[b] == s[a])
			{
				s[a] = j1[b];
			}
		}
	}
	return (s);
}
