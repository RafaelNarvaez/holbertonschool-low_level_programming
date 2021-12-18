#include "main.h"

/**
 * create_file - creates a new file and copies text into it
 * @filename: the name of file to create
 * @text_content: text to copy into new file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, err, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
			return (-1);

		close(fd);
		return (1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
	{
		len++;
	}
	err = write(fd, text_content, len);
	if (err == -1)
		return (-1);

	close(fd);
	return (1);
}
