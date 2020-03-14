#include "variadic_functions.h"
/**
 * print_c - Print char
 * @list: va_list
 * Return: int
 */
int print_c(va_list list)
{
	return (printf("%c", va_arg(list, int)));
}
/**
 * print_i - Print integer
 * @list: va_list
 * Return: int
 */
int print_i(va_list list)
{
	return (printf("%i", va_arg(list, int)));
}
/**
 * print_f - Print float
 * @list: va_list
 * Return: int
 */
int print_f(va_list list)
{
	return (printf("%f", va_arg(list, double)));
}
/**
 * print_s - Print string
 * @list: va_list
 * Return: int
 */
int print_s(va_list list)
{
	char *str = va_arg(list, char *);

	if (!str)
		str = "(nil)";
	return (printf("%s", str));
}
/**
 * print_all - function that prints anything.
 * @...: any arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	print_funct funct_list[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{0, NULL}
	};
	char *separate[] = {"", ", "};
	unsigned int bytes = 0, funct_index = 0, format_index = 0;

	va_start(list, format);
	while (format && format[format_index])
	{
		funct_index = 0;
		while (funct_list[funct_index].format)
		{
			if (format[format_index] == funct_list[funct_index].format)
			{
				printf("%s", separate[bytes != 0]);
				bytes += funct_list[funct_index].funct(list);
				break;
			}
			++funct_index;
		}
		++format_index;
	}
	printf("\n");
	va_end(list);
}
