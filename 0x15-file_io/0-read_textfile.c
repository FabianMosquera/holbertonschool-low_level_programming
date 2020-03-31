#include "holberton.h"

/**
 * read_textfile - read a ext file and print the numbers of letters
 * @filename: pointer
 * @letters: pointer
 * Return: the number of the letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t b_read;
	ssize_t b_written;
	int var;

	if (!(filename && letters))
		return (0);

	var = open(filename, O_RDONLY);
	if (var == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	b_read = read(var, buffer, letters);
	close(var);

	if (b_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!b_read)
		b_read = letters;

	b_written = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_written < 0)
		return (0);

	return (b_written);
}
