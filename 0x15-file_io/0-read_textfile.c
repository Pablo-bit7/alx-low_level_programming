#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - Reads and prints a text file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_result, write_result;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_result = read(fd, buffer, letters);
	if (read_result == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_result = write(STDOUT_FILENO, buffer, read_result);

	free(buffer);
	close(fd);

	if (write_result == -1 || (size_t)write_result != (size_t)read_result)
		return (0);

	write(STDOUT_FILENO, "\n", 1);

	return (read_result);
}
