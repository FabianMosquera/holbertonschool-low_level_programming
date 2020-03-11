#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given
 * @array: int
 * @size: size_t
 * @action: action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}
}
