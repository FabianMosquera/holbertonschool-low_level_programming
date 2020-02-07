#include <stdio.h>
/**
 * main - Prints all possible different combinations
 * Return: 0
 */
int main(void)
{
	int a, b, c, d;

	a = 0;

	while (a < 1000)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;

		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');

			if (a < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
