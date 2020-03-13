#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: const char
 * @n: const unsigened int
 * @...: any arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int surplus = n;
	const char *ptr;

	va_start(list, n);
	if(!separator)
		separator = "";
	while(surplus--)
	{
		ptr = va_arg(list, const char *);
		printf("%s", ptr ? ptr : "(nil)");
		if(surplus)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
