#include "holberton.h"
/**
 * __sqrt_recursion - Function that returns 1 is a palindrome and 0
 * @n: int
 * @m: int
 * Return: int
 */
int __sqrt_recursion(int n, int m)
{
	if (m * m < n)
		return (__sqrt_recursion(n, m + 1));
	return (m * m == n ? m : -1);
}
/**
 * _sqrt_recursion - Function that returns 1 is a palindrome and 0
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (__sqrt_recursion(n, 0));
}
