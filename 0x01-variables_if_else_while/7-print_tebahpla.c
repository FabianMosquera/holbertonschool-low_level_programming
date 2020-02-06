#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char abc;

	for (abc = 'z'; abc >= 'a'; abc--)
	{
		putchar(abc);
	}
	putchar ('\n');
	return (0);
}
