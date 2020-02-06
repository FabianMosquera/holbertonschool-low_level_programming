#include <stdio.h>
/**
 * main - Print the numbers since of 0to10
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
	}
	putchar ('\n');
	return (0);
}
