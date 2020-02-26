#include "holberton.h"
/**
 * _strlen_recursion - Function that returns length
 * @s: char
 * Return: int
 */
int _strlen_recursion(char *s)
{
	return (*s ? _strlen_recursion(s + 1) + 1 : 0);
}
