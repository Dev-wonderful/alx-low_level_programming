#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - create a new file
 * @filename: pointer to file
 * @text_content: pointer to text to be addede to the created file
 *
 * Return: 1 if successful or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	size_t len;
	ssize_t wr_out;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = strlen(text_content);
	wr_out = write(fd, text_content, len);
	if (wr_out < 0)
		return (wr_out);

	return (1);
}
