#include "holberton.h"
/**
 * more_numbers - Prints 10 times the numbers
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 9)
			{
				_putchar('0' + (b / 10));
			}
				_putchar('0' + (b % 10));
		}
		_putchar('\n');
	}
}
