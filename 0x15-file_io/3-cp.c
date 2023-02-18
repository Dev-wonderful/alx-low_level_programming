#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

/**
 * cp - copies text from file 1 to file 2
 * @file_from: the file to be copied
 * @file_to: the being copied into
 *
 * Return: 1 for success and failure for other values
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, err_close;
	ssize_t wr, len;
	char *buf;

	fd_from = open(file_from, O_RDONLY);
	buf = malloc(sizeof(char) * 5120);
	if (buf == NULL)
		return (-1);
	len = read(fd_from, buf, 5120);
	if (len < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	wr = write(fd_to, buf, len);
	free(buf);
	if (wr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	err_close = close(fd_from);
	if (err_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	err_close = close(fd_to);
	if (err_close < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	exit(EXIT_SUCCESS);
}

/**
 * main - takes in argument from shell
 * @ac: argument count
 * @av: argument vector
 *
 * Return: success
 */
int main(int ac, char *av[])
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	cp(av[1], av[2]);

	return (0);
}
