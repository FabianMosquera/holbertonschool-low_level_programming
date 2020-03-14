#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: const unsigned int
 * @...: any arguments
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list variable;
	unsigned int Bar = n;
	int sum = 0;

	va_start(variable, n);
	while (Bar--)
		sum += va_arg(variable, int);
	va_end(variable);

	return (sum);
}
