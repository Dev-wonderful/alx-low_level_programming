#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - append text to an existing file
 * @filename: pointer to an existing file
 * @text_content: the text to be appended
 *
 * Return: 1 for succes or -1 for failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr_out;
	size_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0 || text_content == NULL)
		return (-1);
	len = strlen(text_content);
	wr_out = write(fd, text_content, len);
	close(fd);

	return (wr_out);
}
