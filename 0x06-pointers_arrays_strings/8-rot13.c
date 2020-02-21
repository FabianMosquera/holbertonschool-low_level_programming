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
	char test;

	for (a = 0; s[a] != '\0'; a++)
	{
		test = 0;
		for (b = 0; b <= 51 && test == 0; b++)
		{
			if (j[b] == s[a])
			{
				s[a] = j1[b];
				test = 1;
			}
		}
	}
	return (s);
}
