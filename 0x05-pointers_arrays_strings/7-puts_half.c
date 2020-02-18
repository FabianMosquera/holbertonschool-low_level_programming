#include "holberton.h"
/**
 * puts_half - Prints half
 * @str: String
 * Return: void
 */
void puts_half(char *str)
{
	int c;

	if (str)
	{
		for (c = 0;  *(str + c); c++)
			;
			for (str += (c + 1) / 2; *str; str++)
				_putchar(*str);
		_putchar('\n');
	}
}
