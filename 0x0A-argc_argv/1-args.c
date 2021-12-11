#include <stdio.h>

/**
 *main - prints the arguments passed
 *@argc: the argument counter
 *@argv: the arguments
 *Return: (0/SUCCESS) The number of arguments
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
