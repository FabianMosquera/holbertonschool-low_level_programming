#include "holberton.h"
/**
 * _is_prime_number - Function that returns a prime number
 * @n: int
 * @m: int
 * Return: int
 */
int _is_prime_number(int n, int m)
{
	if (n % m == 0)
		return (0);
	if (n < m * 2)
		return (1);
	return (_is_prime_number(n, m + 1));
}
/**
 * is_prime_number - Function that returns 1 is a palindrome and 0
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 4)
		return (n > 1);
	return (_is_prime_number(n, 2));
}
