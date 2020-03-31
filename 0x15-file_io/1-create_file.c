#include "holberton.h"

/**
 * _strlen - Function that compute the length of a NULL
 * @str: pointer
 * Return: the length of str
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return  (len);
}
/**
 * create_file - create a file
 * @filename: pointer
 * @text_content: pointer
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int var;

	if (!filename)
		return (-1);

	var = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (var < 0)
		return (-1);

	if (text_content)
		b_written = write(var, text_context, _strlen(text_content));

	close(var);

	if (b_written < 0)
		return (-1);
	return (1);
}
