#include <stdio.h>
/**
 * main - Prints the numbers from00to99
 * Return: 0;
 */
int main(void)
{
	int c;
	int d;
	int e;

	for (c = 0; c < 100; c++)
	{
		d = c / 10;
		e = c % 10;

		putchar(d + '0');
		putchar(e + '0');

		if (c < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
