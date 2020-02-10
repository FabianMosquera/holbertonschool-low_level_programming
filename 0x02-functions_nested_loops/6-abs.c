#include "holberton.h"
/**
 * _abs - Function that print the value abslute
 * @abs: entry
 * Return: absolute value
 */
int _abs(int ab)
{
	return(ab * ((ab > 0) - (ab < 0)));
}
