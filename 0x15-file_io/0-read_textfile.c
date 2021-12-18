#include "main.h"

/**
 *read_textfile - Fx that reads a file & prints to STDOUT
 *@filename: file to open
 *@letters: letters to read & print
 *Return: printed letters, or 0 if fails *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tmp_l;
	int fd = -1, err = 0, len = 0;

	if (!filename)
		return (0);
	tmp_l = malloc(sizeof(char) * letters);
	if (!tmp_l)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(tmp_l);
		return (0);
	}
	err = read(fd, tmp_l, letters);
	if (err < 0)
	{
		free(tmp_l);
		return (0);
	}
	while (tmp_l && tmp_l[len])
		len++;
	err = write(STDOUT_FILENO, tmp_l, len);
	free(tmp_l);
	close(fd);
	if (err < 0)
		return (0);
	return ((size_t)err);
}
