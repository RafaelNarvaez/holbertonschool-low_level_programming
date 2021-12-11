#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the change of cetain amount of money
 *@argc: the argument counter
 *@argv: array (arguments)
 *Return: (0/SUCCESS) and/or (1/Error)
 */

int main(int argc, char *argv[])
{
	int coins, change = 0, idx = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);

	if (coins < 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins != 0)
	{
		if (coins >= cents[idx])
		{
			coins -= cents[idx];
			change++;
		}
		else
		{
			idx++;
			continue;
		}
	}
	printf("%d\n", change);
	return (0);
}
