#include <stdio.h>
/**
 * main - Prints the alphabet in lowercaasse and uppercase
 * Return: 0
 */
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		abc++;
	}
	abc = 'A';

	while (abc <= 'Z')
	{
		putchar(abc);
		abc++;
	}
	putchar ('\n');
	return (0);
}
