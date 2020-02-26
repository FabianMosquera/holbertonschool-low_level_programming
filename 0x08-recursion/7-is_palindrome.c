#include "holberton.h"
/**
 * travel - I walk the whole pointer
 * @s: char
 * Return: char
 */
char *travel(char *s)
{
	return (*s ? travel(s + 1) : s);
}
/**
 * comparation - Function that compare
 * @a: char
 * @b: char
 * Return: int
 */
int comparation(char *a, char *b)
{
	if (a > b)
		return (1);
	if (*a != *b)
		return (0);
	return (comparation(a + 1, b - 1));
}
/**
 * is_palindrome - Function that returns 1 is a palindrome and 0
 * @s: char
 * Return: int
 */
int is_palindrome(char *s)
{
	return (*s ? comparation(s, travel(s) - 1) : 1);
}
