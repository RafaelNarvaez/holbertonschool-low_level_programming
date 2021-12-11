#include <stdio.h>

/**
 *main - function that prints the name of a program
 *@argc: parameter (the counter of arguments passed)
 *@argv: 2D array of strings
 *Return: 0 (succes)
 */

int main(int argc, char **argv)
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
