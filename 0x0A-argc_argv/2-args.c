#include <stdio.h>

/**
 *main - prints all arguments received as parameter
 *@argc: the argument counter
 *@argv: the arguments passed
 *Return: (0/SUCCESS) Prints the arguments including a new line
 */

int main(int argc, char **argv)
{
	int idx = 0;

	while (idx < argc)
	{
		printf("%s\n", argv[idx]);
		idx++;
	}
	return (0);
}
