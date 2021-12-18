#include <stdio.h>

/**
 * main - entry point to get header of ELF file
 * @argc: count of arguments
 * @argv: double pointers to arguments
 * Return: 1 on success, error on failure
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
