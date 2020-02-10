#include "holberton.h"
/**
 * print_last_digit - print the last digit
 * @ldg: result of last digit
 * Return: value last digit
 */
int print_last_digit(int ldg)
{
	int a;

	a = (ldg % 10);

	if (a < 0)
	{
		a = (-1 * a);
	}
	_putchar(a + '0');
	return (a);
}
