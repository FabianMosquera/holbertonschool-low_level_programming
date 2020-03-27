#include "holberton.h"

/**
 * get_endianess - function that checks the endianness.
 * Return: endian
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)(&n) == 1);
}
