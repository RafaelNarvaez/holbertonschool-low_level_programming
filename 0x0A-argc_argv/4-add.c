#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	int idx, idy, total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	
	for (idx = 1; idx < argc; idx++)
	{
		for (idy = 0; argv[idx][idy] != '\0'; idy++)
		{
			if (argv[idx][idy] < '0' || argv[idx][idy] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[idx]);
	}
	printf("%d\n", total);

	return (0);
}
