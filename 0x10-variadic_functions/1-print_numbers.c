#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: const char
 * @n: const unsigned int
 * @...: any arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int surplus = n;

	va_start(list, n);
	if (!separator)
		separator = "";
	while (surplus--)
	{
		printf("%i", va_arg(list, int));
		if (surplus)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
