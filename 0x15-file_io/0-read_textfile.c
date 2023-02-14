#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read and prints nbytes of text file
 * @filename: pointer to file path
 * @letters: number of bytes to be read and printed
 *
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd_output, wr_output;
	char *final;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);
	final = malloc(sizeof(char) * letters);
	if (final == NULL)
		return (0);
	rd_output = read(fd, final, letters);
	if (rd_output < 0)
		return (0);
	wr_output = write(STDOUT_FILENO, final, rd_output);
	if (wr_output < 0)
		return (0);
	close(fd);
	free(final);

	return (rd_output);
}
