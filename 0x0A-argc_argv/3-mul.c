#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the mul. of two numbers
 *@argc: the argument counter
 *@argv: the parameters required for the multiplication
 *Return: (0/SUCCESS) or (1/Error)
 */

int main(int argc, char **argv)
{
	int mul;

	if (argc > 2)
	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%i\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
