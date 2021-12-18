#include "main.h"
#include <stdio.h>

/**
 * main - entry point for program to copy files
 * @argc: count of arguments passed
 * @argv: array of char pointers to the arguments
 * Return: 1 on success, exits on failure w/ error code
 */

int main(int argc, char **argv)
{
	int fd;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close(fd);
	return (0);
}
