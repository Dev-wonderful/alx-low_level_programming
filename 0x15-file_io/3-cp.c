#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdint.h>

/**
 * err_handler - check if error has occured, then terminate
 * @file_from: file one
 * @file_to: file two
 * @f_n: name of file one
 * @t_n: name of file two
 *
 * Return: nothing
 */
void err_handler(int file_from, int file_to, const char *f_n, const char *t_n)
{
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_n);
		exit(98);
	}
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", t_n);
		exit(99);
	}
}

/**
 * cp - copies text from file 1 to file 2
 * @file_from: the file to be copied
 * @file_to: the being copied into
 *
 * Return: 1 for success and failure for other values
 */
int cp(const char *file_from, const char *file_to)
{
int fd_from, fd_to;
	ssize_t wr, len;
	char *buf;

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_handler(fd_from, fd_to, file_from, file_to);
	buf = malloc(sizeof(char) * 5120);
	if (buf == NULL)
		return (-1);
	len = read(fd_from, buf, 5120);
	wr = write(fd_to, buf, len);
	err_handler(len, wr, file_from, file_to);
	free(buf);
	if ((close(fd_from)) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if ((close(fd_to)) < 0)
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
