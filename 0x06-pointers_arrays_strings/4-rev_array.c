#include "holberton.h"
/**
 * reverse_array - function the content
 * @a: integer
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int Aux;
	int i = 0;

	n = n - 1;
	while (i <= n)
	{
		Aux = a[i];
		a[i++] = a[n];
		a[n--] = Aux;
	}
}
