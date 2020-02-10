#include "holberton.h"
/**
 * main - Prints the alphabet in lowercase
 * Return: always succes
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
