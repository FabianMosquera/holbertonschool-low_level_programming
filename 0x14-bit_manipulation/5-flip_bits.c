#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: first integer
 * @m: second integer
 * Return: the number of the bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;
	while (n)
	{
		m += 1 & n;
		n >>= 1;
	}
	return (m);
}
