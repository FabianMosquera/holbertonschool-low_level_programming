#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all natural numbers
 * @n: enter to number
 * Return: natural number
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			if (n == 98)
			{
				printf("\n");
			}
			n++;
		}
	}
	else if (n > 98)
	{
		printf("%d", n);
		if (n != 98)
		{
			printf(",");
		}
	}
}
