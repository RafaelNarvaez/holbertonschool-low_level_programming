#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int cents[] = {25, 10, 5, 2, 1};
	int coins;
	int change = 0, idx = 0;

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
