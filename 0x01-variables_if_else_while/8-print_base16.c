#include <stdio.h>
/**
 * main - Print in hexadecimal
 * Return: 0
 */
int main(void)
{
	char h;

	for (h = 0; h < 10; h++)
	{
		putchar(h + '0');
	}
	for (h = 'a'; h <= 'f'; h++)
	{
		putchar(h);
	}
	putchar ('\n');
	return (0);
}
