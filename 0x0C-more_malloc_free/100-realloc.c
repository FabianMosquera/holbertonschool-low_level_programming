#include "holberton.h"
/**
 * _memcpy - Function that copies memory data
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
/**
 * _realloc - Function that copies memory data
 * @ptr: void
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
