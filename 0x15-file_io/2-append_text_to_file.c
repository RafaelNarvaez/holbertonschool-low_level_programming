#include "main.h"

/**
 * append_text_to_file - Fx that appends text
 * @filename: the file to open and append to
 * @text_content: text to append to new file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0) /* failed opening file */
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (*(text_content + len))
		len++;
	err = write(fd, text_content, len);
	close(fd);
	if (err < 0)
		return (-1);
	return (1);
}
